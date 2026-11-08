// FUN_011260b0 @ 011260b0 size=10052 calls_out=98 calls_in=1
// strings: Shutdown drain deadline exceeded; abandoning open connections | background task failed | boser::webopen/boser/boser/src/web.rsevent open/boser/boser/src/web.rs:330event open/boser/boser/src/web.rs:1017event open/boser/boser/src/web.rs:1033event open/boser/boser/src/web.rs:899event open/boser/boser/src/web.rs:1039event open/boser/boser/src/web.rs:173event open/boser/boser/src/web.rs:1105event open/boser/boser/src/config.rs:64 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Shutdown drain deadline exceeded; abandoning open connections

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x01c20e78) */

void FUN_011260b0(uint *param_1,int *****param_2,undefined4 *param_3,int param_4)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  byte bVar4;
  char cVar5;
  int *****pppppiVar6;
  int ***pppiVar7;
  int ***pppiVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int ****ppppiVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int ****ppppiVar17;
  int **ppiVar18;
  int ***pppiVar19;
  uint *puVar20;
  int *****pppppiVar21;
  int *****pppppiVar22;
  int ****ppppiVar23;
  int *****pppppiVar24;
  int ***pppiVar25;
  int *****pppppiVar26;
  uint uVar27;
  undefined4 *puVar28;
  int *****pppppiVar29;
  int ***pppiVar30;
  int ***pppiVar31;
  uint unaff_r11;
  bool in_ZR;
  bool bVar32;
  bool bVar33;
  undefined8 uVar34;
  int *****local_b68;
  int *****local_b5c;
  undefined *local_b58;
  int *****local_b50;
  int *****local_b40;
  int *****pppppiStack_b3c;
  int *****pppppiStack_b38;
  int *****pppppiStack_b34;
  int *****local_b30;
  int *****pppppiStack_b2c;
  int *****pppppiStack_b28;
  int *****pppppiStack_b24;
  int ***pppiStack_b20;
  int ***local_b1c;
  int ***pppiStack_b18;
  int ****ppppiStack_b14;
  int ***pppiStack_b10;
  undefined4 uStack_b0c;
  int *****local_b08;
  int *****pppppiStack_b04;
  int *****pppppiStack_b00;
  int *****local_afc;
  int *****pppppiStack_af8;
  int *****local_af4;
  int *****pppppiStack_af0;
  int *****pppppiStack_aec;
  int ***pppiStack_ae8;
  int ***pppiStack_ae4;
  int ***pppiStack_ae0;
  undefined4 local_ad8;
  int *****local_ad4;
  int *****local_ad0;
  int *****local_acc;
  undefined4 local_ac8;
  int *****local_ac4;
  int *****local_ac0;
  int *****local_abc;
  int ***local_ab8;
  int ***local_ab4;
  int ***local_ab0;
  int ****local_aac;
  int ***pppiStack_aa8;
  undefined4 uStack_aa4;
  char *pcStack_aa0;
  undefined4 uStack_a9c;
  undefined4 uStack_a98;
  undefined4 uStack_a94;
  int *****local_a90;
  uint local_a8c;
  undefined1 local_a88;
  undefined4 local_a84;
  int ****local_a78;
  undefined1 local_a71;
  undefined1 local_948;
  int ****local_930;
  int *****local_92c;
  int *****pppppiStack_928;
  int *****pppppiStack_924;
  int *****local_920;
  int *****pppppiStack_91c;
  int *****pppppiStack_918;
  int *****pppppiStack_914;
  undefined1 local_90c;
  int *****local_170;
  int *****local_16c;
  int *****local_168;
  int *****local_164;
  int *****local_160;
  int *****local_15c;
  int *****local_158;
  int *****local_150;
  short *****local_14c;
  int ****local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int *****local_130;
  short *****local_12c;
  int ****local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  uint local_114;
  int ****local_110;
  undefined4 local_10c;
  int *****local_108;
  int *****pppppiStack_104;
  int *****pppppiStack_100;
  int *****pppppiStack_fc;
  int *****pppppiStack_f8;
  short *****pppppsStack_f4;
  int ****ppppiStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  uint uStack_dc;
  int ***local_d8;
  int ****local_d4;
  undefined1 local_c8;
  int *****local_c0;
  int *****local_bc;
  int *****local_b8;
  int *****local_b0;
  int *****local_ac;
  int *****local_a8;
  int *****local_a4;
  int *****local_a0;
  int *****pppppiStack_9c;
  int *****pppppiStack_98;
  int *****pppppiStack_94;
  int *****local_58;
  int *****local_54;
  int *****local_50;
  int *****local_48;
  int *****local_44;
  undefined4 *local_40;
  int *****local_3c;
  int *****local_38;
  undefined4 *local_34;
  int *****local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined *)((int)param_2 + 0x5f)) {
  case 0:
    FUN_01bed93e(param_2 + 0x13,0,0x13);
    *(undefined1 *)((int)param_2 + 0x6d) = 0;
    param_2[8] = param_2[0x12];
    ppppiVar12 = param_2[0x12] + 2;
    param_2[0x1a] = ppppiVar12;
LAB_011261b4:
    *(undefined1 *)(param_2 + 0x1b) = 0;
    ppppiVar17 = (int ****)ppppiVar12[0x86];
    do {
      pppiVar19 = *ppppiVar17;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar17);
    } while (!bVar32);
    *ppppiVar17 = (int ***)((int)pppiVar19 + 1);
    if ((int)pppiVar19 < 0) goto LAB_011289a4;
    param_2[0x18] = ppppiVar17;
    ppppiVar12 = (int ****)ppppiVar12[0x88];
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + 1);
    if ((int)pppiVar19 < 0) goto LAB_011289a4;
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[0x19] = ppppiVar12;
    ppppiVar17 = param_2[0x18] + 2;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    param_2[0x1c] = ppppiVar17;
LAB_01126228:
    *(undefined1 *)((int)param_2 + 0x7d) = 0;
    param_2[0x1e] = ppppiVar17;
LAB_01126244:
    param_2[0x1d] = ppppiVar17;
    *(undefined1 *)(param_2 + 0x1f) = 0;
    ppppiVar12 = (int ****)ppppiVar17[1];
    ppppiVar17 = (int ****)ppppiVar17[2];
    *(undefined1 *)(param_2 + 0x2c) = 0;
    param_2[0x20] = ppppiVar12;
    param_2[0x21] = ppppiVar17;
LAB_01126268:
    *(undefined1 *)(param_2 + 0x2b) = 0;
    param_2[0x22] = ppppiVar12;
    param_2[0x23] = ppppiVar17;
LAB_01126278:
    param_2[0x24] = ppppiVar12;
    param_2[0x25] = ppppiVar17;
    FUN_019afae4(&local_130,ppppiVar12,ppppiVar17);
    param_2[0x26] = (int ****)local_130;
    param_2[0x27] = (int ****)local_12c;
    param_2[0x28] = local_128;
    *(undefined1 *)(param_2 + 0x2a) = 0;
switchD_01127b10_caseD_0:
    local_b08 = (int *****)param_2[0x26];
    pppppiStack_b04 = (int *****)param_2[0x27];
    pppppiStack_b00 = (int *****)param_2[0x28];
    ppppiVar12 = (int ****)FUN_00630bac(&local_b08,&DAT_01c230d0);
    param_2[0x29] = ppppiVar12;
