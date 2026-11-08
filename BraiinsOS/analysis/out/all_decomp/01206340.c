// FUN_01206340 @ 01206340 size=1008 calls_out=13 calls_in=2
// strings: 

longlong FUN_01206340(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  double *pdVar3;
  undefined1 uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  double *pdVar8;
  undefined4 extraout_r1;
  uint uVar9;
  uint uVar10;
  double *pdVar11;
  int iVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 *puVar17;
  undefined4 extraout_s1;
  double dVar18;
  double dVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  int local_ec;
  int local_e8;
  int local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int local_b8;
  int iStack_b4;
  int local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined1 local_60;
  char *local_5c;
  undefined8 local_48;
  int *local_40;
  undefined4 local_3c;
  
  uVar20 = CONCAT44(local_f4,local_f8);
  pdVar8 = (double *)(param_2 + 8);
  if (*param_2 != '\x02') goto LAB_01206544;
  pdVar8 = (double *)(param_2 + 0x10);
  uVar9 = *(uint *)(param_2 + 8);
  uVar10 = param_1[8];
  pdVar11 = (double *)param_1[9];
  if (uVar9 == 2) {
    dVar19 = *pdVar8;
    if (dVar19 < 1.8446744073709552e+19) {
      if (dVar19 < 0.0) {
LAB_01206544:
        return ZEXT48(pdVar8) << 0x20;
      }
      uVar13 = FUN_016d62a0(SUB84(dVar19,0),0);
      dVar18 = (double)CONCAT44(extraout_s1,uVar13);
      uVar21 = FUN_01845b18(uVar13,extraout_s1);
      if (dVar18 < 0.0) {
        uVar21 = 0;
      }
      if (1.844674407370955e+19 < dVar18) {
        uVar21 = 0xffffffffffffffff;
      }
      pdVar3 = (double *)((ulonglong)uVar21 >> 0x20);
      pdVar8 = (double *)((uint)uVar21 ^ uVar10 | (uint)pdVar3 ^ (uint)pdVar11);
      bVar2 = dVar19 <= dVar18;
      if (pdVar8 != (double *)0x0) {
        bVar2 = pdVar3 < pdVar11 ||
                (uint)((int)pdVar11 - (int)pdVar3) < (uint)((uint)uVar21 <= uVar10);
      }
      if (bVar2) goto LAB_01206544;
    }
  }
  else {
    if (uVar9 == 0) {
      uVar9 = *(uint *)pdVar8;
      pdVar8 = *(double **)(param_2 + 0x14);
    }
    else {
      uVar9 = *(uint *)pdVar8;
      pdVar8 = *(double **)(param_2 + 0x14);
      if ((int)pdVar8 < (int)(uint)(uVar9 == 0)) goto LAB_01206544;
    }
    uVar14 = (int)pdVar11 - (int)pdVar8;
    bVar2 = pdVar8 < pdVar11;
    pdVar8 = (double *)((int)pdVar11 - (int)((int)pdVar8 + (uint)(uVar9 > uVar10)));
    if (bVar2 || uVar14 < (uVar9 <= uVar10)) goto LAB_01206544;
  }
  piVar16 = (int *)param_1[6];
  do {
    iVar5 = *piVar16;
    bVar2 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar2);
  *piVar16 = iVar5 + 1;
  if (iVar5 < 0) {
LAB_0120674c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x120674c);
    (*pcVar1)();
  }
  uVar13 = param_1[7];
  if (param_4 == 0) {
    iVar5 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar6 = *(int **)(param_4 + 0xc);
    do {
      iVar5 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_0120674c;
    local_100 = *(undefined4 *)(param_4 + 0xc);
    uVar14 = param_1[7];
    uVar10 = (*(int **)(param_4 + 4))[1];
    local_fc = *(undefined4 *)(param_4 + 0x10);
    uVar9 = 0;
    if (uVar10 <= uVar14) {
      iVar5 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar16 + 2,uVar10);
      uVar9 = uVar10;
      if (iVar5 != 0) {
        uVar9 = 0;
      }
    }
    uVar20 = FUN_011e1508((int)(piVar16 + 2) + uVar9,uVar14 - uVar9);
    local_104 = 3;
    iVar5 = 2;
  }
  uVar21 = FUN_01238114(param_3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_1) {
  case 0:
    uVar4 = 0;
    break;
  default:
    local_f0 = *param_1;
    local_ec = param_1[1];
    local_e8 = param_1[2];
    local_e4 = param_1[3];
    uStack_e0 = param_1[4];
    uStack_dc = param_1[5];
    goto LAB_01206668;
  case 3:
    iVar12 = param_1[3];
    uVar15 = param_1[2];
    if (iVar12 == 0) {
      iVar7 = 1;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(iVar12);
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar12);
      }
    }
    FUN_016dd1aa(iVar7,uVar15,iVar12);
    uVar4 = 3;
    local_ec = iVar12;
    local_e8 = iVar7;
    local_e4 = iVar12;
    break;
  case 4:
    FUN_0115c22c((uint)&local_f0 | 4,param_1 + 1);
    uVar4 = 4;
    break;
  case 5:
    if (param_1[3] == 0) {
      local_b0 = 0;
      local_b8 = 0;
    }
    else {
      if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_011f809c(&local_b8,param_1[1],param_1[2]);
    }
    local_ec = local_b8;
    local_e8 = iStack_b4;
    local_e4 = local_b0;
    uVar4 = 5;
  }
  local_f0 = CONCAT31(local_f0._1_3_,uVar4);
LAB_01206668:
  puVar17 = (undefined4 *)((uint)&local_d8 | 4);
  *puVar17 = local_f0;
  puVar17[1] = local_ec;
  puVar17[2] = local_e8;
  puVar17[3] = local_e4;
  puVar17[4] = uStack_e0;
  puVar17[5] = uStack_dc;
  local_60 = 6;
  local_98 = 0x8000001a;
  local_94 = local_d8;
  uStack_90 = uStack_d4;
  uStack_8c = uStack_d0;
  local_88 = local_cc;
  uStack_84 = uStack_c8;
  uStack_80 = uStack_c4;
  uStack_7c = uStack_c0;
  uStack_ac = local_104;
  local_a8 = local_100;
  uStack_a4 = local_fc;
  local_b8 = iVar5;
  local_5c = param_2;
  local_40 = piVar16;
  local_3c = uVar13;
  uStack_a0 = uVar20;
  local_48 = uVar21;
  iVar5 = thunk_FUN_016d4a50(0x80);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar5,&local_b8,0x80);
  return CONCAT44(extraout_r1,iVar5);
}

