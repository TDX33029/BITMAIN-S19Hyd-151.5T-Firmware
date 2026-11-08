// FUN_00c9d068 @ 00c9d068 size=5748 calls_out=37 calls_in=0
// strings: miner termination | SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba

bool FUN_00c9d068(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined *puVar4;
  uint **ppuVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint *puVar17;
  int *piVar18;
  int *piVar19;
  int *piVar20;
  int *piVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  int *piVar24;
  char *pcVar25;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  undefined4 local_1544;
  int local_153c;
  undefined1 *local_1534;
  undefined1 auStack_1528 [1800];
  int *local_e20;
  int *local_e1c;
  uint **local_e18;
  uint ***local_e10;
  int local_e0c;
  int *local_e08;
  undefined4 local_df8;
  int *local_df0;
  int *local_dec;
  uint **local_de8;
  undefined4 local_de4;
  undefined4 local_de0;
  undefined1 local_dd4;
  undefined1 local_dd0;
  undefined4 local_db0;
  undefined4 local_dac;
  undefined4 local_da8;
  int local_da0;
  int local_d9c;
  undefined4 local_d70;
  undefined4 local_d6c;
  undefined4 local_d68;
  int local_d60;
  int local_d5c;
  uint **local_af8;
  undefined4 uStack_af4;
  code *pcStack_af0;
  undefined4 uStack_aec;
  undefined4 uStack_ae8;
  undefined4 uStack_ae4;
  undefined4 local_ae0;
  undefined4 uStack_adc;
  undefined4 uStack_ad8;
  undefined4 uStack_ad4;
  undefined4 uStack_ad0;
  undefined4 uStack_acc;
  undefined *local_700;
  int *local_6fc;
  int local_6f8;
  code *local_6f4;
  uint local_6f0;
  int *local_6ec;
  undefined4 local_6e8;
  undefined4 local_6e4;
  undefined4 local_6e0;
  uint *local_398;
  undefined **local_394;
  undefined *local_390;
  uint **local_70;
  undefined4 local_6c;
  code *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  
  puVar9 = (undefined4 *)((uint)&local_e20 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x12a4)) {
  case 0:
    *(undefined1 *)(param_1 + 0x12a5) = 1;
    local_af8 = *(uint ***)(param_1 + 0x328);
    uStack_af4 = *(undefined4 *)(param_1 + 0x32c);
    pcStack_af0 = *(code **)(param_1 + 0x330);
    uStack_aec = *(undefined4 *)(param_1 + 0x334);
    uStack_ae8 = *(undefined4 *)(param_1 + 0x338);
    uStack_ae4 = *(undefined4 *)(param_1 + 0x33c);
    local_ae0 = *(undefined4 *)(param_1 + 0x340);
    uStack_adc = *(undefined4 *)(param_1 + 0x344);
    uStack_ad8 = *(undefined4 *)(param_1 + 0x348);
    uStack_ad4 = *(undefined4 *)(param_1 + 0x34c);
    uStack_ad0 = *(undefined4 *)(param_1 + 0x350);
    uStack_acc = *(undefined4 *)(param_1 + 0x354);
    FUN_016dd1aa(&local_e20,param_1,0x328);
    local_1544 = *(undefined4 *)(param_1 + 0x1298);
    uVar23 = *(undefined4 *)(param_1 + 0x129c);
    FUN_016dd1aa(auStack_1528,&local_e20,0x708);
    FUN_016dd1aa(param_1 + 0x358,auStack_1528,0x708);
    *(undefined1 *)(param_1 + 0xa80) = 0;
    *(undefined4 *)(param_1 + 0xa60) = local_1544;
    *(undefined4 *)(param_1 + 0xa64) = uVar23;
LAB_00c9d14c:
    *(undefined2 *)(param_1 + 0xa83) = 0;
    *(undefined1 *)(param_1 + 0xa82) = 1;
    *(undefined1 *)(param_1 + 0xa85) = 0;
    *(undefined4 *)(param_1 + 0x6b0) = *(undefined4 *)(param_1 + 0x680);
    *(undefined4 *)(param_1 + 0x6b4) = *(undefined4 *)(param_1 + 0x684);
    *(undefined4 *)(param_1 + 0x6b8) = *(undefined4 *)(param_1 + 0x688);
    *(undefined4 *)(param_1 + 0x6bc) = *(undefined4 *)(param_1 + 0x68c);
    *(undefined4 *)(param_1 + 0x6c0) = *(undefined4 *)(param_1 + 0x690);
    *(undefined4 *)(param_1 + 0x6c4) = *(undefined4 *)(param_1 + 0x694);
    *(undefined4 *)(param_1 + 0x6c8) = *(undefined4 *)(param_1 + 0x698);
    *(undefined4 *)(param_1 + 0x6cc) = *(undefined4 *)(param_1 + 0x69c);
    *(undefined4 *)(param_1 + 0x6d0) = *(undefined4 *)(param_1 + 0x6a0);
    *(undefined4 *)(param_1 + 0x6d4) = *(undefined4 *)(param_1 + 0x6a4);
    *(undefined4 *)(param_1 + 0x6d8) = *(undefined4 *)(param_1 + 0x6a8);
    *(undefined4 *)(param_1 + 0x6dc) = *(undefined4 *)(param_1 + 0x6ac);
    *(undefined1 *)(param_1 + 0xa81) = 1;
    FUN_016dd1aa(param_1 + 0x6e0,param_1 + 0x358,0x328);
    *(undefined4 *)(param_1 + 0xa68) = local_1544;
    *(undefined4 *)(param_1 + 0xa6c) = uVar23;
    uVar28 = FUN_0076cb08(10,0);
    *(int *)(param_1 + 0xa88) = (int)uVar28;
    *(undefined1 *)(param_1 + 0xa85) = 1;
    *(int *)(param_1 + 0xa70) = (int)((ulonglong)uVar28 >> 0x20);
    uVar28 = FUN_0076cb08(0x46,0);
    piVar18 = (int *)uVar28;
    *(undefined8 *)(param_1 + 0xa74) = uVar28;
    do {
      iVar10 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_00c9e740;
    *(int **)(param_1 + 0xa8c) = piVar18;
    *(undefined1 *)(param_1 + 0xa84) = 1;
    iVar10 = thunk_FUN_016d4a50(0x11);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x11);
    }
    FUN_016dd1aa(iVar10,"miner termination",0x11);
    *(undefined4 *)(param_1 + 0xa90) = 0x11;
    *(undefined1 *)(param_1 + 0xadc) = 0;
    *(int *)(param_1 + 0xa94) = iVar10;
    *(undefined4 *)(param_1 + 0xa98) = 0x11;
    *(undefined4 **)(param_1 + 0xa9c) = (undefined4 *)(param_1 + 0xa68);
