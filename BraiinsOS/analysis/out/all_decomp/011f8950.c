// FUN_011f8950 @ 011f8950 size=1112 calls_out=14 calls_in=2
// strings: 

int FUN_011f8950(undefined4 *param_1,char *param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  double *pdVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int *piVar13;
  undefined4 *puVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  double dVar17;
  double dVar18;
  longlong lVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int local_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined8 uStack_a8;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined1 local_68;
  char *local_64;
  undefined8 local_50;
  int *local_48;
  undefined4 local_44;
  
  uVar20 = CONCAT44(local_fc,local_100);
  if (*param_2 != '\x02') {
    return 0;
  }
  pdVar7 = (double *)(param_2 + 0x10);
  dVar18 = *(double *)(param_1 + 8);
  if (*(int *)(param_2 + 8) == 2) {
    if (*pdVar7 < dVar18) {
      return 0;
    }
  }
  else if (*(int *)(param_2 + 8) == 0) {
    if (0.0 <= dVar18) {
      if (1.8446744073709552e+19 <= dVar18) {
        return 0;
      }
      uVar8 = *(uint *)pdVar7;
      uVar9 = *(uint *)(param_2 + 0x14);
      uVar16 = FUN_016d62a0(SUB84(dVar18,0),0);
      dVar17 = (double)CONCAT44(extraout_s1,uVar16);
      lVar19 = FUN_01845b18(uVar16,extraout_s1);
      if (dVar17 < 0.0) {
        lVar19 = 0;
      }
      if (1.844674407370955e+19 < dVar17) {
        lVar19 = -1;
      }
      uVar11 = (uint)((ulonglong)lVar19 >> 0x20);
      bVar2 = uVar9 <= uVar11 && (uint)((uint)lVar19 <= uVar8) <= uVar9 - uVar11;
      goto LAB_011f8ab0;
    }
  }
  else if (-9.223372036854776e+18 <= dVar18) {
    if (9.223372036854776e+18 <= dVar18) {
      return 0;
    }
    uVar8 = *(uint *)pdVar7;
    uVar9 = *(uint *)(param_2 + 0x14);
    uVar16 = FUN_016d62a0(SUB84(dVar18,0),0);
    dVar17 = (double)CONCAT44(extraout_s1_00,uVar16);
    lVar19 = FUN_01845ca8(uVar16,extraout_s1_00);
    if (dVar17 < -9.223372036854776e+18) {
      lVar19 = -0x8000000000000000;
    }
    if (9.223372036854775e+18 < dVar17) {
      lVar19 = 0x7fffffffffffffff;
    }
    if (NAN(dVar17)) {
      lVar19 = 0;
    }
    iVar4 = (int)((ulonglong)lVar19 >> 0x20);
    bVar15 = uVar8 < (uint)lVar19;
    bVar2 = false;
    if ((int)(uVar9 - (iVar4 + (uint)bVar15)) < 0 !=
        (SBORROW4(uVar9,iVar4) != SBORROW4(uVar9 - iVar4,(uint)bVar15))) {
      bVar2 = true;
    }
LAB_011f8ab0:
    bVar15 = dVar17 < dVar18;
    if (lVar19 != CONCAT44(uVar9,uVar8)) {
      bVar15 = bVar2;
    }
    if (bVar15) {
      return 0;
    }
  }
  piVar13 = (int *)param_1[6];
  do {
    iVar4 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar4 + 1;
  if (iVar4 < 0) {
LAB_011f8dec:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11f8dec);
    (*pcVar1)();
  }
  uVar16 = param_1[7];
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
    if (iVar4 < 0) goto LAB_011f8dec;
    local_108 = *(undefined4 *)(param_4 + 0xc);
    uVar11 = param_1[7];
    uVar9 = (*(int **)(param_4 + 4))[1];
    local_104 = *(undefined4 *)(param_4 + 0x10);
    uVar8 = 0;
    if (uVar9 <= uVar11) {
      iVar4 = thunk_FUN_016dd50a(**(int **)(param_4 + 4) + 8,piVar13 + 2,uVar9);
      uVar8 = uVar9;
      if (iVar4 != 0) {
        uVar8 = 0;
      }
    }
    uVar20 = FUN_011e1508((int)(piVar13 + 2) + uVar8,uVar11 - uVar8);
    local_10c = 3;
    iVar4 = 2;
  }
  uVar21 = FUN_01238114(param_3);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)param_1) {
  case 0:
    uVar3 = 0;
    break;
  default:
    local_f8 = *param_1;
    local_f4 = param_1[1];
    local_f0 = param_1[2];
    local_ec = param_1[3];
    uStack_e8 = param_1[4];
    uStack_e4 = param_1[5];
    goto LAB_011f8ce4;
  case 3:
    iVar10 = param_1[3];
    uVar12 = param_1[2];
    if (iVar10 == 0) {
      iVar6 = 1;
    }
    else {
      iVar6 = thunk_FUN_016d4a50(iVar10);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar10);
      }
    }
    FUN_016dd1aa(iVar6,uVar12,iVar10);
    uVar3 = 3;
    local_f4 = iVar10;
    local_f0 = iVar6;
    local_ec = iVar10;
    break;
  case 4:
    FUN_0115c22c((uint)&local_f8 | 4,param_1 + 1);
    uVar3 = 4;
    break;
  case 5:
    if (param_1[3] == 0) {
      local_b8 = 0;
      local_c0 = 0;
    }
    else {
      if (param_1[1] == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ac52c);
      }
      FUN_011f809c(&local_c0,param_1[1],param_1[2]);
    }
    local_f4 = local_c0;
    local_f0 = iStack_bc;
    local_ec = local_b8;
    uVar3 = 5;
  }
  local_f8 = CONCAT31(local_f8._1_3_,uVar3);
LAB_011f8ce4:
  puVar14 = (undefined4 *)((uint)&local_e0 | 4);
  *puVar14 = local_f8;
  puVar14[1] = local_f4;
  puVar14[2] = local_f0;
  puVar14[3] = local_ec;
  puVar14[4] = uStack_e8;
  puVar14[5] = uStack_e4;
  local_68 = 6;
  local_a0 = 0x80000014;
  local_9c = local_e0;
  uStack_98 = uStack_dc;
  uStack_94 = uStack_d8;
  local_90 = local_d4;
  uStack_8c = uStack_d0;
  uStack_88 = uStack_cc;
  uStack_84 = uStack_c8;
  uStack_b4 = local_10c;
  local_b0 = local_108;
  uStack_ac = local_104;
  local_c0 = iVar4;
  local_64 = param_2;
  local_48 = piVar13;
  local_44 = uVar16;
  uStack_a8 = uVar20;
  local_50 = uVar21;
  iVar4 = thunk_FUN_016d4a50(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x80);
  }
  FUN_016dd1aa(iVar4,&local_c0,0x80);
  return iVar4;
}

