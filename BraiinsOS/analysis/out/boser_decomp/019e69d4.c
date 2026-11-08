// FUN_019e69d4 @ 019e69d4 size=124 calls_out=2 calls_in=15
// strings: 

void FUN_019e69d4(undefined1 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *(undefined4 **)(param_1 + 0x3c) = puVar1;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = param_2;
  param_1[0xc] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 8) = 0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  *(undefined4 *)(param_1 + 0x38) = 0x200000;
  *(undefined4 *)(param_1 + 0x10) = 2;
  *(undefined4 *)(param_1 + 0x1c) = 1;
  param_1[0x30] = 0x2a;
  return;
}