switchD_00c9d29c_caseD_3:
    piVar15 = (int *)(param_1 + 0xa90);
    FUN_00c9f1e0(&local_e20,piVar15,param_2);
    ppuVar5 = local_e18;
    piVar20 = local_e1c;
    piVar18 = local_e20;
    if (local_e20 == (int *)&SUB_00000002) {
      uVar6 = 3;
      goto LAB_00c9e174;
    }
    if (*(char *)(param_1 + 0xadc) == '\x03') {
      FUN_00c865f8(param_1 + 0xaa0);
      *(undefined1 *)(param_1 + 0xadd) = 0;
    }
    else if ((*(char *)(param_1 + 0xadc) == '\0') && (*piVar15 != 0)) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa94));
    }
    uVar11 = *(undefined4 *)(param_1 + 0xa88);
    uVar23 = *(undefined4 *)(param_1 + 0xa8c);
    *(undefined2 *)(param_1 + 0xa84) = 0;
    do {
      iVar10 = *piVar20;
      bVar2 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar2);
    *piVar20 = iVar10 + 1;
    uVar13 = (uint)(((uint)piVar18 & 1) != 0);
    if (iVar10 < 0) goto LAB_00c9e740;
    local_6ec = piVar20;
    do {
      do {
        piVar24 = DAT_018d9204;
        piVar21 = DAT_018d9200;
        piVar16 = (int *)((int)DAT_018d9200 + 1);
        piVar19 = (int *)((int)DAT_018d9204 + (uint)((int *)0xfffffffe < DAT_018d9200));
        bVar2 = (bool)hasExclusiveAccess(0x18d9200);
      } while (!bVar2);
      bVar2 = DAT_018d9200 == (int *)0x0;
      bVar3 = DAT_018d9204 == (int *)0x0;
      DAT_018d9200 = piVar16;
      DAT_018d9204 = piVar19;
    } while (bVar2 && bVar3);
    do {
      iVar10 = *piVar20;
      iVar14 = iVar10 + 1;
      bVar2 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar2);
    *piVar20 = iVar14;
    local_6f0 = uVar13;
    if (uVar13 == 0) {
      if (iVar10 < 0) goto LAB_00c9e740;
      piVar16 = (int *)piVar20[0x8e];
      if (piVar16 == (int *)0x0) {
        local_d60 = 0;
      }
      else {
        do {
          iVar10 = *piVar16;
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = iVar10 + 1;
        if (iVar10 < 0) goto LAB_00c9e740;
        local_d60 = piVar20[0x8e];
        iVar14 = piVar20[0x8f];
      }
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[4] = piVar21;
      puVar9[5] = piVar24;
      local_e20 = (int *)0xcc;
      local_df0 = piVar18;
      local_e1c = (int *)0x0;
      local_d68 = 0;
      local_d6c = 0;
      local_d70 = 0;
      local_dd0 = 0;
      local_df8 = 0;
      local_398 = (uint *)0x0;
      local_e08 = piVar20;
      local_de8 = ppuVar5;
      local_dec = piVar20;
      local_e18 = (uint **)&PTR_LAB_018762d0;
      local_de4 = uVar23;
      local_de0 = uVar11;
      local_d5c = iVar14;
      iVar10 = FUN_016d51b0(&local_398,0x20,0xe0);
      puVar17 = local_398;
      if ((iVar10 != 0) || (local_398 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x20,0xe0);
      }
      FUN_016dd1aa(local_398,&local_e20,0xe0);
      iVar10 = FUN_00c61cb4(piVar20 + 0x40,puVar17,puVar17);
      local_e20 = piVar21;
      local_e1c = piVar24;
      if (piVar20[0x8c] != 0) {
        (**(code **)(piVar20[0x8d] + 0x14))
                  (piVar20[0x8c] + (*(int *)(piVar20[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_e20);
      }
      if (iVar10 != 0) {
        FUN_01659ec0(piVar20,iVar10);
      }
    }
    else {
      if (iVar10 < 0) goto LAB_00c9e740;
      piVar16 = (int *)piVar20[0x5c];
      if (piVar16 == (int *)0x0) {
        local_d60 = 0;
      }
      else {
        do {
          iVar10 = *piVar16;
          bVar2 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar2);
        *piVar16 = iVar10 + 1;
        if (iVar10 < 0) goto LAB_00c9e740;
        local_d60 = piVar20[0x5c];
        iVar14 = piVar20[0x5d];
      }
      local_de8 = ppuVar5;
      *puVar9 = 0;
      puVar9[1] = 0;
      puVar9[4] = piVar21;
      puVar9[5] = piVar24;
      local_e20 = (int *)0xcc;
      local_df0 = piVar18;
      local_e1c = (int *)0x0;
      local_d68 = 0;
      local_d6c = 0;
      local_d70 = 0;
      local_dd0 = 0;
      local_df8 = 0;
      local_398 = (uint *)0x0;
      local_e08 = piVar20;
      local_dec = piVar20;
      local_e18 = (uint **)&PTR_LAB_01876460;
      local_de4 = uVar23;
      local_de0 = uVar11;
      local_d5c = iVar14;
      iVar10 = FUN_016d51b0(&local_398,0x20,0xe0);
      puVar17 = local_398;
      if ((iVar10 != 0) || (local_398 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(0x20,0xe0);
      }
      FUN_016dd1aa(local_398,&local_e20,0xe0);
      piVar16 = (int *)FUN_00c61cb4(piVar20 + 0x14,puVar17,puVar17);
      local_e20 = piVar21;
      local_e1c = piVar24;
      if (piVar20[0x5a] != 0) {
        (**(code **)(piVar20[0x5b] + 0x14))
                  (piVar20[0x5a] + (*(int *)(piVar20[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_e20);
      }
      if (piVar16 != (int *)0x0) {
        local_398 = (uint *)((uint)local_398 & 0xffffff00);
        local_e20 = piVar20 + 2;
        local_e1c = piVar16;
        local_e18 = &local_398;
        FUN_0164511c(&local_e20);
      }
    }
    if (*puVar17 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(puVar17);
      if (!bVar2) goto LAB_00c9d6bc;
      *puVar17 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00c9d6bc:
      (**(code **)(puVar17[2] + 0x10))(puVar17);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar20;
      bVar2 = (bool)hasExclusiveAccess(piVar20);
    } while (!bVar2);
    *piVar20 = iVar10 + -1;
    if (((uint)piVar18 & 1) == 0) {
      if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(piVar20);
      }
    }
    else if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(piVar20);
    }
    iVar10 = param_1 + 0xa08;
    FUN_008fde60(iVar10,param_1 + 0x7c0,param_1 + 0x6e0);
    if ((DAT_018d9130 < 3) && (DAT_018d9fb0 != '\0')) {
      if (DAT_018d9fb0 == '\x01') {
LAB_00c9d7a0:
        DataMemoryBarrier(0xb);
        pcVar25 = s_SetGloba_00414c05;
        puVar4 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar25 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar14 = (**(code **)(puVar4 + 0x14))(pcVar25,DAT_018d9fa8);
        if (iVar14 == 0) goto LAB_00c9d928;
      }
      else if (DAT_018d9fb0 != '\x02') {
        cVar7 = FUN_0169ac90(&DAT_018d9fa8);
        if (cVar7 == '\0') goto LAB_00c9d928;
        if (cVar7 != '\x02') goto LAB_00c9d7a0;
      }
      local_e0c = DAT_018d9fa8;
      if (*(int **)(DAT_018d9fa8 + 0x20) == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01875d18);
      }
      local_70 = &local_398;
      local_6e8 = *(undefined4 *)(DAT_018d9fa8 + 0x24);
      local_6e4 = *(undefined4 *)(DAT_018d9fa8 + 0x28);
      local_398 = &local_6f0;
      local_68 = (code *)(DAT_018d9fa8 + 0x1c);
      local_6f0 = *(uint *)local_68;
      local_394 = &local_700;
      local_6e0 = 0;
      local_6c = 1;
      local_390 = &DAT_018abb78;
      local_6fc = &local_6f8;
      local_700 = &DAT_00586f43;
      local_6f4 = FUN_00c9f5c0;
      local_e10 = &local_70;
      local_e1c = (int *)0x0;
      local_e20 = (int *)&DAT_00000001;
      DataMemoryBarrier(0xb);
      pcVar25 = s_SetGloba_00414c05;
      puVar4 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar25 = DAT_018daa74, puVar4 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      local_6f8 = iVar10;
      local_6ec = *(int **)(DAT_018d9fa8 + 0x20);
      iVar14 = (**(code **)(puVar4 + 0x28))(pcVar25,&local_e20);
      if (iVar14 != 0) {
        (**(code **)(puVar4 + 0x2c))(pcVar25,&local_e20);
      }
    }
LAB_00c9d928:
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      uVar23 = FUN_016d6168(SUB84((double)*(float *)(param_1 + 0xa40) * 10.0,0));
      do {
        bVar2 = (bool)hasExclusiveAccess((double *)(DAT_018d8024 + 8));
      } while (!bVar2);
      *(double *)(DAT_018d8024 + 8) = (double)CONCAT44(extraout_s1,uVar23) / 10.0;
      uVar23 = FUN_016d6168(SUB84((double)*(float *)(param_1 + 0xa3c) * 10.0,0));
      do {
        bVar2 = (bool)hasExclusiveAccess((double *)(DAT_018d8028 + 8));
      } while (!bVar2);
      *(double *)(DAT_018d8028 + 8) = (double)CONCAT44(extraout_s1_00,uVar23) / 10.0;
    }
    FUN_016dd1aa(&local_e20,iVar10,0x58);
    uVar22 = *(undefined4 *)(param_1 + 0x928);
    uVar23 = *(undefined4 *)(param_1 + 0x930);
    piVar18 = *(int **)(param_1 + 0xa6c);
    uVar11 = *(undefined4 *)(param_1 + 0x92c);
    uVar28 = *(undefined8 *)(param_1 + 0x910);
    uVar26 = *(undefined8 *)(param_1 + 0x918);
    uVar27 = *(undefined8 *)(param_1 + 0x920);
    do {
      iVar10 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_00c9e740;
    (**(code **)(*(int *)(param_1 + 0x9ec) + 0x2c))
              (&local_6f8,
               *(int *)(param_1 + 0x9e8) +
               (*(int *)(*(int *)(param_1 + 0x9ec) + 8) - 1U & 0xfffffff8) + 8);
    pcVar1 = local_6f4;
    iVar10 = local_6f8;
    if (local_6f8 != 0) {
      *(int *)(param_1 + 0xa88) = local_6f8;
      *(code **)(param_1 + 0xa8c) = local_6f4;
      FUN_016dd1aa(&local_6f0,&local_e20,0x58);
      FUN_016dd1aa(piVar15,&local_6f0,0x58);
      *(int *)(param_1 + 0xb10) = iVar10;
      *(undefined4 *)(param_1 + 0xb00) = uVar22;
      *(undefined4 *)(param_1 + 0xb04) = uVar11;
      *(int **)(param_1 + 0xbb0) = piVar18;
      *(undefined8 *)(param_1 + 0xae8) = uVar28;
      *(undefined8 *)(param_1 + 0xaf0) = uVar26;
      *(undefined8 *)(param_1 + 0xaf8) = uVar27;
      *(undefined1 *)(param_1 + 0xbc4) = 0;
      *(code **)(param_1 + 0xb14) = pcVar1;
      *(undefined4 *)(param_1 + 0xb08) = uVar23;
      goto switchD_00c9d29c_caseD_4;
    }
    local_398 = (uint *)0x3;
    local_70 = (uint **)0x356041;
    local_6c = 0x1e;
    local_68 = local_6f4;
    iVar10 = FUN_00c70528(&local_70,&local_398);
    *(undefined4 *)(param_1 + 0xa88) = 0;
    *(int *)(param_1 + 0xa8c) = iVar10;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(piVar18);
    }
LAB_00c9e1e0:
    piVar18 = *(int **)(param_1 + 0xa78);
    *(undefined1 *)(param_1 + 0xa84) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa78));
    }
    piVar18 = *(int **)(param_1 + 0xa74);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa74));
    }
    piVar18 = *(int **)(param_1 + 0xa70);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa70));
    }
    piVar18 = *(int **)(param_1 + 0xa6c);
    *(undefined1 *)(param_1 + 0xa85) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa6c));
    }
    piVar18 = *(int **)(param_1 + 0xa68);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xa68));
    }
    if (*(char *)(param_1 + 0xa81) != '\0') {
      FUN_00c8d7f8(param_1 + 0x6e0);
    }
    *(undefined1 *)(param_1 + 0xa81) = 0;
    if (*(char *)(param_1 + 0xa82) != '\0') {
      FUN_00adbb98(param_1 + 0x6b0);
    }
    *(undefined1 *)(param_1 + 0xa82) = 0;
    iVar14 = 1;
