// FUN_0088a3dc @ 0088a3dc size=2412 calls_out=29 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 FUN_0088a3dc(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined *puVar3;
  bool bVar4;
  uint uVar5;
  uint ***pppuVar6;
  char cVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  uint uVar12;
  int *piVar13;
  int extraout_r3;
  int extraout_r3_00;
  int iVar14;
  undefined4 uVar15;
  undefined1 uVar16;
  int iVar17;
  undefined4 **ppuVar18;
  undefined4 ***pppuVar19;
  uint ***pppuVar20;
  undefined4 *puVar21;
  char *pcVar22;
  ulonglong uVar23;
  undefined4 *local_144;
  undefined4 *local_140;
  undefined4 ***local_124;
  undefined4 local_120;
  undefined4 *local_11c;
  undefined *local_118;
  undefined4 **local_114;
  undefined4 *local_110;
  undefined4 *local_10c;
  undefined ***local_108;
  undefined **local_104;
  undefined *local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  undefined ***local_e0;
  code *local_dc;
  uint ***local_d8;
  int iStack_d4;
  uint ***local_d0;
  int local_cc;
  undefined4 local_c8;
  int *local_c4;
  uint *local_c0;
  int local_bc;
  undefined4 local_b0;
  undefined **local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  uint *local_70;
  int local_6c;
  undefined4 **local_50;
  undefined1 uStack_4c;
  undefined2 local_4b;
  undefined1 local_49;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  puVar21 = (undefined4 *)((uint)&local_e0 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x11)) {
  case 0:
    param_1[0x12] = *param_1;
    param_1[0x13] = param_1[1];
    param_1[0x14] = param_1[2];
    *(undefined1 *)(param_1 + 0x19) = 0;
    *(undefined2 *)((int)param_1 + 0x45) = 1;
switchD_0088a464_caseD_0:
    puVar11 = param_1 + 0x17;
    *puVar11 = param_1[0x14];
    param_1[0x15] = param_1[0x12];
    param_1[0x16] = param_1[0x13];
    param_1[0x18] = puVar11;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01876c8c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01876c8c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x19)) {
    case 0:
      goto switchD_0088a464_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018776ac);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018776ac);
    case 3:
      puVar11 = (undefined4 *)param_1[0x18];
    }
    break;
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x23)) {
    case 0:
      goto switchD_0088a4b4_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_01861f28);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01861f28);
    case 3:
      pppuVar19 = (undefined4 ***)param_1[0x22];
    }
    goto LAB_0088ab40;
  }
  FUN_008b5760(&local_e0,puVar11,param_2);
  if ((char)local_d8 == '\x03') {
    uVar16 = 3;
    uVar15 = 1;
    *(undefined1 *)(param_1 + 0x19) = 3;
    goto LAB_0088a4f8;
  }
  FUN_00b336f8(param_1 + 0x15);
  *(undefined1 *)(param_1 + 0x19) = 1;
  param_1[0xe] = local_e0;
  param_1[0xf] = local_dc;
  param_1[0x10] = local_d8;
  if (*(char *)(param_1 + 0x10) != '\x02') {
    *(undefined1 *)((int)param_1 + 0x46) = 1;
    param_1[0x12] = param_1[0xe];
    param_1[0x15] = param_1[3];
    param_1[0x16] = param_1[4];
    param_1[0x17] = param_1[5];
    param_1[0x13] = param_1[0xf];
    *(char *)(param_1 + 0x14) = *(char *)(param_1 + 0x10);
    param_1[0x18] = param_1[6];
    *(undefined1 *)((int)param_1 + 0x45) = 0;
    param_1[0x1b] = param_1[9];
    param_1[0x19] = param_1[7];
    param_1[0x1a] = param_1[8];
    *(undefined1 *)(param_1 + 0x23) = 0;
    param_1[0x1c] = param_1[10];
    param_1[0x1d] = param_1[0xb];
    param_1[0x1e] = param_1[0xc];
    param_1[0x1f] = param_1[0xd];
switchD_0088a4b4_caseD_0:
    *(undefined1 *)((int)param_1 + 0x8f) = 1;
    *(undefined2 *)((int)param_1 + 0x8d) = 0x101;
    *(undefined1 *)(param_1 + 0x21) = *(undefined1 *)(param_1 + 0x14);
    param_1[0x20] = param_1[0x13];
    if ((DAT_018d9130 < 3) && (DAT_018d95c0 != '\0')) {
      if (DAT_018d95c0 == '\x01') {
LAB_0088a680:
        DataMemoryBarrier(0xb);
        pcVar22 = s_SetGloba_00414c05;
        puVar3 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar22 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar22 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar8 = (**(code **)(puVar3 + 0x14))(pcVar22,DAT_018d95b8);
        if (iVar8 == 0) goto LAB_0088a80c;
      }
      else if (DAT_018d95c0 != '\x02') {
        cVar7 = FUN_0169ac90(&DAT_018d95b8);
        if (cVar7 == '\0') goto LAB_0088a80c;
        if (cVar7 != '\x02') goto LAB_0088a680;
      }
      local_cc = DAT_018d95b8;
      iVar8 = *(int *)(DAT_018d95b8 + 0x20);
      if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01861f08);
      }
      uStack_48 = *(undefined4 *)(DAT_018d95b8 + 0x24);
      uStack_44 = *(undefined4 *)(DAT_018d95b8 + 0x28);
      local_104 = &local_118;
      local_11c = (undefined4 *)(DAT_018d95b8 + 0x1c);
      local_50 = (undefined4 **)*local_11c;
      local_108 = (undefined ***)&local_50;
      local_124 = &local_108;
      uStack_4c = (undefined1)iVar8;
      local_4b = (undefined2)((uint)iVar8 >> 8);
      local_49 = (undefined1)((uint)iVar8 >> 0x18);
      uStack_40 = 0;
      local_114 = &local_110;
      local_120 = 1;
      local_100 = &DAT_018abb78;
      local_118 = &DAT_00590a06;
      local_dc = (code *)0x0;
      local_10c = &DAT_00f5c97c;
      local_110 = param_1 + 0x1f;
      local_e0 = (undefined ***)0x1;
      local_d0 = (uint ***)&local_124;
      DataMemoryBarrier(0xb);
      pcVar22 = s_SetGloba_00414c05;
      puVar3 = &DAT_018ae394;
      if ((DAT_018dd984 == 2) && (pcVar22 = DAT_018daa74, puVar3 = DAT_018daa78, DAT_018daa70 != 0))
      {
        pcVar22 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar8 = (**(code **)(puVar3 + 0x28))(pcVar22,&local_e0);
      if (iVar8 != 0) {
        (**(code **)(puVar3 + 0x2c))(pcVar22,&local_e0);
      }
    }
