// FUN_0181fef0 @ 0181fef0 size=296 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0181fef0(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  uVar1 = param_2[7];
  param_1[3] = (char)uVar1;
  param_1[2] = (char)((uint)uVar1 >> 8);
  param_1[1] = (char)((uint)uVar1 >> 0x10);
  *param_1 = (char)((uint)uVar1 >> 0x18);
  uVar1 = param_2[6];
  param_1[7] = (char)uVar1;
  param_1[6] = (char)((uint)uVar1 >> 8);
  param_1[5] = (char)((uint)uVar1 >> 0x10);
  param_1[4] = (char)((uint)uVar1 >> 0x18);
  uVar1 = param_2[5];
  param_1[0xb] = (char)uVar1;
  param_1[10] = (char)((uint)uVar1 >> 8);
  param_1[9] = (char)((uint)uVar1 >> 0x10);
  param_1[8] = (char)((uint)uVar1 >> 0x18);
  uVar1 = param_2[4];
  param_1[0xf] = (char)uVar1;
  param_1[0xe] = (char)((uint)uVar1 >> 8);
  param_1[0xd] = (char)((uint)uVar1 >> 0x10);
  param_1[0xc] = (char)((uint)uVar1 >> 0x18);
  uVar1 = param_2[3];
  param_1[0x13] = (char)uVar1;
  param_1[0x12] = (char)((uint)uVar1 >> 8);
  param_1[0x11] = (char)((uint)uVar1 >> 0x10);
  param_1[0x10] = (char)((uint)uVar1 >> 0x18);
  uVar1 = param_2[2];
  param_1[0x17] = (char)uVar1;
  param_1[0x16] = (char)((uint)uVar1 >> 8);
  param_1[0x15] = (char)((uint)uVar1 >> 0x10);
  param_1[0x14] = (char)((uint)uVar1 >> 0x18);
  uVar1 = param_2[1];
  param_1[0x1b] = (char)uVar1;
  param_1[0x1a] = (char)((uint)uVar1 >> 8);
  param_1[0x19] = (char)((uint)uVar1 >> 0x10);
  param_1[0x18] = (char)((uint)uVar1 >> 0x18);
  uVar1 = *param_2;
  param_1[0x1f] = (char)uVar1;
  param_1[0x1e] = (char)((uint)uVar1 >> 8);
  param_1[0x1d] = (char)((uint)uVar1 >> 0x10);
  param_1[0x1c] = (char)((uint)uVar1 >> 0x18);
  return 0;
}

