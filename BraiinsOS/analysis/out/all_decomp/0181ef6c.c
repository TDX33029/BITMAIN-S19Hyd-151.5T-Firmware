// FUN_0181ef6c @ 0181ef6c size=452 calls_out=0 calls_in=4
// strings: 

undefined8 FUN_0181ef6c(undefined1 *param_1,undefined4 *param_2)

{
  *param_1 = (char)((uint)param_2[9] >> 0xe);
  param_1[1] = (char)((uint)param_2[9] >> 6);
  param_1[2] = *(byte *)((int)param_2 + 0x23) & 3 | (byte)(param_2[9] << 2);
  param_1[3] = (char)*(undefined2 *)((int)param_2 + 0x22);
  param_1[4] = (char)((uint)param_2[8] >> 8);
  param_1[5] = (char)param_2[8];
  param_1[6] = (char)((uint)param_2[7] >> 0x12);
  param_1[7] = (char)((uint)param_2[7] >> 10);
  param_1[8] = (char)((uint)param_2[7] >> 2);
  param_1[9] = (byte)((param_2[6] & 0x3ffffff) >> 0x14) | (byte)(param_2[7] << 6);
  param_1[10] = (char)((uint)param_2[6] >> 0xc);
  param_1[0xb] = (char)((uint)param_2[6] >> 4);
  param_1[0xc] = (byte)((param_2[5] & 0x3ffffff) >> 0x16) | (byte)(param_2[6] << 4);
  param_1[0xd] = (char)((uint)param_2[5] >> 0xe);
  param_1[0xe] = (char)((uint)param_2[5] >> 6);
  param_1[0xf] = *(byte *)((int)param_2 + 0x13) & 3 | (byte)(param_2[5] << 2);
  param_1[0x10] = (char)*(undefined2 *)((int)param_2 + 0x12);
  param_1[0x11] = (char)((uint)param_2[4] >> 8);
  param_1[0x12] = (char)param_2[4];
  param_1[0x13] = (char)((uint)param_2[3] >> 0x12);
  param_1[0x14] = (char)((uint)param_2[3] >> 10);
  param_1[0x15] = (char)((uint)param_2[3] >> 2);
  param_1[0x16] = (byte)((param_2[2] & 0x3ffffff) >> 0x14) | (byte)(param_2[3] << 6);
  param_1[0x17] = (char)((uint)param_2[2] >> 0xc);
  param_1[0x18] = (char)((uint)param_2[2] >> 4);
  param_1[0x19] = (byte)((param_2[1] & 0x3ffffff) >> 0x16) | (byte)(param_2[2] << 4);
  param_1[0x1a] = (char)((uint)param_2[1] >> 0xe);
  param_1[0x1b] = (char)((uint)param_2[1] >> 6);
  param_1[0x1c] = *(byte *)((int)param_2 + 3) & 3 | (byte)(param_2[1] << 2);
  param_1[0x1d] = (char)*(undefined2 *)((int)param_2 + 2);
  param_1[0x1e] = (char)((uint)*param_2 >> 8);
  param_1[0x1f] = (char)*param_2;
  return 0;
}

