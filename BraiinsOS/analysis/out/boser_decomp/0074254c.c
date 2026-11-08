// FUN_0074254c @ 0074254c size=5984 calls_out=53 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_0074254c(int *param_1,int *****param_2)

{
  byte bVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *piVar7;
  undefined1 *puVar8;
  uint uVar9;
  int ****ppppiVar10;
  int iVar11;
  int *****unaff_r4;
  int *****pppppiVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  undefined1 uVar15;
  int *****unaff_r6;
  undefined1 *puVar16;
  int *****pppppiVar17;
  int *****pppppiVar18;
  int iVar19;
  int *****pppppiVar20;
  int *****pppppiVar21;
  int *****pppppiVar22;
  code *pcVar23;
  code *pcVar24;
  undefined *puVar25;
  bool bVar26;
  undefined8 uVar27;
  uint local_5d0;
  int *****local_5cc;
  int *local_5c4;
  int *local_5c0;
  int *****local_5bc;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5b0;
  int *****local_5ac;
  int *****local_5a8;
  int *****local_5a4;
  int *****local_5a0;
  int *****local_59c;
  int *****pppppiStack_598;
  code *pcStack_594;
  int *****local_590;
  int *****local_58c;
  int ****local_588;
  int ****local_584;
  undefined4 local_580;
  int *****local_538;
  int *****local_534;
  int *****local_530;
  undefined1 local_3ec;
  int *****local_3e0;
  int *****local_3dc;
  int *****local_3d8;
  code *local_3d4;
  int *****local_238;
  int *****local_234;
  int *****local_230;
  code *local_22c;
  int *****local_228;
  int *****local_224;
  int *****local_220;
  undefined4 local_21c;
  int local_218;
  undefined4 local_214;
  int local_210;
  undefined4 local_20c;
  undefined1 auStack_1e8 [44];
  undefined1 local_1bc;
  int *****local_90;
  int *****local_8c;
  int *****local_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int *****pppppiStack_78;
  int *****local_70;
  int *****local_6c;
  int *****local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  int *****pppppiStack_58;
  int *****local_50;
  int *****local_4c;
  int *****local_48;
  int *****local_44;
  int ****local_40;
  int *****local_3c;
  int *****local_38;
  int *****local_34;
  undefined1 *local_30;
  int ****local_2c;
  int *****local_28;
  
  pcVar23 = (code *)(param_1 + 10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[3]) {
  case '\0':
    iVar4 = *param_1 + 8;
    param_1[4] = iVar4;
    *(undefined1 *)(param_1 + 0x12) = 0;
LAB_007425d4:
    *(undefined1 *)(param_1 + 0x11) = 0;
    param_1[5] = iVar4;
LAB_007425e4:
    *(undefined1 *)(param_1 + 8) = 0;
    param_1[6] = iVar4;
LAB_007425f4:
    param_1[7] = iVar4;
LAB_007425f8:
    *(undefined1 *)(param_1 + 0x10) = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 1;
    param_1[0xf] = 1;
    param_1[9] = iVar4;
    param_1[10] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c081d8);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c081d8);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x12]) {
    case '\0':
      iVar4 = param_1[4];
      goto LAB_007425d4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23280);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23280);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0x11]) {
    case '\0':
      iVar4 = param_1[5];
      goto LAB_007425e4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c23290);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c23290);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[8]) {
    case '\0':
      iVar4 = param_1[6];
      goto LAB_007425f4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c232a0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c232a0);
    case '\x03':
      iVar4 = param_1[7];
      goto LAB_007425f8;
    }
    break;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_1[0xaa]) {
    case '\0':
      iVar11 = param_1[5];
      puVar25 = (undefined *)param_1[6];
      iVar4 = param_1[7];
      goto LAB_007426f4;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c081c8);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c081c8);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x3a]) {
      case '\0':
        puVar16 = (undefined1 *)param_1[0xc];
        iVar4 = param_1[0x11];
        iVar19 = param_1[0x12];
        ppppiVar10 = (int ****)param_1[0xe];
        iVar11 = param_1[0xf];
        puVar25 = (undefined *)param_1[0x10];
        goto LAB_00742728;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c08198);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c08198);
      case '\x03':
        pppppiVar17 = (int *****)param_1[0x3e];
        goto LAB_00742b98;
      case '\x04':
