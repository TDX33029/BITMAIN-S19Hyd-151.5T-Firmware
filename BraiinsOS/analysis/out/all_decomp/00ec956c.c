// FUN_00ec956c @ 00ec956c size=168 calls_out=2 calls_in=0
// strings: 

void FUN_00ec956c(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
                 undefined4 param_5)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  puVar1[1] = 1;
  puVar1[2] = param_3;
  *puVar1 = 1;
  uVar5 = *param_4;
  uVar4 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_1 = 0;
  param_1[1] = param_2;
  param_1[2] = 0;
  param_1[3] = 4;
  param_1[4] = 0;
  param_1[5] = uVar5;
  param_1[6] = uVar4;
  param_1[7] = uVar2;
  param_1[8] = uVar3;
  param_1[9] = puVar1;
  param_1[10] = &DAT_0187bd0c;
  param_1[0xb] = param_5;
  return;
}

