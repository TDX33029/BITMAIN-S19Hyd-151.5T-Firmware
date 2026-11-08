// FUN_011f7b88 @ 011f7b88 size=1016 calls_out=13 calls_in=2
// strings: 

longlong FUN_011f7b88(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  double *pdVar7;
  undefined4 extraout_r1;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined4 *puVar16;
  undefined4 extraout_s1;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  undefined8 uVar20;
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
  
  uVar19 = CONCAT44(local_f4,local_f8);
  pdVar7 = (double *)(param_2 + 8);
  if (*param_2 != '\x02') goto LAB_011f7d94;
  pdVar7 = (double *)(param_2 + 0x10);
  uVar8 = *(uint *)(param_2 + 8);
  uVar10 = param_1[8];
  uVar11 = param_1[9];
  if (uVar8 == 2) {
    dVar18 = *pdVar7;
    if (dVar18 < 1.8446744073709552e+19) {
      if (dVar18 < 0.0) {
LAB_011f7d94:
        return ZEXT48(pdVar7) << 0x20;
      }
      uVar13 = FUN_016d62a0(SUB84(dVar18,0),0);
      dVar17 = (double)CONCAT44(extraout_s1,uVar13);
      uVar20 = FUN_01845b18(uVar13,extraout_s1);
      if (dVar17 < 0.0) {
        uVar20 = 0;
      }
      if (1.844674407370955e+19 < dVar17) {
        uVar20 = 0xffffffffffffffff;
      }
      uVar8 = (uint)((ulonglong)uVar20 >> 0x20);
      pdVar7 = (double *)((uint)uVar20 ^ uVar10 | uVar8 ^ uVar11);
      bVar2 = dVar18 < dVar17;
      if (pdVar7 != (double *)0x0) {
        bVar2 = uVar8 <= uVar11 && (uint)(uVar10 <= (uint)uVar20) <= uVar8 - uVar11;
      }
      if (bVar2) goto LAB_011f7d94;
    }
  }
  else if (uVar8 == 0) {
    uVar9 = *(uint *)pdVar7;
    uVar8 = *(uint *)(param_2 + 0x14);
    pdVar7 = (double *)(uVar8 - (uVar11 + (uVar10 > uVar9)));
    if (uVar8 <= uVar11 && (uint)(uVar10 <= uVar9) <= uVar8 - uVar11) goto LAB_011f7d94;
  }
  else {
    uVar8 = *(uint *)(param_2 + 0x14);
    if (((int)uVar8 < 0) ||
       (uVar9 = *(uint *)pdVar7, pdVar7 = (double *)(uVar8 - (uVar11 + (uVar10 > uVar9))),
       uVar8 <= uVar11 && (uint)(uVar10 <= uVar9) <= uVar8 - uVar11)) goto LAB_011f7d94;
  }
  piVar15 = (int *)param_1[6];
  do {
    iVar4 = *piVar15;
    bVar2 = (bool)hasExclusiveAccess(piVar15);
  } while (!bVar2);
  *piVar15 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_011f7f9c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11f7f9c);
    (*pcVar1)();
  }
  uVar13 = param_1[7];
  if (param_4 == 0) {
    iVar4 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_4 + 0x14) != 0) {
      FUN_011f6248((undefined4 *)(param_4 + 0xc),param_4);
    }
    piVar5 = *(int **)(param_4 + 0xc);
    do {
      iVar4 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar4 + 1;
    if (iVar4 < 0) goto LAB_011f7f9c;
    local_100 = *(undefined4 *)(param_4 + 0xc);
    uVar11 = param_1[7];
    uVar10 = (*(int **)(param_4 + 4))[1];
    local_fc = *(undefined4 *)(param_4 + 0x10);
    uVar8 = 0;
    if (uVar10 <= uVar11) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar15 + 2,uVar10);
      uVar8 = uVar10;
      if (iVar4 != 0) {
        uVar8 = 0;
      }
    }
    uVar19 = FUN_011e1508((int)(piVar15 + 2) + uVar8,uVar11 - uVar8);
    local_104 = 3;
    iVar4 = 2;
  }
  uVar20 = FUN_01238114(param_3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_1) {
  case 0:
    uVar3 = 0;
    break;
  default:
    local_f0 = *param_1;
    local_ec = param_1[1];
    local_e8 = param_1[2];
    local_e4 = param_1[3];
    uStack_e0 = param_1[4];
    uStack_dc = param_1[5];
    goto LAB_011f7eb8;
  case 3:
    iVar12 = param_1[3];
    uVar14 = param_1[2];
    if (iVar12 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = thunk_FUN_016d4a50(iVar12);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar12);
      }
    }
    FUN_016dd1aa(iVar6,uVar14,iVar12);
    uVar3 = 3;
    local_ec = iVar12;
    local_e8 = iVar6;
    local_e4 = iVar12;
    break;
  case 4:
    FUN_0115c22c((uint)&local_f0 | 4,param_1 + 1);
    uVar3 = 4;
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
    uVar3 = 5;
  }
  local_f0 = CONCAT31(local_f0._1_3_,uVar3);
LAB_011f7eb8:
  puVar16 = (undefined4 *)((uint)&local_d8 | 4);
  *puVar16 = local_f0;
  puVar16[1] = local_ec;
  puVar16[2] = local_e8;
  puVar16[3] = local_e4;
  puVar16[4] = uStack_e0;
  puVar16[5] = uStack_dc;
  local_60 = 6;
  local_98 = 0x80000014;
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
  local_b8 = iVar4;
  local_5c = param_2;
  local_40 = piVar15;
  local_3c = uVar13;
  uStack_a0 = uVar19;
  local_48 = uVar20;
  iVar4 = thunk_FUN_016d4a50(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar4,&local_b8,0x80);
  return CONCAT44(extraout_r1,iVar4);
}

