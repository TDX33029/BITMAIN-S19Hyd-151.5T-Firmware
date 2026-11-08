// FUN_0072ca78 @ 0072ca78 size=896 calls_out=6 calls_in=0
// strings: 

int FUN_0072ca78(uint param_1,int *param_2,undefined4 *param_3,undefined4 param_4,int *param_5,
                undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  int local_ec;
  int local_e8;
  int *local_e0;
  int local_dc;
  undefined **local_d8;
  int *local_c8;
  undefined4 local_b8;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  int local_6c;
  uint local_58 [12];
  int local_28;
  
  puVar12 = (undefined4 *)((uint)&local_e0 | 0x10);
  do {
    iVar5 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = iVar5 + 1;
  local_c8 = param_2;
  if ((param_1 & 1) == 0) {
    if (iVar5 < 0) goto LAB_0072cdf8;
    piVar6 = (int *)param_2[0x8e];
    if (piVar6 == (int *)0x0) {
      local_e8 = 0;
    }
    else {
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0072cdf8;
      local_e8 = param_2[0x8e];
      local_ec = param_2[0x8f];
    }
    uVar8 = param_3[1];
    uVar9 = param_3[2];
    uVar10 = param_3[3];
    uVar11 = param_3[4];
    puVar7 = (undefined4 *)((uint)local_58 | 4);
    *puVar7 = *param_3;
    puVar7[1] = uVar8;
    puVar7[2] = uVar9;
    puVar7[3] = uVar10;
    puVar7[4] = uVar11;
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar4 = param_3[10];
    puVar7[5] = param_3[5];
    puVar7[6] = uVar8;
    puVar7[7] = uVar9;
    puVar7[8] = uVar10;
    puVar7[9] = uVar11;
    puVar7[10] = uVar4;
    puVar12[4] = param_5;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = param_6;
    local_dc = 0;
    local_d8 = &PTR_LAB_0185807c;
    local_e0 = (int *)0xcc;
    local_b8 = 0;
    local_6c = local_ec;
    local_70 = local_e8;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0;
    local_28 = 0;
    iVar3 = FUN_016d51b0(&local_28,0x20,0x80);
    iVar5 = local_28;
    if ((iVar3 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x80);
    }
    FUN_016dd1aa(local_28,&local_e0,0x80);
    iVar3 = FUN_0072c788(param_2 + 0x40,iVar5,iVar5);
    local_e0 = param_5;
    local_dc = param_6;
    if (param_2[0x8c] != 0) {
      (**(code **)(param_2[0x8d] + 0x14))
                (param_2[0x8c] + (*(int *)(param_2[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_e0);
    }
    if (iVar3 != 0) {
      FUN_01659ec0(param_2,iVar3);
    }
  }
  else {
    if (iVar5 < 0) {
LAB_0072cdf8:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x72cdf8);
      (*pcVar1)();
    }
    piVar6 = (int *)param_2[0x5c];
    if (piVar6 == (int *)0x0) {
      local_e8 = 0;
    }
    else {
      do {
        iVar5 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0072cdf8;
      local_e8 = param_2[0x5c];
      local_ec = param_2[0x5d];
    }
    uVar8 = param_3[1];
    uVar9 = param_3[2];
    uVar10 = param_3[3];
    uVar11 = param_3[4];
    puVar7 = (undefined4 *)((uint)local_58 | 4);
    *puVar7 = *param_3;
    puVar7[1] = uVar8;
    puVar7[2] = uVar9;
    puVar7[3] = uVar10;
    puVar7[4] = uVar11;
    uVar8 = param_3[6];
    uVar9 = param_3[7];
    uVar10 = param_3[8];
    uVar11 = param_3[9];
    uVar4 = param_3[10];
    puVar7[5] = param_3[5];
    puVar7[6] = uVar8;
    puVar7[7] = uVar9;
    puVar7[8] = uVar10;
    puVar7[9] = uVar11;
    puVar7[10] = uVar4;
    puVar12[4] = param_5;
    *puVar12 = 0;
    puVar12[1] = 0;
    puVar12[5] = param_6;
    local_d8 = &PTR_LAB_01857e4c;
    local_dc = 0;
    local_e0 = (int *)0xcc;
    local_b8 = 0;
    local_6c = local_ec;
    local_70 = local_e8;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0;
    local_28 = 0;
    iVar3 = FUN_016d51b0(&local_28,0x20,0x80);
    iVar5 = local_28;
    if ((iVar3 != 0) || (local_28 == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x80);
    }
    FUN_016dd1aa(local_28,&local_e0,0x80);
    iVar3 = FUN_0072c788(param_2 + 0x14,iVar5,iVar5);
    local_e0 = param_5;
    local_dc = param_6;
    if (param_2[0x5a] != 0) {
      (**(code **)(param_2[0x5b] + 0x14))
                (param_2[0x5a] + (*(int *)(param_2[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_e0);
    }
    if (iVar3 != 0) {
      local_58[0] = local_58[0] & 0xffffff00;
      local_e0 = param_2 + 2;
      local_dc = iVar3;
      local_d8 = (undefined **)local_58;
      FUN_0164511c(&local_e0);
    }
  }
  return iVar5;
}

