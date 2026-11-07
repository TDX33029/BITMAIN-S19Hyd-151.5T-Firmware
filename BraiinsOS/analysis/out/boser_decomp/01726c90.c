// FUN_01726c90 @ 01726c90 size=4448 calls_out=29 calls_in=0
// strings: tcp connect error | hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs

void FUN_01726c90(short *param_1,undefined4 *param_2,undefined4 param_3)

{
  ushort uVar1;
  undefined1 uVar2;
  char cVar3;
  ushort uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined2 uVar9;
  short *psVar10;
  undefined4 extraout_r1;
  undefined4 uVar11;
  short sVar12;
  undefined1 *puVar13;
  short ****ppppsVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  char *pcVar17;
  short ****ppppsVar18;
  undefined4 uVar19;
  short ****ppppsVar20;
  char *pcVar21;
  undefined4 uVar22;
  short ****unaff_r9;
  short ****ppppsVar23;
  bool bVar24;
  undefined *local_2ac;
  char *local_2a8;
  short ****local_29c;
  short ****local_298;
  int local_294;
  char *local_290;
  short ****local_28c;
  undefined1 auStack_280 [32];
  short ****local_260;
  short ****local_25c;
  short ****local_258;
  undefined4 local_250;
  short ****local_24c;
  undefined4 local_248;
  short ****local_244;
  char *local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  char *local_230;
  undefined4 local_22c;
  int local_228;
  undefined *local_224;
  undefined4 local_1d0;
  short ****local_14c;
  short ****local_148;
  char *local_144;
  short ***local_140;
  short ****local_13c;
  short ****local_138;
  short ****local_134;
  char *local_130;
  short ****local_12c;
  short ****local_128;
  char *local_124;
  short ****local_120;
  short ****local_11c;
  short ****local_118;
  char *local_114;
  undefined4 local_110;
  short ****local_88;
  short ****local_84;
  short ****local_80;
  code *local_7c;
  short ****local_40;
  short ****local_3c;
  char *local_38;
  short ****local_30;
  short ****local_2c;
  char *local_28;
  
  ppppsVar23 = (short ****)(param_2 + 0x40);
  local_2a8 = "tcp connect error";
  local_2ac = &DAT_01cf48ac;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x25d)) {
  case 0:
    iVar5 = param_2[0x95];
    *(undefined1 *)(param_2 + 0x97) = 1;
    *(undefined2 *)(param_2 + 0x48) = 3;
    param_2[0x92] = iVar5;
    param_2[0x93] = param_2[0x96];
    param_2[0x94] = iVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2df4c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2df4c);
  case 3:
    goto LAB_017270bc;
  }
  while (psVar10 = *(short **)(iVar5 + 4), psVar10 != *(short **)(iVar5 + 0xc)) {
    sVar12 = *psVar10;
    *(short **)(iVar5 + 4) = psVar10 + 0x10;
    FUN_01bed4e2(auStack_280,psVar10 + 1,0x1e);
    if (sVar12 == 2) break;
    *(short *)ppppsVar23 = sVar12;
    FUN_01bed4e2((int)param_2 + 0x102,auStack_280,0x1e);
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d50cc0 - 1 < 2 ||
         ((DAT_01d50cc0 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50cb8), cVar3 != '\0')))) &&
        (iVar5 = FUN_01aaa278(DAT_01d50cb8), iVar5 != 0)))) {
      if (*(short *****)(DAT_01d50cb8 + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df7c);
      }
      local_2c = (short ****)&local_14c;
      local_248 = *(short *****)(DAT_01d50cb8 + 0x24);
      local_244 = *(short *****)(DAT_01d50cb8 + 0x28);
      local_38 = DAT_01d50cb8 + 0x1c;
      local_250 = *(short *****)local_38;
      local_30 = (short ****)&local_250;
      local_40 = (short ****)&local_30;
      local_240 = (char *)0x0;
      local_3c = (short ****)&DAT_00000001;
      local_14c = (short ****)&DAT_0057fa37;
      local_28 = "";
      local_148 = (short ****)&local_12c;
      local_128 = (short ****)FUN_0130a2f8;
      local_24c = *(short *****)(DAT_01d50cb8 + 0x20);
      local_12c = ppppsVar23;
      FUN_01aaaecc(DAT_01d50cb8,&local_40);
      pcVar17 = DAT_01d50cb8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_84 = *(short *****)(DAT_01d50cb8 + 0x14);
        local_80 = *(short *****)(DAT_01d50cb8 + 0x18);
        local_88 = (short ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        pcVar21 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        iVar5 = (*(code *)puVar7[3])(pcVar21,&local_88);
        unaff_r9 = (short ****)pcVar17;
        if (iVar5 != 0) {
          local_120 = local_88;
          local_11c = local_84;
          local_118 = local_80;
          FUN_01aaa328(pcVar17,pcVar21,puVar7[4],&local_120,&local_40);
        }
      }
    }
    else {
      pcVar17 = DAT_01d50cb8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_25c = *(short *****)(DAT_01d50cb8 + 0x14);
        local_258 = *(short *****)(DAT_01d50cb8 + 0x18);
        local_260 = (short ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        pcVar21 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        iVar5 = (*(code *)puVar7[3])(pcVar21,&local_260);
        unaff_r9 = (short ****)pcVar17;
        if (iVar5 != 0) {
          if (*(short *****)(DAT_01d50cb8 + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df7c);
          }
          local_84 = (short ****)&local_12c;
          local_248 = *(short *****)(DAT_01d50cb8 + 0x24);
          local_244 = *(short *****)(DAT_01d50cb8 + 0x28);
          local_88 = (short ****)&local_250;
          local_30 = (short ****)&local_88;
          local_240 = (char *)0x0;
          local_2c = (short ****)&DAT_00000001;
          local_12c = (short ****)&DAT_0057fa37;
          local_80 = (short ****)&DAT_01d2ea4c;
          local_128 = (short ****)&local_40;
          local_3c = (short ****)FUN_0130a2f8;
          local_120 = local_260;
          local_11c = local_25c;
          local_118 = local_258;
          local_250 = *(short *****)(DAT_01d50cb8 + 0x1c);
          local_24c = *(short *****)(DAT_01d50cb8 + 0x20);
          local_40 = ppppsVar23;
          local_28 = DAT_01d50cb8 + 0x1c;
          FUN_01aaa328(pcVar17,pcVar21,puVar7[4],&local_120,&local_30);
        }
      }
    }
    iVar5 = param_2[0x92];
    FUN_0143dd40(&local_250,ppppsVar23,param_2[0x93],*(undefined4 *)(iVar5 + 0x14),
                 *(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14),
                 *(undefined4 *)(iVar5 + 0x18));
    if (local_250 == (short ****)&DAT_00000001) {
      puVar7 = (undefined4 *)((uint)&local_250 | 4);
      uVar11 = puVar7[1];
      uVar15 = puVar7[2];
      uVar16 = puVar7[3];
      uVar19 = puVar7[4];
      uVar22 = puVar7[5];
      param_2[1] = *puVar7;
      param_2[2] = uVar11;
      param_2[3] = uVar15;
      param_2[4] = uVar16;
      param_2[5] = uVar19;
      param_2[6] = uVar22;
      uVar11 = puVar7[7];
      uVar15 = puVar7[8];
      uVar16 = puVar7[9];
      uVar19 = puVar7[10];
      uVar22 = puVar7[0xb];
      param_2[7] = puVar7[6];
      param_2[8] = uVar11;
      param_2[9] = uVar15;
      param_2[10] = uVar16;
      param_2[0xb] = uVar19;
      param_2[0xc] = uVar22;
      *param_2 = 1;
      sVar12 = *(short *)(param_2 + 1);
      FUN_01bed4e2(&local_250,(int)param_2 + 6,0x12);
      local_120 = (short ****)param_2[6];
      local_11c = (short ****)param_2[7];
      local_118 = (short ****)param_2[8];
      local_2a8 = (char *)param_2[9];
      local_2ac = (undefined *)param_2[0xc];
      pcVar17 = (char *)param_2[10];
      unaff_r9 = (short ****)param_2[0xb];
LAB_01727ca8:
      uVar8 = (uint)*(ushort *)(param_2 + 0x48);
      bVar24 = uVar8 != 3;
      if (bVar24) {
        uVar8 = param_2[0x52];
      }
      if (bVar24 && uVar8 != 0) {
        FUN_01443048(uVar8,param_2[0x53]);
      }
      goto LAB_01727cbc;
    }
    FUN_01bed4e2(param_2 + 2,&local_248,0xf8);
    *param_2 = 0;
    FUN_01bed4e2(param_2 + 0x54,param_2 + 2,0xf8);
