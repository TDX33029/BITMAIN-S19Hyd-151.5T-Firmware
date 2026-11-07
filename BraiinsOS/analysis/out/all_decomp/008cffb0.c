// FUN_008cffb0 @ 008cffb0 size=236 calls_out=2 calls_in=0
// strings: 

void FUN_008cffb0(undefined4 *param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(6);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,6);
  }
  *(undefined2 *)(puVar1 + 1) = 0x3236;
  param_1[0x10] = 0x10000;
  *puVar1 = 0x33314d42;
  param_1[0x15] = 0x202;
  param_1[2] = 0x80000000;
  param_1[0x16] = 0x1c200;
  param_1[7] = &DAT_3fdb05a7;
  *(undefined1 *)(param_1 + 0x12) = 1;
  param_1[0xe] = 3;
  param_1[0xf] = 0x80;
  param_1[9] = puVar1;
  param_1[10] = 6;
  param_1[0xb] = 50000000;
  param_1[0x11] = 8;
  *(undefined1 *)(param_1 + 0xd) = 0;
  param_1[6] = 0x8ede54b;
  param_1[8] = 6;
  param_1[0xc] = 1300000000;
  param_1[0x14] = &LAB_008c4c60;
  param_1[0x13] = FUN_008d00a4;
  *(undefined1 *)(param_1 + 0x17) = 0;
  param_1[1] = 0x5f5e10;
  *param_1 = 0;
  return;
}