LAB_0088a80c:
    FUN_016afc94(param_1[0x15]);
    *(undefined1 *)((int)param_1 + 0x8f) = 0;
    local_108 = (undefined ***)param_1[0x16];
    local_104 = (undefined **)param_1[0x17];
    local_100 = (undefined *)param_1[0x18];
    *(undefined2 *)((int)param_1 + 0x8d) = 0;
    local_fc = param_1[0x19];
    local_f8 = param_1[0x1a];
    local_f4 = param_1[0x1b];
    local_f0 = param_1[0x1c];
    local_ec = param_1[0x1d];
    local_e8 = param_1[0x1e];
    uVar23 = FUN_0164ec90(&DAT_01861f18);
    piVar10 = (int *)(uVar23 >> 0x20);
    do {
      do {
        iVar8 = DAT_018d9204;
        uVar5 = DAT_018d9200;
        uVar12 = DAT_018d9200 + 1;
        local_bc = DAT_018d9204 + (uint)(0xfffffffe < DAT_018d9200);
        bVar2 = (bool)hasExclusiveAccess(0x18d9200);
      } while (!bVar2);
      bVar2 = DAT_018d9200 == 0;
      bVar4 = DAT_018d9204 == 0;
      DAT_018d9200 = uVar12;
      DAT_018d9204 = local_bc;
    } while (bVar2 && bVar4);
    iVar17 = 0x248;
    if ((uVar23 & 1) == 0) {
      piVar13 = piVar10 + 0x60;
      if ((char)*piVar13 == '\0') {
        bVar2 = (bool)hasExclusiveAccess(piVar13);
        if (!bVar2) goto LAB_0088a90c;
        *(char *)piVar13 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_0088a90c:
        FUN_01280da8(piVar13);
      }
      FUN_0128236c(piVar13);
      piVar10[0x6a] = piVar10[0x6a] + 1;
      FUN_01282570(piVar13);
      if ((char)*piVar13 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar2 = (bool)hasExclusiveAccess(piVar13);
          if (bVar2) {
            *(char *)piVar13 = '\0';
            local_bc = extraout_r3;
            goto LAB_0088a968;
          }
        } while ((char)*piVar13 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(piVar13);
      local_bc = extraout_r3_00;
LAB_0088a968:
      do {
        iVar9 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0088a9dc;
      local_c8 = 0;
      iVar9 = 0x230;
    }
    else {
      iVar17 = 0x178;
      do {
        iVar9 = *piVar10;
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0088a9dc;
      local_c8 = 1;
      iVar9 = 0x168;
    }
    piVar13 = *(int **)((int)piVar10 + iVar9 + 8);
    if (piVar13 == (int *)0x0) {
      local_c0 = (uint *)0x0;
    }
    else {
      do {
        iVar14 = *piVar13;
        bVar2 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar2);
      *piVar13 = iVar14 + 1;
      if (iVar14 < 0) {
LAB_0088a9dc:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x88a9dc);
        (*pcVar1)();
      }
      local_c0 = *(uint **)((int)piVar10 + iVar9 + 8);
      local_bc = *(int *)((int)piVar10 + iVar9 + 0xc);
      do {
        uVar12 = *local_c0;
        bVar2 = (bool)hasExclusiveAccess(local_c0);
      } while (!bVar2);
      *local_c0 = uVar12 + 1;
      if (0x7fffffff < uVar12) goto LAB_0088a9dc;
    }
    piVar13 = (int *)((uint)&local_50 | 4);
    *piVar13 = (int)local_108;
    piVar13[1] = (int)local_104;
    piVar13[2] = (int)local_100;
    piVar13[3] = local_fc;
    piVar13[4] = local_f8;
    piVar13[5] = local_f4;
    piVar13[6] = local_f0;
    piVar13[7] = local_ec;
    piVar13[8] = local_e8;
    puVar21[6] = uVar5;
    puVar21[7] = iVar8;
    *puVar21 = 0;
    puVar21[1] = 0;
    local_dc = (code *)0x0;
    local_d8 = (uint ***)&PTR_LAB_01862110;
    local_e0 = (undefined ***)0xcc;
    local_b0 = 0;
    uStack_a8 = CONCAT13(local_49,CONCAT21(local_4b,uStack_4c));
    local_ac = (undefined **)local_50;
    uStack_a4 = uStack_48;
    uStack_a0 = uStack_44;
    uStack_9c = uStack_40;
    local_98 = local_3c;
    uStack_94 = uStack_38;
    uStack_90 = uStack_34;
    uStack_8c = uStack_30;
    uStack_88 = uStack_2c;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0;
    local_124 = (undefined4 ***)0x0;
    local_c4 = piVar10;
    local_70 = local_c0;
    local_6c = local_bc;
    iVar8 = FUN_016d51b0(&local_124,0x20,0x80);
    pppuVar19 = local_124;
    if ((iVar8 != 0) || (local_124 == (undefined4 ***)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x80);
    }
    FUN_016dd1aa(local_124,&local_e0,0x80);
    FUN_0164f1a8(&local_e0,*(undefined4 *)((int)piVar10 + iVar17),pppuVar19,1,uVar23);
    if (((uint)local_e0 & 0xfe) != 4) {
      uStack_4c = SUB41(local_dc,0);
      local_49 = (undefined1)((uint)local_dc >> 0x18);
      local_50 = local_e0;
      local_4b = (undefined2)((uint)local_dc >> 8);
      local_dc = FUN_015ef5b4;
      local_e0 = (undefined ***)&local_50;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00582d59,&local_e0,&DAT_01861f18);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + -1;
    if ((int)uVar23 == 0) {
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01659344(piVar10);
      }
    }
    else if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(piVar10);
    }
    param_1[0x22] = pppuVar19;
