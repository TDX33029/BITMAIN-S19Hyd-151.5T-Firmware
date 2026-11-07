// FUN_00bc542c @ 00bc542c size=9636 calls_out=97 calls_in=1
// strings: Shutdown drain deadline exceeded; abandoning open connections | background task failed | boser::webopen/boser/boser/src/web.rsevent open/boser/boser/src/web.rs:330event open/boser/boser/src/web.rs:1017event open/boser/boser/src/web.rs:1033event open/boser/boser/src/web.rs:899event open/boser/boser/src/web.rs:1039event open/boser/boser/src/web.rs:173event open/boser/boser/src/web.rs:1105event open/boser/boser/src/config.rs:64 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Shutdown drain deadline exceeded; abandoning open connections

void FUN_00bc542c(uint *param_1,int *****param_2,undefined4 *param_3)

{
  code *pcVar1;
  char *pcVar2;
  undefined1 uVar3;
  char cVar4;
  int *****pppppiVar5;
  int ***pppiVar6;
  int ***pppiVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int ****ppppiVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  int *****pppppiVar16;
  int ****ppppiVar17;
  int **ppiVar18;
  int ***pppiVar19;
  int *****pppppiVar20;
  int *****pppppiVar21;
  int ***pppiVar22;
  int ****ppppiVar23;
  int *****pppppiVar24;
  int ***pppiVar25;
  uint uVar26;
  int *****pppppiVar27;
  uint uVar28;
  undefined4 *puVar29;
  int ***pppiVar30;
  bool bVar31;
  undefined8 uVar32;
  int *****local_b68;
  undefined *local_b54;
  int *****local_b50;
  undefined *local_b4c;
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
  int *****local_14c;
  int ****local_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  int *****local_130;
  int *****local_12c;
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
  int *****pppppiStack_f4;
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
    ppppiVar11 = param_2[0x12] + 2;
    param_2[0x1a] = ppppiVar11;
LAB_00bc5530:
    *(undefined1 *)(param_2 + 0x1b) = 0;
    ppppiVar17 = (int ****)ppppiVar11[0x86];
    do {
      pppiVar19 = *ppppiVar17;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar17);
    } while (!bVar31);
    *ppppiVar17 = (int ***)((int)pppiVar19 + 1);
    if ((int)pppiVar19 < 0) goto LAB_00bc7b74;
    param_2[0x18] = ppppiVar17;
    ppppiVar11 = (int ****)ppppiVar11[0x88];
    do {
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + 1);
    if ((int)pppiVar19 < 0) goto LAB_00bc7b74;
    *(undefined1 *)(param_2 + 0x31) = 0;
    param_2[0x19] = ppppiVar11;
    ppppiVar17 = param_2[0x18] + 2;
    *(undefined1 *)(param_2 + 0x1b) = 1;
    param_2[0x1c] = ppppiVar17;
LAB_00bc55a4:
    *(undefined1 *)((int)param_2 + 0x7d) = 0;
    param_2[0x1e] = ppppiVar17;
LAB_00bc55c4:
    param_2[0x1d] = ppppiVar17;
    *(undefined1 *)(param_2 + 0x1f) = 0;
    ppppiVar11 = (int ****)ppppiVar17[1];
    ppppiVar17 = (int ****)ppppiVar17[2];
    *(undefined1 *)(param_2 + 0x2c) = 0;
    param_2[0x20] = ppppiVar11;
    param_2[0x21] = ppppiVar17;
LAB_00bc55e4:
    *(undefined1 *)(param_2 + 0x2b) = 0;
    param_2[0x22] = ppppiVar11;
    param_2[0x23] = ppppiVar17;
LAB_00bc55f4:
    param_2[0x24] = ppppiVar11;
    param_2[0x25] = ppppiVar17;
    FUN_019afae4(&local_130,ppppiVar11,ppppiVar17);
    param_2[0x26] = (int ****)local_130;
    param_2[0x27] = (int ****)local_12c;
    param_2[0x28] = local_128;
    *(undefined1 *)(param_2 + 0x2a) = 0;
switchD_00bc6de8_caseD_0:
    local_b08 = (int *****)param_2[0x26];
    pppppiStack_b04 = (int *****)param_2[0x27];
    pppppiStack_b00 = (int *****)param_2[0x28];
    ppppiVar11 = (int ****)FUN_00630bac(&local_b08,&DAT_01c230d0);
    param_2[0x29] = ppppiVar11;
LAB_00bc5658:
    local_b50 = param_2 + 0x2c;
    pppppiVar16 = param_2 + 0x2a;
    FUN_00798728(&local_ad8,ppppiVar11,*param_3);
    if (local_ad8 == (int *****)0x2) {
      *(undefined1 *)pppppiVar16 = 3;
LAB_00bc567c:
      uVar3 = 3;
      *(undefined1 *)(param_2 + 0x2b) = 3;
      *(undefined1 *)local_b50 = 3;
LAB_00bc5a70:
      local_b54 = (undefined *)((int)param_2 + 0x7d);
      *local_b54 = uVar3;
    }
    else {
      local_b0 = local_ad8;
      local_ac = local_ad4;
      local_a8 = local_ad0;
      local_a4 = local_acc;
      local_a0 = local_ac8;
      pppppiStack_9c = local_ac4;
      ppppiVar11 = param_2[0x29];
      if (*ppppiVar11 == (int ***)0xcc) {
        DataMemoryBarrier(0xb);
        bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
        if (!bVar31) goto LAB_00bc57d4;
        *ppppiVar11 = (int ***)0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00bc57d4:
        (*(code *)ppppiVar11[2][4])();
      }
      if (local_b0 == (int *****)&DAT_00000001) {
        FUN_019a18a8(&local_ad8,0x28,"background task failed",0x16);
        pppppiVar27 = local_ad4;
        pppppiVar20 = local_ad8;
        FUN_00bc8cf8(&local_b0);
        *(undefined1 *)pppppiVar16 = 1;
        pppppiVar16 = (int *****)&DAT_80000000;
      }
      else {
        *(undefined1 *)pppppiVar16 = 1;
        pppppiVar16 = local_ac;
        pppppiVar20 = local_a8;
        pppppiVar27 = local_a4;
        if (local_ac == (int *****)&DAT_80000001) goto LAB_00bc567c;
      }
      FUN_00b71be0(param_2 + 0x26);
      *(undefined1 *)(param_2 + 0x2b) = 1;
      if (pppppiVar16 != (int *****)&DAT_80000000) {
        uVar32 = FUN_00f86604(pppppiVar20,pppppiVar27);
        pppppiVar27 = (int *****)((ulonglong)uVar32 >> 0x20);
        FUN_019bb7e0(pppppiVar16,pppppiVar20);
        pppppiVar20 = (int *****)((uint)uVar32 ^ 5);
      }
      *(undefined1 *)local_b50 = 1;
      uVar3 = 3;
      if (((uint)pppppiVar20 & 0xff) == 6) goto LAB_00bc5a70;
      if (((uint)pppppiVar20 & 0xff) == 5) {
        *(undefined1 *)(param_2 + 0x21) = 5;
        *(undefined1 *)(param_2 + 0x1f) = 1;
        *(undefined1 *)(param_2 + 0x30) = 0;
        param_2[0x20] = (int ****)pppppiVar27;
        param_2[0x22] = (int ****)pppppiVar27;
        param_2[0x23] = param_2[0x1d] + 3;
        goto switchD_00bc596c_caseD_4;
      }
      param_2[0x21] = (int ****)pppppiVar20;
      param_2[0x22] = (int ****)pppppiVar27;
      *(undefined2 *)(param_2 + 0x1f) = 0x100;
      uVar26 = (uint)param_2[0x21] & 0xff;
      if (uVar26 != 6) {
        uVar28 = (uint)param_2[0x21] >> 8 | (int)param_2[0x22] << 0x18;
        local_b54 = (undefined *)((uint)param_2[0x22] >> 8);
        goto LAB_00bc5ab0;
      }
    }
    uVar3 = 3;
    *(undefined1 *)(param_2 + 0x31) = 3;