LAB_017270bc:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x6a)) {
    case 0:
      puVar13 = (undefined1 *)param_2[0x56];
      if (puVar13 != &DAT_3b9aca00) {
        uVar11 = param_2[0x54];
        uVar15 = param_2[0x55];
        FUN_01bed4e2(&local_88,param_2 + 0x58,0x48);
        FUN_0182f328(&local_250,extraout_r1,uVar11,uVar15,puVar13,&local_88,&DAT_01d2dfac);
        FUN_01bed4e2(&local_120,&local_250,0x98);
        FUN_01bed4e2(param_2 + 0x6c,&local_120,0x98);
        goto switchD_017270d0_caseD_3;
      }
      FUN_01bed4e2(param_2 + 0x6c,param_2 + 0x58,0x48);
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2dfbc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2dfbc);
    case 3:
switchD_017270d0_caseD_3:
      FUN_01833898(&local_250,param_2 + 0x6c,param_3);
      unaff_r9 = local_244;
      ppppsVar20 = local_248;
      ppppsVar14 = local_24c;
      ppppsVar18 = local_250;
      if (local_250 == (short ****)&SUB_00000004) {
        uVar2 = 3;
        goto LAB_01727b34;
      }
      FUN_01a6b7d0(param_2 + 0x6c);
      if (ppppsVar18 == (short ****)&DAT_00000003) {
        FUN_01754368(&local_250);
        ppppsVar18 = (short ****)0x2;
        ppppsVar14 = local_250;
        ppppsVar20 = local_24c;
      }
      goto LAB_01727424;
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x7d)) {
    case 0:
      uVar11 = param_2[0x74];
      *(undefined1 *)((int)param_2 + 0x1f5) = 1;
      uVar4 = *(ushort *)((int)param_2 + 0x1b6);
      uVar1 = *(ushort *)(param_2 + 0x73);
      unaff_r9 = (short ****)(uint)uVar1;
      ppppsVar18 = *(short *****)((int)param_2 + 0x1b2);
      ppppsVar14 = (short ****)param_2[0x71];
      param_2[0x75] = uVar11;
      if ((*(ushort *)(param_2 + 0x6c) & 1) == 0) {
        FUN_01bed93e(&local_248,0,0x78);
        uVar4 = uVar4 << 8 | uVar4 >> 8;
        local_1d0 = 0x10;
        uVar9 = 2;
      }
      else {
        local_248 = (short ****)CONCAT22(uVar4,(short)((uint)ppppsVar18 >> 0x10));
        local_244 = (short ****)param_2[0x6e];
        local_240 = (char *)param_2[0x6f];
        uStack_23c = param_2[0x70];
        local_238 = param_2[0x72];
        FUN_01bed93e(&uStack_234,0,100);
        uVar4 = (ushort)(((uint)unaff_r9 & 0xff) << 8) | uVar1 >> 8;
        local_1d0 = 0x1c;
        uVar9 = 10;
        ppppsVar18 = ppppsVar14;
      }
      local_250 = (short ****)CONCAT22(uVar4,uVar9);
      local_24c = ppppsVar18;
      FUN_01979d90(&local_120,uVar11,&local_250);
      ppppsVar20 = local_11c;
      ppppsVar14 = local_120;
      if ((char)local_120 == '\x04') {
LAB_017272f8:
        uVar11 = param_2[0x75];
        param_2[0x76] = uVar11;
        *(undefined1 *)((int)param_2 + 0x1f5) = 0;
        *(undefined1 *)(param_2 + 0x7c) = 0;
LAB_01727314:
        FUN_019dd2f8(&local_250,uVar11);
        if (local_250 != (short ****)0x2) {
          param_2[0x78] = local_24c;
          param_2[0x79] = local_248;
          puVar7 = param_2 + 0x77;
          *puVar7 = local_250;
          param_2[0x7a] = local_244;
          param_2[0x7b] = puVar7;
          goto LAB_01727364;
        }
        uVar8 = (uint)local_24c >> 8 | (int)local_248 << 0x18;
        ppppsVar14 = local_24c;
        ppppsVar18 = local_248;
LAB_017273e8:
        *(undefined1 *)(param_2 + 0x7c) = 1;
        ppppsVar14 = (short ****)((uint)ppppsVar14 & 0xff | uVar8 << 8);
        ppppsVar20 = (short ****)((uint)ppppsVar18 & 0xffffff00 | uVar8 >> 0x18);
        ppppsVar18 = (short ****)0x2;
        goto LAB_01727404;
      }
      if (((uint)local_120 & 0xff) == 0 && local_11c == (short ****)0x73) {
        FUN_0187266c(0,0x73);
        goto LAB_017272f8;
      }
      FUN_01bf01d6(param_2[0x75]);
      ppppsVar18 = (short ****)0x2;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d2e00c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d2e00c);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x7c)) {
      case 0:
        uVar11 = param_2[0x76];
        goto LAB_01727314;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2e01c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2e01c);
      case 3:
        puVar7 = (undefined4 *)param_2[0x7b];
      }
