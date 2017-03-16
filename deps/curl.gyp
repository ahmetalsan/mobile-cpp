{ 'targets': [
    {
      'target_name': 'curl',
      'type': 'static_library',
      'sources': [
        'curl/include/curl/curl.h',
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
        'curl/include/curl',
      ],
    },
  ]
}