LAB_00bc5a84:
    local_b4c = (undefined *)((int)param_2 + 0x6d);
    *local_b4c = uVar3;
    *(undefined1 *)param_1 = 5;
    uVar3 = 3;
    goto LAB_00bc6a8c;
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
      ppppiVar11 = param_2[0x1a];
      goto LAB_00bc5530;
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
        goto LAB_00bc55a4;
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
        goto LAB_00bc55c4;
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
          ppppiVar11 = param_2[0x20];
          ppppiVar17 = param_2[0x21];
          goto LAB_00bc55e4;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c20044);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c20044);
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x2b)) {
        case 0:
          ppppiVar11 = param_2[0x22];
          ppppiVar17 = param_2[0x23];
          goto LAB_00bc55f4;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c2044c);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c2044c);
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_2 + 0x2a)) {
        case 0:
          goto switchD_00bc6de8_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c230e0);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c230e0);
        case 3:
          ppppiVar11 = param_2[0x29];
        }
        goto LAB_00bc5658;
      }
switchD_00bc596c_caseD_4:
      local_b54 = (undefined *)((int)param_2 + 0x7d);
      FUN_0084fe8c(&local_ad8,param_2 + 0x23,param_3);
      pppppiVar27 = local_ad0;
      pppppiVar20 = local_ad4;
      pppppiVar16 = local_ad8;
      if (local_ad8 == (int *****)0x0) {
        uVar3 = 4;
        goto LAB_00bc5a70;
      }
      if (*(char *)(param_2 + 0x30) == '\x03') {
        cVar4 = *(char *)(param_2 + 0x2f);
        bVar31 = cVar4 == '\x03';
        if (bVar31) {
          cVar4 = *(char *)(param_2 + 0x2e);
        }
        if (bVar31 && cVar4 == '\x03') {
          FUN_0193c3cc(param_2 + 0x26);
        }
      }
      ppppiVar11 = *pppppiVar27;
      DataMemoryBarrier(0xb);
      do {
        pppiVar19 = *ppppiVar11;
        bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
      } while (!bVar31);
      *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
      if (pppiVar19 == (int ***)0x1) {
        DataMemoryBarrier(0xb);
        FUN_019db20c(*pppppiVar27);
      }
      *pppppiVar27 = param_2[0x20];
      *(undefined1 *)(param_2 + 0x1f) = 0;
      FUN_019f8c54(pppppiVar16,pppppiVar20);
      uVar28 = 1;
      uVar26 = 5;
      *local_b54 = 1;
