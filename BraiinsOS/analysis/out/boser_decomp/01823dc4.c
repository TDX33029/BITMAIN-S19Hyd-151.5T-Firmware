// FUN_01823dc4 @ 01823dc4 size=88 calls_out=2 calls_in=2
// strings: 

void FUN_01823dc4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *param_2;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  *(undefined1 *)(param_1 + 5) = 0;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[3] = puVar1;
  param_1[4] = &DAT_01d1dffc;
  return;
}

