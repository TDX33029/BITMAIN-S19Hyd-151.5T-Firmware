// FUN_00e7abb4 @ 00e7abb4 size=108 calls_out=0 calls_in=0
// strings: 

void FUN_00e7abb4(undefined4 *param_1,short param_2)

{
  param_1[0x12] = 1;
  *(undefined1 *)((int)param_1 + 0x46) = 2;
  param_1[6] = 2;
  if (param_2 == 0) {
    param_2 = 200;
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[0x10] = 0;
  *(undefined2 *)(param_1 + 0xe) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 4;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 4;
  param_1[0xd] = 0;
  param_1[0x13] = &DAT_01c07674;
  *(short *)(param_1 + 0x11) = param_2;
  return;
}

