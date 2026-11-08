// FUN_01823d18 @ 01823d18 size=96 calls_out=2 calls_in=6
// strings: 

void FUN_01823d18(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar4 = param_2[3];
  puVar1 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  *(undefined1 *)(param_1 + 6) = 0;
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  param_1[3] = uVar4;
  param_1[4] = puVar1;
  param_1[5] = &DAT_01d1dffc;
  return;
}

