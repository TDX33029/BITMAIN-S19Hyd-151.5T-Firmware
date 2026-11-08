// FUN_01111f8c @ 01111f8c size=192 calls_out=3 calls_in=1
// strings: 

void FUN_01111f8c(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4,
                 int param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  if (param_5 == 0) {
    iVar1 = 1;
    iVar7 = 0;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_5);
    }
    iVar7 = param_5;
  }
  FUN_016dd1aa(iVar1,param_4,param_5);
  param_1[10] = param_7;
  uVar2 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  param_1[0xb] = param_8;
  uVar6 = param_2[1];
  uVar5 = param_2[2];
  *param_1 = *param_2;
  param_1[1] = uVar6;
  param_1[8] = param_5;
  param_1[9] = param_6;
  param_1[2] = uVar5;
  param_1[3] = uVar2;
  param_1[4] = uVar3;
  param_1[5] = uVar4;
  param_1[6] = iVar7;
  param_1[7] = iVar1;
  return;
}