LAB_011262e0:
    local_b50 = param_2 + 0x2c;
    pppppiVar29 = param_2 + 0x2a;
    pppppiVar21 = param_2 + 0x2b;
    FUN_00798728(&local_ad8,ppppiVar12,*param_3);
    if (local_ad8 == (int *****)0x2) {
      *(undefined1 *)pppppiVar29 = 3;
LAB_01126308:
      uVar3 = 3;
LAB_0112630c:
      *(undefined1 *)pppppiVar21 = 3;
      *(undefined1 *)local_b50 = 3;
LAB_01126560:
      local_b58 = (undefined *)((int)param_2 + 0x7d);
      *local_b58 = uVar3;
    }
    else {
      local_b0 = local_ad8;
      local_ac = local_ad4;
      local_a8 = local_ad0;
      local_a4 = local_acc;
      local_a0 = local_ac8;
      pppppiStack_9c = local_ac4;
      ppppiVar12 = param_2[0x29];
      if (*ppppiVar12 == (int ***)0xcc) {
        DataMemoryBarrier(0xb);
        bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
        if (!bVar32) goto LAB_0112645c;
        *ppppiVar12 = (int ***)0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_0112645c:
        (*(code *)ppppiVar12[2][4])();
      }
      if (local_b0 == (int *****)&DAT_00000001) {
        FUN_019a18a8(&local_ad8,0x28,"background task failed",0x16);
        pppppiVar6 = local_ad4;
        pppppiVar26 = local_ad8;
        FUN_01116bec(&local_b0);
        *(undefined1 *)pppppiVar29 = 1;
        pppppiVar29 = (int *****)&DAT_80000000;
      }
      else {
        *(undefined1 *)pppppiVar29 = 1;
        pppppiVar29 = local_ac;
        pppppiVar26 = local_a8;
        pppppiVar6 = local_a4;
        if (local_ac == (int *****)&DAT_80000001) goto LAB_01126308;
      }
      FUN_00b71be0(param_2 + 0x26);
      *(undefined1 *)pppppiVar21 = 1;
      if (pppppiVar29 != (int *****)&DAT_80000000) {
        uVar34 = FUN_00f86604(pppppiVar26,pppppiVar6);
        pppppiVar6 = (int *****)((ulonglong)uVar34 >> 0x20);
        FUN_019bb7e0(pppppiVar29,pppppiVar26);
        pppppiVar26 = (int *****)((uint)uVar34 ^ 5);
      }
      *(undefined1 *)local_b50 = 1;
      uVar3 = 3;
      if (((uint)pppppiVar26 & 0xff) == 6) goto LAB_01126560;
      if (((uint)pppppiVar26 & 0xff) == 5) {
        ppppiVar12 = param_2[0x1d] + 3;
        param_2[0x23] = ppppiVar12;
        *(undefined1 *)(param_2 + 0x21) = 5;
        *(undefined1 *)(param_2 + 0x1f) = 1;
        param_2[0x22] = (int ****)pppppiVar6;
        *(undefined1 *)(param_2 + 0x30) = 0;
        param_2[0x20] = (int ****)pppppiVar6;
LAB_011265d0:
        pppiVar19 = *ppppiVar12;
        *(undefined1 *)(param_2 + 0x2f) = 0;
        ppppiVar12 = (int ****)(pppiVar19 + 2);
        param_2[0x24] = ppppiVar12;
LAB_011265e8:
        param_2[0x25] = ppppiVar12;
        *(undefined1 *)(param_2 + 0x2e) = 0;
LAB_011265fc:
        ppppiVar17 = (int ****)*ppppiVar12;
        *(undefined1 *)(param_2 + 0x2d) = 0;
        param_2[0x29] = (int ****)0x0;
        param_2[0x2a] = (int ****)0x0;
        param_2[0x2b] = ppppiVar17;
        param_2[0x2c] = ppppiVar17;
        param_2[0x26] = ppppiVar12 + 1;
        param_2[0x27] = (int ****)0x0;
        goto switchD_01127b48_caseD_3;
      }
      param_2[0x21] = (int ****)pppppiVar26;
      param_2[0x22] = (int ****)pppppiVar6;
      ppppiVar12 = param_2[0x21];
      *(undefined2 *)(param_2 + 0x1f) = 0x100;
      if (((uint)ppppiVar12 & 0xff) != 6) {
        ppppiVar17 = param_2[0x22];
        goto LAB_01126798;
      }
    }
    local_b5c = param_2 + 0x31;
    uVar3 = 3;
    *(undefined1 *)local_b5c = 3;
