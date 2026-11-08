// FUN_007dad58 @ 007dad58 size=1212 calls_out=15 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_007dad58(undefined1 *param_1,uint *param_2,undefined4 *param_3)

{
  undefined *puVar1;
  double dVar2;
  undefined2 uVar3;
  char cVar4;
  undefined1 uVar5;
  int iVar6;
  undefined1 uVar7;
  uint uVar8;
  char *pcVar9;
  double *pdVar10;
  undefined4 *puVar11;
  double dVar12;
  double dVar13;
  undefined1 local_120 [8];
  double local_118;
  uint **local_110;
  undefined4 local_10c;
  uint *local_108;
  uint *local_104;
  undefined **local_100;
  undefined *local_fc;
  uint local_f8;
  double *local_f4;
  uint local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined *local_e4;
  uint *local_e0;
  undefined2 local_dc;
  undefined1 local_da;
  uint local_d8;
  undefined4 *local_d4;
  double *local_d0;
  code *local_cc;
  undefined1 *local_c8;
  code *local_c4;
  undefined4 local_88;
  double *local_84;
  uint local_80;
  int iStack_7c;
  uint ***local_78;
  int iStack_74;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[6]) {
  case '\0':
    param_2[5] = param_2[4];
    FUN_015f3b0c(&local_88,1);
    *param_2 = local_88;
    param_2[1] = (uint)local_84;
    param_2[2] = local_80;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185e9f4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185e9f4);
  case '\x03':
    goto switchD_007dad84_caseD_3;
  case '\x04':
    goto switchD_007dad84_caseD_4;
  }
  while( true ) {
    *(undefined1 *)((int)param_2 + 0x7d) = 0;
    param_2[0x1e] = param_2[5];
switchD_007dad84_caseD_3:
    FUN_007d5850(&local_88,param_2 + 8,param_3);
    pdVar10 = local_84;
    uVar7 = (undefined1)local_88;
    uVar8 = local_88 & 0xff;
    if (uVar8 == 5) {
      *param_1 = 5;
      uVar5 = 3;
      goto LAB_007db224;
    }
    uVar5 = local_88._3_1_;
    dVar12 = (double)CONCAT44(iStack_7c,local_80);
    dVar2 = (double)CONCAT44(iStack_74,local_78);
    uVar3 = local_88._1_2_;
    if (*(char *)((int)param_2 + 0x7d) == '\x03') {
      FUN_007d56a8(param_2 + 0xb);
    }
    if (uVar8 != 0) break;
    local_118 = dVar2;
    if ((DAT_018d9130 < 3) && (DAT_018d93e0 != '\0')) {
      pdVar10 = (double *)&DAT_018daa64;
      if (DAT_018d93e0 == '\x01') {
LAB_007daef8:
        DataMemoryBarrier(0xb);
        pcVar9 = s_SetGloba_00414c05;
        puVar1 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) && (pcVar9 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)
           ) {
          pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar6 = (**(code **)(puVar1 + 0x14))(pcVar9,DAT_018d93d8);
        if (iVar6 == 0) goto LAB_007db0a4;
      }
      else if (DAT_018d93e0 != '\x02') {
        cVar4 = FUN_0169ac90(&DAT_018d93d8);
        if (cVar4 == '\0') goto LAB_007db0a4;
        if (cVar4 != '\x02') goto LAB_007daef8;
      }
      if (*(double **)(DAT_018d93d8 + 0x20) == (double *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185ea04);
      }
      local_f0 = *(uint *)(DAT_018d93d8 + 0x24);
      local_ec = *(undefined4 *)(DAT_018d93d8 + 0x28);
      local_100 = &local_e4;
      local_108 = (uint *)(DAT_018d93d8 + 0x1c);
      local_f8 = *local_108;
      local_e0 = &local_d8;
      local_104 = &local_f8;
      local_e8 = 0;
      pdVar10 = (double *)&DAT_018dd940;
      local_fc = &DAT_018abb78;
      local_c4 = FUN_00f5cdb8;
      local_d8 = param_2[5] + 0x50;
      local_e4 = &DAT_0057d643;
      local_c8 = local_120;
      local_d0 = &local_118;
      local_cc = FUN_00f5cdb8;
      local_110 = &local_104;
      local_78 = &local_110;
      local_d4 = &DAT_00f5c97c;
      local_10c = 1;
      local_84 = (double *)0x0;
      local_88 = 1;
      DataMemoryBarrier(0xb);
      pcVar9 = s_SetGloba_00414c05;
      puVar1 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar9 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar9 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_f4 = *(double **)(DAT_018d93d8 + 0x20);
      iStack_74 = DAT_018d93d8;
      iVar6 = (**(code **)(puVar1 + 0x28))(pcVar9,&local_88);
      if (iVar6 != 0) {
        (**(code **)(puVar1 + 0x2c))(pcVar9,&local_88);
      }
    }
LAB_007db0a4:
    if (!NAN(local_118)) {
      uVar7 = 1;
      dVar13 = dVar12 * 0.5;
      if (NAN(dVar13)) {
LAB_007db1b4:
        dVar12 = dVar2;
        goto LAB_007db1fc;
      }
      if (local_118 <= dVar13) {
        if (local_118 < dVar13) goto LAB_007db1b4;
      }
      else if (local_118 < dVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
      }
    }
    pdVar10 = (double *)param_2[2];
    uVar8 = *param_2;
    puVar11 = (undefined4 *)param_2[1];
    FUN_015f3b0c(&local_88,1);
    local_f8 = local_88;
    local_f4 = local_84;
    local_f0 = local_80;
    local_d8 = uVar8;
    local_d4 = puVar11;
    local_d0 = pdVar10;
    FUN_015f3c24(&local_88,&local_f8,&local_d8);
    if (((local_88 & 1) == 0) && ((uint)(local_80 < 0xf) <= (uint)-iStack_7c)) {
      uVar7 = 0;
      goto LAB_007db1fc;
    }
    FUN_01656eb8(&local_88,&DAT_0185ea14,1,0,0,&DAT_0185ea14);
    FUN_016dd1aa(&local_d8,&local_88,0x50);
    FUN_016dd1aa(param_2 + 8,&local_d8,0x50);
switchD_007dad84_caseD_4:
    iVar6 = FUN_01657fc4(param_2 + 8,*param_3);
    if (iVar6 != 0) {
      *param_1 = 5;
      uVar5 = 4;
LAB_007db224:
      *(undefined1 *)(param_2 + 6) = uVar5;
      return;
    }
    FUN_00a07b4c(param_2 + 8);
  }
  local_da = uVar5;
  local_dc = uVar3;
LAB_007db1fc:
  param_1[3] = local_da;
  uVar5 = 1;
  *param_1 = uVar7;
  *(undefined2 *)(param_1 + 1) = local_dc;
  *(double *)(param_1 + 8) = dVar12;
  *(double *)(param_1 + 0x10) = dVar2;
  *(double **)(param_1 + 4) = pdVar10;
  goto LAB_007db224;
}

