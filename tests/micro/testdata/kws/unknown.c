/*
 * This work is a derivative of "Speech Commands V2" by Google, used under CC BY 4.0.
 */

static const char input_unknown[1960] = {
    0x78, 0x66, 0x7a, 0x63, 0x78, 0x62, 0x6d, 0x52, 0x58, 0x19, 0x0,  0xcf, 0x80, 0x80, 0x80, 0x80,
    0xcf, 0xc5, 0xc5, 0xc5, 0x80, 0x80, 0x80, 0xc5, 0xc5, 0xe7, 0xe0, 0x80, 0x80, 0xc5, 0x80, 0xcf,
    0xc5, 0xc5, 0x80, 0xc5, 0xcf, 0xe7, 0xe0, 0xdb, 0x72, 0x4b, 0x65, 0x60, 0x70, 0x50, 0x73, 0x59,
    0x60, 0x4f, 0x4d, 0x3c, 0x11, 0xff, 0xc5, 0xc5, 0xdb, 0xdb, 0xcf, 0xec, 0xe7, 0xcf, 0xcf, 0x2,
    0x31, 0x4d, 0x4c, 0xe7, 0xdb, 0xc5, 0x80, 0xcf, 0xef, 0xe4, 0x4,  0xff, 0xf5, 0xec, 0xef, 0x5,
    0x6c, 0x4b, 0x56, 0x54, 0x6a, 0x47, 0x6f, 0x5b, 0x63, 0x55, 0x4c, 0x41, 0x2d, 0x22, 0x20, 0x3a,
    0x4e, 0xf1, 0xcf, 0xfc, 0x19, 0xf3, 0xe7, 0x2d, 0x48, 0x4e, 0x5b, 0x80, 0xcf, 0xcf, 0x80, 0x80,
    0x80, 0xdb, 0x3,  0xfb, 0xf5, 0xea, 0x0,  0xf5, 0x62, 0x40, 0x46, 0x47, 0x62, 0x41, 0x68, 0x53,
    0x5f, 0x51, 0x57, 0x4e, 0x5b, 0x51, 0x58, 0x4b, 0x62, 0x2b, 0xef, 0x44, 0x5d, 0x41, 0x49, 0x5c,
    0x62, 0x56, 0x58, 0x2f, 0xc5, 0xb4, 0xcf, 0xcf, 0xc5, 0xe0, 0xf9, 0xe7, 0x7,  0xf5, 0xa,  0xfc,
    0x5b, 0x39, 0x35, 0x3d, 0x5c, 0x37, 0x5d, 0x49, 0x57, 0x49, 0x63, 0x57, 0x61, 0x55, 0x5e, 0x4d,
    0x64, 0x4b, 0x63, 0x58, 0x5c, 0x49, 0x5f, 0x57, 0x6a, 0x56, 0x68, 0x41, 0x15, 0xf1, 0x7,  0xf1,
    0xf9, 0xef, 0xfd, 0xfb, 0xc,  0xf6, 0x5,  0xef, 0x5a, 0x40, 0x4a, 0x44, 0x69, 0x57, 0x55, 0x50,
    0x63, 0x49, 0x67, 0x5a, 0x72, 0x60, 0x70, 0x5a, 0x71, 0x61, 0x77, 0x63, 0x75, 0x5e, 0x71, 0x52,
    0x6f, 0x5f, 0x78, 0x64, 0x78, 0x5d, 0x56, 0x57, 0x56, 0x28, 0x39, 0x3b, 0x58, 0x49, 0x3d, 0x33,
    0x58, 0x3f, 0x2a, 0x50, 0x6c, 0x53, 0x6a, 0x5b, 0x69, 0x57, 0x6e, 0x5e, 0x73, 0x60, 0x74, 0x5a,
    0x75, 0x61, 0x76, 0x60, 0x75, 0x59, 0x6e, 0x4c, 0x6b, 0x4c, 0x6b, 0x58, 0x74, 0x61, 0x6e, 0x36,
    0x49, 0x41, 0x5b, 0x5d, 0x6e, 0x57, 0x5e, 0x44, 0x50, 0x30, 0x3a, 0x46, 0x5f, 0x3c, 0x64, 0x4e,
    0x5d, 0x53, 0x69, 0x55, 0x6a, 0x57, 0x69, 0x52, 0x71, 0x5a, 0x6b, 0x47, 0x5f, 0x4d, 0x61, 0x43,
    0x5b, 0x37, 0x59, 0x3e, 0x57, 0x3f, 0x53, 0xe,  0x44, 0x47, 0x5c, 0x43, 0x62, 0x51, 0x5d, 0x3f,
    0x4a, 0x2a, 0x39, 0x3f, 0x59, 0x37, 0x5c, 0x40, 0x58, 0x50, 0x65, 0x4e, 0x65, 0x52, 0x67, 0x54,
    0x6f, 0x52, 0x59, 0x3b, 0x57, 0x48, 0x61, 0x49, 0x54, 0xf8, 0x3e, 0x2d, 0x4e, 0x3e, 0x50, 0xc,
    0x3e, 0x53, 0x67, 0x2d, 0x4c, 0x3b, 0x4f, 0x2a, 0x43, 0x14, 0x46, 0x37, 0x50, 0x23, 0x58, 0x36,
    0x57, 0x48, 0x63, 0x46, 0x67, 0x4e, 0x65, 0x55, 0x6d, 0x4c, 0x55, 0x35, 0x41, 0x3b, 0x58, 0x3f,
    0x53, 0x2f, 0x44, 0x25, 0x48, 0x37, 0x58, 0xe4, 0x4d, 0x48, 0x53, 0x2b, 0x41, 0x28, 0x4a, 0x2d,
    0x3d, 0x5,  0x44, 0x29, 0x44, 0x1c, 0x5c, 0x3b, 0x53, 0x35, 0x5a, 0x3b, 0x60, 0x45, 0x61, 0x50,
    0x64, 0x3a, 0x43, 0x1f, 0x35, 0x23, 0x4d, 0x4a, 0x5e, 0x3c, 0x4d, 0x30, 0x51, 0x2e, 0x51, 0xf3,
    0x4d, 0x3e, 0x50, 0x1a, 0x34, 0xfc, 0x44, 0x27, 0x37, 0xf8, 0x3a, 0x9,  0x32, 0x33, 0x5d, 0x37,
    0x57, 0x35, 0x5d, 0x3b, 0x58, 0x31, 0x60, 0x45, 0x50, 0xff, 0x3a, 0xe0, 0x24, 0x3,  0x24, 0x3a,
    0x4f, 0xe,  0x32, 0x1d, 0x46, 0x2d, 0x45, 0x4,  0x56, 0x3d, 0x50, 0x7,  0xa,  0x80, 0x3a, 0x1f,
    0x31, 0xe0, 0x43, 0x3,  0x26, 0x3a, 0x5b, 0x34, 0x56, 0x30, 0x58, 0x2e, 0x53, 0x1f, 0x61, 0x3f,
    0x3f, 0x80, 0x2f, 0xe4, 0x2f, 0x14, 0x30, 0x1e, 0x50, 0xe0, 0x22, 0x0,  0x4b, 0x2d, 0x39, 0xdb,
    0x56, 0x3e, 0x46, 0x34, 0x2d, 0x80, 0x29, 0x5,  0x2f, 0xc5, 0x46, 0xfb, 0x1c, 0x3a, 0x56, 0x26,
    0x53, 0x2b, 0x4e, 0x8,  0x53, 0x25, 0x65, 0x3a, 0xf,  0x80, 0xf5, 0x80, 0xb,  0xd6, 0x1e, 0x7,
    0x55, 0xd6, 0x6,  0x80, 0x2c, 0x0,  0x11, 0xe4, 0x3e, 0x26, 0x41, 0x25, 0x2c, 0x80, 0x1d, 0x2,
    0x2a, 0xd6, 0x45, 0xec, 0x4,  0x3c, 0x54, 0x20, 0x4d, 0x12, 0x49, 0xf6, 0x57, 0x32, 0x61, 0x23,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xb,  0xe7, 0x3b, 0x80, 0xc5, 0x80, 0xc5, 0x80, 0xcf, 0xdb,
    0x14, 0x1d, 0x3d, 0x36, 0x3f, 0x80, 0x19, 0xfc, 0x1f, 0x80, 0x40, 0xea, 0x8,  0x3c, 0x52, 0x22,
    0x3a, 0xf8, 0x49, 0x3,  0x58, 0x21, 0x3c, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xc5, 0x80,
    0xf6, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x37, 0x2d, 0x3b, 0x1b, 0x31, 0x80, 0x16, 0xf5,
    0xf3, 0x80, 0x3e, 0xcf, 0xec, 0x3b, 0x4e, 0x12, 0x4,  0x80, 0x4f, 0x26, 0x5a, 0x1a, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xfc, 0xb4,
    0x2c, 0x0,  0x1b, 0x2a, 0x2f, 0x80, 0xc,  0xdb, 0xd6, 0x80, 0x44, 0xfd, 0x11, 0x33, 0x44, 0xd6,
    0x8,  0x80, 0x4e, 0xe,  0x26, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0xb4, 0x80, 0x80, 0x80, 0x80, 0x80, 0x1,  0x80, 0xe7, 0x80, 0x80, 0x80, 0x80, 0x80, 0x14, 0xdb,
    0xf8, 0x80, 0x48, 0x0,  0x7,  0xe7, 0x18, 0x80, 0xef, 0x80, 0x36, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0xdb, 0x80, 0x80, 0x80, 0x80, 0x80, 0x17, 0x80, 0x80, 0x80, 0x48, 0x6,  0x10, 0x80, 0xf1, 0x80,
    0x24, 0x80, 0x7,  0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x3c, 0xf1, 0x7,  0x80, 0xc5, 0x80, 0x33, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0xe0, 0x80, 0x26, 0x80, 0xcf, 0x80, 0x80, 0x80,
    0x80, 0x80, 0xb4, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0xf6, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80,
    0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80, 0x80};