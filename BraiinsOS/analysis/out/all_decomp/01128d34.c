// FUN_01128d34 @ 01128d34 size=456 calls_out=5 calls_in=2
// strings: Missing V1 message id for 'mining.submit' responsehandle_configure_error

void FUN_01128d34(undefined4 *param_1,int param_2,uint param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  int local_54 [4];
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *local_28;
  undefined1 *local_24;
  
  iVar1 = thunk_FUN_016d4a50(0x32);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x32);
  }
  FUN_016dd1aa(iVar1,"Missing V1 message id for \'mining.submit\' responsehandle_configure_error",
               0x32);
  local_44 = 0x32;
  local_54[2] = 0x32;
  local_54[1] = 1;
  if ((param_3 & 1) == 0) {
    param_1[2] = iVar1;
    param_1[3] = 0x32;
    param_1[4] = uStack_40;
    param_1[5] = uStack_3c;
    param_1[6] = local_38;
    param_1[7] = uStack_34;
    param_1[8] = uStack_30;
    param_1[9] = uStack_2c;
    *param_1 = 1;
    param_1[1] = 0x32;
    return;
  }
  local_54[3] = iVar1;
  FUN_01129104(local_54 + 1);
  uVar4 = *(uint *)(param_2 + 0x8c);
  iVar1 = 0;
  uVar2 = *(uint *)(param_2 + 0x80);
  if (uVar4 == 0) {
    uVar5 = 0;
    uVar2 = 0;
  }
  else {
    uVar7 = *(uint *)(param_2 + 0x88);
    uVar5 = uVar7 - uVar2;
    if (uVar7 < uVar2) {
      uVar5 = uVar7;
    }
    if (uVar2 - uVar5 < uVar4) {
      iVar1 = uVar4 - (uVar2 - uVar5);
    }
    else {
      uVar2 = uVar5 + uVar4;
    }
  }
  piVar3 = *(int **)(param_2 + 0x84) + uVar5 * 8;
  for (iVar8 = uVar2 * 0x20 + uVar5 * -0x20; iVar8 != 0; iVar8 = iVar8 + -0x20) {
    iVar6 = *piVar3;
    bVar9 = iVar6 == 0;
    if (bVar9) {
      iVar6 = piVar3[1];
    }
    if (bVar9 && iVar6 == param_4) goto LAB_01128ed8;
    piVar3 = piVar3 + 8;
  }
  iVar1 = iVar1 * 0x20;
  piVar3 = *(int **)(param_2 + 0x84);
  while( true ) {
    if (iVar1 == 0) {
      local_24 = &LAB_00fac484;
      local_28 = local_54;
      local_54[0] = param_4;
      FUN_00600d2c(local_54 + 2,&DAT_005774ab,&local_28);
      param_1[3] = local_44;
      param_1[4] = uStack_40;
      param_1[5] = uStack_3c;
      param_1[6] = local_38;
      param_1[7] = uStack_34;
      param_1[8] = uStack_30;
      param_1[9] = uStack_2c;
      *param_1 = 1;
      param_1[1] = local_54[2];
      param_1[2] = local_54[3];
      return;
    }
    iVar8 = *piVar3;
    bVar9 = iVar8 == 0;
    if (bVar9) {
      iVar8 = piVar3[1];
    }
    if (bVar9 && iVar8 == param_4) break;
    iVar1 = iVar1 + -0x20;
    piVar3 = piVar3 + 8;
  }
LAB_01128ed8:
  iVar1 = piVar3[2];
  *param_1 = 0x11;
  param_1[1] = iVar1;
  param_1[2] = piVar3;
  return;
}