LAB_00bc5ab0:
      local_b68 = param_2 + 0x1d;
      local_150 = (int *****)(uVar26 | uVar28 << 8);
      local_14c = (int *****)((int)local_b54 << 8 | uVar28 >> 0x18);
      FUN_005fbd44(local_b68);
      if (uVar26 == 4) {
        FUN_00bc8d40((uint)&local_150 | 4);
      }
      else if (uVar26 != 5) {
        FUN_00b9391c((uint)local_150 & 0xff,local_14c);
      }
      *(undefined1 *)(param_2 + 0x31) = 1;
      *(undefined1 *)((int)param_2 + 0x3b3) = 0;
      param_2[0xeb] = param_2[0x19] + 2;
    }
    pppppiVar16 = param_2 + 0x18;
    local_b4c = (undefined *)((int)param_2 + 0x6d);
    pppppiVar20 = param_2 + 0x1c;
    iVar8 = FUN_00bc9154(pppppiVar20,param_3);
    uVar3 = 4;
    if (iVar8 != 0) goto LAB_00bc5a84;
    FUN_00bc8da0(pppppiVar20);
    local_a78 = param_2[0x19];
    *(undefined1 *)(param_2 + 0x1b) = 0;
    local_a71 = 0;
    piVar10 = (int *)FUN_010a564c(&local_ad8,&DAT_01c1fe2c);
    if (*piVar10 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar31 = (bool)hasExclusiveAccess(piVar10);
      if (!bVar31) goto LAB_00bc5b94;
      *piVar10 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00bc5b94:
      (**(code **)(piVar10[2] + 0x10))();
    }
    ppppiVar11 = param_2[0x18];
    *(undefined1 *)(param_2 + 0x1b) = 0;
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01180e54(*pppppiVar16);
    }
    *local_b4c = 1;
    FUN_00bc8bc8(pppppiVar16);
    pppiVar19 = param_2[8][0x8e];
    do {
      ppiVar18 = *pppiVar19;
      bVar31 = (bool)hasExclusiveAccess(pppiVar19);
    } while (!bVar31);
    *pppiVar19 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    ppppiVar17 = param_2[8];
    ppppiVar11 = (int ****)ppppiVar17[2];
    do {
      pppiVar22 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
    if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
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
    local_aac = ppppiVar11;
    ppppiVar11 = (int ****)thunk_FUN_01be5118(0x34);
    if (ppppiVar11 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x34);
    }
    *ppppiVar11 = (int ***)local_ad8;
    ppppiVar11[1] = (int ***)local_ad4;
    ppppiVar11[2] = (int ***)local_ad0;
    ppppiVar11[3] = (int ***)local_acc;
    ppppiVar11[4] = (int ***)local_ac8;
    ppppiVar11[5] = (int ***)local_ac4;
    ppppiVar11[6] = (int ***)local_ac0;
    ppppiVar11[7] = (int ***)local_abc;
    ppppiVar11[8] = local_ab8;
    ppppiVar11[9] = local_ab4;
    ppppiVar11[10] = local_ab0;
    ppppiVar11[0xb] = (int ***)local_aac;
    ppppiVar11[0xc] = pppiStack_aa8;
    param_2[9] = ppppiVar11;
    ppppiVar11 = (int ****)FUN_01a3b664();
    pppppiVar27 = (int *****)param_2[9];
    param_2[10] = ppppiVar11;
    do {
      ppppiVar11 = *pppppiVar27;
      bVar31 = (bool)hasExclusiveAccess(pppppiVar27);
    } while (!bVar31);
    *pppppiVar27 = (int ****)((int)ppppiVar11 + 1);
    if ((int)ppppiVar11 < 0) goto LAB_00bc7b74;
    pppppiVar5 = (int *****)FUN_01a3c2e0(param_2[10]);
    pppppiVar21 = (int *****)param_2[8][0x89];
    do {
      ppppiVar11 = *pppppiVar21;
      bVar31 = (bool)hasExclusiveAccess(pppppiVar21);
    } while (!bVar31);
    *pppppiVar21 = (int ****)((int)ppppiVar11 + 1);
    if ((int)ppppiVar11 < 0) goto LAB_00bc7b74;
    pppppiVar24 = (int *****)param_2[8][0x8a];
    do {
      ppppiVar11 = *pppppiVar24;
      bVar31 = (bool)hasExclusiveAccess(pppppiVar24);
    } while (!bVar31);
    *pppppiVar24 = (int ****)((int)ppppiVar11 + 1);
    if ((int)ppppiVar11 < 0) goto LAB_00bc7b74;
    local_abc = (int *****)((uint)local_abc & 0xffffff00);
    local_ad4 = (int *****)&DAT_01c140ac;
    local_ad8 = pppppiVar27;
    local_ad0 = pppppiVar5;
    local_acc = pppppiVar21;
    local_ac8 = pppppiVar24;
    ppppiVar11 = (int ****)FUN_010a4f38(&local_ad8,&DAT_01c1fe5c);
    param_2[0xb] = ppppiVar11;
    ppppiVar11 = param_2[8];
    *(undefined1 *)((int)param_2 + 0x51) = 1;
    pppiVar19 = ppppiVar11[4];
    do {
      ppiVar18 = *pppiVar19;
      bVar31 = (bool)hasExclusiveAccess(pppiVar19);
    } while (!bVar31);
    *pppiVar19 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    pppiVar22 = ppppiVar11[5];
    pppiVar25 = param_2[8][0x89];
    do {
      ppiVar18 = *pppiVar25;
      bVar31 = (bool)hasExclusiveAccess(pppiVar25);
    } while (!bVar31);
    *pppiVar25 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    pppiVar6 = param_2[8][0x8e];
    do {
      ppiVar18 = *pppiVar6;
      bVar31 = (bool)hasExclusiveAccess(pppiVar6);
    } while (!bVar31);
    *pppiVar6 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    FUN_00f26590(&local_b40,pppiVar19,pppiVar22,pppiVar25,pppiVar6);
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
    piVar10 = (int *)FUN_010a4280(&local_ad8,&DAT_01c1fe6c);
    if (*piVar10 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar31 = (bool)hasExclusiveAccess(piVar10);
      if (!bVar31) goto LAB_00bc5e34;
      *piVar10 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00bc5e34:
      (**(code **)(piVar10[2] + 0x10))();
    }
    ppppiVar11 = (int ****)param_2[8][0x8b];
    do {
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + 1);
    if ((int)pppiVar19 < 0) goto LAB_00bc7b74;
    param_2[0xc] = ppppiVar11;
    ppiVar18 = param_2[8][0x8a][0xf];
    do {
      piVar10 = *ppiVar18;
      bVar31 = (bool)hasExclusiveAccess(ppiVar18);
    } while (!bVar31);
    *ppiVar18 = (int *)((int)piVar10 + 1);
    if ((int)piVar10 < 0) goto LAB_00bc7b74;
    *(undefined1 *)((int)param_2 + 0x5e) = 1;
    ppppiVar11 = param_2[8];
    local_b0 = (int *****)ppppiVar11[0x53];
    local_ac = (int *****)ppppiVar11[0x54];
    local_a8 = (int *****)ppppiVar11[0x55];
    local_a4 = (int *****)ppppiVar11[0x56];
    local_a0 = (int *****)ppppiVar11[0x57];
    pppppiStack_9c = (int *****)ppppiVar11[0x58];
    pppppiStack_98 = (int *****)ppppiVar11[0x59];
    pppppiStack_94 = (int *****)ppppiVar11[0x5a];
    *(undefined1 *)((int)param_2 + 0x5e) = 0;
    pppiVar19 = (int ***)thunk_FUN_01be5118(4);
    if (pppiVar19 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,4);
    }
    ppppiVar11 = param_2[0xc];
    *pppiVar19 = ppiVar18;
    do {
      pppiVar22 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
    if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
    FUN_0068c2dc(&local_b08,param_2[8][0x92] + 2);
    local_ad8 = local_b0;
    local_ad4 = local_ac;
    local_ad0 = local_a8;
    local_acc = local_a4;
    local_ac8 = local_a0;
    local_ac4 = pppppiStack_9c;
    local_ac0 = pppppiStack_98;
    local_abc = pppppiStack_94;
    local_ab4 = (int ***)&DAT_01c140bc;
    local_92c = local_b08;
    pppppiStack_928 = pppppiStack_b04;
    pppppiStack_924 = pppppiStack_b00;
    local_920 = local_afc;
    pppppiStack_91c = pppppiStack_af8;
    pppppiStack_918 = local_af4;
    pppppiStack_914 = pppppiStack_af0;
    local_90c = 0;
    local_ab8 = pppiVar19;
    local_930 = ppppiVar11;
    piVar10 = (int *)FUN_010a3490(&local_ad8,&DAT_01c1fe94);
    if (*piVar10 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar31 = (bool)hasExclusiveAccess(piVar10);
      if (!bVar31) goto LAB_00bc5fb4;
      *piVar10 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00bc5fb4:
      (**(code **)(piVar10[2] + 0x10))();
    }
    ppppiVar11 = param_2[8];
    ppppiVar17 = param_2[0xc];
    do {
      pppiVar19 = *ppppiVar17;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar17);
    } while (!bVar31);
    *ppppiVar17 = (int ***)((int)pppiVar19 + 1);
    if ((int)pppiVar19 < 0) goto LAB_00bc7b74;
    FUN_00f9db5c(&local_ad8,ppppiVar11 + 2);
    if (local_ad8 == (int *****)&DAT_80000000) {
      local_130 = local_ad4;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("BUG: overlapping keys between settings providers",0x30,&local_130,&DAT_01c1407c,
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
    ppppiVar11 = (int ****)thunk_FUN_01be5118(0x20);
    if (ppppiVar11 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    *ppppiVar11 = (int ***)local_ad8;
    ppppiVar11[1] = (int ***)local_ad4;
    ppppiVar11[2] = (int ***)local_ad0;
    ppppiVar11[3] = (int ***)local_acc;
    ppppiVar11[4] = (int ***)local_ac8;
    ppppiVar11[5] = (int ***)local_ac4;
    ppppiVar11[6] = (int ***)local_ac0;
    ppppiVar11[7] = (int ***)local_abc;
    param_2[0xd] = ppppiVar11;
    ppppiVar11 = param_2[8];
    *(undefined1 *)((int)param_2 + 0x4e) = 1;
    local_b0 = (int *****)ppppiVar11[0x5b];
    local_ac = (int *****)ppppiVar11[0x5c];
    local_a8 = (int *****)ppppiVar11[0x5d];
    local_a4 = (int *****)ppppiVar11[0x5e];
    local_a0 = (int *****)ppppiVar11[0x5f];
    pppppiStack_9c = (int *****)ppppiVar11[0x60];
    pppppiStack_98 = (int *****)ppppiVar11[0x61];
    pppppiStack_94 = (int *****)ppppiVar11[0x62];
    pppiVar19 = ppppiVar11[0x89];
    do {
      ppiVar18 = *pppiVar19;
      bVar31 = (bool)hasExclusiveAccess(pppiVar19);
    } while (!bVar31);
    *pppiVar19 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    pppiVar22 = param_2[8][0x8a];
    do {
      ppiVar18 = *pppiVar22;
      bVar31 = (bool)hasExclusiveAccess(pppiVar22);
    } while (!bVar31);
    *pppiVar22 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    pppiVar25 = param_2[8][0x86];
    do {
      ppiVar18 = *pppiVar25;
      bVar31 = (bool)hasExclusiveAccess(pppiVar25);
    } while (!bVar31);
    *pppiVar25 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    pppiVar6 = param_2[8][0x8e];
    do {
      ppiVar18 = *pppiVar6;
      bVar31 = (bool)hasExclusiveAccess(pppiVar6);
    } while (!bVar31);
    *pppiVar6 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    pppiVar30 = param_2[8][0x90];
    do {
      ppiVar18 = *pppiVar30;
      bVar31 = (bool)hasExclusiveAccess(pppiVar30);
    } while (!bVar31);
    *pppiVar30 = (int **)((int)ppiVar18 + 1);
    if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
    ppppiVar11 = param_2[0xd];
    do {
      pppiVar7 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar7 + 1);
    if ((int)pppiVar7 < 0) goto LAB_00bc7b74;
    FUN_0068c2dc(&local_b08,param_2[8][0x92] + 2);
    FUN_005ff020(&local_ad8,&local_b0,pppiVar19,pppiVar22,pppiVar25,pppiVar6,pppiVar30,ppppiVar11,
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
    pppppiVar27 = (int *****)param_2[8][0x90];
    do {
      ppppiVar11 = *pppppiVar27;
      bVar31 = (bool)hasExclusiveAccess(pppppiVar27);
    } while (!bVar31);
    *pppppiVar27 = (int ****)((int)ppppiVar11 + 1);
    if ((int)ppppiVar11 < 0) goto LAB_00bc7b74;
    local_ad4._0_2_ = (ushort)(byte)local_ad4;
    local_ad8 = pppppiVar27;
    piVar10 = (int *)FUN_010a1a8c(&local_ad8,&DAT_01c1feb4);
    if (*piVar10 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar31 = (bool)hasExclusiveAccess(piVar10);
      if (!bVar31) goto LAB_00bc6248;
      *piVar10 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00bc6248:
      (**(code **)(piVar10[2] + 0x10))();
    }
    FUN_019abf38(&local_ad8,param_2[8][0x91]);
    if ((short)local_ad8 == 2) {
      uVar28 = (uint)local_ad4 & 0xff;
      pppppiVar20 = (int *****)((uint)local_ad4 >> 8 | (int)local_ad0 << 0x18);
      pppppiVar16 = (int *****)((uint)local_ad0 >> 8);
    }
    else {
      local_b0 = local_acc;
      local_ac = local_ac8;
      local_a8 = local_ac4;
      local_a4 = local_ac0;
      local_a0 = local_abc;
      param_2[1] = (int ****)local_ad4;
      param_2[2] = (int ****)local_ad0;
      *(short *)param_2 = (short)local_ad8;
      *(undefined2 *)((int)param_2 + 2) = local_ad8._2_2_;
      param_2[3] = (int ****)local_acc;
      param_2[4] = (int ****)local_ac8;
      param_2[5] = (int ****)local_ac4;
      param_2[6] = (int ****)local_ac0;
      param_2[7] = (int ****)local_abc;
      FUN_019ac0e8(&local_ad8,param_2[8][0x91]);
      if (((char)local_ad8 == '\x04') || (uVar28 = (uint)local_ad8 & 0xff, uVar28 == 4)) {
        param_2[0xe] = (int ****)local_ad4;
        *(undefined1 *)(param_2 + 0x13) = 1;
        FUN_019ac090(&local_ad8);
        if (((char)local_ad8 == '\x04') || (uVar28 = (uint)local_ad8 & 0xff, uVar28 == 4)) {
          *(undefined1 *)(param_2 + 0x13) = 0;
          FUN_019dd6e8(&local_ad8,param_2[0xe],&DAT_01c1fec4);
          if (local_ad8 != (int *****)0x2) {
            *(undefined1 *)((int)param_2 + 0x5d) = 1;
            local_16c = local_ad4;
            local_164 = local_acc;
            local_170 = local_ad8;
            local_168 = local_ad0;
            if ((DAT_01d50f88 < 3) &&
               (((DAT_01d4c7e4 - 1 < 2 ||
                 ((DAT_01d4c7e4 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c7dc), cVar4 != '\0')))) &&
                (iVar8 = FUN_01aaa278(DAT_01d4c7dc), iVar8 != 0)))) {
              local_128 = (int ****)(DAT_01d4c7dc + 0x1c);
              if (*(int ******)(DAT_01d4c7dc + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1fed4);
              }
              local_ad0 = *(int ******)(DAT_01d4c7dc + 0x24);
              local_acc = *(int ******)(DAT_01d4c7dc + 0x28);
              local_ac = (int *****)&local_3c;
              local_12c = (int *****)&DAT_00000001;
              local_38 = (int *****)&local_150;
              local_130 = (int *****)&local_b0;
              local_150 = (int *****)&local_48;
              local_ac8 = (int *****)0x0;
              local_a8 = (int *****)&DAT_01d2ea4c;
              local_3c = (int *****)&DAT_005711b5;
              local_14c = (int *****)&LAB_015fb8f8;
              local_ad8 = (int *****)*local_128;
              local_ad4 = *(int ******)(DAT_01d4c7dc + 0x20);
              local_b0 = (int *****)&local_ad8;
              local_48 = param_2;
              FUN_0060c68c(&local_130);
            }
            else {
              iVar8 = DAT_01d4c7dc;
              if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
                local_15c = *(int ******)(DAT_01d4c7dc + 0x14);
                local_158 = *(int ******)(DAT_01d4c7dc + 0x18);
                local_160 = (int *****)&DAT_00000003;
                DataMemoryBarrier(0xb);
                puVar29 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar29 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar9 = (*(code *)puVar29[3])(pcVar2,&local_160);
                if (iVar9 != 0) {
                  local_148 = (int ****)(DAT_01d4c7dc + 0x1c);
                  if (*(int ******)(DAT_01d4c7dc + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1fed4);
                  }
                  local_12c = (int *****)&local_48;
                  local_ad0 = *(int ******)(DAT_01d4c7dc + 0x24);
                  local_acc = *(int ******)(DAT_01d4c7dc + 0x28);
                  local_150 = (int *****)&local_130;
                  local_ac8 = (int *****)0x0;
                  local_14c = (int *****)&DAT_00000001;
                  local_44 = (int *****)&local_3c;
                  local_128 = (int ****)&DAT_01d2ea4c;
                  local_48 = (int *****)&DAT_005711b5;
                  local_38 = (int *****)&LAB_015fb8f8;
                  local_3c = (int *****)&local_30;
                  local_b0 = local_160;
                  local_ac = local_15c;
                  local_a8 = local_158;
                  local_ad8 = (int *****)*local_148;
                  local_ad4 = *(int ******)(DAT_01d4c7dc + 0x20);
                  local_130 = (int *****)&local_ad8;
                  local_30 = param_2;
                  FUN_01aaa328(iVar8,pcVar2,puVar29[4],&local_b0,&local_150);
                }
              }
            }
            ppppiVar11 = (int ****)param_2[8][0x86];
            do {
              pppiVar19 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar19 + 1);
            if ((int)pppiVar19 < 0) {
LAB_00bc7b74:
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0xbc7b74);
              (*pcVar1)();
            }
            *(undefined1 *)(param_2 + 0x17) = 1;
            param_2[0xf] = ppppiVar11;
            pppiVar19 = param_2[8][0x89];
            do {
              ppiVar18 = *pppiVar19;
              bVar31 = (bool)hasExclusiveAccess(pppiVar19);
            } while (!bVar31);
            *pppiVar19 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
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
            pppiVar22 = param_2[8][0x89];
            do {
              ppiVar18 = *pppiVar22;
              bVar31 = (bool)hasExclusiveAccess(pppiVar22);
            } while (!bVar31);
            *pppiVar22 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
            pppiVar25 = param_2[8][0x8a];
            do {
              ppiVar18 = *pppiVar25;
              bVar31 = (bool)hasExclusiveAccess(pppiVar25);
            } while (!bVar31);
            *pppiVar25 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
            pppiVar6 = param_2[8][0x86];
            do {
              ppiVar18 = *pppiVar6;
              bVar31 = (bool)hasExclusiveAccess(pppiVar6);
            } while (!bVar31);
            *pppiVar6 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
            FUN_0068c2dc(&local_b0,param_2[8][0x92] + 2);
            ppppiVar11 = param_2[8];
            if (ppppiVar11[0x83] == (int ***)0x80000000) {
              local_130 = (int *****)&DAT_80000000;
            }
            else {
              FUN_006666fc(&local_130,ppppiVar11[0x84],ppppiVar11[0x85]);
            }
            uVar12 = FUN_010d7ae8(&local_b08,pppiVar22,pppiVar25,pppiVar6,&local_b0,&local_130);
            *(undefined1 *)((int)param_2 + 0x5a) = 1;
            uVar13 = FUN_01a64fe8();
            ppppiVar11 = param_2[8];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            uVar14 = FUN_00fa2388();
            uVar13 = FUN_01004b24(uVar13,uVar14,&DAT_01c1fee4);
            ppppiVar11 = param_2[8];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            uVar14 = FUN_00f9edf4();
            uVar13 = FUN_01004b24(uVar13,uVar14,&DAT_01c1fef4);
            ppppiVar11 = param_2[8];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            uVar14 = FUN_00f9e5e8();
            uVar13 = FUN_01004b24(uVar13,uVar14,&DAT_01c1ff04);
            uVar14 = FUN_00f9e044(param_2[8] + 2);
            uVar13 = FUN_01004b24(uVar13,uVar14,&DAT_01c1ff14);
            uVar14 = FUN_00f9eb80(param_2[8] + 2);
            uVar13 = FUN_01004b24(uVar13,uVar14,&DAT_01c1ff24);
            uVar14 = FUN_00f9e1b4(param_2[8] + 2);
            uVar14 = FUN_00ff4dbc(uVar14,&DAT_01c1ff34);
            FUN_01004b24(uVar13,uVar14,&DAT_01c1ff44);
            ppppiVar11 = param_2[0xf];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            FUN_0100252c();
            ppppiVar11 = param_2[0xf];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            FUN_0100132c();
            uVar13 = FUN_00fff9d4();
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
            uVar13 = FUN_00ff9ca8(uVar13,&local_ad8);
            FUN_0068c2dc(&local_b0,param_2[8][0x92] + 2);
            local_ad8 = local_b0;
            local_ad4 = local_ac;
            local_ad0 = local_a8;
            local_acc = local_a4;
            local_ac8 = local_a0;
            local_ac4 = pppppiStack_9c;
            local_ac0 = pppppiStack_98;
            local_abc = (int *****)CONCAT31(local_abc._1_3_,1);
            uVar13 = FUN_00ffcdb4(uVar13,&local_ad8);
            *(undefined1 *)((int)param_2 + 0x59) = 1;
            uVar14 = FUN_01a64fe8();
            ppppiVar11 = param_2[8];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            FUN_0068c2dc(&local_ad8,param_2[8][0x92] + 2);
            uVar15 = FUN_00f9ef84(ppppiVar11,&local_ad8);
            uVar14 = FUN_01004b24(uVar14,uVar15,&DAT_01c1ff54);
            ppppiVar11 = param_2[8];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            FUN_0068c2dc(&local_ad8,param_2[8][0x92] + 2);
            uVar15 = FUN_00f9e9f0(ppppiVar11,&local_ad8);
            uVar14 = FUN_01004b24(uVar14,uVar15,&DAT_01c1ff64);
            ppppiVar11 = param_2[8];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            FUN_0068c2dc(&local_ad8,param_2[8][0x92] + 2);
            uVar15 = FUN_00f9d8e8(ppppiVar11,&local_ad8);
            FUN_01004b24(uVar14,uVar15,&DAT_01c1ff74);
            ppppiVar11 = param_2[0xf];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            FUN_0100252c();
            ppppiVar11 = param_2[0xf];
            do {
              pppiVar22 = *ppppiVar11;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            } while (!bVar31);
            *ppppiVar11 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            FUN_0100132c();
            uVar14 = FUN_00fff9d4();
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
            uVar14 = FUN_00ff9ca8(uVar14,&local_ad8);
            *(undefined1 *)((int)param_2 + 0x59) = 0;
            uVar13 = FUN_01004b24(uVar13,uVar14,&DAT_01c1ff84);
            *(undefined1 *)((int)param_2 + 0x5a) = 0;
            ppppiVar11 = (int ****)FUN_01004b24(uVar13,uVar12,&DAT_01c1ff94);
            *(undefined1 *)(param_2 + 0x16) = 1;
            pppiVar22 = param_2[8][0x89];
            do {
              ppiVar18 = *pppiVar22;
              bVar31 = (bool)hasExclusiveAccess(pppiVar22);
            } while (!bVar31);
            *pppiVar22 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
            pppiVar25 = param_2[8][0x8a];
            do {
              ppiVar18 = *pppiVar25;
              bVar31 = (bool)hasExclusiveAccess(pppiVar25);
            } while (!bVar31);
            *pppiVar25 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
            pppiVar6 = param_2[8][0x86];
            do {
              ppiVar18 = *pppiVar6;
              bVar31 = (bool)hasExclusiveAccess(pppiVar6);
            } while (!bVar31);
            *pppiVar6 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
            pppiVar30 = param_2[8][0x90];
            do {
              ppiVar18 = *pppiVar30;
              bVar31 = (bool)hasExclusiveAccess(pppiVar30);
            } while (!bVar31);
            *pppiVar30 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
            ppppiVar17 = param_2[0xd];
            *(undefined1 *)((int)param_2 + 0x4e) = 0;
            FUN_010177f0(&local_ad8,param_2[8] + 6);
            pppiVar7 = param_2[8][0x10];
            do {
              ppiVar18 = *pppiVar7;
              bVar31 = (bool)hasExclusiveAccess(pppiVar7);
            } while (!bVar31);
            *pppiVar7 = (int **)((int)ppiVar18 + 1);
            if ((int)ppiVar18 < 0) goto LAB_00bc7b74;
            FUN_009d4768(&local_b0);
            uVar12 = FUN_00faa8e0(pppiVar22,pppiVar25,pppiVar6,pppiVar30,ppppiVar17,&local_ad8,
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
            FUN_00ffcdb4(uVar12,&local_ad8);
            FUN_01000704();
            ppppiVar17 = param_2[0xf];
            do {
              pppiVar22 = *ppppiVar17;
              bVar31 = (bool)hasExclusiveAccess(ppppiVar17);
            } while (!bVar31);
            *ppppiVar17 = (int ***)((int)pppiVar22 + 1);
            if ((int)pppiVar22 < 0) goto LAB_00bc7b74;
            uVar12 = FUN_0100252c();
            *(undefined1 *)(param_2 + 0x17) = 0;
            ppppiVar17 = (int ****)FUN_0100132c(uVar12,param_2[0xf]);
            *(undefined1 *)((int)param_2 + 0x57) = 1;
            local_ad4 = (int *****)FUN_00bd04d0();
            *(undefined2 *)((int)param_2 + 0x57) = 0;
            *local_ad4 = ppppiVar11;
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
            ppppiVar11 = (int ****)FUN_01a3b664();
            param_2[0x10] = ppppiVar11;
            FUN_01a3c2e0();
            *(undefined1 *)(param_2 + 0x15) = 1;
            local_110 = ppppiVar11;
            local_10c = FUN_01a3b3a4(param_2[0x10]);
            *(undefined1 *)((int)param_2 + 0x5d) = 0;
            *(undefined1 *)((int)param_2 + 0x5b) = 0;
            *(undefined2 *)(param_2 + 0x15) = 0;
            pppppiStack_f8 = local_130;
            pppppiStack_f4 = local_12c;
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
            local_d4 = ppppiVar11;
            ppppiVar11 = (int ****)FUN_00e5f5a8(param_2[8][0x8c],local_10c);
            param_2[0x11] = ppppiVar11;
            *(undefined1 *)((int)param_2 + 0x4f) = 1;
            *(undefined1 *)(param_2 + 0x18) = 0;
            *(undefined1 *)((int)param_2 + 0x52) = 0;
            FUN_01bed4e2(&local_ad8,&local_108,0x44);
            local_a8c = local_a8c & 0xffffff00;
            local_a90 = param_2 + 0x10;
            ppppiVar11 = (int ****)FUN_005d109c(&local_108);
            param_2[0x1c] = ppppiVar11;
            param_2[0x1d] = (int ****)&DAT_01c021a0;
            FUN_01bed4e2(param_2 + 0x1e,&local_a90,0x58);
            param_2[0x1a] = (int ****)pppppiVar16;
            param_2[0x1b] = (int ****)pppppiVar20;
            goto LAB_00bc54c4;
          }
          pppppiVar20 = (int *****)((uint)local_ad4 >> 8 | (int)local_ad0 << 0x18);
          uVar28 = (uint)local_ad4 & 0xff;
          pppppiVar16 = local_ad0;
          goto LAB_00bc6ad8;
        }
        pppppiVar20 = (int *****)((uint)local_ad8 >> 8 | (int)local_ad4 << 0x18);
        pppppiVar16 = local_ad4;
        goto LAB_00bc6ae0;
      }
      pppppiVar20 = (int *****)((uint)local_ad8 >> 8 | (int)local_ad4 << 0x18);
      pppppiVar16 = (int *****)((uint)local_ad4 >> 8);
LAB_00bc6c00:
      *(undefined1 *)(param_2 + 0x13) = 0;
    }
    ppppiVar11 = param_2[0x19];
    if (*ppppiVar11 == (int ***)0xcc) {
      DataMemoryBarrier(0xb);
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
      if (!bVar31) goto LAB_00bc6c34;
      *ppppiVar11 = (int ***)0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00bc6c34:
      (*(code *)ppppiVar11[2][4])();
    }
    *(undefined1 *)(param_2 + 0x14) = 0;
    if (*(char *)((int)param_2 + 0x4d) != '\0') {
      FUN_005f4544(&local_b08);
    }
    *(undefined1 *)((int)param_2 + 0x4d) = 0;
    if (*(char *)((int)param_2 + 0x4e) != '\0') {
      ppppiVar11 = param_2[0xd];
      DataMemoryBarrier(0xb);
      do {
        pppiVar19 = *ppppiVar11;
        bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
      } while (!bVar31);
      *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
      if (pppiVar19 == (int ***)0x1) {
        DataMemoryBarrier(0xb);
        FUN_00a93a9c(param_2[0xd]);
      }
    }
    ppppiVar11 = param_2[0xc];
    *(undefined1 *)((int)param_2 + 0x5e) = 0;
    *(undefined1 *)((int)param_2 + 0x4e) = 0;
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182080(param_2[0xc]);
    }
    ppppiVar11 = param_2[0xb];
    if (*ppppiVar11 == (int ***)0xcc) {
      DataMemoryBarrier(0xb);
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
      if (!bVar31) goto LAB_00bc6d0c;
      *ppppiVar11 = (int ***)0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00bc6d0c:
      (*(code *)ppppiVar11[2][4])();
    }
    *(undefined1 *)((int)param_2 + 0x51) = 0;
    FUN_005faf6c(param_2 + 10);
    ppppiVar11 = param_2[9];
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182350(param_2[9]);
    }
    ppppiVar11 = param_2[8];
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_2[8]);
    }
    goto LAB_00bc6a74;
  case 4:
    pppppiVar16 = (int *****)param_2[0x1a];
    pppppiVar20 = (int *****)param_2[0x1b];
