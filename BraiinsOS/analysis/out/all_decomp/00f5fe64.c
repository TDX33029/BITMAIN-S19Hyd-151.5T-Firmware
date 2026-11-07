// FUN_00f5fe64 @ 00f5fe64 size=412 calls_out=4 calls_in=1
// strings: 

void FUN_00f5fe64(int *param_1,int *param_2)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint extraout_r1;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 local_3c;
  uint local_38;
  undefined4 *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  local_38 = param_2[2];
  local_3c = 9;
  if (local_38 < 9) {
    local_2c = &local_38;
    local_34 = &local_3c;
    local_28 = FUN_007883b8;
    local_30 = FUN_007883b8;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00579118,&local_34,&DAT_0187fa5c);
  }
  uVar6 = param_2[3];
  if ((uVar6 & 1) == 0) {
    puVar2 = (uint *)(uVar6 + 0x10);
    do {
      uVar5 = *puVar2;
      bVar1 = (bool)hasExclusiveAccess(puVar2);
    } while (!bVar1);
    *puVar2 = uVar5 + 1;
    if (uVar5 < 0x80000000) goto LAB_00f5fef8;
    FUN_00f6015c();
    local_38 = extraout_r1;
  }
  iVar8 = *param_2;
  iVar9 = param_2[1];
  piVar3 = (int *)thunk_FUN_016d4a50(0x14);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  piVar3[4] = 2;
  piVar3[3] = (uVar6 & 0x1f) >> 2;
  piVar3[2] = iVar9 + (uVar6 >> 5);
  *piVar3 = local_38 + (uVar6 >> 5);
  piVar3[1] = iVar8 - (uVar6 >> 5);
  param_2[3] = (int)piVar3;
LAB_00f5fef8:
  piVar3 = (int *)param_2[3];
  iVar9 = *param_2;
  uVar6 = param_2[1];
  iVar8 = param_2[2];
  if (((uint)piVar3 & 1) == 0) {
    piVar4 = piVar3;
  }
  else if (piVar3 < (int *)0xfffffee0) {
    piVar4 = piVar3 + 0x48;
  }
  else {
    uVar5 = (uint)piVar3 >> 5;
    piVar4 = (int *)thunk_FUN_016d4a50(0x14);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x14);
    }
    piVar4[4] = 1;
    piVar4[3] = ((uint)piVar3 & 0x1f) >> 2;
    piVar4[2] = uVar6 + uVar5;
    piVar4[1] = iVar9 - uVar5;
    *piVar4 = iVar8 + uVar5;
  }
  iVar7 = uVar6 - 9;
  if (uVar6 < 9) {
    iVar7 = 0;
  }
  param_2[2] = 9;
  uVar6 = 9;
  if ((uint)param_2[1] < 9) {
    uVar6 = param_2[1];
  }
  *param_1 = iVar9 + 9;
  param_1[1] = iVar7;
  param_1[2] = iVar8 + -9;
  param_1[3] = (int)piVar4;
  param_2[1] = uVar6;
  return;
}

