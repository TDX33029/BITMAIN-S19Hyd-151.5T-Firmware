// FUN_013e6c58 @ 013e6c58 size=3076 calls_out=33 calls_in=1
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Type propagation algorithm not settling */

void FUN_013e6c58(undefined4 *param_1,int *******param_2,byte param_3)

{
  undefined1 uVar1;
  ushort uVar2;
  undefined2 uVar3;
  short sVar4;
  char *pcVar5;
  int *******pppppppiVar6;
  byte bVar7;
  char cVar8;
  short sVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  undefined1 *puVar13;
  undefined4 *puVar14;
  int extraout_r1;
  int *****pppppiVar15;
  short *psVar16;
  int ******ppppppiVar17;
  int ******ppppppiVar18;
  uint uVar19;
  int *****pppppiVar20;
  int *****pppppiVar21;
  int ******ppppppiVar22;
  undefined2 *puVar23;
  int *****pppppiVar24;
  int *****pppppiVar25;
  int ******ppppppiVar26;
  undefined4 uVar27;
  uint uVar28;
  int ******ppppppiVar29;
  undefined4 uVar30;
  bool bVar31;
  undefined8 uVar32;
  int ******local_68c;
  undefined4 local_688;
  undefined4 local_684;
  int local_678;
  int *******local_664;
  code *local_660;
  undefined4 *local_65c;
  int ****local_658;
  int *******local_654;
  int *******local_650;
  int *******local_64c;
  undefined1 *local_648;
  int *******local_640;
  int *******local_63c;
  ushort local_638 [32];
  undefined1 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5f0;
  undefined2 local_5ec [2];
  undefined4 local_5e8;
  ushort local_5e0;
  undefined2 local_5de;
  int local_5dc;
  short *local_5d8;
  undefined4 local_5d4;
  undefined4 local_5cc;
  undefined1 local_5c4;
  int *******local_5a8;
  int *******local_5a4;
  undefined1 *local_5a0;
  int local_4bc;
  int local_4b8;
  int local_4b4;
  int *******local_4b0;
  int *****local_4ac;
  int *******local_4a8;
  undefined4 local_4a0;
  int *****local_49c;
  int *******local_498;
  int *****local_494;
  int *****local_490;
  int *****local_48c;
  int *****pppppiStack_488;
  int *****pppppiStack_484;
  int *****pppppiStack_480;
  undefined8 local_3b8;
  int *******local_3b0;
  int *******local_3ac;
  undefined1 *local_3a8;
  short local_2c8 [32];
  undefined1 local_288;
  undefined2 local_284;
  undefined2 local_280;
  undefined2 local_27c [2];
  undefined4 local_278;
  int ******local_274;
  ushort local_270;
  undefined2 local_26e;
  int local_26c;
  undefined2 *local_268;
  undefined4 local_264;
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  byte local_254;
  short local_238 [116];
  short local_150 [116];
  undefined1 auStack_68 [34];
  undefined1 auStack_46 [34];
  
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4e620 - 1 < 2 ||
       ((DAT_01d4e620 != 0 && (cVar8 = FUN_01aaafa8(&DAT_01d4e618), cVar8 != '\0')))) &&
      (iVar10 = FUN_01aaa278(DAT_01d4e618), iVar10 != 0)))) {
    local_49c = *(int ******)(DAT_01d4e618 + 0x20);
    if (local_49c == (int *****)0x0) {
LAB_013e7848:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf34c0);
    }
    local_4ac = &local_658;
    local_498 = *(int ********)(DAT_01d4e618 + 0x24);
    local_494 = *(int ******)(DAT_01d4e618 + 0x28);
    local_65c = (undefined4 *)(DAT_01d4e618 + 0x1c);
    local_4a0 = (int *******)*local_65c;
    local_664 = (int *******)&local_4b0;
    local_490 = (int *****)0x0;
    local_660 = (code *)0x1;
    local_654 = (int *******)&local_640;
    local_4a8 = (int *******)&DAT_01d2ea4c;
    local_658 = (int ****)&DAT_005a1d81;
    local_63c = (int *******)FUN_013e5ad0;
    local_640 = param_2;
    local_4b0 = (int *******)&local_4a0;
    FUN_01aaaecc(DAT_01d4e618,&local_664);
    iVar10 = DAT_01d4e618;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_5a4 = *(int ********)(DAT_01d4e618 + 0x14);
      local_5a0 = *(undefined1 **)(DAT_01d4e618 + 0x18);
      local_5a8 = (int *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar11 = (*(code *)puVar14[3])(pcVar5,&local_5a8);
      if (iVar11 != 0) {
        local_3b0 = local_5a8;
        local_3ac = local_5a4;
        local_3a8 = local_5a0;
        FUN_01aaa328(iVar10,pcVar5,puVar14[4],&local_3b0,&local_664);
      }
    }
  }
  else {
    iVar10 = DAT_01d4e618;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_64c = *(int ********)(DAT_01d4e618 + 0x14);
      local_648 = *(undefined1 **)(DAT_01d4e618 + 0x18);
      local_650 = (int *******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar11 = (*(code *)puVar14[3])(pcVar5,&local_650);
      if (iVar11 != 0) {
        local_4a8 = (int *******)(DAT_01d4e618 + 0x1c);
        local_4a0 = (int *******)*local_4a8;
        local_49c = *(int ******)(DAT_01d4e618 + 0x20);
        if (local_49c == (int *****)0x0) goto LAB_013e7848;
        local_5a4 = (int *******)&local_640;
        local_498 = *(int ********)(DAT_01d4e618 + 0x24);
        local_494 = *(int ******)(DAT_01d4e618 + 0x28);
        local_4b0 = (int *******)&local_5a8;
        local_4ac = (int *****)&DAT_00000001;
        local_63c = (int *******)&local_664;
        local_490 = (int *****)0x0;
        local_5a0 = &DAT_01d2ea4c;
        local_660 = FUN_013e5ad0;
        local_640 = (int *******)&DAT_005a1d81;
        local_3b0 = local_650;
        local_3ac = local_64c;
        local_3a8 = local_648;
        local_664 = param_2;
        local_5a8 = (int *******)&local_4a0;
        FUN_01aaa328(iVar10,pcVar5,puVar14[4],&local_3b0,&local_4b0);
      }
    }
  }
  uVar2 = *(ushort *)(param_2 + 0x14);
  uVar28 = (uint)uVar2;
  uVar3 = *(undefined2 *)((int)param_2 + 0x52);
  if (uVar28 - 4 < 0x10) {
LAB_013e6fcc:
    FUN_013ce848(&local_4a0,param_2[7],param_2[8]);
    if ((short)local_4a0 == 7) {
      local_3b0 = (int *******)CONCAT22(local_3b0._2_2_,2);
    }
    else {
      FUN_013cb378(&local_3b0,&local_4a0);
    }
    if (param_2[2] == (int ******)0x0) {
      FUN_01bed93e(local_638,0,0x40);
      local_5f0 = (int *****)((uint)local_5f0._2_2_ << 0x10);
      local_5f8 = 1;
      local_5f4 = (int *****)((uint)local_5f4._2_2_ << 0x10);
    }
    else {
      ppppppiVar29 = param_2[1];
      sVar9 = *(short *)ppppppiVar29;
      uVar1 = *(undefined1 *)(ppppppiVar29 + 0x10);
      if (sVar9 != 1) {
        local_49c = ppppppiVar29[1];
        local_498 = (int *******)ppppppiVar29[2];
        local_494 = ppppppiVar29[3];
        local_490 = ppppppiVar29[4];
        local_48c = ppppppiVar29[5];
        pppppiStack_488 = ppppppiVar29[6];
        pppppiStack_484 = ppppppiVar29[7];
        pppppiStack_480 = ppppppiVar29[8];
        local_4a0 = (int *******)CONCAT22(*(short *)((int)ppppppiVar29 + 2),(short)local_4a0);
      }
      else {
        FUN_015e8ad4(&local_49c,ppppppiVar29[2],ppppppiVar29[3]);
      }
      sVar4 = *(short *)(ppppppiVar29 + 9);
      if (sVar4 != 1) {
        puVar14 = (undefined4 *)((uint)&local_5a8 | 4);
        pppppiVar21 = ppppppiVar29[0xb];
        pppppiVar25 = ppppppiVar29[0xc];
        pppppiVar15 = ppppppiVar29[0xd];
        pppppiVar20 = ppppppiVar29[0xe];
        pppppiVar24 = ppppppiVar29[0xf];
        *puVar14 = ppppppiVar29[10];
        puVar14[1] = pppppiVar21;
        puVar14[2] = pppppiVar25;
        puVar14[3] = pppppiVar15;
        puVar14[4] = pppppiVar20;
        puVar14[5] = pppppiVar24;
        local_5a8 = (int *******)((uint)*(ushort *)((int)ppppppiVar29 + 0x26) << 0x10);
      }
      else {
        FUN_015e8ad4((uint)&local_5a8 | 4,ppppppiVar29[0xb],ppppppiVar29[0xc]);
      }
      local_5a8 = (int *******)CONCAT22(local_5a8._2_2_,(ushort)(sVar4 == 1));
      FUN_01bed4e2(auStack_68,(uint)&local_4a0 | 2,0x22);
      FUN_01bed4e2(auStack_46,&local_5a8,0x1c);
      pppppiVar21 = ppppppiVar29[0x11];
      pppppiVar25 = ppppppiVar29[0x12];
      local_638[0] = (ushort)(sVar9 == 1);
      FUN_01bed4e2((uint)local_638 | 2,auStack_68,0x3e);
      local_5f8 = uVar1;
      local_5f4 = pppppiVar21;
      local_5f0 = pppppiVar25;
    }
    iVar10 = thunk_FUN_01be5118(0x4c);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x4c);
    }
    FUN_01bed4e2(iVar10,local_638,0x4c);
    sVar9 = (short)local_3b0;
    psVar16 = (short *)0x0;
    if ((short)local_3b0 != 2) {
      local_4a0 = (int *******)CONCAT22(local_4a0._2_2_,(short)local_3b0);
      FUN_01bed4e2((uint)&local_4a0 | 2,(uint)&local_3b0 | 2,0xe6);
      psVar16 = (short *)thunk_FUN_01be5118(0xe8);
      if (psVar16 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xe8);
      }
      *psVar16 = sVar9;
      FUN_01bed4e2(psVar16 + 1,(uint)&local_3b0 | 2,0xe6);
    }
    local_5d4 = 0;
    local_5c4 = 0;
    local_5e8 = 0;
    local_5cc = 0;
    local_5ec[0] = 0x15;
    local_5e0 = uVar2;
    local_5de = uVar3;
    local_5dc = iVar10;
    local_5d8 = psVar16;
    uVar12 = FUN_013e649c(local_5ec);
    *param_1 = 0x80000000;
    param_1[1] = uVar12;
    FUN_013e7d78(param_2);
    return;
  }
  if (uVar28 < 3) {
    if (uVar28 - 1 < 2) goto LAB_013e6fcc;
    bVar7 = FUN_013ce51c(param_2);
  }
  else {
    if (uVar28 != 3) goto LAB_013e7270;
    bVar7 = FUN_013ce51c(param_2);
  }
  if (((bVar7 | *(byte *)((int)param_2 + 0x62)) & 1) != 0) {
LAB_013e7270:
    FUN_01bed4e2(param_1,param_2,0x74);
    return;
  }
  FUN_013ce848(&local_4a0,param_2[7],param_2[8]);
  if ((short)local_4a0 == 7) {
    local_5a8 = (int *******)CONCAT22(local_5a8._2_2_,2);
  }
  else {
    FUN_013cb378(&local_5a8,&local_4a0);
  }
  ppppppiVar17 = param_2[7];
  ppppppiVar22 = param_2[8];
  local_4b4 = 0;
  local_4bc = 0;
  local_4b8 = 4;
  local_678 = 0;
  ppppppiVar29 = ppppppiVar17;
  while( true ) {
    ppppppiVar18 = ppppppiVar29;
    if (ppppppiVar18 == ppppppiVar17 + (int)ppppppiVar22 * 0x3a) break;
    sVar9 = FUN_013c7920(ppppppiVar18 + 0x12);
    ppppppiVar29 = ppppppiVar18 + 0x3a;
    if (sVar9 == 0x13) {
      ppppppiVar26 = param_2[10];
      iVar10 = (int)param_2[0xb] * 0xe8;
      do {
        if (iVar10 == 0) {
          local_4a8 = (int *******)0x0;
          local_4ac = (int *****)&SUB_00000004;
          local_4b0 = (int *******)0x0;
          goto LAB_013e7440;
        }
        FUN_013e8134(local_238,ppppppiVar18,ppppppiVar26);
        iVar10 = iVar10 + -0xe8;
        ppppppiVar26 = ppppppiVar26 + 0x3a;
      } while (local_238[0] == 2);
      pppppiVar21 = (int *****)thunk_FUN_01be5118(0x3a0);
      if (pppppiVar21 == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x3a0);
      }
      FUN_01bed4e2(pppppiVar21,local_238,0xe8);
      local_498 = (int *******)&DAT_00000001;
      local_4a0 = (int *******)&SUB_00000004;
      local_49c = pppppiVar21;
      for (iVar11 = 0; iVar10 != iVar11; iVar11 = iVar11 + 0xe8) {
        FUN_013e8134(local_150,ppppppiVar18,(int)ppppppiVar26 + iVar11);
        pppppppiVar6 = local_498;
        if (local_150[0] != 2) {
          if (local_498 == local_4a0) {
            FUN_01af7b44(&local_4a0,local_498,1,4,0xe8);
          }
          FUN_01bed4e2(local_49c + (int)pppppppiVar6 * 0x3a,local_150,0xe8);
          local_498 = (int *******)((int)pppppppiVar6 + 1);
        }
      }
      local_4b0 = local_4a0;
      local_4ac = local_49c;
      local_4a8 = local_498;
LAB_013e7440:
      FUN_013cc2b4(&local_3b0,ppppppiVar18);
      pppppiVar21 = local_4ac;
      pppppppiVar6 = local_4b0;
      iVar10 = (int)local_4a8 * 0xe8;
      uVar32 = FUN_013cf100(iVar10);
      FUN_01bed4e2((int)uVar32 + 8,pppppiVar21,iVar10);
      FUN_013dd8c8(pppppiVar21,0);
      FUN_013e6414(pppppppiVar6,pppppiVar21,4,0xe8);
      FUN_01bed4e2(&local_4a0,&local_3b0,0xe8);
      local_678 = local_4b4;
      local_3b8 = uVar32;
      if (local_4b4 == local_4bc) {
        FUN_013e63b4(&local_4bc);
      }
      FUN_01bed4e2(local_4b8 + local_678 * 0xf0,&local_4a0,0xf0);
      local_678 = local_678 + 1;
      local_4b4 = local_678;
    }
  }
  ppppppiVar29 = (int ******)0x0;
  if (local_678 == 0) {
    uVar12 = 0;
  }
  else {
    uVar32 = FUN_013e7b60(&local_4bc);
    local_688 = (undefined4)((ulonglong)uVar32 >> 0x20);
    uVar12 = (undefined4)uVar32;
  }
  if (param_2[8] == (int ******)0x0) {
    uVar27 = 0;
  }
  else {
    FUN_013cdb18(&local_4a0,param_2[7]);
    uVar32 = FUN_013e7c24(&local_4a0);
    local_684 = (undefined4)((ulonglong)uVar32 >> 0x20);
    uVar27 = (undefined4)uVar32;
    ppppppiVar29 = param_2[8];
  }
  pppppppiVar6 = local_5a8;
  iVar10 = (int)ppppppiVar29 * 0xe8;
  uVar30 = 0;
  ppppppiVar29 = param_2[7] + 0x12;
  do {
    ppppppiVar17 = ppppppiVar29;
    if (iVar10 == 0) {
      ppppppiVar29 = (int ******)0x0;
      goto LAB_013e75b0;
    }
    iVar10 = iVar10 + -0xe8;
    ppppppiVar29 = ppppppiVar17 + 0x3a;
  } while (1 < *(ushort *)ppppppiVar17);
  ppppppiVar29 = ppppppiVar17;
  ppppppiVar17 = (int ******)ppppppiVar17[0x27];
