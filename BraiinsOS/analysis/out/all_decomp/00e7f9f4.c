// FUN_00e7f9f4 @ 00e7f9f4 size=588 calls_out=3 calls_in=0
// strings: 

void FUN_00e7f9f4(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_3c;
  int local_34;
  
  if (*param_2 == -0x80000000) {
    *param_1 = -0x80000000;
    return;
  }
  iVar10 = param_2[2];
  iVar6 = param_2[1];
  iVar2 = 1;
  iVar4 = 1;
  if ((iVar10 != 0) && (iVar4 = thunk_FUN_016d4a50(iVar10), iVar4 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar10);
  }
  FUN_016dd1aa(iVar4,iVar6,iVar10);
  iVar6 = param_2[4];
  iVar8 = param_2[5];
  if ((iVar8 != 0) && (iVar2 = thunk_FUN_016d4a50(iVar8), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar8);
  }
  FUN_016dd1aa(iVar2,iVar6,iVar8);
  if (param_2[0xf] == -0x80000000) {
    local_34 = -0x80000000;
  }
  else {
    local_34 = param_2[0x11];
    iVar6 = param_2[0x10];
    if (local_34 == 0) {
      local_3c = 1;
    }
    else {
      local_3c = thunk_FUN_016d4a50(local_34);
      if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,local_34);
      }
    }
    FUN_016dd1aa(local_3c,iVar6,local_34);
  }
  iVar11 = param_2[8];
  iVar7 = 1;
  iVar3 = param_2[7];
  iVar6 = 1;
  if ((iVar11 != 0) && (iVar6 = thunk_FUN_016d4a50(iVar11), iVar6 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar11);
  }
  FUN_016dd1aa(iVar6,iVar3,iVar11);
  iVar9 = param_2[0xb];
  iVar3 = param_2[10];
  if ((iVar9 != 0) && (iVar7 = thunk_FUN_016d4a50(iVar9), iVar7 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar9);
  }
  FUN_016dd1aa(iVar7,iVar3,iVar9);
  iVar3 = param_2[0xd];
  iVar5 = param_2[0xe];
  if (iVar5 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(iVar5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar1,iVar3,iVar5);
  param_1[0x10] = local_3c;
  param_1[0x11] = local_34;
  param_1[0xf] = local_34;
  *param_1 = iVar10;
  param_1[2] = iVar10;
  param_1[1] = iVar4;
  param_1[8] = iVar11;
  param_1[9] = iVar9;
  param_1[10] = iVar7;
  param_1[0xb] = iVar9;
  param_1[0xc] = iVar5;
  param_1[0xd] = iVar1;
  param_1[0xe] = iVar5;
  param_1[3] = iVar8;
  param_1[4] = iVar2;
  param_1[5] = iVar8;
  param_1[6] = iVar11;
  param_1[7] = iVar6;
  return;
}