LAB_01727364:
      FUN_019e7220(&local_250,puVar7[2],param_3,1);
      if (local_250 == (short ****)0x2) {
        *(undefined1 *)(param_2 + 0x7c) = 3;
LAB_01727b28:
        *(undefined1 *)(param_2 + 0x7d) = 3;
        uVar2 = 4;
LAB_01727b34:
        *(undefined1 *)(param_2 + 0x6a) = uVar2;
        uVar2 = 3;
        *param_1 = 4;
        goto LAB_01727d04;
      }
      if (((uint)local_250 & 1) != 0) {
        uVar8 = (uint)local_24c >> 8 | (int)local_248 << 0x18;
LAB_017273e0:
        ppppsVar18 = local_248;
        ppppsVar14 = local_24c;
        FUN_00b76614(param_2 + 0x77);
        goto LAB_017273e8;
      }
      if (param_2[0x7a] == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d28f7c);
      }
      FUN_01609600(&local_250);
      uVar8 = (uint)local_24c >> 8 | (int)local_248 << 0x18;
      ppppsVar18 = local_250;
      if (local_250 == (short ****)0x0) {
        ppppsVar18 = (short ****)((uint)local_24c & 0xff);
      }
      if (local_250 != (short ****)0x0 || ppppsVar18 != (short ****)&SUB_00000004)
      goto LAB_017273e0;
      ppppsVar18 = (short ****)param_2[0x77];
      unaff_r9 = (short ****)param_2[0x7a];
      ppppsVar14 = (short ****)param_2[0x78];
      ppppsVar20 = (short ****)param_2[0x79];
      *(undefined1 *)(param_2 + 0x7c) = 1;
      if (ppppsVar18 == (short ****)&DAT_00000003) goto LAB_01727b28;