LAB_013e75b0:
  if (ppppppiVar29 != (int ******)0x0) {
    uVar30 = 1;
    local_68c = ppppppiVar17;
    if (ppppppiVar29[0x26] < ppppppiVar17) {
      local_68c = (int ******)ppppppiVar29[0x26];
    }
  }
  uVar28 = (uint)local_5a8 & 0xffff;
  FUN_01bed4e2(&local_4a0,param_2,0x68);
  FUN_019bb7e0(param_2[0x1a],param_2[0x1b]);
  pppppiVar21 = local_49c;
  local_3b0 = local_4a0;
  local_3ac = (int *******)local_49c;
  local_49c = (int *****)0x4;
  iVar10 = (int)local_498 * 0x4c;
  bVar31 = local_498 == (int *******)0x0;
  local_498 = (int *******)0x0;
  local_4a0 = (int *******)0x0;
  local_3a8 = (undefined1 *)0x0;
  if (bVar31) {
    pppppiVar25 = pppppiVar21;
  }
  else {
    pppppiVar25 = pppppiVar21 + 0x13;
    if (*(short *)pppppiVar21 != 2) {
      local_2c8[0] = *(short *)pppppiVar21;
      FUN_01bed4e2((uint)local_2c8 | 2,(short *)((int)pppppiVar21 + 2),0x4a);
      goto LAB_013e7698;
    }
  }
  FUN_01bed93e(local_2c8,0,0x40);
  local_288 = 1;
  local_280 = 0;
  local_284 = 0;
