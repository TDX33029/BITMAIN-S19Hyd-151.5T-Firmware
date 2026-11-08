// FUN_0142551c @ 0142551c size=636 calls_out=5 calls_in=5
// strings: 

void FUN_0142551c(int *param_1,undefined4 param_2,uint *param_3,int *param_4,int param_5)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  uint local_fc;
  undefined1 local_f0 [8];
  undefined1 *local_e8;
  uint local_e0;
  uint local_dc;
  undefined1 *local_d8;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  undefined1 *local_b8;
  undefined8 local_b0;
  int *local_a8;
  int local_a4;
  undefined1 local_a0;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined1 local_74;
  uint local_70;
  undefined4 local_6c;
  undefined1 *local_60;
  undefined1 *local_50;
  undefined1 *local_40;
  int *local_38;
  int local_34;
  undefined4 local_30;
  undefined1 local_2c;
  
  uVar12 = *param_3;
  puVar4 = &DAT_3b9aca00;
  if (uVar12 == 1) {
    local_94 = 0;
    local_90 = 0;
    local_8c = 0;
    local_88 = 0;
    local_fc = param_3[1];
    puVar4 = (undefined1 *)0x5f5e100;
  }
  FUN_01421a04(local_f0,param_4,param_5);
  uVar15 = CONCAT44(local_b0._4_4_,(undefined4)local_b0);
  puVar13 = (undefined1 *)param_3[8];
  puVar14 = &DAT_3b9aca00;
  if ((uVar12 & 1) != 0) {
    puVar14 = local_e8;
  }
  if (puVar13 == &DAT_3b9aca00) {
    local_e8 = &DAT_3b9aca00;
    local_d8 = &DAT_3b9aca00;
  }
  else {
    if (param_4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00477c39,0x31,&DAT_01cf477c);
    }
    uVar5 = param_3[2];
    uVar8 = param_3[3];
    uVar3 = param_3[10];
    uVar9 = param_3[4];
    uVar10 = param_3[6];
    uVar11 = param_3[7];
    uVar15 = (**(code **)(param_5 + 0xc))
                       ((int)param_4 + (*(int *)(param_5 + 8) - 1U & 0xfffffff8) + 8);
    do {
      iVar7 = *param_4;
      bVar2 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar2);
    *param_4 = iVar7 + 1;
    if (iVar7 < 0) goto LAB_01425798;
    local_a4 = param_5;
    local_b8 = &DAT_3b9aca00;
    local_e0 = uVar10;
    local_dc = uVar11;
    local_d8 = puVar13;
    local_d0 = uVar5;
    local_cc = uVar8;
    local_c8 = uVar9;
    local_a8 = param_4;
    local_a0 = (char)uVar3;
  }
  local_60 = &DAT_3b9aca00;
  local_6c = 0;
  local_74 = 0;
  local_78 = 0;
  local_2c = 0;
  local_7c = 1;
  local_80 = 1;
  local_34 = param_5;
  local_70 = uVar12;
  local_50 = puVar14;
  local_40 = local_e8;
  local_38 = param_4;
  local_30 = param_2;
  local_b0 = uVar15;
  piVar6 = (int *)thunk_FUN_01be5118(0x58);
  if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x58);
  }
  FUN_01bed4e2(piVar6,&local_80,0x58);
  do {
    iVar7 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar7 + 1;
  if (-1 < iVar7) {
    FUN_01bed4e2(param_1 + 0xc,&local_e0,0x48);
    param_1[5] = local_98;
    param_1[6] = local_94;
    param_1[7] = local_90;
    param_1[8] = local_8c;
    param_1[9] = local_88;
    param_1[10] = local_fc;
    param_1[0xb] = 0;
    param_1[0x1e] = (int)piVar6;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = (int)puVar4;
    *param_1 = (int)piVar6;
    return;
  }
LAB_01425798:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1425798);
  (*pcVar1)();
}

