// FUN_010773d8 @ 010773d8 size=3284 calls_out=34 calls_in=2
// strings: No upgrade with that associated hash

undefined8 FUN_010773d8(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  int **ppiVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int *piVar19;
  undefined4 *unaff_r7;
  undefined4 *puVar20;
  uint *puVar21;
  undefined4 *puVar22;
  uint uVar23;
  int iVar24;
  bool bVar25;
  ulonglong uVar26;
  undefined8 uVar27;
  uint local_2520;
  int local_251c;
  undefined4 *local_2518 [312];
  undefined4 local_2038;
  undefined4 local_2034;
  undefined4 local_2020;
  undefined4 local_201c;
  undefined4 local_2018;
  int *local_2014;
  undefined4 local_2010;
  undefined4 uStack_200c;
  undefined4 uStack_2008;
  undefined4 local_2004;
  undefined4 uStack_2000;
  undefined4 uStack_1ffc;
  undefined4 local_1ff8;
  undefined4 uStack_1ff4;
  undefined4 uStack_1ff0;
  undefined1 local_1fe9;
  uint *local_1fe8;
  undefined1 *local_1fe4;
  undefined4 local_1fe0 [334];
  int *local_1aa8;
  undefined4 local_1aa4;
  undefined4 local_1aa0;
  undefined4 *local_1578;
  undefined1 auStack_1570 [1328];
  int **local_1040;
  undefined *local_103c;
  int **local_1038;
  undefined4 local_1034;
  undefined4 uStack_1030;
  undefined4 uStack_102c;
  int *local_1028;
  undefined4 local_1020;
  undefined4 local_101c;
  undefined4 local_1018;
  undefined1 auStack_1014 [20];
  undefined4 local_1000;
  undefined4 local_ff8;
  undefined4 local_fe0;
  undefined1 local_fdc;
  undefined4 local_fd8;
  undefined4 local_fd4;
  undefined4 local_fd0;
  undefined4 local_fcc;
  undefined4 local_fc8;
  undefined1 local_fc4;
  undefined4 local_fc0;
  undefined4 local_fbc;
  undefined4 local_fb8;
  undefined4 local_ae0;
  undefined4 local_adc;
  undefined4 local_ad8;
  int *local_ad0;
  uint local_acc;
  undefined1 auStack_ab0 [1336];
  int *local_578 [333];
  undefined1 auStack_41 [29];
  
  puVar22 = (undefined4 *)((uint)&local_1040 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xd)) {
  case 0:
    *(undefined4 *)((int)param_1 + 0x39) = 0;
    *(undefined4 *)((int)param_1 + 0x35) = 0x100;
    param_1[4] = param_1[3];
    param_1[5] = *param_1;
    param_1[6] = param_1[1];
    param_1[7] = param_1[2];
    uVar18 = FUN_01a3b664();
    *(undefined1 *)(param_1 + 0xf) = 1;
    param_1[8] = uVar18;
    uVar18 = FUN_01a3c2e0();
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined2 *)((int)param_1 + 0x3a) = 0x101;
    param_1[9] = uVar18;
    param_1[10] = param_1[8];
    local_1020 = FUN_00f267f4(0);
    local_fbc = 1;
    local_1040 = (int **)&DAT_00000001;
    local_103c = (undefined *)0x1;
    local_101c = 0;
    local_fc4 = 0;
    local_fd8 = 0;
    local_fd4 = 0;
    local_fc8 = 0;
    local_fdc = 0;
    local_fe0 = 0;
    local_fc0 = 0;
    local_fb8 = 0;
    local_ff8 = 0;
    local_1000 = 0;
    local_1aa8 = (int *)0x0;
    local_fd0 = local_1020;
    local_fcc = local_1020;
    iVar10 = FUN_01be5878(&local_1aa8,0x20,0xa0);
    piVar13 = local_1aa8;
    if ((iVar10 != 0) || (local_1aa8 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0xa0);
    }
    FUN_01bed4e2(local_1aa8,&local_1040,0xa0);
    do {
      iVar10 = *piVar13;
      bVar25 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar25);
    *piVar13 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_01078088;
    *(undefined1 *)((int)param_1 + 0x39) = 1;
    *(undefined1 *)((int)param_1 + 0x35) = 1;
    param_1[0xb] = piVar13;
    param_1[0xc] = piVar13;
    iVar10 = *(int *)(param_1[4] + 0x10);
    *(undefined1 *)(param_1 + 0x1e) = 0;
    param_1[0x10] = iVar10 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1dddc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1dddc);
  case 4:
    goto switchD_01077420_caseD_4;
  }
  puVar20 = param_1 + 0x10;
  iVar10 = FUN_00617408(puVar20,param_2);
  if (iVar10 == 0) {
    uVar4 = 3;
LAB_01077810:
    uVar18 = 0;
    goto LAB_010779d4;
  }
  if (*(char *)(param_1 + 0x1e) == '\x03') {
    cVar2 = *(char *)(param_1 + 0x1d);
    bVar25 = cVar2 == '\x03';
    if (bVar25) {
      cVar2 = *(char *)(param_1 + 0x14);
    }
    if (bVar25 && cVar2 == '\x04') {
      FUN_0193c3cc(param_1 + 0x15);
    }
  }
  if (*(int *)(iVar10 + 0x24) != 0) {
    uVar18 = param_1[6];
    iVar12 = param_1[7];
    uVar16 = FUN_01adafd4(*(undefined4 *)(iVar10 + 0x28),*(undefined4 *)(iVar10 + 0x2c),
                          *(undefined4 *)(iVar10 + 0x30),*(undefined4 *)(iVar10 + 0x34),uVar18,
                          iVar12);
    uVar23 = uVar16 >> 0x19;
    iVar11 = *(int *)(iVar10 + 0x18);
    uVar15 = *(uint *)(iVar10 + 0x1c);
    iVar24 = 0;
    while( true ) {
      uVar16 = uVar15 & uVar16;
      uVar5 = *(uint *)(iVar11 + uVar16);
      uVar6 = uVar5 ^ uVar23 * 0x1010101;
      for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6)
      {
        uVar7 = uVar16 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                        (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar15;
        iVar8 = iVar11 + -0x28 + uVar7 * -0x28;
        if ((iVar12 == *(int *)(iVar8 + 8)) &&
           (iVar8 = thunk_FUN_01bed842(uVar18,*(undefined4 *)(iVar8 + 4)), iVar8 == 0)) {
          iVar11 = iVar11 + uVar7 * -0x28;
          FUN_006666fc(&local_1038,*(undefined4 *)(iVar11 + -0xc),*(undefined4 *)(iVar11 + -8));
          local_1040 = *(int ***)(iVar11 + -0x18);
          local_103c = *(undefined **)(iVar11 + -0x14);
          param_1[0x14] = local_1040;
          param_1[0x15] = local_103c;
          param_1[0x16] = local_1038;
          param_1[0x17] = local_1034;
          param_1[0x18] = uStack_1030;
          param_1[0x19] = uStack_102c;
          goto LAB_01077750;
        }
      }
      if ((uVar5 & 0x80808080 & uVar5 << 1) != 0) break;
      iVar24 = iVar24 + 4;
      uVar16 = uVar16 + iVar24;
    }
  }
  param_1[0x16] = 0x80000000;