LAB_01727404:
      FUN_01a6bbbc(param_2 + 0x76);
    }
    *(undefined1 *)((int)param_2 + 0x1f5) = 0;
    *(undefined1 *)(param_2 + 0x7d) = 1;
    FUN_017999f4(param_2 + 0x6c);
LAB_01727424:
    pcVar17 = (char *)0x3;
    if (ppppsVar18 == (short ****)0x2) {
      local_250 = ppppsVar14;
      local_24c = ppppsVar20;
      local_294 = FUN_0142322c(&local_250);
      pcVar17 = (char *)0x2;
      ppppsVar14 = local_298;
      ppppsVar20 = local_29c;
    }
    else {
      local_290 = (char *)unaff_r9;
      local_28c = ppppsVar18;
    }
    *(undefined1 *)(param_2 + 0x6a) = 1;
    FUN_01a6bb88(param_2 + 0x54);
    if (ppppsVar18 != (short ****)0x2) {
      local_114 = local_290;
      local_120 = local_28c;
      local_11c = ppppsVar14;
      local_118 = ppppsVar20;
      if (((DAT_01d50f88 < 2) &&
          ((DAT_01d50ca8 - 1 < 2 ||
           ((DAT_01d50ca8 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50ca0), cVar3 != '\0')))))) &&
         (iVar5 = FUN_01aaa278(DAT_01d50ca0), iVar5 != 0)) {
        if (*(short *****)(DAT_01d50ca0 + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df5c);
        }
        local_2c = (short ****)&local_14c;
        local_248 = *(short *****)(DAT_01d50ca0 + 0x24);
        local_244 = *(short *****)(DAT_01d50ca0 + 0x28);
        local_38 = DAT_01d50ca0 + 0x1c;
        local_250 = *(short *****)local_38;
        local_30 = (short ****)&local_250;
        local_40 = (short ****)&local_30;
        local_240 = (char *)0x0;
        local_3c = (short ****)&DAT_00000001;
        local_14c = (short ****)&DAT_005b2a8d;
        local_28 = "";
        local_148 = (short ****)&local_12c;
        local_128 = (short ****)FUN_0130a2f8;
        local_24c = *(short *****)(DAT_01d50ca0 + 0x20);
        local_12c = ppppsVar23;
        FUN_01aaaecc(DAT_01d50ca0,&local_40);
        pcVar21 = DAT_01d50ca0;
        pcVar17 = &DAT_005b2a8d;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_84 = *(short *****)(DAT_01d50ca0 + 0x14);
          local_80 = *(short *****)(DAT_01d50ca0 + 0x18);
          local_88 = (short ****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          if (DAT_01d51174 == 2) {
            pcVar6 = DAT_01d4edc4;
          }
          puVar7 = &DAT_01cfc5e0;
          if (DAT_01d51174 == 2) {
            puVar7 = DAT_01d4edc8;
          }
          iVar5 = (*(code *)puVar7[3])(pcVar6,&local_88);
          pcVar17 = pcVar21;
          if (iVar5 != 0) {
            FUN_01aaa328(pcVar21,pcVar6,puVar7[4],&local_88,&local_40);
          }
        }
      }
      else {
        pcVar21 = DAT_01d50ca0;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_3c = *(short *****)(DAT_01d50ca0 + 0x14);
          local_38 = *(char **)(DAT_01d50ca0 + 0x18);
          local_40 = (short ****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          unaff_r9 = (short ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
          if (DAT_01d51174 == 2) {
            unaff_r9 = (short ****)DAT_01d4edc4;
          }
          puVar7 = &DAT_01cfc5e0;
          if (DAT_01d51174 == 2) {
            puVar7 = DAT_01d4edc8;
          }
          iVar5 = (*(code *)puVar7[3])(unaff_r9,&local_40);
          if (iVar5 != 0) {
            if (*(short *****)(DAT_01d50ca0 + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df5c);
            }
            local_84 = (short ****)&local_14c;
            local_248 = *(short *****)(DAT_01d50ca0 + 0x24);
            pcVar17 = *(char **)(DAT_01d50ca0 + 0x28);
            local_88 = (short ****)&local_250;
            local_30 = (short ****)&local_88;
            local_240 = (char *)0x0;
            local_2c = (short ****)&DAT_00000001;
            local_14c = (short ****)&DAT_005b2a8d;
            local_80 = (short ****)&DAT_01d2ea4c;
            local_148 = (short ****)&local_12c;
            local_128 = (short ****)FUN_0130a2f8;
            local_250 = *(short *****)(DAT_01d50ca0 + 0x1c);
            local_24c = *(short *****)(DAT_01d50ca0 + 0x20);
            local_244 = (short ****)pcVar17;
            local_12c = ppppsVar23;
            local_28 = DAT_01d50ca0 + 0x1c;
            FUN_01aaa328(pcVar21,unaff_r9,puVar7[4],&local_40,&local_30);
          }
        }
      }
      FUN_01bed4e2((uint)&local_250 | 2,&local_120,0x10);
      sVar12 = 3;
      goto LAB_01727ca8;
    }
    local_228 = local_294;
    local_22c = 0x11;
    local_240 = local_290;
    local_24c = local_28c;
    local_250 = (short ****)CONCAT22(local_250._2_2_,(short)pcVar17);
    local_224 = &DAT_01cf48ac;
    local_230 = "tcp connect error";
    local_248 = ppppsVar14;
    local_244 = ppppsVar20;
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d50cb4 - 1 < 2 ||
         ((DAT_01d50cb4 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50cac), cVar3 != '\0')))))) &&
       (iVar5 = FUN_01aaa278(DAT_01d50cac), iVar5 != 0)) {
      if (*(short *****)(DAT_01d50cac + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df6c);
      }
      local_128 = &local_140;
      local_118 = *(short *****)(DAT_01d50cac + 0x24);
      local_114 = *(char **)(DAT_01d50cac + 0x28);
      local_144 = DAT_01d50cac + 0x1c;
      local_120 = *(short *****)local_144;
      local_12c = (short ****)&local_120;
      local_14c = (short ****)&local_12c;
      local_110 = 0;
      local_148 = (short ****)&DAT_00000001;
      local_140 = (short ***)&DAT_005b3d86;
      local_124 = "";
      local_13c = (short ****)&local_88;
      local_80 = (short ****)&local_250;
      local_7c = FUN_0143f7e0;
      local_84 = (short ****)FUN_0130a2f8;
      local_11c = *(short *****)(DAT_01d50cac + 0x20);
      local_88 = ppppsVar23;
      FUN_01aaaecc(DAT_01d50cac,&local_14c);
      pcVar17 = DAT_01d50cac;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_3c = *(short *****)(DAT_01d50cac + 0x14);
        local_38 = *(char **)(DAT_01d50cac + 0x18);
        local_40 = (short ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pcVar21 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        iVar5 = (*(code *)puVar7[3])(pcVar21,&local_40);
        unaff_r9 = (short ****)pcVar17;
        if (iVar5 != 0) {
          local_30 = local_40;
          local_2c = local_3c;
          local_28 = local_38;
          FUN_01aaa328(pcVar17,pcVar21,puVar7[4],&local_30,&local_14c);
        }
      }
    }
    else {
      pcVar17 = DAT_01d50cac;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_134 = *(short *****)(DAT_01d50cac + 0x14);
        local_130 = *(char **)(DAT_01d50cac + 0x18);
        local_138 = (short ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pcVar21 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar21 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        iVar5 = (*(code *)puVar7[3])(pcVar21,&local_138);
        if (iVar5 != 0) {
          if (*(short *****)(DAT_01d50cac + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df6c);
          }
          local_3c = (short ****)&local_14c;
          local_118 = *(short *****)(DAT_01d50cac + 0x24);
          unaff_r9 = *(short *****)(DAT_01d50cac + 0x28);
          local_40 = (short ****)&local_120;
          local_12c = (short ****)&local_40;
          local_110 = 0;
          local_128 = (short ****)&DAT_00000001;
          local_14c = (short ****)&DAT_005b3d86;
          local_38 = "";
          local_148 = (short ****)&local_88;
          local_80 = (short ****)&local_250;
          local_7c = FUN_0143f7e0;
          local_84 = (short ****)FUN_0130a2f8;
          local_30 = local_138;
          local_2c = local_134;
          local_28 = local_130;
          local_124 = DAT_01d50cac + 0x1c;
          local_120 = *(short *****)(DAT_01d50cac + 0x1c);
          local_11c = *(short *****)(DAT_01d50cac + 0x20);
          local_114 = (char *)unaff_r9;
          local_88 = ppppsVar23;
          FUN_01aaa328(pcVar17,pcVar21,puVar7[4],&local_30,&local_12c);
        }
      }
    }
    local_250 = (short ****)*ppppsVar23;
    local_24c = (short ****)param_2[0x41];
    local_248 = (short ****)param_2[0x42];
    local_244 = (short ****)param_2[0x43];
    local_240 = (char *)param_2[0x44];
    uStack_23c = param_2[0x45];
    local_238 = param_2[0x46];
    uStack_234 = param_2[0x47];
    if (*(short *)(param_2 + 0x48) == 3) {
      *(undefined1 *)(param_2 + 0x97) = 1;
      param_2[0x48] = local_250;
      param_2[0x49] = local_24c;
      param_2[0x4a] = local_248;
      param_2[0x4b] = local_244;
      param_2[0x4c] = local_240;
      param_2[0x4d] = uStack_23c;
      param_2[0x4e] = local_238;
      param_2[0x4f] = uStack_234;
      param_2[0x50] = local_230;
      param_2[0x51] = local_22c;
      param_2[0x52] = local_228;
      param_2[0x53] = local_224;
    }
    else if (local_228 != 0) {
      FUN_01443048(local_228,local_224);
    }
    local_29c = ppppsVar20;
    local_298 = ppppsVar14;
    iVar5 = param_2[0x94];
  }
  sVar12 = *(short *)(param_2 + 0x48);
  if (sVar12 == 3) {
    FUN_019a18a8(&local_250,7,"Network unreachable",0x13);
    unaff_r9 = (short ****)FUN_0142322c(&local_250);
    sVar12 = 2;
    pcVar17 = (char *)0x11;
  }
  else {
    *(undefined1 *)(param_2 + 0x97) = 0;
    FUN_01bed4e2(&local_250,(int)param_2 + 0x122,0x12);
    local_120 = (short ****)param_2[0x4d];
    local_11c = (short ****)param_2[0x4e];
    local_118 = (short ****)param_2[0x4f];
    local_2a8 = (char *)param_2[0x50];
    local_2ac = (undefined *)param_2[0x53];
    pcVar17 = (char *)param_2[0x51];
    unaff_r9 = (short ****)param_2[0x52];
  }
LAB_01727cbc:
  *(undefined1 *)(param_2 + 0x97) = 0;
  *param_1 = sVar12;
  FUN_01bed4e2(param_1 + 1,&local_250,0x12);
  *(short *****)(param_1 + 10) = local_120;
  *(short *****)(param_1 + 0xc) = local_11c;
  *(short *****)(param_1 + 0xe) = local_118;
  *(char **)(param_1 + 0x10) = local_2a8;
  *(char **)(param_1 + 0x12) = pcVar17;
  *(short *****)(param_1 + 0x14) = unaff_r9;
  *(undefined **)(param_1 + 0x16) = local_2ac;
  uVar2 = 1;
LAB_01727d04:
  *(undefined1 *)((int)param_2 + 0x25d) = uVar2;
  return;
}