LAB_013e7698:
  puVar13 = (undefined1 *)((int)pppppiVar21 + (iVar10 - (int)pppppiVar25));
  uVar19 = (uint)puVar13 >> 2;
  iVar10 = uVar19 * 0x1af286bd;
  if (puVar13 != (undefined1 *)0x0) {
    for (uVar19 = uVar19 / 0x13; uVar19 != 0; uVar19 = uVar19 - 1) {
      FUN_0079217c(pppppiVar25);
      pppppiVar25 = pppppiVar25 + 0x13;
      iVar10 = extraout_r1;
    }
  }
  FUN_013e6998(&local_3b0,iVar10);
  FUN_013e68f0(&local_4a0);
  iVar10 = thunk_FUN_01be5118(0x4c);
  if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x4c);
  }
  FUN_01bed4e2(iVar10,local_2c8,0x4c);
  puVar23 = (undefined2 *)0x0;
  if (uVar28 != 2) {
    local_4a0 = (int *******)CONCAT22(local_4a0._2_2_,(short)pppppppiVar6);
    FUN_01bed4e2((uint)&local_4a0 | 2,(uint)&local_5a8 | 2,0xe6);
    puVar23 = (undefined2 *)thunk_FUN_01be5118(0xe8);
    if (puVar23 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xe8);
    }
    *puVar23 = (short)pppppppiVar6;
    FUN_01bed4e2(puVar23 + 1,(uint)&local_5a8 | 2,0xe6);
  }
  local_254 = param_3 & uVar28 != 2;
  local_260 = local_688;
  local_274 = local_68c;
  local_258 = local_684;
  local_27c[0] = 0x15;
  local_278 = uVar30;
  local_270 = uVar2;
  local_26e = uVar3;
  local_26c = iVar10;
  local_268 = puVar23;
  local_264 = uVar12;
  local_25c = uVar27;
  uVar12 = FUN_013e649c(local_27c);
  *param_1 = 0x80000000;
  param_1[1] = uVar12;
  if (local_678 == 0) {
    FUN_013e7ca8(&local_4bc);
    return;
  }
  return;
}

