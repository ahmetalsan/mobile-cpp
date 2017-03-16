# we specify a root target for android to prevent all of the targets from spidering out
./build_ios/librestclient.xcodeproj: librestclient.gyp ./deps/djinni/support-lib/support_lib.gyp restclient.djinni
	sh ./run_djinni.sh
	deps/gyp/gyp --depth=. -f xcode -DOS=ios --generator-output ./build_ios -Ideps/djinni/common.gypi ./librestclient.gyp
 
ios: ./build_ios/librestclient.xcodeproj
	xcodebuild -workspace ios_project/RestClient.xcworkspace \
           -scheme RestClient \
           -configuration 'Debug' \
           -sdk iphonesimulator

# we specify a root target for android to prevent all of the targets from spidering out
GypAndroid.mk: librestclient.gyp ./deps/djinni/support-lib/support_lib.gyp restclient.djinni
	sh ./run_djinni.sh
	ANDROID_BUILD_TOP=$(shell dirname `which ndk-build`) deps/gyp/gyp --depth=. -f android -DOS=android -Ideps/djinni/common.gypi ./librestclient.gyp --root-target=librestclient_jni
 
# this target implicitly depends on GypAndroid.mk since gradle will try to make it
android: GypAndroid.mk
	cd android_project/RestClient/ && ./gradlew app:assembleDebug
	@echo "Apks produced at:"
	@python deps/djinni/example/glob.py ./ '*.apk'

clean:
	rm -rf ./build_ios ./generated-src .*~ src/.*~	