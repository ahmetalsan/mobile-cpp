{ 'targets': [
    {
      'target_name': 'restclient-cpp',
      'type': 'static_library', 
      'sources': [
        'restclient-cpp/connection.h',
        'restclient-cpp/helpers.h',
        'restclient-cpp/restclient.h',
        'restclient-cpp/connection.cc',
        'restclient-cpp/helpers.cc',
        'restclient-cpp/restclient.cc',
      ],
      'cflags': [
        '-fno-rtti',
        '-fno-exceptions',
      ],
      'all_dependent_settings': {
        'include_dirs': [
          '.',
        ]
      },
      'include_dirs': [
        'restclient-cpp',
      ],
    },
  ]
}