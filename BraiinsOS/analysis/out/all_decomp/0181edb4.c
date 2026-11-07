// FUN_0181edb4 @ 0181edb4 size=440 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_0181edb4(uint *param_1,byte *param_2)

{
  *param_1 = (uint)param_2[0x1d] << 0x10 | (uint)param_2[0x1e] << 8 | (uint)param_2[0x1f] |
             (param_2[0x1c] & 3) << 0x18;
  param_1[1] = (uint)param_2[0x1b] << 6 | (uint)(param_2[0x1c] >> 2) | (uint)param_2[0x1a] << 0xe |
               (param_2[0x19] & 0xf) << 0x16;
  param_1[2] = (uint)param_2[0x18] << 4 | (uint)(param_2[0x19] >> 4) | (uint)param_2[0x17] << 0xc |
               (param_2[0x16] & 0x3f) << 0x14;
  param_1[3] = (uint)param_2[0x15] << 2 | (uint)(param_2[0x16] >> 6) | (uint)param_2[0x14] << 10 |
               (uint)param_2[0x13] << 0x12;
  param_1[4] = (uint)param_2[0x10] << 0x10 | (uint)param_2[0x11] << 8 | (uint)param_2[0x12] |
               (param_2[0xf] & 3) << 0x18;
  param_1[5] = (uint)param_2[0xe] << 6 | (uint)(param_2[0xf] >> 2) | (uint)param_2[0xd] << 0xe |
               (param_2[0xc] & 0xf) << 0x16;
  param_1[6] = (uint)param_2[0xb] << 4 | (uint)(param_2[0xc] >> 4) | (uint)param_2[10] << 0xc |
               (param_2[9] & 0x3f) << 0x14;
  param_1[7] = (uint)param_2[8] << 2 | (uint)(param_2[9] >> 6) | (uint)param_2[7] << 10 |
               (uint)param_2[6] << 0x12;
  param_1[8] = (uint)param_2[3] << 0x10 | (uint)param_2[4] << 8 | (uint)param_2[5] |
               (param_2[2] & 3) << 0x18;
  param_1[9] = (uint)param_2[1] << 6 | (uint)(param_2[2] >> 2) | (uint)*param_2 << 0xe;
  return 0;
}