LAB_01077750:
  FUN_019f8c54(iVar10,1);
  if (param_1[0x16] == -0x80000000) {
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    FUN_01078634(param_1[0xb],"No upgrade with that associated hash",0x24);
    puVar20 = (undefined4 *)param_1[10];
    uVar18 = param_1[0xc];
    *(undefined2 *)((int)param_1 + 0x39) = 0;
LAB_0107798c:
    *(undefined1 *)((int)param_1 + 0x39) = 0;
    if (*(char *)((int)param_1 + 0x35) != '\0') {
      FUN_00d38e38(param_1 + 0xb);
    }
    *(undefined1 *)((int)param_1 + 0x3a) = 0;
    *(undefined1 *)((int)param_1 + 0x35) = 0;
    FUN_005faf6c(param_1 + 9);
    *(undefined2 *)((int)param_1 + 0x3b) = 0;
    if (*(char *)((int)param_1 + 0x36) != '\0') {
      FUN_019bb7e0(param_1[5],param_1[6]);
    }
    *(undefined1 *)((int)param_1 + 0x36) = 0;
  }
  else {
    *(undefined1 *)(param_1 + 0xe) = 1;
    unaff_r7 = (undefined4 *)param_1[0x19];
    param_1[0x1a] = param_1[0x14];
    param_1[0x1b] = param_1[0x15];
    param_1[0x1c] = param_1[0x16];
    param_1[0x1d] = param_1[0x17];
    param_1[0x1e] = param_1[0x18];
    param_1[0x1f] = unaff_r7;
    FUN_015e8ad4(puVar20,*(undefined4 *)(param_1[4] + 4),*(undefined4 *)(param_1[4] + 8));
    *(undefined1 *)((int)param_1 + 0x37) = 1;
    *(undefined1 *)(param_1 + 0x17f) = 0;
    param_1[0x17e] = param_1[4];
    param_1[0x20] = param_1[6];
    param_1[0x21] = param_1[7];
switchD_01077420_caseD_4:
    uVar26 = FUN_0103b254(param_1 + 0x20,*param_2);
    puVar20 = (undefined4 *)(uVar26 >> 0x20);
    if ((uVar26 & 1) != 0) {
      uVar4 = 4;
      puVar20 = unaff_r7;
      goto LAB_01077810;
    }
    if (*(char *)(param_1 + 0x17f) == '\x03') {
      FUN_0103b1f4(param_1 + 0x24);
    }
    if (puVar20 == (undefined4 *)0x0) {
      *(undefined1 *)((int)param_1 + 0x36) = 0;
      local_103c = (undefined *)param_1[5];
      local_1038 = (int **)param_1[6];
      local_1034 = param_1[7];
      local_1040 = (int **)&DAT_00000001;
      FUN_010799c0(&local_1aa8,param_1 + 0xb);
      if (local_1aa8 != (int *)0x0 && local_1aa8 != (int *)&DAT_00000003) {
        FUN_019bb7e0(local_1aa4,local_1aa0);
      }
      puVar20 = (undefined4 *)param_1[10];
      uVar18 = param_1[0xc];
      *(undefined2 *)((int)param_1 + 0x39) = 0;
LAB_01077970:
      FUN_019bb7e0(param_1[0x10],param_1[0x11]);
      *(undefined1 *)((int)param_1 + 0x37) = 0;
      FUN_019bb7e0(param_1[0x1c],param_1[0x1d]);
      *(undefined1 *)(param_1 + 0xe) = 0;
      goto LAB_0107798c;
    }
    (**(code **)*puVar20)(puVar20);
    puVar9 = (undefined4 *)FUN_01078710(param_1[0x11],param_1[0x12],param_1[0x1a],param_1[0x1b]);
    if (puVar9 != (undefined4 *)0x0) {
      uVar17 = param_1[0xb];
      local_1040 = &local_1aa8;
      local_1aa4 = 1;
      *(undefined1 *)((int)param_1 + 0x35) = 0;
      local_1aa0 = 0;
      local_1aa8 = (int *)0x0;
      local_103c = &DAT_01c1dd64;
      local_1038 = (int **)0x60000020;
      local_1034 = 0;
      local_2518[0] = puVar9;
      local_1fe0[0] = uVar17;
      iVar10 = FUN_00667a08(local_2518,&local_1040);
      uVar18 = local_1aa4;
      piVar13 = local_1aa8;
      if (iVar10 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,auStack_41,&DAT_01c1dd8c,&DAT_01d30334);
      }
      FUN_01078634(uVar17,local_1aa4,local_1aa0);
      FUN_019bb7e0(piVar13,uVar18);
      puVar20 = (undefined4 *)param_1[10];
      *(undefined2 *)((int)param_1 + 0x39) = 0;
      uVar18 = param_1[0xc];
      (**(code **)*puVar9)(puVar9);
      goto LAB_01077970;
    }
    piVar13 = *(int **)(param_1[4] + 0xc);
    do {
      iVar10 = *piVar13;
      bVar25 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar25);
    *piVar13 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_01078088;
    piVar13 = *(int **)(param_1[4] + 0x14);
    do {
      iVar10 = *piVar13;
      bVar25 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar25);
    *piVar13 = iVar10 + 1;
    if (iVar10 < 0) goto LAB_01078088;
    local_2038 = param_1[0x1a];
    local_2034 = param_1[0x1b];
    local_2018 = param_1[9];
    uVar18 = param_1[0xb];
    *(undefined1 *)((int)param_1 + 0x3b) = 0;
    *(undefined4 *)((int)param_1 + 0x35) = 0;
    do {
      do {
        uVar23 = DAT_01d50470;
        local_2520 = DAT_01d50470;
        local_251c = DAT_01d50474;
        uVar16 = DAT_01d50470 + 1;
        iVar10 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar25 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar25);
      bVar25 = DAT_01d50470 == 0;
      bVar3 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar16;
      DAT_01d50474 = iVar10;
    } while (bVar25 && bVar3);
    local_2010 = param_1[0x10];
    uStack_200c = param_1[0x11];
    uStack_2008 = param_1[0x12];
    local_2004 = param_1[0x1c];
    uStack_2000 = param_1[0x1d];
    uStack_1ffc = param_1[0x1e];
    local_1ff8 = param_1[5];
    uStack_1ff4 = param_1[6];
    uStack_1ff0 = param_1[7];
    local_1fe4 = auStack_41;
    local_1fe8 = &local_2520;
    local_1fe9 = 0;
    local_2014 = piVar13;
    uVar27 = thunk_FUN_01bee35a();
    local_2020 = (undefined4)((ulonglong)uVar27 >> 0x20);
    iVar10 = (int)uVar27;
    puVar21 = (uint *)(iVar10 + 0x20);
    local_201c = uVar18;
    if (*(char *)(iVar10 + 0x58) != '\x01') {
      if (*(char *)(iVar10 + 0x58) == '\x02') {
        uVar4 = 1;
        FUN_010eaddc(local_2518);
        goto LAB_01077b4c;
      }
      FUN_019a2bcc(puVar21,&LAB_019efb68);
      *(undefined1 *)(iVar10 + 0x58) = 1;
    }
    FUN_01bed4e2(local_1fe0,local_2518,0x538);
    if (0x7ffffffe < *puVar21) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar21 = *puVar21 + 1;
    uVar16 = *(uint *)(iVar10 + 0x24);
    FUN_01bed4e2(&local_1aa8,local_2518,0x538);
    if (uVar16 == 2) {
      FUN_010eaddc(&local_1aa8);
      uVar4 = 0;
      *puVar21 = *puVar21 - 1;
LAB_01077b4c:
      local_1040 = (int **)CONCAT31(local_1040._1_3_,uVar4);
                    /* WARNING: Subroutine does not return */
      FUN_0107998c(&local_1040,&DAT_01c1ddec);
    }
    FUN_01bed4e2(auStack_1570,local_2518,0x530);
    ppiVar14 = (int **)*local_1578;
    iVar11 = local_1578[1];
    if ((uVar16 & 1) == 0) {
      piVar13 = *(int **)(iVar10 + 0x28);
      do {
        iVar12 = *piVar13;
        bVar25 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar25);
      *piVar13 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_01078088;
      piVar19 = (int *)piVar13[0x82];
      if (piVar19 != (int *)0x0) {
        do {
          iVar12 = *piVar19;
          bVar25 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar25);
        *piVar19 = iVar12 + 1;
        if (iVar12 < 0) goto LAB_01078088;
        uVar23 = piVar13[0x83];
      }
      FUN_01bed4e2((uint)local_578 | 4,auStack_1570,0x530);
      FUN_01bed4e2(auStack_ab0,local_578,0x534);
      local_1018 = 0;
      FUN_01bed4e2(auStack_1014,auStack_ab0,0x534);
      puVar22[4] = ppiVar14;
      puVar22[5] = iVar11;
      local_1038 = (int **)&PTR_LAB_01c19fa4;
      *puVar22 = 0;
      puVar22[1] = 0;
      local_1040 = (int **)0xcc;
      local_103c = (undefined *)0x0;
      local_ae0 = 0;
      local_adc = 0;
      local_ad8 = 0;
      local_578[0] = (int *)0x0;
      local_1028 = piVar13;
      local_ad0 = piVar19;
      local_acc = uVar23;
      iVar12 = FUN_01be5878(local_578,0x20,0x580);
      piVar19 = local_578[0];
      if ((iVar12 != 0) || (local_578[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x580);
      }
      FUN_01bed4e2(local_578[0],&local_1040,0x580);
      iVar12 = FUN_01a88f0c(piVar13 + 0x40,piVar19,piVar19);
      local_1040 = ppiVar14;
      local_103c = (undefined *)iVar11;
      if (piVar13[0x80] != 0) {
        (**(code **)(piVar13[0x81] + 0x14))
                  (piVar13[0x80] + (*(int *)(piVar13[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1040);
      }
      if (iVar12 != 0) {
        FUN_019dc904(*(undefined4 *)(iVar10 + 0x28),iVar12);
      }
    }
    else {
      piVar13 = *(int **)(iVar10 + 0x28);
      do {
        iVar10 = *piVar13;
        bVar25 = (bool)hasExclusiveAccess(piVar13);
      } while (!bVar25);
      *piVar13 = iVar10 + 1;
      if (iVar10 < 0) {
LAB_01078088:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1078088);
        (*pcVar1)();
      }
      piVar19 = (int *)piVar13[0x50];
      if (piVar19 != (int *)0x0) {
        do {
          iVar10 = *piVar19;
          bVar25 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar25);
        *piVar19 = iVar10 + 1;
        if (iVar10 < 0) goto LAB_01078088;
        uVar23 = piVar13[0x51];
      }
      FUN_01bed4e2((uint)local_578 | 4,auStack_1570,0x530);
      FUN_01bed4e2(auStack_ab0,local_578,0x534);
      local_1018 = 0;
      FUN_01bed4e2(auStack_1014,auStack_ab0,0x534);
      puVar22[4] = ppiVar14;
      puVar22[5] = iVar11;
      *puVar22 = 0;
      puVar22[1] = 0;
      local_1040 = (int **)0xcc;
      local_1038 = (int **)&DAT_01c1a814;
      local_103c = (undefined *)0x0;
      local_ae0 = 0;
      local_adc = 0;
      local_ad8 = 0;
      local_578[0] = (int *)0x0;
      local_1028 = piVar13;
      local_ad0 = piVar19;
      local_acc = uVar23;
      iVar10 = FUN_01be5878(local_578,0x20,0x580);
      piVar19 = local_578[0];
      if ((iVar10 != 0) || (local_578[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x580);
      }
      FUN_01bed4e2(local_578[0],&local_1040,0x580);
      iVar10 = FUN_01a89190(piVar13 + 0x14,piVar19,piVar19);
      local_1040 = ppiVar14;
      local_103c = (undefined *)iVar11;
      if (piVar13[0x4e] != 0) {
        (**(code **)(piVar13[0x4f] + 0x14))
                  (piVar13[0x4e] + (*(int *)(piVar13[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1040);
      }
      if (iVar10 != 0) {
        local_578[0] = (int *)((uint)local_578[0] & 0xffffff00);
        local_1040 = (int **)(piVar13 + 2);
        local_103c = (undefined *)iVar10;
        local_1038 = local_578;
        FUN_019ee860(&local_1040);
      }
    }
    *puVar21 = *puVar21 - 1;
    if (*piVar19 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar25 = (bool)hasExclusiveAccess(piVar19);
      if (!bVar25) goto LAB_01078030;
      *piVar19 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01078030:
      (**(code **)(piVar19[2] + 0x10))(piVar19);
    }
    puVar20 = (undefined4 *)param_1[10];
    uVar18 = param_1[0xc];
    *(undefined4 *)((int)param_1 + 0x39) = 0;
    *(undefined4 *)((int)param_1 + 0x35) = 0;
  }
  uVar4 = 1;
LAB_010779d4:
  *(undefined1 *)(param_1 + 0xd) = uVar4;
  return CONCAT44(puVar20,uVar18);
}