switchD_00742a00_caseD_4:
        *(undefined1 *)((int)param_1 + 0xea) = 0;
        local_238 = (int *****)param_1[0x36];
        local_234 = (int *****)param_1[0x37];
        local_230 = (int *****)param_1[0x38];
        local_22c = (code *)param_1[0x39];
        FUN_007372d8();
        *(undefined1 *)((int)param_1 + 0xea) = 0;
        goto LAB_0074314c;
      case '\x06':
        goto switchD_00742a00_caseD_6;
      }
    }
    goto switchD_00742a00_caseD_5;
  }
  bVar1 = FUN_019f9bc4(param_1 + 9,param_2);
  if (bVar1 == 2) {
    uVar15 = 3;
    *(undefined1 *)(param_1 + 8) = 4;
    uVar14 = 1;
    *(undefined1 *)(param_1 + 0x11) = 3;
    *(undefined1 *)(param_1 + 0x12) = 3;
    goto LAB_00743618;
  }
  FUN_0193c3cc(param_1 + 9);
  if ((bVar1 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c232b0);
  }
  iVar4 = 1;
  puVar25 = &DAT_01c081e8;
  param_1[2] = param_1[5];
  *(undefined1 *)(param_1 + 8) = 1;
  *(undefined1 *)(param_1 + 0x12) = 1;
  *(undefined1 *)(param_1 + 0x11) = 1;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1[1] + 8) = 0;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(param_1 + 0xaa) = 0;
  iVar11 = 0x16;
  param_1[5] = 0x16;
  param_1[6] = (int)&DAT_01c081e8;
  param_1[7] = 1;
  param_1[4] = (int)&DAT_003e088f;
LAB_007426f4:
  iVar19 = 0;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  ppppiVar10 = (int ****)param_1[4];
  puVar16 = &DAT_3b9aca00;
  param_1[8] = (int)ppppiVar10;
  param_1[9] = iVar11;
  param_1[0xe] = (int)ppppiVar10;
  param_1[0xf] = iVar11;
  param_1[0x10] = (int)puVar25;
  param_1[0x11] = iVar4;
  param_1[0x12] = 0;
  param_1[0xc] = (int)&DAT_3b9aca00;
