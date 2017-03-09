// AUTOGENERATED FILE - DO NOT MODIFY!
// This file generated by Djinni from helloworld.djinni

package com.mycompany.helloworld;

import java.util.concurrent.atomic.AtomicBoolean;

public abstract class ApiHandshake {
    public abstract HandshakeResultRecord handshake(String udId, String appVersion, String osVersion, String osType);

    public static native ApiHandshake create();

    private static final class CppProxy extends ApiHandshake
    {
        private final long nativeRef;
        private final AtomicBoolean destroyed = new AtomicBoolean(false);

        private CppProxy(long nativeRef)
        {
            if (nativeRef == 0) throw new RuntimeException("nativeRef is zero");
            this.nativeRef = nativeRef;
        }

        private native void nativeDestroy(long nativeRef);
        public void destroy()
        {
            boolean destroyed = this.destroyed.getAndSet(true);
            if (!destroyed) nativeDestroy(this.nativeRef);
        }
        protected void finalize() throws java.lang.Throwable
        {
            destroy();
            super.finalize();
        }

        @Override
        public HandshakeResultRecord handshake(String udId, String appVersion, String osVersion, String osType)
        {
            assert !this.destroyed.get() : "trying to use a destroyed object";
            return native_handshake(this.nativeRef, udId, appVersion, osVersion, osType);
        }
        private native HandshakeResultRecord native_handshake(long _nativeRef, String udId, String appVersion, String osVersion, String osType);
    }
}