LAB_00bc54c4:
    FUN_0110e5e4(&local_b0,pppppiVar16,pppppiVar20,param_3);
    pppppiVar16 = local_ac;
    uVar28 = (uint)local_b0 & 0xff;
    if (uVar28 == 7) {
      *(undefined1 *)param_1 = 5;
      uVar3 = 4;
      goto LAB_00bc6a8c;
    }
    pppppiVar20 = (int *****)CONCAT13(local_ac._0_1_,local_b0._1_3_);
    FUN_00bd04f0(param_2 + 0x1c);
    iVar8 = uVar28 - 4;
    if (uVar28 < 4 || iVar8 == 0) {
      iVar8 = 0;
    }
    if (iVar8 == 0) {
      if (uVar28 != 4) {
        ppppiVar11 = param_2[0x11];
        if (ppppiVar11 != (int ****)0x0) {
          if (*ppppiVar11 == (int ***)0xcc) {
            DataMemoryBarrier(0xb);
            bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
            if (bVar31) {
              *ppppiVar11 = (int ***)0x84;
              goto LAB_00bc6aac;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (*(code *)ppppiVar11[2][4])();
        }
LAB_00bc6aac:
        *(undefined2 *)((int)param_2 + 0x52) = 0;
        *(undefined1 *)((int)param_2 + 0x4f) = 0;
        *(undefined1 *)(param_2 + 0x15) = 0;
        FUN_005faf6c(param_2 + 0x10);
        *(undefined1 *)((int)param_2 + 0x55) = 0;
        *(undefined1 *)((int)param_2 + 0x56) = 0;
        *(undefined2 *)((int)param_2 + 0x5b) = 0;
        *(undefined4 *)((int)param_2 + 0x57) = 0;
LAB_00bc6ad8:
        *(undefined1 *)((int)param_2 + 0x5d) = 0;
LAB_00bc6ae0:
        pppppiVar16 = (int *****)((uint)pppppiVar16 >> 8);
        if (*(char *)(param_2 + 0x13) != '\0') {
          FUN_01bf01d6(param_2[0xe]);
        }
        goto LAB_00bc6c00;
      }
    }
    else {
      if (iVar8 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("all branches are disabled and there is no else branch",0x6b,&DAT_01c1ffb4);
      }
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4c7f0 - 1 < 2 ||
           ((DAT_01d4c7f0 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c7e8), cVar4 != '\0')))))) &&
         (iVar8 = FUN_01aaa278(DAT_01d4c7e8), iVar8 != 0)) {
        local_34 = (undefined4 *)(DAT_01d4c7e8 + 0x1c);
        if (*(int ******)(DAT_01d4c7e8 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ffa4);
        }
        local_ac = (int *****)&local_48;
        local_ad0 = *(int ******)(DAT_01d4c7e8 + 0x24);
        local_acc = *(int ******)(DAT_01d4c7e8 + 0x28);
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
        iVar8 = DAT_01d4c7e8;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_bc = *(int ******)(DAT_01d4c7e8 + 0x14);
          local_b8 = *(int ******)(DAT_01d4c7e8 + 0x18);
          local_c0 = (int *****)0x2;
          DataMemoryBarrier(0xb);
          puVar29 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar29 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar9 = (*(code *)puVar29[3])(pcVar2,&local_c0);
          if (iVar9 != 0) {
            local_40 = (undefined4 *)(DAT_01d4c7e8 + 0x1c);
            if (*(int ******)(DAT_01d4c7e8 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ffa4);
            }
            local_ad0 = *(int ******)(DAT_01d4c7e8 + 0x24);
            local_acc = *(int ******)(DAT_01d4c7e8 + 0x28);
            local_38 = (int *****)&local_30;
            local_3c = (int *****)&local_ad8;
            local_48 = (int *****)&local_3c;
            local_ac8 = (int *****)0x0;
            local_44 = (int *****)&DAT_00000001;
            local_2c = 0x7b;
            local_34 = (undefined4 *)&DAT_01d2ea4c;
            local_30 = (int *****)0x400b40;
            local_b0 = local_c0;
            local_ac = local_bc;
            local_a8 = local_b8;
            local_ad8 = (int *****)*local_40;
            local_ad4 = *(int ******)(DAT_01d4c7e8 + 0x20);
            FUN_01aaa328(iVar8,pcVar2,puVar29[4],&local_b0,&local_48);
          }
        }
      }
    }
    ppppiVar11 = param_2[0x19];
    *(undefined1 *)(param_2 + 0x14) = 0;
    param_2[0x18] = ppppiVar11;
    break;
  case 5:
    ppppiVar11 = param_2[0x18];
    break;
  case 6:
    goto LAB_00bc6600;
  case 7:
    goto LAB_00bc693c;
  }
  FUN_01209998(&local_ad8,ppppiVar11,*param_3);
  pppppiVar5 = local_ac4;
  pppppiVar27 = local_ac8;
  pppppiVar20 = local_acc;
  pppppiVar16 = local_ad0;
  if (((uint)local_ad8 & 1) != 0) {
    uVar3 = 5;
    *(undefined1 *)param_1 = 5;
    goto LAB_00bc6a8c;
  }
  ppppiVar11 = param_2[0x18];
  if (*ppppiVar11 == (int ***)0xcc) {
    DataMemoryBarrier(0xb);
    bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    if (!bVar31) goto LAB_00bc6590;
    *ppppiVar11 = (int ***)0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00bc6590:
    (*(code *)ppppiVar11[2][4])();
  }
  bVar31 = pppppiVar16 == (int *****)0x0 && pppppiVar20 == (int *****)0x0;
  if (pppppiVar16 != (int *****)0x0 || pppppiVar20 != (int *****)0x0) {
    bVar31 = pppppiVar27 == (int *****)0x0;
  }
  if (!bVar31) {
    FUN_00f80320(pppppiVar27,pppppiVar5);
  }
  if (param_2[0x11] != (int ****)0x0) {
    *(undefined1 *)((int)param_2 + 0x4f) = 0;
    FUN_010e6c44(&local_ad8,param_2[0x11],&DAT_01c1ffc4);
    FUN_01bed4e2(&local_b0,&local_ad8,0x58);
    FUN_01bed4e2(param_2 + 0x18,&local_b0,0x58);
LAB_00bc6600:
    FUN_0112ea44(&local_ad8,param_2 + 0x18,*param_3);
    pppppiVar24 = local_ac4;
    pppppiVar21 = local_ac8;
    pppppiVar5 = local_acc;
    pppppiVar27 = local_ad0;
    pppppiVar20 = local_ad4;
    pppppiVar16 = local_ad8;
    if (local_ad8 == (int *****)0x2 && local_ad4 == (int *****)0x0) {
      *(undefined1 *)param_1 = 5;
      uVar3 = 6;
      goto LAB_00bc6a8c;
    }
    FUN_005f0f24(param_2 + 0x18);
    if (pppppiVar16 == (int *****)0x0 && pppppiVar20 == (int *****)0x0) {
      bVar31 = pppppiVar27 == (int *****)0x0 && pppppiVar5 == (int *****)0x0;
      if (pppppiVar27 != (int *****)0x0 || pppppiVar5 != (int *****)0x0) {
        bVar31 = pppppiVar21 == (int *****)0x0;
      }
      if (!bVar31) {
        FUN_00f80320(pppppiVar21,pppppiVar24);
      }
    }
    else if (((DAT_01d50f88 < 4) &&
             ((DAT_01d4c7fc - 1 < 2 ||
              ((DAT_01d4c7fc != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4c7f4), cVar4 != '\0')))))) &&
            (iVar8 = FUN_01aaa278(DAT_01d4c7f4), iVar8 != 0)) {
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
      iVar8 = DAT_01d4c7f4;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_54 = *(int ******)(DAT_01d4c7f4 + 0x14);
        local_50 = *(int ******)(DAT_01d4c7f4 + 0x18);
        local_58 = (int *****)0x2;
        DataMemoryBarrier(0xb);
        puVar29 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar29 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar9 = (*(code *)puVar29[3])(pcVar2,&local_58);
        if (iVar9 != 0) {
          if (*(int ******)(DAT_01d4c7f4 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1ffd4);
          }
          local_ad0 = *(int ******)(DAT_01d4c7f4 + 0x24);
          local_acc = *(int ******)(DAT_01d4c7f4 + 0x28);
          local_38 = (int *****)&local_30;
          local_3c = (int *****)&local_ad8;
          local_48 = (int *****)&local_3c;
          local_ac8 = (int *****)0x0;
          local_44 = (int *****)&DAT_00000001;
          local_34 = (undefined4 *)&DAT_01d2ea4c;
          local_2c = 0x87;
          local_30 = (int *****)0x400b7d;
          local_b0 = local_58;
          local_ac = local_54;
          local_a8 = local_50;
          local_ad8 = *(int ******)(DAT_01d4c7f4 + 0x1c);
          local_ad4 = *(int ******)(DAT_01d4c7f4 + 0x20);
          local_40 = (undefined4 *)(DAT_01d4c7f4 + 0x1c);
          FUN_01aaa328(iVar8,pcVar2,puVar29[4],&local_b0,&local_48);
        }
      }
    }
  }
  local_a88 = 0;
  piVar10 = (int *)FUN_010a3af4(&local_ad8,&DAT_01c1ffe4);
  if (*piVar10 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar31 = (bool)hasExclusiveAccess(piVar10);
    if (!bVar31) goto LAB_00bc68f0;
    *piVar10 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00bc68f0:
    (**(code **)(piVar10[2] + 0x10))();
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
LAB_00bc693c:
  FUN_0110e880(&local_ad8,param_2 + 0x32,param_3);
  pppppiVar20 = local_ac4;
  pppppiVar16 = local_ac8;
  if (((uint)local_ad8 & 1) == 0) {
    local_b0 = local_ad0;
    local_ac = local_acc;
    local_a8 = local_ac8;
    local_a4 = local_ac4;
    FUN_00bd0524(param_2 + 0x18);
    FUN_00bd05a8(&local_b0);
    *(undefined2 *)((int)param_2 + 0x52) = 0;
    *(undefined1 *)((int)param_2 + 0x4f) = 0;
    *(undefined1 *)(param_2 + 0x15) = 0;
    FUN_005faf6c(param_2 + 0x10);
    ppppiVar11 = param_2[0xc];
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
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182080(param_2[0xc]);
    }
    *(undefined1 *)((int)param_2 + 0x51) = 0;
    FUN_005faf6c(param_2 + 10);
    ppppiVar11 = param_2[9];
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182350(param_2[9]);
    }
    ppppiVar11 = param_2[8];
    DataMemoryBarrier(0xb);
    do {
      pppiVar19 = *ppppiVar11;
      bVar31 = (bool)hasExclusiveAccess(ppppiVar11);
    } while (!bVar31);
    *ppppiVar11 = (int ***)((int)pppiVar19 + -1);
    uVar28 = 4;
    if (pppiVar19 == (int ***)0x1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_2[8]);
    }
LAB_00bc6a74:
    *param_1 = uVar28 | (int)pppppiVar20 << 8;
    param_1[1] = (int)pppppiVar16 << 8 | (uint)pppppiVar20 >> 0x18;
    uVar3 = 1;
  }
  else {
    *(undefined1 *)param_1 = 5;
    uVar3 = 7;
  }
LAB_00bc6a8c:
  *(undefined1 *)((int)param_2 + 0x5f) = uVar3;
  return;
}