LAB_00742728:
  param_1[0x1a] = *(int *)pcVar23;
  param_1[0x1b] = param_1[0xb];
  unaff_r4 = (int *****)(param_1 + 0x14);
  *unaff_r4 = ppppiVar10;
  param_1[0x15] = iVar11;
  param_1[0x16] = (int)puVar25;
  *(undefined2 *)((int)param_1 + 0xe9) = 0;
  param_1[0x1c] = (int)puVar16;
  param_1[0x17] = iVar4;
  param_1[0x18] = iVar19;
  param_1[0x19] = param_1[0x13];
  FUN_019af4c4(&local_238,ppppiVar10,iVar11);
  pppppiVar17 = (int *****)param_1[0x16];
  local_1bc = 0;
  pppppiVar20 = (int *****)0x0;
  if (param_1[0x17] != 0) {
    pppppiVar20 = pppppiVar17 + param_1[0x17] * 2;
    do {
      FUN_019af384(&local_238,*pppppiVar17,pppppiVar17[1]);
      pppppiVar17 = pppppiVar17 + 2;
    } while (pppppiVar17 != pppppiVar20);
  }
  pppppiVar17 = (int *****)0x2;
  if (param_1[0x18] == 0) {
    pppppiVar17 = (int *****)&DAT_00000001;
  }
  if (local_220 == (int *****)&DAT_00000003) {
    FUN_01bf01d6(local_21c);
  }
  local_220 = pppppiVar17;
  if (local_218 == 3) {
    FUN_01bf01d6(local_214);
  }
  local_218 = 2;
  if (local_210 == 3) {
    FUN_01bf01d6(local_20c);
  }
  local_210 = 2;
  local_1bc = 1;
  FUN_019b46e0(&local_90,&local_238);
  pppppiVar21 = local_8c;
  pppppiVar17 = local_88;
  if (local_90 == (int *****)0x2) {
LAB_00742874:
    local_8c = (int *****)&DAT_0132b6a0;
    local_90 = unaff_r4;
    local_38 = pppppiVar21;
    local_34 = pppppiVar17;
    FUN_00664898(&local_70,&DAT_005b9c87,&local_90);
    local_5bc = (int *****)FUN_00798a5c(&local_38,&local_70);
    FUN_00744414(&local_238);
    pcVar24 = pcVar23;
LAB_007428c4:
    pppppiVar17 = (int *****)&DAT_80000000;
    *(undefined1 *)((int)param_1 + 0xe9) = 0;
  }
  else {
    local_64 = local_84;
    uStack_60 = uStack_80;
    uStack_5c = uStack_7c;
    pppppiStack_58 = pppppiStack_78;
    local_68 = local_88;
    local_6c = local_8c;
    local_70 = local_90;
    FUN_019eab18(&local_3e0,local_1bc);
    pppppiVar17 = local_3dc;
    pppppiVar21 = local_3e0;
    if (local_3e0 == (int *****)&DAT_00000003) {
      puVar5 = (undefined4 *)((uint)&local_3e0 | 4);
      pppppiVar21 = (int *****)*puVar5;
      pppppiVar17 = (int *****)puVar5[1];
      pppppiVar20 = pppppiStack_78;
      goto LAB_00742874;
    }
    FUN_01bed4e2(&local_590,&local_3d8,0x58);
    unaff_r6 = (int *****)&local_3e0;
    FUN_01bed4e2(unaff_r6,&local_590,0x58);
    *(undefined1 *)((int)param_1 + 0xe9) = 1;
    param_1[0x1e] = (int)pppppiVar21;
    param_1[0x1f] = (int)pppppiVar17;
    FUN_01bed4e2(param_1 + 0x20,unaff_r6,0x58);
    FUN_00744414(&local_238);
    if (param_1[0x18] != 0) {
      iVar4 = param_1[0x1e];
      pppppiVar20 = (int *****)0x2;
      pppppiVar17 = (int *****)param_1[0x19];
      param_1[0x1e] = 2;
      if (iVar4 == 2) {
        FUN_019b9f84(&local_238);
        unaff_r4 = (int *****)FUN_00748bfc(&local_238);
      }
      else {
        param_1[0x38] = param_1[0x20];
        param_1[0x39] = param_1[0x21];
        param_1[0x36] = iVar4;
        param_1[0x37] = param_1[0x1f];
        *(undefined1 *)((int)param_1 + 0xea) = 1;
        param_1[0x3c] = (int)(param_1 + 0x36);
        param_1[0x3d] = param_1[0x18];
        param_1[0x3e] = (int)pppppiVar17;
LAB_00742b98:
        pppppiVar20 = (int *****)&local_234;
        do {
          pppppiVar22 = unaff_r6;
          if (pppppiVar17 == (int *****)0x0) {
            param_1[0x3c] = (int)(param_1 + 0x36);
            goto switchD_00742a00_caseD_4;
          }
          pppppiVar21 = (int *****)param_1[0x3c];
          iVar4 = param_1[0x3d];
          ppppiVar10 = pppppiVar21[3];
          while (FUN_019e7220(&local_238,pppppiVar21[2],param_2,1), local_238 != (int *****)0x2) {
            pppppiVar12 = local_234;
            unaff_r6 = local_230;
            if (((uint)local_238 & 1) != 0) {
LAB_00742ca4:
              local_5d0 = (uint)pppppiVar12 >> 8;
              goto LAB_00742cb4;
            }
            local_3e0 = local_234;
            local_3dc = local_230;
            if (ppppiVar10 == (int ****)0xffffffff) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d28e94);
            }
            unaff_r6 = (int *****)FUN_01bf053e(pppppiVar21[3],iVar4,pppppiVar17);
            if (unaff_r6 != (int *****)&DAT_ffffffff) {
              pppppiVar12 = (int *****)&SUB_00000004;
              local_238 = (int *****)CONCAT31(local_238._1_3_,4);
              local_234 = unaff_r6;
              if ((unaff_r6 != (int *****)0x0) && (unaff_r6 < pppppiVar17)) {
                FUN_019e0788(pppppiVar21[2] + 8,&local_3e0);
              }
              goto LAB_00742cb4;
            }
            puVar5 = (undefined4 *)FUN_01be3244();
            pppppiVar18 = (int *****)*puVar5;
            local_238 = (int *****)((uint)local_238 & 0xffffff00);
            local_234 = pppppiVar18;
            cVar3 = FUN_005ef5e8(&local_238);
            pppppiVar12 = local_238;
            if (cVar3 != '\r') {
              unaff_r6 = local_234;
              goto LAB_00742ca4;
            }
            FUN_019e0788(pppppiVar21[2] + 8,&local_3e0);
            FUN_0069263c(pppppiVar12,pppppiVar18);
          }
          pppppiVar12 = (int *****)&DAT_00000005;
          unaff_r6 = pppppiVar22;
LAB_00742cb4:
          local_5cc = pppppiVar22;
          if (((uint)pppppiVar12 & 0xff) != 4) {
            if (((uint)pppppiVar12 & 0xff) == 5) {
              uVar2 = 3;
              goto LAB_007435fc;
            }
            uVar9 = (uint)unaff_r6 >> 8;
            uVar6 = local_5d0 & 0xffffff | (int)unaff_r6 << 0x18;
            goto LAB_00743420;
          }
          iVar4 = param_1[0x3d];
          pppppiVar17 = (int *****)param_1[0x3e];
          param_1[0x3d] = 1;
          param_1[0x3e] = 0;
          if (pppppiVar17 < unaff_r6) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d20b98);
          }
          pppppiVar17 = (int *****)((int)pppppiVar17 - (int)unaff_r6);
          param_1[0x3d] = (int)(iVar4 + (int)unaff_r6);
          param_1[0x3e] = (int)pppppiVar17;
        } while (unaff_r6 != (int *****)0x0);
        uVar9 = 0;
        uVar6 = 0x17;
        pppppiVar12 = (int *****)&DAT_00000001;