LAB_00c9e460:
    local_1534 = (undefined1 *)(param_1 + 0xa80);
    *local_1534 = 1;
    if (iVar14 != 2) {
      local_153c = param_1 + 0x358;
      FUN_00c8d13c(local_153c);
      local_e20 = (int *)0x0;
      piVar18 = *(int **)(param_1 + 0x12a0);
      *(undefined1 *)(param_1 + 0x12a5) = 0;
      if (piVar18 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018a47a4);
      }
      if (piVar18[2] != 2) {
        if (piVar18[2] == 0) {
          piVar20 = (int *)piVar18[3];
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar20;
            bVar2 = (bool)hasExclusiveAccess(piVar20);
          } while (!bVar2);
          *piVar20 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f1030(piVar18[3]);
          }
        }
        else {
          (*(code *)**(undefined4 **)piVar18[3])();
        }
      }
      piVar18[2] = iVar14;
      puVar17 = (uint *)(piVar18 + 8);
      piVar18[3] = iVar10;
      uVar13 = piVar18[8];
      do {
        while( true ) {
          uVar12 = uVar13;
          if ((uVar12 & 4) != 0) goto LAB_00c9e558;
          uVar13 = *puVar17;
          if (uVar13 == uVar12) break;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(puVar17);
        if (bVar2) {
          *puVar17 = uVar12 | 2;
        }
        DataMemoryBarrier(0xb);
      } while (!bVar2);
LAB_00c9e558:
      if ((uVar12 & 5) == 1) {
        (**(code **)(piVar18[6] + 8))(piVar18[7]);
      }
      if ((uVar12 & 4) == 0) {
        DataMemoryBarrier(0xb);
        do {
          iVar10 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar10 + -1;
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d02bf8(piVar18);
        }
        uVar6 = 1;
      }
      else {
        iVar10 = piVar18[2];
        piVar20 = (int *)piVar18[3];
        piVar18[2] = 2;
        if (iVar10 == 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a47b4);
        }
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00d02bf8(piVar18);
        }
        uVar6 = 1;
        if (iVar10 != 2) {
          if (iVar10 == 0) {
            DataMemoryBarrier(0xb);
            do {
              iVar10 = *piVar20;
              bVar2 = (bool)hasExclusiveAccess(piVar20);
            } while (!bVar2);
            *piVar20 = iVar10 + -1;
            if (iVar10 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f1030(piVar20);
            }
          }
          else {
            (**(code **)*piVar20)(piVar20);
          }
        }
      }
      goto LAB_00c9e648;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01875d88);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01875d88);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0xa80)) {
    case 0:
      uVar23 = *(undefined4 *)(param_1 + 0xa64);
      local_1544 = *(undefined4 *)(param_1 + 0xa60);
      goto LAB_00c9d14c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01875d08);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01875d08);
    case 3:
      goto switchD_00c9d29c_caseD_3;
    case 4:
