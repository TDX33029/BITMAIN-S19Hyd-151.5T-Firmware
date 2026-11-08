// FUN_0120f414 @ 0120f414 size=3260 calls_out=34 calls_in=2
// strings: /tmp/bosminer_telemetry.sock | /var/log/boserevent open/boser/boser-unix/src/telemetry.rs:74event open/boser/boser-unix/src/telemetry.rs:93event open/boser/boser-unix/src/telemetry.rs:84event open/boser/boser-unix/src/telemetry.rs:71event open/boser/boser-unix/src/telemetry.rs:83event open/boser/boser-unix/src/telemetry.rs:89event open/boser/boser-unix/src/telemetry.rs:96 | actions.log | /var/log/boserevent open/boser/boser-unix/src/telemetry.rs:74event open/boser/boser-unix/src/telemetry.rs:93event open/boser/boser-unix/src/telemetry.rs:84event open/boser/boser-unix/src/telemetry.rs:71event open/boser/boser-unix/src/telemetry.rs:83event open/boser/boser-unix/src/telemetry.rs:89event open/boser/boser-unix/src/telemetry.rs:96 | actions.log.1event open/boser/boser-unix/src/unix.rs:201open/boser/boser-unix/src/unix.rsevent open/boser/boser-unix/src/unix.rs:328event open/boser/boser-unix/src/unix.rs:331event open/boser/boser-unix/src/unix.rs:334event open/boser/boser-unix/src/unix.rs:325event open/boser/boser-unix/src/unix.rs:312event open/boser/boser-unix/src/unix.rs:341 | /var/log/boserevent open/boser/boser-unix/src/telemetry.rs:74event open/boser/boser-unix/src/telemetry.rs:93event open/boser/boser-unix/src/telemetry.rs:84event open/boser/boser-unix/src/telemetry.rs:71event open/boser/boser-unix/src/telemetry.rs:83event open/boser/boser-unix/src/telemetry.rs:89event open/boser/boser-unix/src/telemetry.rs:96

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0120f414(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  uint uVar4;
  int **ppiVar5;
  int **ppiVar6;
  int **ppiVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int **ppiVar11;
  int iVar12;
  undefined1 *puVar13;
  int **ppiVar14;
  undefined4 *puVar15;
  int extraout_r2;
  undefined1 uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  int *piVar20;
  uint *puVar21;
  bool bVar22;
  undefined8 uVar23;
  int local_7b4;
  int **local_780;
  undefined4 local_77c;
  undefined4 local_778;
  int local_774;
  undefined4 local_770;
  undefined4 local_76c;
  undefined4 local_768;
  uint local_760;
  int local_75c;
  undefined4 local_754;
  undefined4 local_750;
  undefined4 uStack_74c;
  undefined4 uStack_748;
  int **local_740;
  uint uStack_73c;
  int **ppiStack_738;
  uint uStack_734;
  int **local_640;
  undefined4 local_63c;
  undefined4 local_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined1 local_62c;
  uint *local_628;
  undefined1 *local_624;
  int **local_620;
  uint local_61c;
  int **local_618;
  uint uStack_614;
  int **ppiStack_610;
  uint uStack_60c;
  int **local_500;
  int *local_4fc;
  int **local_4f8;
  uint uStack_4f4;
  int **local_4f0;
  uint uStack_4ec;
  int **ppiStack_4e8;
  uint local_4e4;
  undefined4 *puStack_4e0;
  undefined4 uStack_4dc;
  undefined4 uStack_4d8;
  undefined4 uStack_4d4;
  uint local_4d0;
  uint local_4cc;
  uint local_4c8;
  uint local_4c4;
  uint local_4c0;
  int *local_4b0;
  undefined4 *local_3e8;
  int **local_3e0;
  int *local_3dc;
  int **local_3d8;
  uint uStack_3d4;
  int **ppiStack_3d0;
  uint uStack_3cc;
  int *local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 local_3b8;
  undefined1 auStack_3b4 [52];
  undefined4 local_380;
  undefined4 uStack_37c;
  undefined4 uStack_378;
  undefined4 uStack_374;
  undefined4 uStack_370;
  undefined4 uStack_36c;
  undefined4 local_298;
  undefined4 local_294;
  undefined4 local_290;
  int *local_288;
  int local_284;
  undefined4 local_268;
  int local_264;
  undefined4 local_260;
  int *local_148;
  uint local_144;
  int local_140;
  undefined1 uStack_25;
  
  iVar8 = thunk_FUN_01be5118(0x1c);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x1c);
  }
  FUN_01bed4e2(iVar8,"/tmp/bosminer_telemetry.sock",0x1c);
  uVar9 = FUN_01a3b664();
  local_768 = 100;
  local_770 = 0x1c;
  local_778 = 0x1c;
  local_774 = iVar8;
  local_76c = uVar9;
  piVar10 = (int *)FUN_01298504(0x3800,8);
  if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0x3800);
  }
  iVar17 = 0;
  puVar15 = (undefined4 *)((uint)&local_3e0 | 0x10);
  local_4f8 = (int **)0x0;
  local_500 = (int **)&DAT_00000080;
  local_4fc = piVar10;
  do {
    ppiVar14 = local_4f8;
    bVar22 = local_4f8 < &DAT_00000080;
    ppiVar11 = local_4f8 + -0x20;
    if (local_4f8 == local_500) {
      FUN_0120c150(&local_500);
      piVar10 = local_4fc;
    }
    local_4f8 = (int **)((int)ppiVar14 + 1);
    puVar13 = (undefined1 *)((int)piVar10 + iVar17);
    *puVar13 = 0;
    iVar17 = iVar17 + 0x70;
    *(undefined4 *)(puVar13 + 8) = 4;
    *(int ***)(puVar13 + 0x60) = ppiVar11;
    *(uint *)(puVar13 + 100) = -(uint)bVar22;
    *(undefined4 *)(puVar13 + 0x68) = 0;
  } while (local_4f8 != (int **)&DAT_00000080);
  local_3e0 = local_500;
  local_3dc = local_4fc;
  local_3d8 = local_4f8;
  if ((&DAT_00000080 < local_500) &&
     (iVar17 = FUN_0189bb64(&local_3e0,0x80,8,0x70), iVar17 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  ppiVar14 = local_3d8;
  piVar10 = local_3dc;
  uStack_3cc = uStack_3cc & 0xff000000;
  ppiStack_3d0 = (int **)0x0;
  uStack_3d4 = 0;
  local_3dc = (int *)((uint)local_3dc & 0xffffff);
  local_3d8 = (int **)0x0;
  ppiVar11 = (int **)thunk_FUN_01be5118(0x50);
  if (ppiVar11 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x50);
  }
  *(undefined1 *)(ppiVar11 + 4) = 0;
  *ppiVar11 = (int *)0x1;
  ppiVar11[1] = (int *)0x1;
  ppiVar11[2] = piVar10;
  ppiVar11[3] = (int *)ppiVar14;
  FUN_01bed4e2((undefined1 *)((int)ppiVar11 + 0x11),&local_3e0,0x17);
  ppiVar14 = ppiVar11 + 0x11;
  *ppiVar14 = (int *)0x1;
  ppiVar11[0x12] = (int *)0x0;
  ppiVar11[0x10] = (int *)0x7f;
  ppiVar11[0xf] = (int *)0x0;
  ppiVar11[0xe] = (int *)0x0;
  *(undefined1 *)(ppiVar11 + 0xd) = 0;
  ppiVar11[0xc] = (int *)0x0;
  *(undefined1 *)(ppiVar11 + 0xb) = 0;
  ppiVar11[10] = (int *)0x1;
  do {
    piVar10 = *ppiVar11;
    bVar22 = (bool)hasExclusiveAccess(ppiVar11);
  } while (!bVar22);
  *ppiVar11 = (int *)((int)piVar10 + 1);
  if ((int)piVar10 < 0) goto LAB_012100cc;
  uStack_3d4 = 0;
  local_3d8 = (int **)0x0;
  local_3e0 = ppiVar11;
  ppiStack_3d0 = ppiVar11;
  FUN_01204680(&local_3d8);
  DataMemoryBarrier(0xb);
  do {
    piVar10 = *ppiStack_3d0;
    bVar22 = (bool)hasExclusiveAccess(ppiStack_3d0);
  } while (!bVar22);
  *ppiStack_3d0 = (int *)((int)piVar10 + -1);
  if (piVar10 == (int *)0x1) {
    DataMemoryBarrier(0xb);
    FUN_0121cc30(ppiStack_3d0);
  }
  FUN_01a3c2e0(uVar9);
  do {
    piVar10 = *ppiVar11;
    bVar22 = (bool)hasExclusiveAccess(ppiVar11);
  } while (!bVar22);
  *ppiVar11 = (int *)((int)piVar10 + 1);
  local_754 = uVar9;
  if ((int)piVar10 < 0) goto LAB_012100cc;
  do {
    bVar22 = (bool)hasExclusiveAccess(ppiVar14);
  } while (!bVar22);
  *ppiVar14 = (int *)((int)*ppiVar14 + 1);
  FUN_006666fc(&local_750,iVar8,0x1c);
  do {
    do {
      local_760 = DAT_01d50470;
      local_75c = DAT_01d50474;
      uVar18 = DAT_01d50470 + 1;
      iVar17 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar22 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar22);
    bVar22 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar18;
    DAT_01d50474 = iVar17;
  } while (bVar22 && bVar3);
  local_628 = &local_760;
  local_638 = local_750;
  uStack_634 = uStack_74c;
  uStack_630 = uStack_748;
  local_624 = &uStack_25;
  local_62c = 0;
  iVar17 = thunk_FUN_01bee35a(0,local_750,0x20);
  puVar19 = (uint *)(iVar17 + extraout_r2);
  local_640 = ppiVar11;
  local_63c = uVar9;
  if ((char)puVar19[0xe] != '\x01') {
    if ((char)puVar19[0xe] == '\x02') {
      uVar16 = 1;
      FUN_0120d1f0(&local_740);
      goto LAB_0120f748;
    }
    FUN_019a2bcc(puVar19,&LAB_019efb68);
    *(undefined1 *)(puVar19 + 0xe) = 1;
  }
  FUN_01bed4e2(&local_620,&local_740,0x120);
  if (0x7ffffffe < *puVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar19 = *puVar19 + 1;
  uVar18 = puVar19[1];
  FUN_01bed4e2(&local_500,&local_740,0x120);
  if (uVar18 == 2) {
    FUN_0120d1f0(&local_500);
    uVar16 = 0;
    *puVar19 = *puVar19 - 1;
LAB_0120f748:
    local_3e0 = (int **)CONCAT31(local_3e0._1_3_,uVar16);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_3e0,&DAT_01c23704);
  }
  ppiVar14 = (int **)*local_3e8;
  iVar17 = local_3e8[1];
  if ((uVar18 & 1) == 0) {
    piVar10 = (int *)puVar19[2];
    do {
      iVar12 = *piVar10;
      bVar22 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar22);
    *piVar10 = iVar12 + 1;
    if (iVar12 < 0) goto LAB_012100cc;
    piVar20 = (int *)piVar10[0x82];
    if (piVar20 != (int *)0x0) {
      do {
        iVar12 = *piVar20;
        bVar22 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar22);
      *piVar20 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_012100cc;
      local_7b4 = piVar10[0x83];
    }
    FUN_01bed4e2((uint)&local_148 | 4,&local_740,0x118);
    FUN_01bed4e2(&local_268,&local_148,0x11c);
    local_3b8 = 0;
    FUN_01bed4e2(auStack_3b4,&local_268,0x11c);
    local_3d8 = (int **)&PTR_LAB_01c22908;
    local_3e0 = (int **)0xcc;
    local_284 = local_7b4;
    puVar15[4] = ppiVar14;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[5] = iVar17;
    local_3dc = (int *)0x0;
    local_290 = 0;
    local_294 = 0;
    local_298 = 0;
    local_148 = (int *)0x0;
    local_3c8 = piVar10;
    local_288 = piVar20;
    iVar12 = FUN_01be5878(&local_148,0x20,0x160);
    piVar20 = local_148;
    if ((iVar12 != 0) || (local_148 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x160);
    }
    FUN_01bed4e2(local_148,&local_3e0,0x160);
    iVar12 = FUN_01a88f0c(piVar10 + 0x40,piVar20,piVar20);
    local_3e0 = ppiVar14;
    local_3dc = (int *)iVar17;
    if (piVar10[0x80] != 0) {
      (**(code **)(piVar10[0x81] + 0x14))
                (piVar10[0x80] + (*(int *)(piVar10[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_3e0);
    }
    if (iVar12 != 0) {
      FUN_019dc904(puVar19[2],iVar12);
    }
  }
  else {
    piVar10 = (int *)puVar19[2];
    do {
      iVar12 = *piVar10;
      bVar22 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar22);
    *piVar10 = iVar12 + 1;
    if (iVar12 < 0) {
LAB_012100cc:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x12100cc);
      (*pcVar1)();
    }
    piVar20 = (int *)piVar10[0x50];
    if (piVar20 != (int *)0x0) {
      do {
        iVar12 = *piVar20;
        bVar22 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar22);
      *piVar20 = iVar12 + 1;
      if (iVar12 < 0) goto LAB_012100cc;
      local_7b4 = piVar10[0x51];
    }
    FUN_01bed4e2((uint)&local_148 | 4,&local_740,0x118);
    FUN_01bed4e2(&local_268,&local_148,0x11c);
    local_3b8 = 0;
    FUN_01bed4e2(auStack_3b4,&local_268,0x11c);
    local_3d8 = (int **)&PTR_LAB_01c22980;
    local_3e0 = (int **)0xcc;
    local_284 = local_7b4;
    puVar15[4] = ppiVar14;
    *puVar15 = 0;
    puVar15[1] = 0;
    puVar15[5] = iVar17;
    local_3dc = (int *)0x0;
    local_290 = 0;
    local_294 = 0;
    local_298 = 0;
    local_148 = (int *)0x0;
    local_3c8 = piVar10;
    local_288 = piVar20;
    iVar12 = FUN_01be5878(&local_148,0x20,0x160);
    piVar20 = local_148;
    if ((iVar12 != 0) || (local_148 == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x160);
    }
    FUN_01bed4e2(local_148,&local_3e0,0x160);
    iVar12 = FUN_01a89190(piVar10 + 0x14,piVar20,piVar20);
    local_3e0 = ppiVar14;
    local_3dc = (int *)iVar17;
    if (piVar10[0x4e] != 0) {
      (**(code **)(piVar10[0x4f] + 0x14))
                (piVar10[0x4e] + (*(int *)(piVar10[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_3e0);
    }
    if (iVar12 != 0) {
      local_148 = (int *)((uint)local_148 & 0xffffff00);
      local_3d8 = &local_148;
      local_3e0 = (int **)(piVar10 + 2);
      local_3dc = (int *)iVar12;
      FUN_019ee860(&local_3e0);
    }
  }
  *puVar19 = *puVar19 - 1;
  if (*piVar20 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar22 = (bool)hasExclusiveAccess(piVar20);
    if (!bVar22) goto LAB_0120fb98;
    *piVar20 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_0120fb98:
    (**(code **)(piVar20[2] + 0x10))(piVar20);
  }
  FUN_019bb7e0(0x1c,iVar8);
  local_780 = ppiVar11;
  local_77c = uVar9;
  FUN_019a66e4(&local_268,
               "/var/log/boserevent open/boser/boser-unix/src/telemetry.rs:74event open/boser/boser-unix/src/telemetry.rs:93event open/boser/boser-unix/src/telemetry.rs:84event open/boser/boser-unix/src/telemetry.rs:71event open/boser/boser-unix/src/telemetry.rs:83event open/boser/boser-unix/src/telemetry.rs:89event open/boser/boser-unix/src/telemetry.rs:96"
               ,0xe,"actions.log",0xb);
  FUN_019a66e4(&local_148,
               "/var/log/boserevent open/boser/boser-unix/src/telemetry.rs:74event open/boser/boser-unix/src/telemetry.rs:93event open/boser/boser-unix/src/telemetry.rs:84event open/boser/boser-unix/src/telemetry.rs:71event open/boser/boser-unix/src/telemetry.rs:83event open/boser/boser-unix/src/telemetry.rs:89event open/boser/boser-unix/src/telemetry.rs:96"
               ,0xe,
               "actions.log.1event open/boser/boser-unix/src/unix.rs:201open/boser/boser-unix/src/unix.rsevent open/boser/boser-unix/src/unix.rs:328event open/boser/boser-unix/src/unix.rs:331event open/boser/boser-unix/src/unix.rs:334event open/boser/boser-unix/src/unix.rs:325event open/boser/boser-unix/src/unix.rs:312event open/boser/boser-unix/src/unix.rs:341"
               ,0xd);
  local_4fc = (int *)CONCAT31(local_4fc._1_3_,1);
  local_500 = (int **)0x1ff;
  FUN_019a4dfc(&local_620,&local_500,
               "/var/log/boserevent open/boser/boser-unix/src/telemetry.rs:74event open/boser/boser-unix/src/telemetry.rs:93event open/boser/boser-unix/src/telemetry.rs:84event open/boser/boser-unix/src/telemetry.rs:71event open/boser/boser-unix/src/telemetry.rs:83event open/boser/boser-unix/src/telemetry.rs:89event open/boser/boser-unix/src/telemetry.rs:96"
               ,0xe);
  if (((uint)local_620 & 0xff) == 4) {
    uVar23 = thunk_FUN_01bee35a((uint)local_620 & 0xff,0x2c0);
    puVar19 = (uint *)((int)uVar23 + (int)((ulonglong)uVar23 >> 0x20));
    if ((char)puVar19[4] == '\0') {
      FUN_019ae6ac(&local_620);
      *puVar19 = (uint)local_620;
      puVar19[1] = local_61c;
      puVar19[2] = (uint)local_618;
      puVar19[3] = uStack_614;
      *(undefined1 *)(puVar19 + 4) = 1;
    }
    uVar18 = local_144;
    local_4f0 = (int **)*puVar19;
    uStack_4ec = puVar19[1];
    local_4e4 = puVar19[3];
    puVar21 = puVar19 + 2;
    ppiStack_4e8 = (int **)*puVar21;
    *puVar19 = (int)local_4f0 + 1;
    puVar19[1] = uStack_4ec + ((int **)0xfffffffe < local_4f0);
    local_500 = (int **)&DAT_0056d238;
    local_4fc = (int *)0x0;
    local_4f8 = (int **)0x0;
    uStack_4f4 = 0;
    FUN_01281b00(&local_620,local_144,local_140,&local_500);
    if (((char)local_620 == '\x04') || (((uint)local_620 & 0xff) == 4)) {
      FUN_01281b00(&local_620,local_264,local_260,&local_500);
      piVar10 = local_4fc;
      ppiVar14 = local_500;
      uVar4 = local_61c;
      if (((char)local_620 == '\x04') || (((uint)local_620 & 0xff) == 4)) {
        local_620 = local_4f8;
        local_61c = uStack_4f4;
        local_618 = local_4f0;
        uStack_614 = uStack_4ec;
        ppiStack_610 = ppiStack_4e8;
        uStack_60c = local_4e4;
        if ((char)puVar19[4] == '\0') {
          FUN_019ae6ac(&local_740);
          *puVar19 = (uint)local_740;
          puVar19[1] = uStack_73c;
          *puVar21 = (uint)ppiStack_738;
          puVar19[3] = uStack_734;
          *(undefined1 *)(puVar19 + 4) = 1;
        }
        local_4cc = puVar19[1];
        local_4d0 = *puVar19;
        local_4c4 = puVar19[3];
        *puVar19 = local_4d0 + 1;
        puVar19[1] = local_4cc + (0xfffffffe < local_4d0);
        local_4c8 = *puVar21;
        local_778 = local_268;
        local_774 = local_264;
        local_770 = local_260;
        local_760 = local_144;
        local_75c = local_140;
        local_3e0 = local_620;
        local_3dc = (int *)local_61c;
        local_3d8 = local_618;
        uStack_3d4 = uStack_614;
        ppiStack_3d0 = ppiStack_610;
        uStack_3cc = uStack_60c;
        local_3c8 = &DAT_0056d238;
        uStack_3c4 = 0;
        uStack_3c0 = 0;
        uStack_3bc = 0;
        if (local_148 != (int *)&DAT_80000000) {
          local_4f8 = local_620;
          uStack_4f4 = local_61c;
          puStack_4e0 = &DAT_0056d238;
          uStack_4dc = 0;
          uStack_4d8 = 0;
          uStack_4d4 = 0;
          local_4c0 = uVar4;
          local_4b0 = local_148;
          local_500 = ppiVar14;
          local_4fc = piVar10;
          FUN_019ac130(&local_3e0,0);
          local_740 = local_3e0;
          uStack_73c = (uint)local_3dc;
          ppiStack_738 = local_3d8;
          local_61c = 0;
          local_620 = (int **)0x0;
          local_618 = (int **)0x0;
          FUN_019ac248(&local_3e0,&local_740,&local_620);
          ppiVar7 = ppiStack_3d0;
          uVar18 = uStack_3d4;
          ppiVar14 = local_3d8;
          if (((uint)local_3e0 & 1) != 0) {
            local_3e0 = local_3d8;
            local_3d8 = ppiStack_3d0;
            local_3dc = (int *)uStack_3d4;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc("BUG: system time is before UNIX epoch",0x25,&local_3e0,&DAT_01c258e0,
                         &DAT_01c258f0);
          }
          FUN_019ac130(&local_3e0,1);
          ppiVar6 = local_3d8;
          piVar10 = local_3dc;
          ppiVar5 = local_3e0;
          local_380 = *param_2;
          uStack_37c = param_2[1];
          uStack_378 = param_2[2];
          uStack_374 = param_2[3];
          uStack_370 = param_2[4];
          uStack_36c = param_2[5];
          FUN_01bed4e2(&local_3e0,&local_500,0x60);
          param_1[0x24] = ppiVar6;
          lVar2 = ZEXT48(ppiVar14) * 1000 + CONCAT44(uVar18 * 1000,(uint)ppiVar7 / 1000000);
          param_1[0x21] = (int)((ulonglong)lVar2 >> 0x20);
          param_1[0x22] = ppiVar5;
          param_1[0x20] = (int)lVar2;
          param_1[0x23] = piVar10;
          FUN_01bed4e2(param_1,&local_3e0,0x78);
          param_1[0x1e] = ppiVar11;
          param_1[0x1f] = uVar9;
          return;
        }
        goto LAB_0120ffc8;
      }
    }
    piVar10 = (int *)local_61c;
    ppiVar14 = local_620;
    local_144 = uVar18;
    if (local_4fc != (int *)0x0) {
      iVar8 = (int)local_4fc * 0x10 + 0x10;
      if ((int)local_4fc + iVar8 != -5) {
        thunk_FUN_01be4678((int)local_500 - iVar8);
      }
    }
  }
  else {
    ppiVar14 = local_620;
    piVar10 = (int *)local_61c;
  }
  FUN_019bb7e0(local_148,local_144);
  FUN_019bb7e0(local_268,local_264);
LAB_0120ffc8:
  local_3e0 = ppiVar14;
  local_3dc = piVar10;
  uVar9 = FUN_007afd78(&local_3e0);
  param_1[0x24] = &DAT_3b9aca00;
  *param_1 = uVar9;
  FUN_0121045c(&local_780);
  FUN_00dee3c0(param_2);
  return;
}