LAB_00743420:
        local_238 = (int *****)((uint)pppppiVar12 & 0xff | uVar6 << 8);
        local_234 = (int *****)(uVar9 << 8 | uVar6 >> 0x18);
        unaff_r4 = (int *****)FUN_0079627c(&local_238);
        FUN_007372d8(param_1 + 0x36);
      }
      *(undefined1 *)((int)param_1 + 0xea) = 0;
LAB_00743af4:
      pcVar24 = pcVar23;
      local_5bc = unaff_r4;
      if (*(char *)((int)param_1 + 0xe9) != '\0') {
        FUN_010a7ed4(param_1 + 0x1e);
      }
      goto LAB_007428c4;
    }
LAB_0074314c:
    *(undefined1 *)((int)param_1 + 0xe9) = 0;
    FUN_01bed4e2(&local_538,param_1 + 0x1e,0x60);
    puVar16 = (undefined1 *)param_1[0x1c];
    local_3ec = 0;
    if (puVar16 == &DAT_3b9aca00) {
      FUN_01bed4e2(param_1 + 0x3c,&local_538,0x154);
switchD_00742a00_caseD_6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0x8f]) {
      case '\0':
        FUN_01bed4e2(param_1 + 0x54,param_1 + 0x3c,0x60);
        param_1[0x6c] = param_1[0x40];
        param_1[0x6d] = param_1[0x41];
        param_1[0x6e] = param_1[0x42];
        param_1[0x6f] = param_1[0x43];
        *(undefined1 *)(param_1 + 0x90) = 1;
        param_1[0x58] = 2;
        param_1[0x70] = param_1[0x44];
        param_1[0x71] = param_1[0x45];
        param_1[0x72] = param_1[0x46];
        param_1[0x73] = param_1[0x47];
        *(undefined2 *)((int)param_1 + 0x23d) = 0;
        *(undefined1 *)((int)param_1 + 0x23f) = 1;
        param_1[0x5c] = 2;
        *(undefined1 *)(param_1 + 0x8e) = 0;
        param_1[0x84] = 0;
        param_1[0x85] = (int)(param_1 + 0x70);
        *(undefined1 *)(param_1 + 0x83) = 0;
        param_1[0x79] = 0;
        param_1[0x7a] = (int)(param_1 + 0x6c);
        *(undefined1 *)(param_1 + 0x78) = 0;
        param_1[0x74] = 0;
        param_1[0x75] = (int)(param_1 + 0x54);
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2655c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2655c);
      }
      pppppiVar22 = (int *****)(param_1 + 0x74);
      FUN_0079902c(&local_238,pppppiVar22,param_2);
      pppppiVar21 = local_220;
      pppppiVar20 = local_224;
      pcVar24 = local_22c;
      unaff_r4 = local_230;
      pppppiVar17 = local_238;
      if (local_238 == (int *****)&DAT_80000001) {
        *(undefined1 *)(param_1 + 0x8f) = 3;
        uVar2 = 6;
LAB_007435fc:
        local_5c0 = param_1 + 0xaa;
        local_5c4 = param_1 + 0x3a;
        uVar14 = 1;
        uVar15 = 4;
        *(undefined1 *)local_5c4 = uVar2;
        *(undefined1 *)local_5c0 = 3;
        goto LAB_00743618;
      }
      local_5bc = local_234;
      local_5cc = local_228;
      FUN_00b8c628(pppppiVar22);
      if (pppppiVar17 == (int *****)&DAT_80000000) {
        *(undefined2 *)((int)param_1 + 0x23d) = 0;
        if (param_1[0x70] != 2) {
          FUN_007372d8();
        }
        *(undefined1 *)((int)param_1 + 0x23f) = 0;
        if (param_1[0x6c] != 2) {
          FUN_007372d8();
        }
        *(undefined1 *)(param_1 + 0x90) = 0;
        FUN_010a7ed4(param_1 + 0x54);
        pppppiVar20 = pppppiVar22;
      }
      else {
        *(undefined1 *)(param_1 + 0x90) = 0;
        local_238 = (int *****)param_1[0x6c];
        local_234 = (int *****)param_1[0x6d];
        local_230 = (int *****)param_1[0x6e];
        local_22c = (code *)param_1[0x6f];
        if (local_238 != (int *****)0x2) {
          FUN_007372d8(&local_238);
        }
        *(undefined1 *)((int)param_1 + 0x23f) = 0;
        local_238 = (int *****)param_1[0x70];
        local_234 = (int *****)param_1[0x71];
        local_230 = (int *****)param_1[0x72];
        local_22c = (code *)param_1[0x73];
        if (local_238 != (int *****)0x2) {
          FUN_007372d8(&local_238);
        }
        *(undefined4 *)((int)param_1 + 0x23d) = 0;
        FUN_010a7ed4(param_1 + 0x54);
      }
      *(undefined1 *)(param_1 + 0x8f) = 1;
      FUN_00741c1c(param_1 + 0x3c);
    }
    else {
      uVar9 = param_1[0x1a];
      uVar6 = param_1[0x1b];
      param_1[0xa8] = (int)puVar16;
      param_1[0xa6] = uVar9;
      param_1[0xa7] = uVar6;
      FUN_019ac130(&local_590,1);
      puVar13 = (undefined1 *)((int)local_590 + uVar9);
      puVar8 = (undefined1 *)((int)local_58c + CARRY4((uint)local_590,uVar9) + uVar6);
      if ((int)uVar6 < 0 == (int)(((uint)local_58c ^ (uint)puVar8) & ~((uint)local_58c ^ uVar6)) < 0
         ) {
        puVar16 = (undefined1 *)((int)local_588 + (int)puVar16);
        if (&DAT_3b9aca00 <= puVar16) {
          bVar26 = (undefined1 *)0xfffffffe < puVar13;
          puVar13 = puVar13 + 1;
          if ((int)(((uint)puVar8 ^ (uint)(puVar8 + bVar26)) & ~(uint)puVar8) < 0)
          goto LAB_007432f0;
          puVar16 = puVar16 + -1000000000;
          puVar8 = puVar8 + bVar26;
        }
        uVar27 = FUN_019ef7f4(&DAT_01c081a8);
        uVar14 = (undefined4)((ulonglong)uVar27 >> 0x20);
        FUN_019dc4f8(&local_590,(int)uVar27,uVar14,uVar14,puVar13,puVar8,puVar16,&DAT_01c081a8);
      }
      else {
LAB_007432f0:
        FUN_019e6e14(&local_590);
      }
      unaff_r4 = (int *****)&local_238;
      FUN_01bed4e2(auStack_1e8,&local_538,0x154);
      FUN_01bed4e2(unaff_r4,&local_590,0x50);
      FUN_01bed4e2(&local_3e0,unaff_r4,0x1a8);
      FUN_01bed4e2(param_1 + 0x3c,&local_3e0,0x1a8);
switchD_00742a00_caseD_5:
      uVar6 = FUN_019ec70c();
      uVar9 = (uint)((uVar6 & 0xff) == 2);
      pppppiVar21 = (int *****)(uVar9 | uVar6 & 0xff);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_1[0xa3]) {
      case '\0':
        FUN_01bed4e2(param_1 + 0x68,param_1 + 0x50,0x60);
        param_1[0x80] = param_1[0x54];
        param_1[0x81] = param_1[0x55];
        param_1[0x82] = param_1[0x56];
        param_1[0x83] = param_1[0x57];
        *(undefined1 *)(param_1 + 0xa4) = 1;
        param_1[0x6c] = 2;
        unaff_r4 = (int *****)param_1[0x5a];
        param_1[0x84] = param_1[0x58];
        param_1[0x85] = param_1[0x59];
        param_1[0x86] = (int)unaff_r4;
        param_1[0x87] = param_1[0x5b];
        *(undefined2 *)((int)param_1 + 0x28d) = 0;
        *(undefined1 *)((int)param_1 + 0x28f) = 1;
        param_1[0x70] = 2;
        *(undefined1 *)(param_1 + 0xa2) = 0;
        param_1[0x98] = 0;
        param_1[0x99] = (int)(param_1 + 0x84);
        *(undefined1 *)(param_1 + 0x97) = 0;
        param_1[0x8d] = 0;
        param_1[0x8e] = (int)(param_1 + 0x80);
        *(undefined1 *)(param_1 + 0x8c) = 0;
        param_1[0x88] = 0;
        param_1[0x89] = (int)(param_1 + 0x68);
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2655c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2655c);
      }
      pppppiVar20 = (int *****)(param_1 + 0x88);
      FUN_0079902c(&local_238,pppppiVar20,param_2);
      pppppiVar18 = local_220;
      pppppiVar12 = local_224;
      pcVar24 = local_22c;
      pppppiVar22 = local_230;
      pppppiVar17 = local_238;
      if (local_238 == (int *****)&DAT_80000001) {
        *(undefined1 *)(param_1 + 0xa3) = 3;
        iVar4 = FUN_019ee264(uVar9 | uVar6 & 1,param_1 + 0x3c,*param_2);
        pppppiVar17 = (int *****)&DAT_80000001;
        pcVar24 = pcVar23;
        local_5bc = param_2;
        if (iVar4 != 0) {
          uVar2 = 5;
          goto LAB_007435fc;
        }
      }
      else {
        local_5bc = local_234;
        local_5cc = local_228;
        FUN_00b8c628(pppppiVar20);
        if (pppppiVar17 == (int *****)&DAT_80000000) {
          *(undefined2 *)((int)param_1 + 0x28d) = 0;
          if (param_1[0x84] != 2) {
            FUN_007372d8();
          }
          *(undefined1 *)((int)param_1 + 0x28f) = 0;
          if (param_1[0x80] != 2) {
            FUN_007372d8();
          }
          *(undefined1 *)(param_1 + 0xa4) = 0;
          FUN_010a7ed4(param_1 + 0x68);
          pppppiVar12 = pppppiVar20;
        }
        else {
          *(undefined1 *)(param_1 + 0xa4) = 0;
          local_238 = (int *****)param_1[0x80];
          local_234 = (int *****)param_1[0x81];
          local_230 = (int *****)param_1[0x82];
          local_22c = (code *)param_1[0x83];
          if (local_238 != (int *****)0x2) {
            FUN_007372d8(&local_238);
          }
          *(undefined1 *)((int)param_1 + 0x28f) = 0;
          local_238 = (int *****)param_1[0x84];
          local_234 = (int *****)param_1[0x85];
          local_230 = (int *****)param_1[0x86];
          local_22c = (code *)param_1[0x87];
          if (local_238 != (int *****)0x2) {
            FUN_007372d8(&local_238);
          }
          *(undefined4 *)((int)param_1 + 0x28d) = 0;
          FUN_010a7ed4(param_1 + 0x68);
        }
        *(undefined1 *)(param_1 + 0xa3) = 1;
        unaff_r4 = pppppiVar22;
        pppppiVar20 = pppppiVar12;
        pppppiVar21 = pppppiVar18;
      }
      FUN_00741be8(param_1 + 0x3c);
      if (pppppiVar17 == (int *****)&DAT_80000001) {
        iVar4 = param_1[0x16];
        local_5cc = (int *****)(param_1 + 0xa6);
        pppppiVar17 = (int *****)(param_1 + 0x14);
        iVar11 = param_1[0x17];
        if ((DAT_01d50f88 < 5) &&
           (((DAT_01d4b834 - 1 < 2 ||
             ((DAT_01d4b834 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4b82c), cVar3 != '\0')))) &&
            (iVar19 = FUN_01aaa278(DAT_01d4b82c), iVar19 != 0)))) {
          pppppiVar22 = DAT_01d4b82c + 7;
          local_590 = (int *****)*pppppiVar22;
          local_58c = (int *****)DAT_01d4b82c[8];
          if (local_58c == (int *****)0x0) {
LAB_00743d78:
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c081b8);
          }
          local_584 = DAT_01d4b82c[10];
          pppppiVar20 = (int *****)0x0;
          local_588 = DAT_01d4b82c[9];
          local_580 = 0;
          FUN_00748378(&local_38,iVar4,iVar11);
          local_28 = (int *****)&local_238;
          local_40 = (int ****)&local_2c;
          local_44 = (int *****)&local_590;
          local_50 = (int *****)&local_44;
          local_4c = (int *****)&DAT_00000001;
          local_22c = (code *)&LAB_00632348;
          local_224 = (int *****)FUN_01307ea0;
          local_2c = (int ****)&DAT_00589c4b;
          local_234 = (int *****)&DAT_0132b6a0;
          local_3c = (int *****)&DAT_01d2ea4c;
          local_238 = pppppiVar17;
          local_230 = (int *****)&local_38;
          local_228 = local_5cc;
          local_48 = pppppiVar22;
          FUN_01aaaecc(DAT_01d4b82c,&local_50);
          pppppiVar12 = DAT_01d4b82c;
          pppppiVar22 = pppppiVar21;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_8c = (int *****)DAT_01d4b82c[5];
            local_88 = (int *****)DAT_01d4b82c[6];
            local_90 = (int *****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            pppppiVar21 = DAT_01d4edc8;
            pppppiVar20 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pppppiVar21 = (int *****)&DAT_01cfc5e0;
              pppppiVar20 = (int *****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar4 = (*(code *)pppppiVar21[3])(pppppiVar20,&local_90);
            pppppiVar22 = pppppiVar12;
            if (iVar4 != 0) {
              local_70 = local_90;
              local_6c = local_8c;
              local_68 = local_88;
              FUN_01aaa328(pppppiVar12,pppppiVar20,pppppiVar21[4],&local_70,&local_50);
            }
          }
          pppppiVar21 = local_38;
          pppppiVar12 = local_34;
LAB_00743ab4:
          FUN_019bb7e0(pppppiVar21,pppppiVar12);
          pppppiVar21 = pppppiVar22;
        }
        else {
          pppppiVar22 = DAT_01d4b82c;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_4c = (int *****)DAT_01d4b82c[5];
            local_48 = (int *****)DAT_01d4b82c[6];
            local_50 = (int *****)&DAT_00000001;
            pppppiVar20 = (int *****)&DAT_01cfc5e0;
            DataMemoryBarrier(0xb);
            pppppiVar18 = DAT_01d4edc8;
            pppppiVar12 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pppppiVar18 = pppppiVar20;
              pppppiVar12 = (int *****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar19 = (*(code *)pppppiVar18[3])(pppppiVar12,&local_50);
            pppppiVar21 = pppppiVar22;
            if (iVar19 != 0) {
              pppppiVar21 = DAT_01d4b82c + 7;
              pppppiVar20 = (int *****)*pppppiVar21;
              local_58c = (int *****)DAT_01d4b82c[8];
              if (local_58c == (int *****)0x0) goto LAB_00743d78;
              local_588 = DAT_01d4b82c[9];
              local_584 = DAT_01d4b82c[10];
              local_580 = 0;
              local_590 = pppppiVar20;
              FUN_00748378(&local_90,iVar4,iVar11);
              local_28 = (int *****)&local_238;
              local_34 = &local_2c;
              local_38 = (int *****)&local_590;
              local_44 = (int *****)&local_38;
              local_40 = (int ****)&DAT_00000001;
              local_22c = (code *)&LAB_00632348;
              local_224 = (int *****)FUN_01307ea0;
              local_2c = (int ****)&DAT_00589c4b;
              local_234 = (int *****)&DAT_0132b6a0;
              local_30 = &DAT_01d2ea4c;
              local_70 = local_50;
              local_6c = local_4c;
              local_68 = local_48;
              local_238 = pppppiVar17;
              local_230 = (int *****)&local_90;
              local_228 = local_5cc;
              local_3c = pppppiVar21;
              FUN_01aaa328(pppppiVar22,pppppiVar12,pppppiVar18[4],&local_70,&local_44);
              pppppiVar21 = local_90;
              pppppiVar12 = local_8c;
              goto LAB_00743ab4;
            }
          }
        }
        local_22c = FUN_01307ea0;
        local_234 = (int *****)&DAT_0132b6a0;
        local_238 = pppppiVar17;
        local_230 = local_5cc;
        unaff_r4 = (int *****)FUN_0074461c(&local_238);
        goto LAB_00743af4;
      }
    }
    if (pppppiVar17 == (int *****)&DAT_80000000) {
      local_3dc = (int *****)&DAT_0132b6a0;
      local_3e0 = (int *****)(param_1 + 0x14);
      local_590 = local_5bc;
      local_58c = unaff_r4;
      FUN_00664898(&local_238,&DAT_00591ea1,&local_3e0);
      pppppiVar17 = (int *****)FUN_00798a5c(&local_590,&local_238);
      unaff_r4 = local_5bc;
      local_5bc = pppppiVar17;
      goto LAB_007428c4;
    }
    *(undefined1 *)((int)param_1 + 0xe9) = 0;
  }
  local_5c0 = param_1 + 0xaa;
  local_5c4 = param_1 + 0x3a;
  *(undefined1 *)local_5c4 = 1;
  FUN_00741b30(pcVar23);
  if (pppppiVar17 == (int *****)&DAT_80000000) {
    *(undefined1 *)local_5c0 = 1;
    pppppiVar21 = local_5bc;
LAB_00742d80:
    local_5ac = pppppiVar21;
    if ((DAT_01d50f88 < 5) &&
       ((DAT_01d4b840 - 1 < 2 ||
        ((DAT_01d4b840 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4b838), cVar3 != '\0')))))) {
      iVar4 = FUN_01aaa278(DAT_01d4b838);
      if (iVar4 == 0) goto LAB_00742f34;
      if (*(int ******)(DAT_01d4b838 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c081f0);
      }
      local_58c = (int *****)&local_90;
      local_230 = *(int ******)(DAT_01d4b838 + 0x24);
      local_22c = *(code **)(DAT_01d4b838 + 0x28);
      local_68 = (int *****)(DAT_01d4b838 + 0x1c);
      local_238 = (int *****)*local_68;
      local_590 = (int *****)&local_238;
      local_70 = (int *****)&local_590;
      local_228 = (int *****)0x0;
      local_6c = (int *****)&DAT_00000001;
      local_8c = (int *****)&local_3e0;
      local_3d8 = (int *****)&local_5ac;
      local_588 = (int ****)&DAT_01d2ea4c;
      local_90 = (int *****)&DAT_003e08a5;
      local_3d4 = FUN_00667a08;
      local_3dc = (int *****)&DAT_0132b6a0;
      local_3e0 = (int *****)&DAT_01c08200;
      local_234 = *(int ******)(DAT_01d4b838 + 0x20);
      FUN_01aaaecc(DAT_01d4b838,&local_70);
      iVar4 = DAT_01d4b838;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_534 = *(int ******)(DAT_01d4b838 + 0x14);
        local_530 = *(int ******)(DAT_01d4b838 + 0x18);
        local_538 = (int *****)&DAT_00000001;
        DataMemoryBarrier(0xb);
        pppppiVar20 = DAT_01d4edc8;
        pppppiVar17 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppiVar20 = (int *****)&DAT_01cfc5e0;
          pppppiVar17 = (int *****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)pppppiVar20[3])(pppppiVar17,&local_538);
        if (iVar11 != 0) {
          FUN_01aaa328(iVar4,pppppiVar17,pppppiVar20[4],&local_538,&local_70);
        }
      }
    }
    else {
LAB_00742f34:
      iVar4 = DAT_01d4b838;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_5b4 = *(undefined4 *)(DAT_01d4b838 + 0x14);
        local_5b0 = *(undefined4 *)(DAT_01d4b838 + 0x18);
        local_5b8 = 1;
        DataMemoryBarrier(0xb);
        pppppiVar20 = DAT_01d4edc8;
        pppppiVar17 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppiVar20 = (int *****)&DAT_01cfc5e0;
          pppppiVar17 = (int *****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)pppppiVar20[3])(pppppiVar17,&local_5b8);
        if (iVar11 != 0) {
          if (*(int ******)(DAT_01d4b838 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c081f0);
          }
          local_230 = *(int ******)(DAT_01d4b838 + 0x24);
          local_22c = *(code **)(DAT_01d4b838 + 0x28);
          local_534 = (int *****)&local_70;
          local_538 = (int *****)&local_238;
          local_590 = (int *****)&local_538;
          local_58c = (int *****)&DAT_00000001;
          local_6c = (int *****)&local_3e0;
          local_228 = (int *****)0x0;
          local_3d8 = (int *****)&local_5ac;
          local_530 = (int *****)&DAT_01d2ea4c;
          local_70 = (int *****)&DAT_003e08a5;
          local_3d4 = FUN_00667a08;
          local_3dc = (int *****)&DAT_0132b6a0;
          local_3e0 = (int *****)&DAT_01c08200;
          local_588 = (int ****)(DAT_01d4b838 + 0x1c);
          local_238 = *(int ******)(DAT_01d4b838 + 0x1c);
          local_234 = *(int ******)(DAT_01d4b838 + 0x20);
          FUN_01aaa328(iVar4,pppppiVar17,pppppiVar20[4],&local_5b8,&local_590);
        }
      }
    }
    (*(code *)**local_5ac)();
  }
  else {
    local_590 = (int *****)param_1[8];
    local_58c = (int *****)param_1[9];
    local_5a0 = local_5cc;
    local_5a8 = local_5bc;
    local_5ac = pppppiVar17;
    local_5a4 = unaff_r4;
    local_59c = pppppiVar20;
    pppppiStack_598 = pppppiVar21;
    pcStack_594 = pcVar24;
    if (pcVar24 == (code *)0x0) {
      FUN_006643f0(&local_238,local_5bc,unaff_r4);
      pppppiVar22 = local_230;
      pppppiVar21 = local_234;
      uVar14 = 0;
      if ((int)local_230 < 0) {
LAB_00742af8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar14,pppppiVar22);
      }
      if (local_230 == (int *****)0x0) {
        iVar4 = 1;
        pppppiVar12 = (int *****)0x0;
      }
      else {
        uVar14 = 1;
        iVar4 = FUN_01298504(local_230,1);
        pppppiVar12 = pppppiVar22;
        if (iVar4 == 0) goto LAB_00742af8;
      }
      FUN_01bed4e2(iVar4,pppppiVar21,pppppiVar22);
      if (local_238 != (int *****)&DAT_80000000) {
        FUN_019bb7e0(local_238,pppppiVar21);
      }
      FUN_019bb7e0(pppppiVar12,iVar4);
      pppppiVar21 = (int *****)0x0;
    }
    else {
      FUN_006643f0(&local_3e0,pppppiVar20,pppppiVar21);
      local_238 = (int *****)&local_590;
      local_22c = (code *)&LAB_012b97d8;
      local_234 = (int *****)&DAT_0132b6a0;
      local_230 = (int *****)&local_3e0;
      FUN_00664898(&local_538,&DAT_005aff65,&local_238);
      if (local_3e0 != (int *****)&DAT_80000000) {
        FUN_019bb7e0(local_3e0,local_3dc);
      }
      local_238 = local_538;
      local_234 = local_534;
      local_230 = local_530;
      pppppiVar21 = (int *****)FUN_006679ac(&local_238);
    }
    FUN_019bb7e0(pppppiVar17,local_5bc);
    FUN_019bb7e0(local_5cc,pppppiVar20);
    *(undefined1 *)local_5c0 = 1;
    if (pppppiVar21 != (int *****)0x0) goto LAB_00742d80;
  }
  FUN_019f8c54(param_1[2],1);
  piVar7 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar7;
    bVar26 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar26);
  *piVar7 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*param_1);
  }
  piVar7 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar7;
    bVar26 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar26);
  *piVar7 = iVar4 + -1;
  uVar14 = 0;
  uVar15 = 1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(param_1[1]);
  }
LAB_00743618:
  *(undefined1 *)(param_1 + 3) = uVar15;
  return uVar14;
}