switchD_00c9d29c_caseD_4:
      iVar10 = FUN_00c9f6a0(param_1 + 0xa90,param_2);
      if (iVar10 == 0) {
        uVar6 = 4;
        goto LAB_00c9e174;
      }
      *(int *)(param_1 + 0xa7c) = iVar10;
      FUN_00c8d994(param_1 + 0xa90);
      piVar18 = *(int **)(param_1 + 0xa7c);
      do {
        iVar10 = *piVar18;
        bVar2 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar2);
      *piVar18 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_00c9e740;
      *(int **)(param_1 + 0xa88) = piVar18;
      *(undefined1 *)(param_1 + 0xa83) = 1;
      iVar10 = thunk_FUN_016d4a50(0x13);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x13);
      }
      FUN_016dd1aa(iVar10,&DAT_00356060,0x13);
      *(undefined4 *)(param_1 + 0xa8c) = 0x13;
      *(undefined1 *)(param_1 + 0xad8) = 0;
      *(int *)(param_1 + 0xa90) = iVar10;
      *(undefined4 *)(param_1 + 0xa94) = 0x13;
      *(int *)(param_1 + 0xa98) = param_1 + 0xa70;
      break;
    case 6:
      goto switchD_00c9d29c_caseD_6;
    }
    local_1534 = (undefined1 *)(param_1 + 0xa80);
    FUN_00c9f1e0(&local_e20,(int *)(param_1 + 0xa8c),param_2);
    ppuVar5 = local_e18;
    piVar20 = local_e1c;
    piVar18 = local_e20;
    if (local_e20 == (int *)&SUB_00000002) {
      iVar14 = 2;
      *local_1534 = 5;
    }
    else {
      if (*(char *)(param_1 + 0xad8) == '\x03') {
        FUN_00c865f8(param_1 + 0xa9c);
        *(undefined1 *)(param_1 + 0xad9) = 0;
      }
      else if ((*(char *)(param_1 + 0xad8) == '\0') && (*(int *)(param_1 + 0xa8c) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xa90));
      }
      uVar23 = *(undefined4 *)(param_1 + 0xa88);
      *(undefined1 *)(param_1 + 0xa83) = 0;
      do {
        iVar10 = *piVar20;
        bVar2 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar2);
      *piVar20 = iVar10 + 1;
      uVar13 = (uint)(((uint)piVar18 & 1) != 0);
      if (iVar10 < 0) goto LAB_00c9e740;
      local_6ec = piVar20;
      do {
        do {
          piVar21 = DAT_018d9204;
          piVar15 = DAT_018d9200;
          piVar24 = (int *)((int)DAT_018d9200 + 1);
          piVar16 = (int *)((int)DAT_018d9204 + (uint)((int *)0xfffffffe < DAT_018d9200));
          bVar2 = (bool)hasExclusiveAccess(0x18d9200);
        } while (!bVar2);
        bVar2 = DAT_018d9200 == (int *)0x0;
        bVar3 = DAT_018d9204 == (int *)0x0;
        DAT_018d9200 = piVar24;
        DAT_018d9204 = piVar16;
      } while (bVar2 && bVar3);
      do {
        iVar10 = *piVar20;
        iVar14 = iVar10 + 1;
        bVar2 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar2);
      *piVar20 = iVar14;
      local_6f0 = uVar13;
      if (uVar13 == 0) {
        if (iVar10 < 0) goto LAB_00c9e740;
        piVar24 = (int *)piVar20[0x8e];
        if (piVar24 == (int *)0x0) {
          local_da0 = 0;
        }
        else {
          do {
            iVar10 = *piVar24;
            bVar2 = (bool)hasExclusiveAccess(piVar24);
          } while (!bVar2);
          *piVar24 = iVar10 + 1;
          if (iVar10 < 0) goto LAB_00c9e740;
          local_da0 = piVar20[0x8e];
          iVar14 = piVar20[0x8f];
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[4] = piVar15;
        puVar9[5] = piVar21;
        local_e20 = (int *)0xcc;
        local_e1c = (int *)0x0;
        local_da8 = 0;
        local_dac = 0;
        local_db0 = 0;
        local_dd4 = 0;
        local_df8 = 0;
        local_398 = (uint *)0x0;
        local_e08 = piVar20;
        local_de8 = ppuVar5;
        local_dec = piVar20;
        local_df0 = piVar18;
        local_e18 = (uint **)&PTR_LAB_01876960;
        local_de4 = uVar23;
        local_d9c = iVar14;
        iVar10 = FUN_016d51b0(&local_398,0x20,0xa0);
        puVar17 = local_398;
        if ((iVar10 != 0) || (local_398 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(0x20,0xa0);
        }
        FUN_016dd1aa(local_398,&local_e20,0xa0);
        iVar10 = FUN_00c61cb4(piVar20 + 0x40,puVar17,puVar17);
        local_e20 = piVar15;
        local_e1c = piVar21;
        if (piVar20[0x8c] != 0) {
          (**(code **)(piVar20[0x8d] + 0x14))
                    (piVar20[0x8c] + (*(int *)(piVar20[0x8d] + 8) - 1U & 0xfffffff8) + 8,&local_e20)
          ;
        }
        if (iVar10 != 0) {
          FUN_01659ec0(piVar20,iVar10);
        }
      }
      else {
        if (iVar10 < 0) goto LAB_00c9e740;
        piVar24 = (int *)piVar20[0x5c];
        if (piVar24 == (int *)0x0) {
          local_da0 = 0;
        }
        else {
          do {
            iVar10 = *piVar24;
            bVar2 = (bool)hasExclusiveAccess(piVar24);
          } while (!bVar2);
          *piVar24 = iVar10 + 1;
          if (iVar10 < 0) goto LAB_00c9e740;
          local_da0 = piVar20[0x5c];
          iVar14 = piVar20[0x5d];
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[4] = piVar15;
        puVar9[5] = piVar21;
        local_e20 = (int *)0xcc;
        local_e1c = (int *)0x0;
        local_da8 = 0;
        local_dac = 0;
        local_db0 = 0;
        local_dd4 = 0;
        local_df8 = 0;
        local_398 = (uint *)0x0;
        local_e08 = piVar20;
        local_de8 = ppuVar5;
        local_dec = piVar20;
        local_df0 = piVar18;
        local_e18 = (uint **)&PTR_LAB_01876280;
        local_de4 = uVar23;
        local_d9c = iVar14;
        iVar10 = FUN_016d51b0(&local_398,0x20,0xa0);
        puVar17 = local_398;
        if ((iVar10 != 0) || (local_398 == (uint *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(0x20,0xa0);
        }
        FUN_016dd1aa(local_398,&local_e20,0xa0);
        piVar24 = (int *)FUN_00c61cb4(piVar20 + 0x14,puVar17,puVar17);
        local_e20 = piVar15;
        local_e1c = piVar21;
        if (piVar20[0x5a] != 0) {
          (**(code **)(piVar20[0x5b] + 0x14))
                    (piVar20[0x5a] + (*(int *)(piVar20[0x5b] + 8) - 1U & 0xfffffff8) + 8,&local_e20)
          ;
        }
        if (piVar24 != (int *)0x0) {
          local_398 = (uint *)((uint)local_398 & 0xffffff00);
          local_e18 = &local_398;
          local_e20 = piVar20 + 2;
          local_e1c = piVar24;
          FUN_0164511c(&local_e20);
        }
      }
      if (*puVar17 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(puVar17);
        if (!bVar2) goto LAB_00c9dfd8;
        *puVar17 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00c9dfd8:
        (**(code **)(puVar17[2] + 0x10))(puVar17);
      }
      DataMemoryBarrier(0xb);
      do {
        iVar10 = *piVar20;
        bVar2 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar2);
      *piVar20 = iVar10 + -1;
      if (((uint)piVar18 & 1) == 0) {
        if (iVar10 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01659344(piVar20);
        }
      }
      else if (iVar10 == 1) {
        DataMemoryBarrier(0xb);
        FUN_016586fc(piVar20);
      }
      *(undefined1 *)(param_1 + 0xa81) = 0;
      FUN_016dd1aa(&local_398,param_1 + 0x6e0,0x328);
      piVar18 = *(int **)(param_1 + 0xa7c);
      do {
        iVar10 = *piVar18;
        bVar2 = (bool)hasExclusiveAccess(piVar18);
      } while (!bVar2);
      *piVar18 = iVar10 + 1;
      if (iVar10 < 0) {
LAB_00c9e740:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xc9e740);
        (*pcVar1)();
      }
      *(undefined1 *)(param_1 + 0xa82) = 0;
      local_70 = *(uint ***)(param_1 + 0x6b0);
      local_6c = *(undefined4 *)(param_1 + 0x6b4);
      local_68 = *(code **)(param_1 + 0x6b8);
      uStack_64 = *(undefined4 *)(param_1 + 0x6bc);
      uStack_60 = *(undefined4 *)(param_1 + 0x6c0);
      uStack_5c = *(undefined4 *)(param_1 + 0x6c4);
      local_58 = *(undefined4 *)(param_1 + 0x6c8);
      uStack_54 = *(undefined4 *)(param_1 + 0x6cc);
      uStack_50 = *(undefined4 *)(param_1 + 0x6d0);
      uStack_4c = *(undefined4 *)(param_1 + 0x6d4);
      uStack_48 = *(undefined4 *)(param_1 + 0x6d8);
      uStack_44 = *(undefined4 *)(param_1 + 0x6dc);
      piVar20 = *(int **)(param_1 + 0xa78);
      do {
        iVar10 = *piVar20;
        bVar2 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar2);
      *piVar20 = iVar10 + 1;
      if (iVar10 < 0) goto LAB_00c9e740;
      uVar28 = FUN_0164ec90(&DAT_01875d28);
      FUN_016dd1aa(&local_e20,&local_398,0x328);
      local_af8 = local_70;
      uStack_af4 = local_6c;
      pcStack_af0 = local_68;
      uStack_aec = uStack_64;
      uStack_ae8 = uStack_60;
      uStack_ae4 = uStack_5c;
      local_ae0 = local_58;
      uStack_adc = uStack_54;
      uStack_ad8 = uStack_50;
      uStack_ad4 = uStack_4c;
      uStack_ad0 = uStack_48;
      uStack_acc = uStack_44;
      FUN_016dd1aa(&local_6f0,&local_e20,0x358);
      FUN_016dd1aa((undefined4 *)(param_1 + 0xa88),&local_6f0,0x358);
      *(undefined8 *)(param_1 + 0xde0) = uVar28;
      *(int **)(param_1 + 0x1190) = piVar18;
      *(undefined1 *)(param_1 + 0x11ec) = 0;
      *(int **)(param_1 + 0x1194) = piVar20;
switchD_00c9d29c_caseD_6:
      uVar29 = FUN_00ca2a48(param_1 + 0xa88,param_2);
      iVar10 = (int)(uVar29 >> 0x20);
      if ((int)uVar29 != 2) {
        FUN_00c8df70(param_1 + 0xa88);
        *(undefined1 *)(param_1 + 0xa83) = 0;
        if ((uVar29 & 1) != 0) {
          piVar18 = *(int **)(param_1 + 0xa7c);
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar18;
            bVar2 = (bool)hasExclusiveAccess(piVar18);
          } while (!bVar2);
          *piVar18 = iVar14 + -1;
          if (iVar14 == 1) {
            DataMemoryBarrier(0xb);
            FUN_008f1a50(*(undefined4 *)(param_1 + 0xa7c));
          }
          goto LAB_00c9e1e0;
        }
        piVar18 = *(int **)(param_1 + 0xa7c);
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f1a50(*(undefined4 *)(param_1 + 0xa7c));
        }
        piVar18 = *(int **)(param_1 + 0xa78);
        *(undefined1 *)(param_1 + 0xa84) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0xa78));
        }
        piVar18 = *(int **)(param_1 + 0xa74);
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0xa74));
        }
        piVar18 = *(int **)(param_1 + 0xa70);
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0xa70));
        }
        piVar18 = *(int **)(param_1 + 0xa6c);
        *(undefined1 *)(param_1 + 0xa85) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0xa6c));
        }
        piVar18 = *(int **)(param_1 + 0xa68);
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *piVar18;
          bVar2 = (bool)hasExclusiveAccess(piVar18);
        } while (!bVar2);
        *piVar18 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_00790cd0(*(undefined4 *)(param_1 + 0xa68));
        }
        iVar14 = 0;
        *(undefined2 *)(param_1 + 0xa81) = 0;
        goto LAB_00c9e460;
      }
      uVar6 = 6;
LAB_00c9e174:
      local_1534 = (undefined1 *)(param_1 + 0xa80);
      iVar14 = 2;
      *local_1534 = uVar6;
    }
  }
  uVar6 = 3;
LAB_00c9e648:
  *(undefined1 *)(param_1 + 0x12a4) = uVar6;
  return iVar14 == 2;
}