LAB_0088ab40:
    local_140 = param_1 + 0x23;
    local_144 = param_1 + 0x13;
    FUN_0089f310(&local_e0,pppuVar19,param_2);
    pppuVar6 = local_d8;
    if (((uint)local_e0 & 1) != 0) {
      *(undefined1 *)local_140 = 3;
      *(undefined1 *)(param_1 + 0x11) = 4;
      return 1;
    }
    piVar10 = (int *)param_1[0x22];
    ppuVar18 = local_d8;
    pppuVar20 = local_d0;
    iVar8 = local_cc;
    if (*piVar10 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar10);
      if (!bVar2) goto LAB_0088abb4;
      *piVar10 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_0088abb4:
      (**(code **)(piVar10[2] + 0x10))();
    }
    if (pppuVar6 != (uint ***)0x0 || iStack_d4 != 0) {
      local_e0 = (undefined ***)ppuVar18;
      local_d8 = pppuVar20;
      iStack_d4 = iVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00344a47,0x22,&local_e0,&DAT_01861f48,&DAT_01861f38);
    }
    piVar10 = (int *)param_1[0x20];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0155edc8(param_1[0x20]);
    }
    piVar10 = (int *)param_1[0x15];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar10;
      bVar2 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar2);
    *piVar10 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(param_1[0x15]);
    }
    *(undefined1 *)local_140 = 1;
    FUN_00889674(local_144);
    *(undefined1 *)((int)param_1 + 0x46) = 0;
    FUN_0076b120(param_1[0x12]);
    *(undefined1 *)((int)param_1 + 0x46) = 0;
  }
  uVar15 = 0;
  uVar16 = 1;
  if (*(char *)((int)param_1 + 0x45) != '\0') {
    FUN_007be6b0(param_1 + 3);
  }
LAB_0088a4f8:
  *(undefined1 *)(param_1 + 0x11) = uVar16;
  return uVar15;
}

