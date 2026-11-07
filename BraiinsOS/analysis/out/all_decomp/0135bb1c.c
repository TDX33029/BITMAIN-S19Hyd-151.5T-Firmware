// FUN_0135bb1c @ 0135bb1c size=288 calls_out=3 calls_in=2
// strings: 

void FUN_0135bb1c(int *param_1,undefined4 param_2,int param_3,undefined4 *param_4,undefined1 param_5
                 )

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  int local_30;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  uVar7 = 0;
  if (param_3 == 0) {
    iVar1 = 1;
    iVar3 = 0;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_3);
    iVar3 = param_3;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
  }
  FUN_016dd1aa(iVar1,param_2,param_3);
  iVar8 = param_4[1];
  if (iVar8 < 0) {
LAB_0135bb9c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,iVar8);
  }
  uVar7 = *param_4;
  if (iVar8 == 0) {
    iVar2 = 1;
    local_30 = 0;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(iVar8);
    if (iVar2 == 0) {
      uVar7 = 1;
      goto LAB_0135bb9c;
    }
    local_30 = iVar8;
  }
  FUN_016dd1aa(iVar2,uVar7,iVar8);
  iVar4 = param_4[3];
  iVar5 = param_4[4];
  param_1[6] = param_4[2];
  param_1[7] = iVar4;
  param_1[8] = iVar5;
  iVar4 = param_4[6];
  iVar5 = param_4[7];
  iVar6 = param_4[8];
  param_1[9] = param_4[5];
  param_1[10] = iVar4;
  param_1[0xb] = iVar5;
  param_1[0xc] = iVar6;
  *(undefined1 *)(param_1 + 0xd) = param_5;
  param_1[2] = param_3;
  *param_1 = iVar3;
  param_1[1] = iVar1;
  param_1[3] = local_30;
  param_1[4] = iVar2;
  param_1[5] = iVar8;
  return;
}