LAB_01126574:
    *(undefined1 *)((int)param_2 + 0x6d) = uVar3;
    *(undefined1 *)param_1 = 5;
    uVar3 = 3;
    goto LAB_01127784;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1fe3c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1fe3c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined *)((int)param_2 + 0x6d)) {
    case 0:
      ppppiVar12 = param_2[0x1a];
      goto LAB_011261b4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1fe1c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1fe1c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x31)) {
      case 0:
        ppppiVar17 = param_2[0x1c];
        goto LAB_01126228;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20054);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c20054);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined *)((int)param_2 + 0x7d)) {
      case 0:
        ppppiVar17 = param_2[0x1e];
        goto LAB_01126244;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20064);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c20064);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x2c)) {
        case 0:
          ppppiVar12 = param_2[0x20];
          ppppiVar17 = param_2[0x21];
          goto LAB_01126268;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c20044);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c20044);
        }
        puVar20 = &switchD_01127a90::switchdataD_01127a94;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(byte *)(param_2 + 0x2b)) {
        case 0:
          ppppiVar12 = param_2[0x22];
          ppppiVar17 = param_2[0x23];
          goto LAB_01126278;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c2044c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c2044c);
        case 4:
          bVar32 = false;
          if (in_ZR) {
            puVar20 = (uint *)((int)param_2 +
                              (0x60 - (unaff_r11 >>
                                      ((&switchD_01127a90::switchdataD_01127a94)
                                       [*(byte *)(param_2 + 0x2b)] & 0xff))));
            bVar32 = puVar20 == (uint *)0x0;
          }
          bVar33 = false;
          if (bVar32) {
            param_4 = (int)param_3 -
                      ((uint)((int)param_2 + 0x36) >> 0x1f | (int)((int)param_2 + 0x36) * 2);
            bVar33 = param_4 == 0;
          }
          if (!bVar33) {
                    /* WARNING: Bad instruction - Truncating control flow here */
            halt_baddata();
          }
                    /* WARNING: Could not recover jumptable at 0x01c20e74. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)((int)param_3 - ((int)(param_2 + 0x1d) >> 10)))(0,puVar20,param_2 + 1,param_4);
          return;
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x2a)) {
        case 0:
          goto switchD_01127b10_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c230e0);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c230e0);
        case 3:
          ppppiVar12 = param_2[0x29];
        }
        goto LAB_011262e0;
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x30)) {
      case 0:
        ppppiVar12 = param_2[0x23];
        goto LAB_011265d0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f1a0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f1a0);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x2f)) {
      case 0:
        ppppiVar12 = param_2[0x24];
        goto LAB_011265e8;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b400);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b400);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x2e)) {
      case 0:
        ppppiVar12 = param_2[0x25];
        goto LAB_011265fc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2b410);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2b410);
      }
switchD_01127b48_caseD_3:
      local_b50 = param_2 + 0x30;
      pppppiVar21 = param_2 + 0x2f;
      local_b58 = (undefined *)((int)param_2 + 0x7d);
      bVar4 = FUN_019f9bc4(param_2 + 0x26,param_3);
      if (bVar4 == 2) {
        *(undefined1 *)(param_2 + 0x2e) = 3;
        uVar3 = 4;
        goto LAB_0112630c;
      }
      FUN_0193c3cc(param_2 + 0x26);
      if ((bVar4 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2b420);
      }
      ppppiVar12 = param_2[0x25];
      pppiVar31 = *ppppiVar12;
      *(undefined1 *)(param_2 + 0x2e) = 1;
      *(undefined1 *)pppppiVar21 = 1;
      *(undefined1 *)local_b50 = 1;
      pppiVar19 = ppppiVar12[6];
      DataMemoryBarrier(0xb);
      do {
        ppiVar18 = *pppiVar19;
        bVar32 = (bool)hasExclusiveAccess(pppiVar19);
      } while (!bVar32);
      *pppiVar19 = (int **)((int)ppiVar18 + -1);
      if (ppiVar18 == (int **)0x1) {
        DataMemoryBarrier(0xb);
        FUN_019db20c(ppppiVar12[6]);
      }
      ppppiVar12[6] = (int ***)param_2[0x20];
      ppppiVar17 = (int ****)0x0;
      *(undefined1 *)(param_2 + 0x1f) = 0;
      FUN_019f8c54(ppppiVar12 + 1,pppiVar31);
      ppppiVar12 = (int ****)0x5;
      *local_b58 = 1;
LAB_01126798:
      local_b68 = param_2 + 0x1d;
      FUN_005fbd44(local_b68);
      if (((uint)ppppiVar12 & 0xff) == 4) {
        FUN_01129bd4(ppppiVar17);
      }
      else if (((uint)ppppiVar12 & 0xff) != 5) {
        FUN_00b9391c(ppppiVar12,ppppiVar17);
      }
      *(undefined1 *)(param_2 + 0x31) = 1;
      *(undefined1 *)((int)param_2 + 0x3b3) = 0;
      param_2[0xeb] = param_2[0x19] + 2;
    }
    pppppiVar29 = param_2 + 0x18;
    pppppiVar21 = param_2 + 0x1c;
    iVar9 = FUN_01129fe8(pppppiVar21,param_3);
    uVar3 = 4;
    if (iVar9 != 0) goto LAB_01126574;
    FUN_01129c34(pppppiVar21);
    local_a78 = param_2[0x19];
    *(undefined1 *)(param_2 + 0x1b) = 0;
    local_a71 = 0;
    piVar11 = (int *)FUN_010a564c(&local_ad8,&DAT_01c1fe2c);
    if (*piVar11 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar32 = (bool)hasExclusiveAccess(piVar11);
      if (!bVar32) goto LAB_01126868;
      *piVar11 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01126868:
      (**(code **)(piVar11[2] + 0x10))();
    }
    ppppiVar12 = param_2[0x18];
    *(undefined1 *)(param_2 + 0x1b) = 0;
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01180e54(*pppppiVar29);
    }
    *(undefined1 *)((int)param_2 + 0x6d) = 1;
    FUN_01129aa4(pppppiVar29);
    pppiVar19 = param_2[8][0x8e];
    do {
      ppiVar18 = *pppiVar19;
      bVar32 = (bool)hasExclusiveAccess(pppiVar19);
    } while (!bVar32);
    *pppiVar19 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    ppppiVar17 = param_2[8];
    ppppiVar12 = (int ****)ppppiVar17[2];
    do {
      pppiVar31 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
    if ((int)pppiVar31 < 0) goto LAB_011289a4;
    ppppiVar23 = param_2[8];
    pppiStack_aa8 = ppppiVar17[3];
    local_ad0 = (int *****)ppppiVar23[99];
    local_acc = (int *****)ppppiVar23[100];
    local_ac8 = (int *****)ppppiVar23[0x65];
    local_ac4 = (int *****)ppppiVar23[0x66];
    local_ac0 = (int *****)ppppiVar23[0x67];
    local_abc = (int *****)ppppiVar23[0x68];
    local_ab8 = ppppiVar23[0x69];
    local_ab4 = ppppiVar23[0x6a];
    local_ad4 = (int *****)&DAT_00000001;
    local_ad8 = (int *****)&DAT_00000001;
    local_ab0 = pppiVar19;
    local_aac = ppppiVar12;
    ppppiVar12 = (int ****)thunk_FUN_01be5118(0x34);
    if (ppppiVar12 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x34);
    }
    *ppppiVar12 = (int ***)local_ad8;
    ppppiVar12[1] = (int ***)local_ad4;
    ppppiVar12[2] = (int ***)local_ad0;
    ppppiVar12[3] = (int ***)local_acc;
    ppppiVar12[4] = (int ***)local_ac8;
    ppppiVar12[5] = (int ***)local_ac4;
    ppppiVar12[6] = (int ***)local_ac0;
    ppppiVar12[7] = (int ***)local_abc;
    ppppiVar12[8] = local_ab8;
    ppppiVar12[9] = local_ab4;
    ppppiVar12[10] = local_ab0;
    ppppiVar12[0xb] = (int ***)local_aac;
    ppppiVar12[0xc] = pppiStack_aa8;
    param_2[9] = ppppiVar12;
    ppppiVar12 = (int ****)FUN_01a3b664();
    pppppiVar26 = (int *****)param_2[9];
    param_2[10] = ppppiVar12;
    do {
      ppppiVar12 = *pppppiVar26;
      bVar32 = (bool)hasExclusiveAccess(pppppiVar26);
    } while (!bVar32);
    *pppppiVar26 = (int ****)((int)ppppiVar12 + 1);
    if ((int)ppppiVar12 < 0) goto LAB_011289a4;
    pppppiVar6 = (int *****)FUN_01a3c2e0(param_2[10]);
    pppppiVar22 = (int *****)param_2[8][0x89];
    do {
      ppppiVar12 = *pppppiVar22;
      bVar32 = (bool)hasExclusiveAccess(pppppiVar22);
    } while (!bVar32);
    *pppppiVar22 = (int ****)((int)ppppiVar12 + 1);
    if ((int)ppppiVar12 < 0) goto LAB_011289a4;
    pppppiVar24 = (int *****)param_2[8][0x8a];
    do {
      ppppiVar12 = *pppppiVar24;
      bVar32 = (bool)hasExclusiveAccess(pppppiVar24);
    } while (!bVar32);
    *pppppiVar24 = (int ****)((int)ppppiVar12 + 1);
    if ((int)ppppiVar12 < 0) goto LAB_011289a4;
    local_abc = (int *****)((uint)local_abc & 0xffffff00);
    local_ad4 = (int *****)&DAT_01c1fe4c;
    local_ad8 = pppppiVar26;
    local_ad0 = pppppiVar6;
    local_acc = pppppiVar22;
    local_ac8 = pppppiVar24;
    ppppiVar12 = (int ****)FUN_010a4f38(&local_ad8,&DAT_01c1fe5c);
    param_2[0xb] = ppppiVar12;
    ppppiVar12 = param_2[8];
    *(undefined1 *)((int)param_2 + 0x51) = 1;
    pppiVar19 = ppppiVar12[4];
    do {
      ppiVar18 = *pppiVar19;
      bVar32 = (bool)hasExclusiveAccess(pppiVar19);
    } while (!bVar32);
    *pppiVar19 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    pppiVar31 = ppppiVar12[5];
    pppiVar25 = param_2[8][0x89];
    do {
      ppiVar18 = *pppiVar25;
      bVar32 = (bool)hasExclusiveAccess(pppiVar25);
    } while (!bVar32);
    *pppiVar25 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    pppiVar7 = param_2[8][0x8e];
    do {
      ppiVar18 = *pppiVar7;
      bVar32 = (bool)hasExclusiveAccess(pppiVar7);
    } while (!bVar32);
    *pppiVar7 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    FUN_00f26590(&local_b40,pppiVar19,pppiVar31,pppiVar25,pppiVar7);
    local_ad8 = local_b40;
    local_ad4 = pppppiStack_b3c;
    local_ad0 = pppppiStack_b38;
    local_acc = pppppiStack_b34;
    local_ac8 = local_b30;
    local_ac4 = pppppiStack_b2c;
    local_ac0 = pppppiStack_b28;
    local_abc = pppppiStack_b24;
    local_ab8 = pppiStack_b20;
    local_ab4 = local_b1c;
    local_ab0 = pppiStack_b18;
    local_aac = ppppiStack_b14;
    pppiStack_aa8 = pppiStack_b10;
    uStack_aa4 = uStack_b0c;
    local_948 = 0;
    piVar11 = (int *)FUN_010a4280(&local_ad8,&DAT_01c1fe6c);
    if (*piVar11 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar32 = (bool)hasExclusiveAccess(piVar11);
      if (!bVar32) goto LAB_01126b04;
      *piVar11 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01126b04:
      (**(code **)(piVar11[2] + 0x10))();
    }
    ppppiVar12 = (int ****)param_2[8][0x8b];
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + 1);
    if ((int)pppiVar19 < 0) goto LAB_011289a4;
    param_2[0xc] = ppppiVar12;
    ppiVar18 = param_2[8][0x8a][0xf];
    do {
      piVar11 = *ppiVar18;
      bVar32 = (bool)hasExclusiveAccess(ppiVar18);
    } while (!bVar32);
    *ppiVar18 = (int *)((int)piVar11 + 1);
    if ((int)piVar11 < 0) goto LAB_011289a4;
    *(undefined1 *)((int)param_2 + 0x5e) = 1;
    ppppiVar12 = param_2[8];
    local_b0 = (int *****)ppppiVar12[0x53];
    local_ac = (int *****)ppppiVar12[0x54];
    local_a8 = (int *****)ppppiVar12[0x55];
    local_a4 = (int *****)ppppiVar12[0x56];
    local_a0 = (int *****)ppppiVar12[0x57];
    pppppiStack_9c = (int *****)ppppiVar12[0x58];
    pppppiStack_98 = (int *****)ppppiVar12[0x59];
    pppppiStack_94 = (int *****)ppppiVar12[0x5a];
    *(undefined1 *)((int)param_2 + 0x5e) = 0;
    pppiVar19 = (int ***)thunk_FUN_01be5118(4);
    if (pppiVar19 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    ppppiVar12 = param_2[0xc];
    *pppiVar19 = ppiVar18;
    do {
      pppiVar31 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
    if ((int)pppiVar31 < 0) goto LAB_011289a4;
    FUN_0068c2dc(&local_b08,param_2[8][0x92] + 2);
    local_ad8 = local_b0;
    local_ad4 = local_ac;
    local_ad0 = local_a8;
    local_acc = local_a4;
    local_ac8 = local_a0;
    local_ac4 = pppppiStack_9c;
    local_ac0 = pppppiStack_98;
    local_abc = pppppiStack_94;
    local_ab4 = (int ***)&DAT_01c1fe7c;
    local_92c = local_b08;
    pppppiStack_928 = pppppiStack_b04;
    pppppiStack_924 = pppppiStack_b00;
    local_920 = local_afc;
    pppppiStack_91c = pppppiStack_af8;
    pppppiStack_918 = local_af4;
    pppppiStack_914 = pppppiStack_af0;
    local_90c = 0;
    local_ab8 = pppiVar19;
    local_930 = ppppiVar12;
    piVar11 = (int *)FUN_010a3490(&local_ad8,&DAT_01c1fe94);
    if (*piVar11 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar32 = (bool)hasExclusiveAccess(piVar11);
      if (!bVar32) goto LAB_01126c80;
      *piVar11 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01126c80:
      (**(code **)(piVar11[2] + 0x10))();
    }
    ppppiVar12 = param_2[8];
    ppppiVar17 = param_2[0xc];
    do {
      pppiVar19 = *ppppiVar17;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar17);
    } while (!bVar32);
    *ppppiVar17 = (int ***)((int)pppiVar19 + 1);
    if ((int)pppiVar19 < 0) goto LAB_011289a4;
    FUN_00f9db5c(&local_ad8,ppppiVar12 + 2);
    if (local_ad8 == (int *****)&DAT_80000000) {
      local_130 = local_ad4;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: overlapping keys between settings providers",0x30,&local_130,&DAT_01c1f92c,
                   &DAT_01c1fea4);
    }
    local_b08 = local_ad8;
    pppppiStack_b04 = local_ad4;
    pppppiStack_b00 = local_ad0;
    FUN_01bed4e2((uint)&local_b0 | 3,&local_b08,0xc);
    local_ac8 = (int *****)((uint)local_ac8 & 0xffffff00);
    local_acc = (int *****)0x0;
    local_ad0 = (int *****)0x0;
    local_ad4 = (int *****)&DAT_00000001;
    local_ad8 = (int *****)&DAT_00000001;
    FUN_01bed4e2((int)&local_ac8 + 1,&local_b0,0xf);
    ppppiVar12 = (int ****)thunk_FUN_01be5118(0x20);
    if (ppppiVar12 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *ppppiVar12 = (int ***)local_ad8;
    ppppiVar12[1] = (int ***)local_ad4;
    ppppiVar12[2] = (int ***)local_ad0;
    ppppiVar12[3] = (int ***)local_acc;
    ppppiVar12[4] = (int ***)local_ac8;
    ppppiVar12[5] = (int ***)local_ac4;
    ppppiVar12[6] = (int ***)local_ac0;
    ppppiVar12[7] = (int ***)local_abc;
    param_2[0xd] = ppppiVar12;
    ppppiVar12 = param_2[8];
    *(undefined1 *)((int)param_2 + 0x4e) = 1;
    local_b0 = (int *****)ppppiVar12[0x5b];
    local_ac = (int *****)ppppiVar12[0x5c];
    local_a8 = (int *****)ppppiVar12[0x5d];
    local_a4 = (int *****)ppppiVar12[0x5e];
    local_a0 = (int *****)ppppiVar12[0x5f];
    pppppiStack_9c = (int *****)ppppiVar12[0x60];
    pppppiStack_98 = (int *****)ppppiVar12[0x61];
    pppppiStack_94 = (int *****)ppppiVar12[0x62];
    pppiVar19 = ppppiVar12[0x89];
    do {
      ppiVar18 = *pppiVar19;
      bVar32 = (bool)hasExclusiveAccess(pppiVar19);
    } while (!bVar32);
    *pppiVar19 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    pppiVar31 = param_2[8][0x8a];
    do {
      ppiVar18 = *pppiVar31;
      bVar32 = (bool)hasExclusiveAccess(pppiVar31);
    } while (!bVar32);
    *pppiVar31 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    pppiVar25 = param_2[8][0x86];
    do {
      ppiVar18 = *pppiVar25;
      bVar32 = (bool)hasExclusiveAccess(pppiVar25);
    } while (!bVar32);
    *pppiVar25 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    pppiVar7 = param_2[8][0x8e];
    do {
      ppiVar18 = *pppiVar7;
      bVar32 = (bool)hasExclusiveAccess(pppiVar7);
    } while (!bVar32);
    *pppiVar7 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    pppiVar30 = param_2[8][0x90];
    do {
      ppiVar18 = *pppiVar30;
      bVar32 = (bool)hasExclusiveAccess(pppiVar30);
    } while (!bVar32);
    *pppiVar30 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_011289a4;
    ppppiVar12 = param_2[0xd];
    do {
      pppiVar8 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar8 + 1);
    if ((int)pppiVar8 < 0) goto LAB_011289a4;
    FUN_0068c2dc(&local_b08,param_2[8][0x92] + 2);
    FUN_005ff020(&local_ad8,&local_b0,pppiVar19,pppiVar31,pppiVar25,pppiVar7,pppiVar30,ppppiVar12,
                 &local_b08);
    *(undefined1 *)((int)param_2 + 0x4d) = 1;
    local_b08 = local_ad8;
    pppppiStack_b04 = local_ad4;
    pppppiStack_b00 = local_ad0;
    local_afc = local_acc;
    pppppiStack_af8 = local_ac8;
    local_af4 = local_ac4;
    pppppiStack_af0 = local_ac0;
    pppppiStack_aec = local_abc;
    pppiStack_ae8 = local_ab8;
    pppiStack_ae4 = local_ab4;
    pppiStack_ae0 = local_ab0;
    param_2[0x19] = local_aac;
    *(undefined1 *)(param_2 + 0x14) = 1;
    pppppiVar26 = (int *****)param_2[8][0x90];
    do {
      ppppiVar12 = *pppppiVar26;
      bVar32 = (bool)hasExclusiveAccess(pppppiVar26);
    } while (!bVar32);
    *pppppiVar26 = (int ****)((int)ppppiVar12 + 1);
    if ((int)ppppiVar12 < 0) goto LAB_011289a4;
    local_ad4._0_2_ = (ushort)(byte)local_ad4;
    local_ad8 = pppppiVar26;
    piVar11 = (int *)FUN_010a1a8c(&local_ad8,&DAT_01c1feb4);
    if (*piVar11 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar32 = (bool)hasExclusiveAccess(piVar11);
      if (!bVar32) goto LAB_01126f00;
      *piVar11 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01126f00:
      (**(code **)(piVar11[2] + 0x10))();
    }
    FUN_019abf38(&local_ad8,param_2[8][0x91]);
    if ((short)local_ad8 == 2) {
      uVar27 = (uint)local_ad4 & 0xff;
      pppppiVar29 = (int *****)((uint)local_ad4 >> 8 | (int)local_ad0 << 0x18);
      pppppiVar21 = (int *****)((uint)local_ad0 >> 8);
    }
    else {
      local_b0 = local_acc;
      local_ac = local_ac8;
      local_a8 = local_ac4;
      local_a4 = local_ac0;
      local_a0 = local_abc;
      *(short *)param_2 = (short)local_ad8;
      param_2[1] = (int ****)local_ad4;
      param_2[2] = (int ****)local_ad0;
      *(undefined2 *)((int)param_2 + 2) = local_ad8._2_2_;
      param_2[3] = (int ****)local_acc;
      param_2[4] = (int ****)local_ac8;
      param_2[5] = (int ****)local_ac4;
      param_2[6] = (int ****)local_ac0;
      param_2[7] = (int ****)local_abc;
      FUN_019ac0e8(&local_ad8,param_2[8][0x91]);
      if (((char)local_ad8 == '\x04') || (uVar27 = (uint)local_ad8 & 0xff, uVar27 == 4)) {
        param_2[0xe] = (int ****)local_ad4;
        *(undefined1 *)(param_2 + 0x13) = 1;
        FUN_019ac090(&local_ad8);
        if (((char)local_ad8 == '\x04') || (uVar27 = (uint)local_ad8 & 0xff, uVar27 == 4)) {
          *(undefined1 *)(param_2 + 0x13) = 0;
          FUN_019dd6e8(&local_ad8,param_2[0xe],&DAT_01c1fec4);
          if (local_ad8 != (int *****)0x2) {
            *(undefined1 *)((int)param_2 + 0x5d) = 1;
            local_16c = local_ad4;
            local_164 = local_acc;
            local_170 = local_ad8;
            local_168 = local_ad0;
            if ((DAT_01d50f88 < 3) &&
               ((DAT_01d4c7e4 - 1 < 2 ||
                ((DAT_01d4c7e4 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c7dc), cVar5 != '\0')))))) {
              iVar9 = FUN_01aaa278(DAT_01d4c7dc);
              if (iVar9 == 0) goto LAB_01127b74;
              local_128 = (int ****)(DAT_01d4c7dc + 0x1c);
              if (*(int ******)(DAT_01d4c7dc + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1fed4);
              }
              local_ad0 = *(int ******)(DAT_01d4c7dc + 0x24);
              local_acc = *(int ******)(DAT_01d4c7dc + 0x28);
              local_ac = (int *****)&local_3c;
              local_12c = (short *****)&DAT_00000001;
              local_38 = (int *****)&local_150;
              local_150 = (int *****)&local_48;
              local_ac8 = (int *****)0x0;
              local_a8 = (int *****)&DAT_01d2ea4c;
              local_3c = (int *****)&DAT_005711b5;
              local_14c = (short *****)&LAB_015fb8f8;
              local_ad8 = (int *****)*local_128;
              local_ad4 = *(int ******)(DAT_01d4c7dc + 0x20);
              local_130 = (int *****)&local_b0;
              local_b0 = (int *****)&local_ad8;
              local_48 = param_2;
              FUN_0060c68c(&local_130);
            }
            else {
LAB_01127b74:
              iVar9 = DAT_01d4c7dc;
              if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
                local_15c = *(int ******)(DAT_01d4c7dc + 0x14);
                local_158 = *(int ******)(DAT_01d4c7dc + 0x18);
                local_160 = (int *****)&DAT_00000003;
                DataMemoryBarrier(0xb);
                puVar28 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar28 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar10 = (*(code *)puVar28[3])(pcVar2,&local_160);
                if (iVar10 != 0) {
                  local_148 = (int ****)(DAT_01d4c7dc + 0x1c);
                  if (*(int ******)(DAT_01d4c7dc + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1fed4);
                  }
                  local_ad0 = *(int ******)(DAT_01d4c7dc + 0x24);
                  local_130 = (int *****)&local_ad8;
                  local_acc = *(int ******)(DAT_01d4c7dc + 0x28);
                  local_12c = (short *****)&local_48;
                  local_150 = (int *****)&local_130;
                  local_128 = (int ****)&DAT_01d2ea4c;
                  local_14c = (short *****)&DAT_00000001;
                  local_44 = (int *****)&local_3c;
                  local_ac8 = (int *****)0x0;
                  local_48 = (int *****)&DAT_005711b5;
                  local_38 = (int *****)&LAB_015fb8f8;
                  local_3c = (int *****)&local_30;
                  local_b0 = local_160;
                  local_ac = local_15c;
                  local_a8 = local_158;
                  local_ad8 = (int *****)*local_148;
                  local_ad4 = *(int ******)(DAT_01d4c7dc + 0x20);
                  local_30 = param_2;
                  FUN_01aaa328(iVar9,pcVar2,puVar28[4],&local_b0,&local_150);
                }
              }
            }
            ppppiVar12 = (int ****)param_2[8][0x86];
            do {
              pppiVar19 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar19 + 1);
            if ((int)pppiVar19 < 0) {
LAB_011289a4:
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x11289a4);
              (*pcVar1)();
            }
            *(undefined1 *)(param_2 + 0x17) = 1;
            param_2[0xf] = ppppiVar12;
            pppiVar19 = param_2[8][0x89];
            do {
              ppiVar18 = *pppiVar19;
              bVar32 = (bool)hasExclusiveAccess(pppiVar19);
            } while (!bVar32);
            *pppiVar19 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            *(undefined1 *)((int)param_2 + 0x5b) = 1;
            *(undefined1 *)((int)param_2 + 0x4d) = 0;
            local_ad8 = local_b08;
            local_ad4 = pppppiStack_b04;
            local_ad0 = pppppiStack_b00;
            local_acc = local_afc;
            local_ac8 = pppppiStack_af8;
            local_ac4 = local_af4;
            local_ac0 = pppppiStack_af0;
            local_abc = pppppiStack_aec;
            local_ab8 = pppiStack_ae8;
            local_ab4 = pppiStack_ae4;
            local_ab0 = pppiStack_ae0;
            pppiVar31 = param_2[8][0x89];
            do {
              ppiVar18 = *pppiVar31;
              bVar32 = (bool)hasExclusiveAccess(pppiVar31);
            } while (!bVar32);
            *pppiVar31 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            pppiVar25 = param_2[8][0x8a];
            do {
              ppiVar18 = *pppiVar25;
              bVar32 = (bool)hasExclusiveAccess(pppiVar25);
            } while (!bVar32);
            *pppiVar25 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            pppiVar7 = param_2[8][0x86];
            do {
              ppiVar18 = *pppiVar7;
              bVar32 = (bool)hasExclusiveAccess(pppiVar7);
            } while (!bVar32);
            *pppiVar7 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            FUN_0068c2dc(&local_b0,param_2[8][0x92] + 2);
            ppppiVar12 = param_2[8];
            if (ppppiVar12[0x83] == (int ***)0x80000000) {
              local_130 = (int *****)&DAT_80000000;
            }
            else {
              FUN_006666fc(&local_130,ppppiVar12[0x84],ppppiVar12[0x85]);
            }
            uVar13 = FUN_010d7ae8(&local_b08,pppiVar31,pppiVar25,pppiVar7,&local_b0,&local_130);
            *(undefined1 *)((int)param_2 + 0x5a) = 1;
            uVar14 = FUN_01a64fe8();
            ppppiVar12 = param_2[8];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            uVar15 = FUN_00fa2388();
            uVar14 = FUN_01004b24(uVar14,uVar15,&DAT_01c1fee4);
            ppppiVar12 = param_2[8];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            uVar15 = FUN_00f9edf4();
            uVar14 = FUN_01004b24(uVar14,uVar15,&DAT_01c1fef4);
            ppppiVar12 = param_2[8];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            uVar15 = FUN_00f9e5e8();
            uVar14 = FUN_01004b24(uVar14,uVar15,&DAT_01c1ff04);
            uVar15 = FUN_00f9e044(param_2[8] + 2);
            uVar14 = FUN_01004b24(uVar14,uVar15,&DAT_01c1ff14);
            uVar15 = FUN_00f9eb80(param_2[8] + 2);
            uVar14 = FUN_01004b24(uVar14,uVar15,&DAT_01c1ff24);
            uVar15 = FUN_00f9e1b4(param_2[8] + 2);
            uVar15 = FUN_00ff4dbc(uVar15,&DAT_01c1ff34);
            FUN_01004b24(uVar14,uVar15,&DAT_01c1ff44);
            ppppiVar12 = param_2[0xf];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            FUN_0100252c();
            ppppiVar12 = param_2[0xf];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            FUN_0100132c();
            uVar14 = FUN_00fff9d4();
            local_ad8 = (int *****)0x0;
            local_ad4 = (int *****)0x56a548;
            local_ad0 = (int *****)0x10;
            local_acc = (int *****)0x2;
            local_ac8 = (int *****)0x0;
            local_ac4 = (int *****)0x0;
            local_ac0 = (int *****)CONCAT22(local_ac0._2_2_,0x20);
            local_abc = (int *****)0x0;
            local_ab8 = (int ***)0x531229;
            local_ab4 = (int ***)0x6;
            local_ab0 = (int ***)0x0;
            local_aac = (int ****)0x53122f;
            pppiStack_aa8 = (int ***)0xd;
            uStack_aa4 = 0;
            pcStack_aa0 = "text/event-stream";
            uStack_a9c = 0x11;
            uStack_a98 = 2;
            uStack_a94 = 0;
            local_a90 = (int *****)0x0;
            local_a8c = 2;
            local_a84 = 0x1010101;
            uVar14 = FUN_00ff9ca8(uVar14,&local_ad8);
            FUN_0068c2dc(&local_b0,param_2[8][0x92] + 2);
            local_ad8 = local_b0;
            local_ad4 = local_ac;
            local_ad0 = local_a8;
            local_acc = local_a4;
            local_ac8 = local_a0;
            local_ac4 = pppppiStack_9c;
            local_ac0 = pppppiStack_98;
            local_abc = (int *****)CONCAT31(local_abc._1_3_,1);
            uVar14 = FUN_00ffcdb4(uVar14,&local_ad8);
            *(undefined1 *)((int)param_2 + 0x59) = 1;
            uVar15 = FUN_01a64fe8();
            ppppiVar12 = param_2[8];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            FUN_0068c2dc(&local_ad8,param_2[8][0x92] + 2);
            uVar16 = FUN_00f9ef84(ppppiVar12,&local_ad8);
            uVar15 = FUN_01004b24(uVar15,uVar16,&DAT_01c1ff54);
            ppppiVar12 = param_2[8];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            FUN_0068c2dc(&local_ad8,param_2[8][0x92] + 2);
            uVar16 = FUN_00f9e9f0(ppppiVar12,&local_ad8);
            uVar15 = FUN_01004b24(uVar15,uVar16,&DAT_01c1ff64);
            ppppiVar12 = param_2[8];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            FUN_0068c2dc(&local_ad8,param_2[8][0x92] + 2);
            uVar16 = FUN_00f9d8e8(ppppiVar12,&local_ad8);
            FUN_01004b24(uVar15,uVar16,&DAT_01c1ff74);
            ppppiVar12 = param_2[0xf];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            FUN_0100252c();
            ppppiVar12 = param_2[0xf];
            do {
              pppiVar31 = *ppppiVar12;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            } while (!bVar32);
            *ppppiVar12 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            FUN_0100132c();
            uVar15 = FUN_00fff9d4();
            local_ad8 = (int *****)0x0;
            local_ad4 = (int *****)0x56a548;
            local_ad0 = (int *****)&DAT_00000010;
            local_acc = (int *****)0x2;
            local_ac8 = (int *****)0x0;
            local_ac4 = (int *****)0x0;
            local_ac0 = (int *****)CONCAT22(local_ac0._2_2_,0x20);
            local_abc = (int *****)0x0;
            local_ab8 = (int ***)0x531229;
            local_ab4 = (int ***)0x6;
            local_ab0 = (int ***)0x0;
            local_aac = (int ****)0x53122f;
            pppiStack_aa8 = (int ***)0xd;
            uStack_aa4 = 0;
            pcStack_aa0 = "text/event-stream";
            uStack_a9c = 0x11;
            uStack_a98 = 2;
            uStack_a94 = 0;
            local_a90 = (int *****)0x0;
            local_a8c = 2;
            local_a84 = 0x1010101;
            uVar15 = FUN_00ff9ca8(uVar15,&local_ad8);
            *(undefined1 *)((int)param_2 + 0x59) = 0;
            uVar14 = FUN_01004b24(uVar14,uVar15,&DAT_01c1ff84);
            *(undefined1 *)((int)param_2 + 0x5a) = 0;
            ppppiVar12 = (int ****)FUN_01004b24(uVar14,uVar13,&DAT_01c1ff94);
            *(undefined1 *)(param_2 + 0x16) = 1;
            pppiVar31 = param_2[8][0x89];
            do {
              ppiVar18 = *pppiVar31;
              bVar32 = (bool)hasExclusiveAccess(pppiVar31);
            } while (!bVar32);
            *pppiVar31 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            pppiVar25 = param_2[8][0x8a];
            do {
              ppiVar18 = *pppiVar25;
              bVar32 = (bool)hasExclusiveAccess(pppiVar25);
            } while (!bVar32);
            *pppiVar25 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            pppiVar7 = param_2[8][0x86];
            do {
              ppiVar18 = *pppiVar7;
              bVar32 = (bool)hasExclusiveAccess(pppiVar7);
            } while (!bVar32);
            *pppiVar7 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            pppiVar30 = param_2[8][0x90];
            do {
              ppiVar18 = *pppiVar30;
              bVar32 = (bool)hasExclusiveAccess(pppiVar30);
            } while (!bVar32);
            *pppiVar30 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            ppppiVar17 = param_2[0xd];
            *(undefined1 *)((int)param_2 + 0x4e) = 0;
            FUN_010177f0(&local_ad8,param_2[8] + 6);
            pppiVar8 = param_2[8][0x10];
            do {
              ppiVar18 = *pppiVar8;
              bVar32 = (bool)hasExclusiveAccess(pppiVar8);
            } while (!bVar32);
            *pppiVar8 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_011289a4;
            FUN_009d4768(&local_b0);
            uVar13 = FUN_00faa8e0(pppiVar31,pppiVar25,pppiVar7,pppiVar30,ppppiVar17,&local_ad8,
                                  local_b0,local_ac,local_a8);
            FUN_0068c2dc(&local_b0,param_2[8][0x92] + 2);
            local_ad8 = local_b0;
            local_ad4 = local_ac;
            local_ad0 = local_a8;
            local_acc = local_a4;
            local_ac8 = local_a0;
            local_ac4 = pppppiStack_9c;
            local_ac0 = pppppiStack_98;
            local_abc = (int *****)CONCAT31(local_abc._1_3_,4);
            FUN_00ffcdb4(uVar13,&local_ad8);
            FUN_01000704();
            ppppiVar17 = param_2[0xf];
            do {
              pppiVar31 = *ppppiVar17;
              bVar32 = (bool)hasExclusiveAccess(ppppiVar17);
            } while (!bVar32);
            *ppppiVar17 = (int ***)((int)pppiVar31 + 1);
            if ((int)pppiVar31 < 0) goto LAB_011289a4;
            uVar13 = FUN_0100252c();
            *(undefined1 *)(param_2 + 0x17) = 0;
            ppppiVar17 = (int ****)FUN_0100132c(uVar13,param_2[0xf]);
            *(undefined1 *)((int)param_2 + 0x57) = 1;
            local_ad4 = (int *****)FUN_010be6e0(8,4);
            *(undefined2 *)((int)param_2 + 0x57) = 0;
            *local_ad4 = ppppiVar12;
            local_ad4[1] = ppppiVar17;
            local_ad0 = (int *****)0x2;
            local_ad8 = (int *****)0x2;
            FUN_01017050(&local_150,&local_ad8);
            *(undefined1 *)((int)param_2 + 0x56) = 0;
            local_130 = local_150;
            local_12c = local_14c;
            local_128 = local_148;
            local_124 = local_144;
            local_120 = uStack_140;
            uStack_11c = uStack_13c;
            uStack_118 = uStack_138;
            *(undefined1 *)((int)param_2 + 0x55) = 1;
            local_114 = local_114 & 0xffffff00;
            ppppiVar12 = (int ****)FUN_01a3b664();
            param_2[0x10] = ppppiVar12;
            FUN_01a3c2e0();
            *(undefined1 *)(param_2 + 0x15) = 1;
            local_110 = ppppiVar12;
            local_10c = FUN_01a3b3a4(param_2[0x10]);
            *(undefined1 *)((int)param_2 + 0x5d) = 0;
            *(undefined1 *)((int)param_2 + 0x5b) = 0;
            *(undefined2 *)(param_2 + 0x15) = 0;
            pppppiStack_f8 = local_130;
            pppppsStack_f4 = local_12c;
            ppppiStack_f0 = local_128;
            uStack_ec = local_124;
            local_e8 = local_120;
            uStack_e4 = uStack_11c;
            uStack_e0 = uStack_118;
            uStack_dc = local_114;
            local_108 = local_170;
            pppppiStack_104 = local_16c;
            pppppiStack_100 = local_168;
            pppppiStack_fc = local_164;
            *(undefined2 *)((int)param_2 + 0x52) = 1;
            local_c8 = 0;
            local_d8 = pppiVar19;
            local_d4 = ppppiVar12;
            ppppiVar12 = (int ****)FUN_00e5f5a8(param_2[8][0x8c],local_10c);
            param_2[0x11] = ppppiVar12;
            *(undefined1 *)((int)param_2 + 0x4f) = 1;
            *(undefined1 *)(param_2 + 0x18) = 0;
            *(undefined1 *)((int)param_2 + 0x52) = 0;
            FUN_01bed4e2(&local_ad8,&local_108,0x44);
            local_a8c = local_a8c & 0xffffff00;
            local_a90 = param_2 + 0x10;
            ppppiVar12 = (int ****)FUN_005d109c(&local_108);
            param_2[0x1c] = ppppiVar12;
            param_2[0x1d] = (int ****)&DAT_01c021a0;
            FUN_01bed4e2(param_2 + 0x1e,&local_a90,0x58);
            param_2[0x1a] = (int ****)pppppiVar29;
            param_2[0x1b] = (int ****)pppppiVar21;
            goto LAB_01126148;
          }
          pppppiVar29 = (int *****)((uint)local_ad4 >> 8 | (int)local_ad0 << 0x18);
          uVar27 = (uint)local_ad4 & 0xff;
          pppppiVar21 = local_ad0;
          goto LAB_011277d0;
        }
        pppppiVar29 = (int *****)((uint)local_ad8 >> 8 | (int)local_ad4 << 0x18);
        pppppiVar21 = local_ad4;
        goto LAB_011277d8;
      }
      pppppiVar29 = (int *****)((uint)local_ad8 >> 8 | (int)local_ad4 << 0x18);
      pppppiVar21 = (int *****)((uint)local_ad4 >> 8);
LAB_011278f4:
      *(undefined1 *)(param_2 + 0x13) = 0;
    }
    ppppiVar12 = param_2[0x19];
    if (*ppppiVar12 == (int ***)0xcc) {
      DataMemoryBarrier(0xb);
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
      if (!bVar32) goto LAB_01127930;
      *ppppiVar12 = (int ***)0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01127930:
      (*(code *)ppppiVar12[2][4])();
    }
    *(undefined1 *)(param_2 + 0x14) = 0;
    if (*(char *)((int)param_2 + 0x4d) != '\0') {
      FUN_005f4544(&local_b08);
    }
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(char *)((int)param_2 + 0x4e) != '\0') {
      ppppiVar12 = param_2[0xd];
      DataMemoryBarrier(0xb);
      do {
        pppiVar19 = *ppppiVar12;
        bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
      } while (!bVar32);
      *ppppiVar12 = (int ***)((int)pppiVar19 + -1);
      if (pppiVar19 == (int ***)0x1) {
        DataMemoryBarrier(0xb);
        FUN_00a93a9c(param_2[0xd]);
      }
    }
    ppppiVar12 = param_2[0xc];
    *(undefined1 *)((int)param_2 + 0x5e) = 0;
    *(undefined1 *)((int)param_2 + 0x4e) = 0;
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182080(param_2[0xc]);
    }
    ppppiVar12 = param_2[0xb];
    if (*ppppiVar12 == (int ***)0xcc) {
      DataMemoryBarrier(0xb);
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
      if (!bVar32) goto LAB_01127a00;
      *ppppiVar12 = (int ***)0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_01127a00:
      (*(code *)ppppiVar12[2][4])();
    }
    *(undefined1 *)((int)param_2 + 0x51) = 0;
    FUN_005faf6c(param_2 + 10);
    ppppiVar12 = param_2[9];
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182350(param_2[9]);
    }
    ppppiVar12 = param_2[8];
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_2[8]);
    }
    goto LAB_0112776c;
  case 4:
    pppppiVar29 = (int *****)param_2[0x1a];
    pppppiVar21 = (int *****)param_2[0x1b];
LAB_01126148:
    FUN_0110e5e4(&local_b0,pppppiVar29,pppppiVar21,param_3);
    pppppiVar21 = local_ac;
    uVar27 = (uint)local_b0 & 0xff;
    if (uVar27 == 7) {
      *(undefined1 *)param_1 = 5;
      uVar3 = 4;
      goto LAB_01127784;
    }
    pppppiVar29 = (int *****)CONCAT13(local_ac._0_1_,local_b0._1_3_);
    FUN_0112ea10(param_2 + 0x1c);
    iVar9 = uVar27 - 4;
    if (uVar27 < 4 || iVar9 == 0) {
      iVar9 = 0;
    }
    if (iVar9 == 0) {
      if (uVar27 != 4) {
        ppppiVar12 = param_2[0x11];
        if (ppppiVar12 != (int ****)0x0) {
          if (*ppppiVar12 == (int ***)0xcc) {
            DataMemoryBarrier(0xb);
            bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
            if (bVar32) {
              *ppppiVar12 = (int ***)0x84;
              goto LAB_011277a4;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (*(code *)ppppiVar12[2][4])();
        }
LAB_011277a4:
        *(undefined2 *)((int)param_2 + 0x52) = 0;
        *(undefined1 *)((int)param_2 + 0x4f) = 0;
        *(undefined1 *)(param_2 + 0x15) = 0;
        FUN_005faf6c(param_2 + 0x10);
        *(undefined1 *)((int)param_2 + 0x55) = 0;
        *(undefined1 *)((int)param_2 + 0x56) = 0;
        *(undefined2 *)((int)param_2 + 0x5b) = 0;
        *(undefined4 *)((int)param_2 + 0x57) = 0;
LAB_011277d0:
        *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_011277d8:
        pppppiVar21 = (int *****)((uint)pppppiVar21 >> 8);
        if (*(char *)(param_2 + 0x13) != '\0') {
          FUN_01bf01d6(param_2[0xe]);
        }
        goto LAB_011278f4;
      }
    }
    else {
      if (iVar9 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01c1ffb4);
      }
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4c7f0 - 1 < 2 ||
           ((DAT_01d4c7f0 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c7e8), cVar5 != '\0')))) &&
          (iVar9 = FUN_01aaa278(DAT_01d4c7e8), iVar9 != 0)))) {
        local_34 = (undefined4 *)(DAT_01d4c7e8 + 0x1c);
        if (*(int ******)(DAT_01d4c7e8 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ffa4);
        }
        local_ad0 = *(int ******)(DAT_01d4c7e8 + 0x24);
        local_acc = *(int ******)(DAT_01d4c7e8 + 0x28);
        local_ac = (int *****)&local_48;
        local_b0 = (int *****)&local_ad8;
        local_38 = (int *****)&DAT_00000001;
        local_ac8 = (int *****)0x0;
        local_a8 = (int *****)&DAT_01d2ea4c;
        local_44 = (int *****)0x7b;
        local_48 = (int *****)0x400b40;
        local_ad8 = (int *****)*local_34;
        local_ad4 = *(int ******)(DAT_01d4c7e8 + 0x20);
        local_3c = (int *****)&local_b0;
        FUN_0060c810(&local_3c);
      }
      else {
        iVar9 = DAT_01d4c7e8;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_bc = *(int ******)(DAT_01d4c7e8 + 0x14);
          local_b8 = *(int ******)(DAT_01d4c7e8 + 0x18);
          local_c0 = (int *****)0x2;
          DataMemoryBarrier(0xb);
          puVar28 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar28 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)puVar28[3])(pcVar2,&local_c0);
          if (iVar10 != 0) {
            local_40 = (undefined4 *)(DAT_01d4c7e8 + 0x1c);
            if (*(int ******)(DAT_01d4c7e8 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ffa4);
            }
            local_ad0 = *(int ******)(DAT_01d4c7e8 + 0x24);
            local_38 = (int *****)&local_30;
            local_acc = *(int ******)(DAT_01d4c7e8 + 0x28);
            local_3c = (int *****)&local_ad8;
            local_48 = (int *****)&local_3c;
            local_44 = (int *****)&DAT_00000001;
            local_2c = 0x7b;
            local_ac8 = (int *****)0x0;
            local_34 = (undefined4 *)&DAT_01d2ea4c;
            local_30 = (int *****)0x400b40;
            local_b0 = local_c0;
            local_ac = local_bc;
            local_a8 = local_b8;
            local_ad8 = (int *****)*local_40;
            local_ad4 = *(int ******)(DAT_01d4c7e8 + 0x20);
            FUN_01aaa328(iVar9,pcVar2,puVar28[4],&local_b0,&local_48);
          }
        }
      }
    }
    ppppiVar12 = param_2[0x19];
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x18] = ppppiVar12;
    break;
  case 5:
    ppppiVar12 = param_2[0x18];
    break;
  case 6:
    goto LAB_011272ec;
  case 7:
    goto LAB_01127634;
  }
  FUN_01209998(&local_ad8,ppppiVar12,*param_3);
  pppppiVar6 = local_ac4;
  pppppiVar26 = local_ac8;
  pppppiVar29 = local_acc;
  pppppiVar21 = local_ad0;
  if (((uint)local_ad8 & 1) != 0) {
    uVar3 = 5;
    *(undefined1 *)param_1 = 5;
    goto LAB_01127784;
  }
  ppppiVar12 = param_2[0x18];
  if (*ppppiVar12 == (int ***)0xcc) {
    DataMemoryBarrier(0xb);
    bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    if (!bVar32) goto LAB_0112727c;
    *ppppiVar12 = (int ***)0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_0112727c:
    (*(code *)ppppiVar12[2][4])();
  }
  bVar32 = pppppiVar21 == (int *****)0x0 && pppppiVar29 == (int *****)0x0;
  if (pppppiVar21 != (int *****)0x0 || pppppiVar29 != (int *****)0x0) {
    bVar32 = pppppiVar26 == (int *****)0x0;
  }
  if (!bVar32) {
    FUN_00f80320(pppppiVar26,pppppiVar6);
  }
  if (param_2[0x11] != (int ****)0x0) {
    *(undefined1 *)((int)param_2 + 0x4f) = 0;
    FUN_010e6c44(&local_ad8,param_2[0x11],&DAT_01c1ffc4);
    FUN_01bed4e2(&local_b0,&local_ad8,0x58);
    FUN_01bed4e2(param_2 + 0x18,&local_b0,0x58);
LAB_011272ec:
    FUN_0112ea44(&local_ad8,param_2 + 0x18,*param_3);
    pppppiVar24 = local_ac4;
    pppppiVar22 = local_ac8;
    pppppiVar6 = local_acc;
    pppppiVar26 = local_ad0;
    pppppiVar29 = local_ad4;
    pppppiVar21 = local_ad8;
    if (local_ad8 == (int *****)0x2 && local_ad4 == (int *****)0x0) {
      *(undefined1 *)param_1 = 5;
      uVar3 = 6;
      goto LAB_01127784;
    }
    FUN_005f0f24(param_2 + 0x18);
    if (pppppiVar21 == (int *****)0x0 && pppppiVar29 == (int *****)0x0) {
      bVar32 = pppppiVar26 == (int *****)0x0 && pppppiVar6 == (int *****)0x0;
      if (pppppiVar26 != (int *****)0x0 || pppppiVar6 != (int *****)0x0) {
        bVar32 = pppppiVar22 == (int *****)0x0;
      }
      if (!bVar32) {
        FUN_00f80320(pppppiVar22,pppppiVar24);
      }
    }
    else if (((DAT_01d50f88 < 4) &&
             ((DAT_01d4c7fc - 1 < 2 ||
              ((DAT_01d4c7fc != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c7f4), cVar5 != '\0')))))) &&
            (iVar9 = FUN_01aaa278(DAT_01d4c7f4), iVar9 != 0)) {
      if (*(int ******)(DAT_01d4c7f4 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ffd4);
      }
      local_ac = (int *****)&local_48;
      local_ad0 = *(int ******)(DAT_01d4c7f4 + 0x24);
      local_acc = *(int ******)(DAT_01d4c7f4 + 0x28);
      local_b0 = (int *****)&local_ad8;
      local_3c = (int *****)&local_b0;
      local_38 = (int *****)&DAT_00000001;
      local_ac8 = (int *****)0x0;
      local_a8 = (int *****)&DAT_01d2ea4c;
      local_44 = (int *****)0x87;
      local_48 = (int *****)0x400b7d;
      local_ad8 = *(int ******)(DAT_01d4c7f4 + 0x1c);
      local_ad4 = *(int ******)(DAT_01d4c7f4 + 0x20);
      local_34 = (undefined4 *)(DAT_01d4c7f4 + 0x1c);
      FUN_0060c594(&local_3c);
    }
    else {
      iVar9 = DAT_01d4c7f4;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_54 = *(int ******)(DAT_01d4c7f4 + 0x14);
        local_50 = *(int ******)(DAT_01d4c7f4 + 0x18);
        local_58 = (int *****)0x2;
        DataMemoryBarrier(0xb);
        puVar28 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar28 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar10 = (*(code *)puVar28[3])(pcVar2,&local_58);
        if (iVar10 != 0) {
          if (*(int ******)(DAT_01d4c7f4 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ffd4);
          }
          local_ad0 = *(int ******)(DAT_01d4c7f4 + 0x24);
          local_38 = (int *****)&local_30;
          local_acc = *(int ******)(DAT_01d4c7f4 + 0x28);
          local_3c = (int *****)&local_ad8;
          local_48 = (int *****)&local_3c;
          local_44 = (int *****)&DAT_00000001;
          local_34 = (undefined4 *)&DAT_01d2ea4c;
          local_ac8 = (int *****)0x0;
          local_2c = 0x87;
          local_30 = (int *****)0x400b7d;
          local_b0 = local_58;
          local_ac = local_54;
          local_a8 = local_50;
          local_ad8 = *(int ******)(DAT_01d4c7f4 + 0x1c);
          local_ad4 = *(int ******)(DAT_01d4c7f4 + 0x20);
          local_40 = (undefined4 *)(DAT_01d4c7f4 + 0x1c);
          FUN_01aaa328(iVar9,pcVar2,puVar28[4],&local_b0,&local_48);
        }
      }
    }
  }
  local_a88 = 0;
  piVar11 = (int *)FUN_010a3af4(&local_ad8,&DAT_01c1ffe4);
  if (*piVar11 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar32 = (bool)hasExclusiveAccess(piVar11);
    if (!bVar32) goto LAB_011275e8;
    *piVar11 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_011275e8:
    (**(code **)(piVar11[2] + 0x10))();
  }
  FUN_01a3b7c0(param_2[10]);
  *(undefined1 *)((int)param_2 + 0x51) = 0;
  pppiVar19 = param_2[8][0x92];
  param_2[0x18] = (int ****)0x0;
  param_2[0x1e] = (int ****)0x0;
  param_2[0x32] = (int ****)(param_2 + 0x18);
  *(undefined1 *)(param_2 + 0x31) = 0;
  param_2[0x1f] = (int ****)(pppiVar19 + 2);
  param_2[0x1a] = param_2[0xb];
  param_2[0x33] = (int ****)0x0;
LAB_01127634:
  FUN_0110e880(&local_ad8,param_2 + 0x32,param_3);
  pppppiVar29 = local_ac4;
  pppppiVar21 = local_ac8;
  if (((uint)local_ad8 & 1) == 0) {
    local_b0 = local_ad0;
    local_ac = local_acc;
    local_a8 = local_ac8;
    local_a4 = local_ac4;
    FUN_0112eadc(param_2 + 0x18);
    FUN_00bd05a8(&local_b0);
    *(undefined2 *)((int)param_2 + 0x52) = 0;
    *(undefined1 *)((int)param_2 + 0x4f) = 0;
    *(undefined1 *)(param_2 + 0x15) = 0;
    FUN_005faf6c(param_2 + 0x10);
    ppppiVar12 = param_2[0xc];
    *(undefined4 *)((int)param_2 + 0x5a) = 0;
    *(undefined1 *)((int)param_2 + 0x55) = 0;
    *(undefined1 *)((int)param_2 + 0x56) = 0;
    *(undefined4 *)((int)param_2 + 0x57) = 0;
    *(undefined1 *)(param_2 + 0x14) = 0;
    *(undefined2 *)(param_2 + 0x13) = 0;
    *(undefined1 *)((int)param_2 + 0x5e) = 0;
    *(undefined1 *)((int)param_2 + 0x4e) = 0;
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182080(param_2[0xc]);
    }
    *(undefined1 *)((int)param_2 + 0x51) = 0;
    FUN_005faf6c(param_2 + 10);
    ppppiVar12 = param_2[9];
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182350(param_2[9]);
    }
    ppppiVar12 = param_2[8];
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar12;
      bVar32 = (bool)hasExclusiveAccess(ppppiVar12);
    } while (!bVar32);
    *ppppiVar12 = (int ***)((int)pppiVar19 + -1);
    uVar27 = 4;
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_2[8]);
    }
LAB_0112776c:
    *param_1 = uVar27 | (int)pppppiVar29 << 8;
    param_1[1] = (int)pppppiVar21 << 8 | (uint)pppppiVar29 >> 0x18;
    uVar3 = 1;
  }
  else {
    *(undefined1 *)param_1 = 5;
    uVar3 = 7;
  }
LAB_01127784:
  *(undefined1 *)((int)param_2 + 0x5f) = uVar3;
  return;
}

