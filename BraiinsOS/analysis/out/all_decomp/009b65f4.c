// FUN_009b65f4 @ 009b65f4 size=272 calls_out=2 calls_in=0
// strings: 

void FUN_009b65f4(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(5);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,5);
  }
  *(undefined1 *)(puVar1 + 1) = 0x79;
  *puVar1 = &DAT_6d6d7564;
  param_1[0x29] = puVar1;
  param_1[0x2a] = 5;
  param_1[0x2b] = 0;
  param_1[0xf] = 1;
  param_1[0x16] = 1;
  param_1[0x17] = 1;
  param_1[0x19] = &LAB_009d4298;
  param_1[0x1a] = &LAB_009d42a4;
  param_1[0x1b] = 0;
  param_1[8] = 0x80000000;
  param_1[0x26] = &DAT_3b9aca00;
  param_1[0x28] = 5;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  param_1[6] = 0;
  *(undefined1 *)(param_1 + 0x13) = 0;
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0x10] = 0;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  param_1[0x14] = 0;
  param_1[0x15] = 0x80;
  param_1[0x1c] = 0;
  param_1[0x33] = 0;
  *(undefined1 *)(param_1 + 0x1d) = 0;
  *(undefined1 *)(param_1 + 0x18) = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  *(undefined1 *)(param_1 + 0x36) = 0;
  *(undefined1 *)((int)param_1 + 0xd9) = 0;
  param_1[0x34] = 100;
  param_1[0x35] = 100;
  *param_1 = 5;
  param_1[1] = 0;
  return;
}

