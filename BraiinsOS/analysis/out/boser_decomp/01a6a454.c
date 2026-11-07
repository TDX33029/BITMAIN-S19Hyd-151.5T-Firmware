// FUN_01a6a454 @ 01a6a454 size=3768 calls_out=20 calls_in=1
// strings: tcp connect error | tcp connect error | hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_util::client::legacy::connect::http/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/hyper-util-0.1.20/src/client/legacy/connect/http.rs

void FUN_01a6a454(short *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  short *psVar7;
  undefined4 extraout_r1;
  undefined4 uVar8;
  undefined1 *puVar9;
  short ****ppppsVar10;
  undefined4 uVar11;
  undefined2 uVar12;
  short sVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  short ****ppppsVar16;
  undefined4 uVar17;
  short ****ppppsVar18;
  short ****ppppsVar19;
  short ****ppppsVar20;
  bool bVar21;
  undefined *local_2a4;
  char *local_2a0;
  short ****local_298;
  int local_294;
  short ***local_290;
  short ****local_28c;
  short ****local_288;
  undefined1 auStack_280 [32];
  short ****local_260;
  short ****local_25c;
  short ****local_258;
  short ****local_250;
  short ****local_24c;
  short ****local_248;
  short ****local_244;
  short ***local_240;
  undefined4 uStack_23c;
  undefined4 local_238;
  undefined4 uStack_234;
  char *local_230;
  undefined4 local_22c;
  int local_228;
  undefined *local_224;
  short ****local_14c;
  short ****local_148;
  undefined4 *local_144;
  short ***local_140;
  short ****local_13c;
  short ****local_138;
  short ****local_134;
  short ****local_130;
  short ****local_12c;
  short ****local_128;
  undefined4 *local_124;
  short ****local_120;
  short ****local_11c;
  short ****local_118;
  short ***local_114;
  undefined4 local_110;
  short ****local_88;
  short ****local_84;
  short ****local_80;
  code *local_7c;
  short ****local_40;
  short ****local_3c;
  short ****local_38;
  short ****local_30;
  short ****local_2c;
  short ****local_28;
  
  ppppsVar19 = (short ****)(param_2 + 0x40);
  local_2a4 = &DAT_01cf48ac;
  local_2a0 = "tcp connect error";
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x25d)) {
  case 0:
    iVar3 = param_2[0x95];
    *(undefined1 *)(param_2 + 0x97) = 1;
    *(undefined2 *)(param_2 + 0x48) = 3;
    param_2[0x92] = iVar3;
    param_2[0x93] = param_2[0x96];
    param_2[0x94] = iVar3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2df4c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2df4c);
  case 3:
    goto LAB_01a6a880;
  }
  while (psVar7 = *(short **)(iVar3 + 4), psVar7 != *(short **)(iVar3 + 0xc)) {
    sVar13 = *psVar7;
    *(short **)(iVar3 + 4) = psVar7 + 0x10;
    FUN_01bed4e2(auStack_280,psVar7 + 1,0x1e);
    if (sVar13 == 2) break;
    *(short *)ppppsVar19 = sVar13;
    FUN_01bed4e2((int)param_2 + 0x102,auStack_280,0x1e);
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d50cc0 - 1 < 2 ||
         ((DAT_01d50cc0 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50cb8), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d50cb8), iVar3 != 0)))) {
      if (*(short *****)(DAT_01d50cb8 + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df7c);
      }
      local_2c = (short ****)&local_14c;
      local_248 = *(short *****)(DAT_01d50cb8 + 0x24);
      local_244 = *(short *****)(DAT_01d50cb8 + 0x28);
      local_38 = (short ****)(DAT_01d50cb8 + 0x1c);
      local_250 = (short ****)*local_38;
      local_30 = (short ****)&local_250;
      local_40 = (short ****)&local_30;
      local_240 = (short ***)0x0;
      local_3c = (short ****)&DAT_00000001;
      local_14c = (short ****)&DAT_0057fa37;
      local_28 = (short ****)&DAT_01d2ea4c;
      local_148 = (short ****)&local_12c;
      local_128 = (short ****)FUN_0130a2f8;
      local_24c = *(short *****)(DAT_01d50cb8 + 0x20);
      local_12c = ppppsVar19;
      FUN_01aaaecc(DAT_01d50cb8,&local_40);
      iVar3 = DAT_01d50cb8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_84 = *(short *****)(DAT_01d50cb8 + 0x14);
        local_80 = *(short *****)(DAT_01d50cb8 + 0x18);
        local_88 = (short ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        ppppsVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          ppppsVar18 = (short ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(ppppsVar18,&local_88);
        if (iVar4 != 0) {
          local_120 = local_88;
          local_11c = local_84;
          local_118 = local_80;
          FUN_01aaa328(iVar3,ppppsVar18,puVar5[4],&local_120,&local_40);
        }
      }
    }
    else {
      iVar3 = DAT_01d50cb8;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_25c = *(short *****)(DAT_01d50cb8 + 0x14);
        local_258 = *(short *****)(DAT_01d50cb8 + 0x18);
        local_260 = (short ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        ppppsVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          ppppsVar18 = (short ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(ppppsVar18,&local_260);
        if (iVar4 != 0) {
          if (*(short *****)(DAT_01d50cb8 + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df7c);
          }
          local_84 = (short ****)&local_12c;
          local_248 = *(short *****)(DAT_01d50cb8 + 0x24);
          local_244 = *(short *****)(DAT_01d50cb8 + 0x28);
          local_88 = (short ****)&local_250;
          local_30 = (short ****)&local_88;
          local_240 = (short ***)0x0;
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
          local_40 = ppppsVar19;
          local_28 = (short ****)(DAT_01d50cb8 + 0x1c);
          FUN_01aaa328(iVar3,ppppsVar18,puVar5[4],&local_120,&local_30);
        }
      }
    }
    iVar3 = param_2[0x92];
    FUN_0143dd40(&local_250,ppppsVar19,param_2[0x93],*(undefined4 *)(iVar3 + 0x14),
                 *(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),
                 *(undefined4 *)(iVar3 + 0x18));
    if (local_250 == (short ****)&DAT_00000001) {
      puVar5 = (undefined4 *)((uint)&local_250 | 4);
      uVar8 = puVar5[1];
      uVar11 = puVar5[2];
      uVar14 = puVar5[3];
      uVar15 = puVar5[4];
      uVar17 = puVar5[5];
      param_2[1] = *puVar5;
      param_2[2] = uVar8;
      param_2[3] = uVar11;
      param_2[4] = uVar14;
      param_2[5] = uVar15;
      param_2[6] = uVar17;
      uVar8 = puVar5[7];
      uVar11 = puVar5[8];
      uVar14 = puVar5[9];
      uVar15 = puVar5[10];
      uVar17 = puVar5[0xb];
      param_2[7] = puVar5[6];
      param_2[8] = uVar8;
      param_2[9] = uVar11;
      param_2[10] = uVar14;
      param_2[0xb] = uVar15;
      param_2[0xc] = uVar17;
      *param_2 = 1;
      sVar13 = *(short *)(param_2 + 1);
      FUN_01bed4e2(&local_250,(int)param_2 + 6,0x12);
      local_120 = (short ****)param_2[6];
      local_11c = (short ****)param_2[7];
      local_118 = (short ****)param_2[8];
      local_2a0 = (char *)param_2[9];
      local_2a4 = (undefined *)param_2[0xc];
      ppppsVar18 = (short ****)param_2[10];
      ppppsVar16 = (short ****)param_2[0xb];
LAB_01a6b1d4:
      uVar6 = (uint)*(ushort *)(param_2 + 0x48);
      bVar21 = uVar6 != 3;
      if (bVar21) {
        uVar6 = param_2[0x52];
      }
      if (bVar21 && uVar6 != 0) {
        FUN_01443048(uVar6,param_2[0x53]);
      }
      goto LAB_01a6b1e8;
    }
    FUN_01bed4e2(param_2 + 2,&local_248,0xf8);
    *param_2 = 0;
    FUN_01bed4e2(param_2 + 0x54,param_2 + 2,0xf8);
LAB_01a6a880:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x6a)) {
    case 0:
      puVar9 = (undefined1 *)param_2[0x56];
      if (puVar9 != &DAT_3b9aca00) {
        uVar8 = param_2[0x54];
        uVar11 = param_2[0x55];
        FUN_01bed4e2(&local_88,param_2 + 0x58,0x48);
        FUN_01a6b630(&local_250,extraout_r1,uVar8,uVar11,puVar9,&local_88,&DAT_01d2dfac);
        FUN_01bed4e2(&local_120,&local_250,0x98);
        FUN_01bed4e2(param_2 + 0x6c,&local_120,0x98);
        goto switchD_01a6a890_caseD_3;
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
switchD_01a6a890_caseD_3:
      FUN_01a6b748(&local_250,param_2 + 0x6c,param_3);
      ppppsVar20 = local_244;
      ppppsVar18 = local_248;
      ppppsVar10 = local_24c;
      ppppsVar16 = local_250;
      if (local_250 == (short ****)&SUB_00000004) {
        uVar1 = 3;
        goto LAB_01a6b064;
      }
      FUN_01a6b7d0(param_2 + 0x6c);
      if (ppppsVar16 == (short ****)&DAT_00000003) {
        FUN_01a6fee4(&local_250);
        ppppsVar16 = (short ****)0x2;
        ppppsVar10 = local_250;
        ppppsVar18 = local_24c;
      }
      goto LAB_01a6a9a4;
    }
    FUN_01a6b804(&local_250,param_2 + 0x6c,param_3);
    ppppsVar20 = local_244;
    ppppsVar18 = local_248;
    ppppsVar10 = local_24c;
    ppppsVar16 = local_250;
    if (local_250 == (short ****)&DAT_00000003) {
      uVar1 = 4;
LAB_01a6b064:
      *(undefined1 *)(param_2 + 0x6a) = uVar1;
      uVar1 = 3;
      *param_1 = 4;
      goto LAB_01a6b234;
    }
    FUN_017999f4(param_2 + 0x6c);
LAB_01a6a9a4:
    uVar12 = 3;
    if (ppppsVar16 == (short ****)0x2) {
      local_250 = ppppsVar10;
      local_24c = ppppsVar18;
      local_294 = FUN_0142322c(&local_250);
      uVar12 = 2;
      ppppsVar10 = local_298;
    }
    else {
      local_290 = (short ***)ppppsVar20;
      local_28c = ppppsVar18;
      local_288 = ppppsVar16;
    }
    *(undefined1 *)(param_2 + 0x6a) = 1;
    FUN_01a6bb88(param_2 + 0x54);
    if (ppppsVar16 != (short ****)0x2) {
      local_114 = local_290;
      local_120 = local_288;
      local_118 = local_28c;
      local_11c = ppppsVar10;
      if (((DAT_01d50f88 < 2) &&
          ((DAT_01d50ca8 - 1 < 2 ||
           ((DAT_01d50ca8 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50ca0), cVar2 != '\0')))))) &&
         (iVar3 = FUN_01aaa278(DAT_01d50ca0), iVar3 != 0)) {
        if ((short ****)DAT_01d50ca0[8] == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df5c);
        }
        local_2c = (short ****)&local_14c;
        local_248 = (short ****)DAT_01d50ca0[9];
        local_244 = (short ****)DAT_01d50ca0[10];
        ppppsVar18 = DAT_01d50ca0 + 7;
        local_250 = (short ****)*ppppsVar18;
        local_30 = (short ****)&local_250;
        local_40 = (short ****)&local_30;
        local_240 = (short ***)0x0;
        local_3c = (short ****)&DAT_00000001;
        local_14c = (short ****)&DAT_005b2a8d;
        local_28 = (short ****)&DAT_01d2ea4c;
        local_148 = (short ****)&local_12c;
        local_128 = (short ****)FUN_0130a2f8;
        local_24c = (short ****)DAT_01d50ca0[8];
        local_12c = ppppsVar19;
        local_38 = ppppsVar18;
        FUN_01aaaecc(DAT_01d50ca0,&local_40);
        ppppsVar19 = DAT_01d50ca0;
        ppppsVar16 = (short ****)&local_40;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_84 = (short ****)DAT_01d50ca0[5];
          local_80 = (short ****)DAT_01d50ca0[6];
          local_88 = (short ****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar5 = DAT_01d4edc8;
          ppppsVar18 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar5 = &DAT_01cfc5e0;
            ppppsVar18 = (short ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar3 = (*(code *)puVar5[3])(ppppsVar18,&local_88);
          if (iVar3 != 0) {
            FUN_01aaa328(ppppsVar19,ppppsVar18,puVar5[4],&local_88,&local_40);
          }
        }
      }
      else {
        ppppsVar10 = DAT_01d50ca0;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_3c = (short ****)DAT_01d50ca0[5];
          local_38 = (short ****)DAT_01d50ca0[6];
          local_40 = (short ****)&SUB_00000004;
          DataMemoryBarrier(0xb);
          puVar5 = DAT_01d4edc8;
          ppppsVar18 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar5 = &DAT_01cfc5e0;
            ppppsVar18 = (short ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar3 = (*(code *)puVar5[3])(ppppsVar18,&local_40);
          ppppsVar16 = ppppsVar10;
          if (iVar3 != 0) {
            if ((short ****)DAT_01d50ca0[8] == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df5c);
            }
            local_84 = (short ****)&local_14c;
            local_248 = (short ****)DAT_01d50ca0[9];
            local_244 = (short ****)DAT_01d50ca0[10];
            local_88 = (short ****)&local_250;
            local_30 = (short ****)&local_88;
            local_240 = (short ***)0x0;
            local_2c = (short ****)&DAT_00000001;
            local_14c = (short ****)&DAT_005b2a8d;
            local_80 = (short ****)&DAT_01d2ea4c;
            local_148 = (short ****)&local_12c;
            local_128 = (short ****)FUN_0130a2f8;
            local_250 = (short ****)DAT_01d50ca0[7];
            local_24c = (short ****)DAT_01d50ca0[8];
            local_12c = ppppsVar19;
            local_28 = DAT_01d50ca0 + 7;
            FUN_01aaa328(ppppsVar10,ppppsVar18,puVar5[4],&local_40,&local_30);
          }
        }
      }
      FUN_01bed4e2((uint)&local_250 | 2,&local_120,0x10);
      sVar13 = 3;
      goto LAB_01a6b1d4;
    }
    local_228 = local_294;
    local_22c = 0x11;
    local_240 = local_290;
    local_24c = local_288;
    local_250 = (short ****)CONCAT22(local_250._2_2_,uVar12);
    local_244 = local_28c;
    local_224 = &DAT_01cf48ac;
    local_230 = "tcp connect error";
    local_248 = ppppsVar10;
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d50cb4 - 1 < 2 ||
         ((DAT_01d50cb4 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d50cac), cVar2 != '\0')))))) &&
       (iVar3 = FUN_01aaa278(DAT_01d50cac), iVar3 != 0)) {
      if (*(short *****)(DAT_01d50cac + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df6c);
      }
      local_128 = &local_140;
      local_118 = *(short *****)(DAT_01d50cac + 0x24);
      local_114 = *(short ****)(DAT_01d50cac + 0x28);
      local_144 = (undefined4 *)(DAT_01d50cac + 0x1c);
      local_120 = (short ****)*local_144;
      local_12c = (short ****)&local_120;
      local_14c = (short ****)&local_12c;
      local_110 = 0;
      local_148 = (short ****)&DAT_00000001;
      local_140 = (short ***)&DAT_005b3d86;
      local_124 = (undefined4 *)&DAT_01d2ea4c;
      local_13c = (short ****)&local_88;
      local_80 = (short ****)&local_250;
      local_7c = FUN_0143f7e0;
      local_84 = (short ****)FUN_0130a2f8;
      local_11c = *(short *****)(DAT_01d50cac + 0x20);
      local_88 = ppppsVar19;
      FUN_01aaaecc(DAT_01d50cac,&local_14c);
      iVar3 = DAT_01d50cac;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_3c = *(short *****)(DAT_01d50cac + 0x14);
        local_38 = *(short *****)(DAT_01d50cac + 0x18);
        local_40 = (short ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        ppppsVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          ppppsVar18 = (short ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(ppppsVar18,&local_40);
        if (iVar4 != 0) {
          local_30 = local_40;
          local_2c = local_3c;
          local_28 = local_38;
          FUN_01aaa328(iVar3,ppppsVar18,puVar5[4],&local_30,&local_14c);
        }
      }
    }
    else {
      iVar3 = DAT_01d50cac;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_134 = *(short *****)(DAT_01d50cac + 0x14);
        local_130 = *(short *****)(DAT_01d50cac + 0x18);
        local_138 = (short ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar5 = DAT_01d4edc8;
        ppppsVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar5 = &DAT_01cfc5e0;
          ppppsVar18 = (short ****)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar5[3])(ppppsVar18,&local_138);
        if (iVar4 != 0) {
          if (*(short *****)(DAT_01d50cac + 0x20) == (short ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2df6c);
          }
          local_3c = (short ****)&local_14c;
          local_118 = *(short *****)(DAT_01d50cac + 0x24);
          local_114 = *(short ****)(DAT_01d50cac + 0x28);
          local_40 = (short ****)&local_120;
          local_12c = (short ****)&local_40;
          local_110 = 0;
          local_128 = (short ****)&DAT_00000001;
          local_14c = (short ****)&DAT_005b3d86;
          local_38 = (short ****)&DAT_01d2ea4c;
          local_148 = (short ****)&local_88;
          local_80 = (short ****)&local_250;
          local_7c = FUN_0143f7e0;
          local_84 = (short ****)FUN_0130a2f8;
          local_30 = local_138;
          local_2c = local_134;
          local_28 = local_130;
          local_124 = (undefined4 *)(DAT_01d50cac + 0x1c);
          local_120 = *(short *****)(DAT_01d50cac + 0x1c);
          local_11c = *(short *****)(DAT_01d50cac + 0x20);
          local_88 = ppppsVar19;
          FUN_01aaa328(iVar3,ppppsVar18,puVar5[4],&local_30,&local_12c);
        }
      }
    }
    local_250 = (short ****)*ppppsVar19;
    local_24c = (short ****)param_2[0x41];
    local_248 = (short ****)param_2[0x42];
    local_244 = (short ****)param_2[0x43];
    local_240 = (short ***)param_2[0x44];
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
    local_298 = ppppsVar10;
    iVar3 = param_2[0x94];
  }
  sVar13 = *(short *)(param_2 + 0x48);
  if (sVar13 == 3) {
    FUN_019a18a8(&local_250,7,"Network unreachable",0x13);
    ppppsVar16 = (short ****)FUN_0142322c(&local_250);
    sVar13 = 2;
    ppppsVar18 = (short ****)&DAT_00000011;
  }
  else {
    *(undefined1 *)(param_2 + 0x97) = 0;
    FUN_01bed4e2(&local_250,(int)param_2 + 0x122,0x12);
    local_120 = (short ****)param_2[0x4d];
    local_11c = (short ****)param_2[0x4e];
    local_118 = (short ****)param_2[0x4f];
    local_2a0 = (char *)param_2[0x50];
    local_2a4 = (undefined *)param_2[0x53];
    ppppsVar18 = (short ****)param_2[0x51];
    ppppsVar16 = (short ****)param_2[0x52];
  }
LAB_01a6b1e8:
  *(undefined1 *)(param_2 + 0x97) = 0;
  *param_1 = sVar13;
  FUN_01bed4e2(param_1 + 1,&local_250,0x12);
  *(short *****)(param_1 + 10) = local_120;
  *(short *****)(param_1 + 0xc) = local_11c;
  *(short *****)(param_1 + 0xe) = local_118;
  *(char **)(param_1 + 0x10) = local_2a0;
  *(undefined **)(param_1 + 0x16) = local_2a4;
  uVar1 = 1;
  *(short *****)(param_1 + 0x12) = ppppsVar18;
  *(short *****)(param_1 + 0x14) = ppppsVar16;
LAB_01a6b234:
  *(undefined1 *)((int)param_2 + 0x25d) = uVar1;
  return;
}

