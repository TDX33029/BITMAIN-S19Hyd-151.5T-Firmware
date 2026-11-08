// FUN_01807384 @ 01807384 size=7216 calls_out=50 calls_in=1
// strings: tracing::span::active | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01807384(undefined4 *param_1,int *param_2,int ******param_3,undefined4 param_4,
                 int *****param_5,int param_6,undefined4 param_7,undefined4 param_8)

{
  code *pcVar1;
  byte bVar2;
  char *pcVar3;
  int ******ppppppiVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  byte *pbVar7;
  int *****pppppiVar8;
  char cVar9;
  int iVar10;
  int *****pppppiVar12;
  int *****pppppiVar11;
  int iVar13;
  int ****extraout_r1;
  int *****pppppiVar14;
  uint uVar15;
  undefined *puVar16;
  int ****ppppiVar17;
  int ******ppppppiVar18;
  char *unaff_r5;
  uint uVar19;
  int *****pppppiVar20;
  int ***pppiVar21;
  int ******ppppppiVar22;
  int *****pppppiVar23;
  uint uVar24;
  int ****ppppiVar25;
  int ******ppppppiVar26;
  int ******ppppppiVar27;
  int ******ppppppiVar28;
  int ******unaff_r9;
  uint uVar29;
  int ****ppppiVar30;
  bool bVar31;
  undefined8 uVar32;
  int local_178;
  int *****local_150;
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  int ******local_140;
  byte *local_13c;
  char local_138;
  undefined4 local_130;
  int ******local_12c;
  int ******local_128;
  int ******local_124;
  int *****local_120;
  int ******local_11c;
  int *****local_118;
  int *****pppppiStack_114;
  int *****pppppiStack_110;
  int *****pppppiStack_10c;
  int *****local_108;
  int *****pppppiStack_104;
  int *****pppppiStack_100;
  int *****pppppiStack_fc;
  int *****pppppiStack_f8;
  int *****pppppiStack_f4;
  int *****local_f0;
  int *****local_ec;
  int ******local_e8;
  int ******local_e4;
  int *****local_e0;
  int ******ppppppiStack_dc;
  int *****local_d8;
  int *****pppppiStack_d4;
  int ******local_d0;
  int ******local_cc;
  int ******local_c8;
  int ******local_c0;
  int ******local_bc;
  int ******local_b8;
  int ******local_b4;
  int ******local_b0;
  int ******local_ac;
  int ******local_a8;
  int ******local_a4;
  int *****pppppiStack_a0;
  int ******ppppppiStack_9c;
  undefined4 uStack_98;
  int ******local_90;
  int ******local_8c;
  int ******local_88;
  int ******local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int ******local_74;
  int ******local_70;
  int ******local_6c;
  int *****local_68;
  int ******ppppppiStack_64;
  int *****pppppiStack_60;
  int ******local_58;
  int ******local_54;
  int ******local_50;
  int ******ppppppiStack_4c;
  int ******local_40;
  int ******local_3c;
  int ******local_38;
  int ******local_34;
  int ******local_2c [2];
  
  if ((char)param_2[0x29] != '\x02') {
    *(undefined1 *)(param_2 + 0x29) = 1;
  }
  if (*(char *)((int)param_2 + 0xa5) == '\x01') {
    unaff_r5 = "";
    local_130 = (undefined **)0x0;
    local_12c = (int ******)0x14;
    local_128 = (int ******)0x0;
    local_124 = (int ******)0x0;
    iVar10 = FUN_013b43b8(param_3);
    if ((iVar10 == 0) ||
       (iVar10 = FUN_01429a28(*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8),"k",10),
       iVar10 == 0)) {
      if (*(char *)(param_3 + 0x21) == '\x02') {
        if ((char)param_2[0x29] != '\x02') {
          local_150 = (int *****)0x0;
          local_14c = 0x14;
          local_148 = 0;
          local_144 = 0;
          iVar10 = 0;
          do {
            if (((byte)"k"[-iVar10] != 9) && (0x5e < (byte)"k"[-iVar10] - 0x20)) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(0,0,&DAT_01d1d594);
            }
            bVar31 = iVar10 != -9;
            iVar10 = iVar10 + -1;
          } while (bVar31);
          local_120 = (int *****)((uint)local_120 & 0xffffff00);
          local_124 = (int ******)0x0;
          local_12c = (int ******)0x51cc51;
          local_128 = (int ******)0xa;
          local_130 = &PTR_FUN_01d1d5a4;
          FUN_0142fccc(&local_f0,param_3,&local_150,&local_130);
          if ((char)local_e0 != '\x02') {
            (*(code *)local_f0[4])(&local_e4,local_ec,local_e8);
          }
        }
      }
      else if (*(char *)(param_3 + 0x21) == '\x01') {
        *(undefined1 *)(param_2 + 0x29) = 2;
      }
    }
    *(undefined1 *)(param_3 + 0x21) = 1;
  }
  local_144 = param_8;
  local_138 = *(char *)((int)param_2 + 0xa1);
  local_13c = (byte *)(param_2 + 0x20);
  local_148 = param_7;
  local_14c = param_6;
  local_150 = param_5;
  local_140 = param_3;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4f2e0 - 1 < 2 ||
       ((DAT_01d4f2e0 != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4f2d8), cVar9 != '\0')))) &&
      (iVar10 = FUN_01aaa278(DAT_01d4f2d8), iVar10 != 0)))) {
    local_128 = (int ******)(DAT_01d4f2d8 + 7);
    local_12c = (int ******)0x0;
    local_130 = (undefined **)&SUB_00000004;
    FUN_01aaa548(&local_f0,DAT_01d4f2d8,&local_130);
  }
  else {
    local_118 = DAT_01d4f2d8;
    local_128 = (int ******)0x2;
    if (DAT_01d51ae9 == '\0') {
      local_e8 = (int ******)(DAT_01d4f2d8 + 7);
      local_ec = (int *****)0x0;
      local_f0 = (int *****)0x4;
      FUN_01aaa3e0(&local_130,&local_f0);
    }
    local_f0 = (int *****)local_130;
    local_ec = (int *****)local_12c;
    local_e8 = local_128;
    local_e4 = local_124;
    local_e0 = local_120;
    ppppppiStack_dc = local_11c;
    local_d8 = local_118;
    pppppiStack_d4 = pppppiStack_114;
  }
  if (local_e8 != (int ******)0x2) {
    if (((uint)local_e8 & 1) == 0) {
      ppppppiVar22 = local_e4;
    }
    else {
      ppppppiVar22 = (int ******)((int)local_e4 + ((int)local_e0[2] - 1U & 0xfffffff8) + 8);
    }
    (*(code *)local_e0[0xc])(ppppppiVar22,&local_f0);
  }
  if ((DAT_01d51ae9 == '\0') && (local_d8 != (int *****)0x0)) {
    unaff_r5 = (char *)local_d8[4];
    local_78 = (int ******)local_d8[3];
    local_130 = (undefined **)&local_78;
    local_12c = (int ******)&DAT_0132b6a0;
    local_74 = (int ******)unaff_r5;
    FUN_006404a8(&local_f0,"tracing::span::active",0x15,&DAT_00594cdd,&local_130);
  }
  if ((DAT_01d50f88 == 0) &&
     ((DAT_01d4e99c - 1 < 2 ||
      ((DAT_01d4e99c != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4e994), cVar9 != '\0')))))) {
    iVar10 = FUN_01aaa278(DAT_01d4e994);
    ppppppiVar22 = local_140;
    if (iVar10 == 0) goto LAB_018075f0;
    if (DAT_01d4e994[8] == (int *****)0x0) {
LAB_01809104:
      puVar16 = &DAT_01cf5248;
      goto LAB_01809160;
    }
    local_3c = (int ******)&local_90;
    local_128 = (int ******)DAT_01d4e994[9];
    local_124 = (int ******)DAT_01d4e994[10];
    local_b8 = DAT_01d4e994 + 7;
    local_130 = (undefined **)*local_b8;
    unaff_r5 = (char *)0x0;
    local_40 = (int ******)&local_130;
    local_c0 = (int ******)&local_40;
    local_120 = (int *****)0x0;
    local_bc = (int ******)&DAT_00000001;
    local_8c = (int ******)&local_78;
    local_78 = local_140 + 0x1b;
    local_38 = (int ******)&DAT_01d2ea4c;
    local_90 = (int ******)&DAT_00579295;
    local_6c = (int ******)&DAT_0142e7a4;
    local_74 = (int ******)&LAB_0141185c;
    unaff_r9 = (int ******)&local_c0;
    local_12c = (int ******)DAT_01d4e994[8];
    local_70 = &local_150;
    FUN_01aaaecc(DAT_01d4e994,unaff_r9);
    ppppppiVar4 = DAT_01d4e994;
    ppppppiVar28 = (int ******)&DAT_00579295;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_54 = (int ******)DAT_01d4e994[5];
      local_50 = (int ******)DAT_01d4e994[6];
      local_58 = (int ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      unaff_r5 = (char *)DAT_01d4edc8;
      pcVar3 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        unaff_r5 = (char *)&DAT_01cfc5e0;
        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar10 = (*(code *)*(int ******)((int)unaff_r5 + 0xc))(pcVar3,&local_58);
      ppppppiVar26 = local_50;
      ppppppiVar28 = ppppppiVar4;
      if (iVar10 != 0) {
        local_b0 = local_58;
        local_ac = local_54;
        local_a8 = local_50;
        FUN_01aaa328(ppppppiVar4,pcVar3,*(int ******)((int)unaff_r5 + 0x10),&local_b0,unaff_r9);
        ppppppiVar22 = ppppppiVar26;
      }
    }
  }
  else {
LAB_018075f0:
    ppppppiVar4 = DAT_01d4e994;
    ppppppiVar22 = (int ******)&DAT_01d51ae9;
    ppppppiVar28 = (int ******)&DAT_01d50f88;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_cc = (int ******)DAT_01d4e994[5];
      local_c8 = (int ******)DAT_01d4e994[6];
      local_d0 = (int ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      ppppppiVar26 = DAT_01d4edc8;
      pcVar3 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        ppppppiVar26 = (int ******)&DAT_01cfc5e0;
        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      unaff_r5 = (char *)&local_d0;
      iVar10 = (*(code *)ppppppiVar26[3])(pcVar3,unaff_r5);
      ppppppiVar27 = local_c8;
      if (iVar10 != 0) {
        if (DAT_01d4e994[8] == (int *****)0x0) goto LAB_01809104;
        ppppppiVar28 = (int ******)DAT_01d4e994[9];
        unaff_r9 = (int ******)DAT_01d4e994[10];
        local_54 = (int ******)&local_c0;
        local_58 = (int ******)&local_130;
        local_40 = (int ******)&local_58;
        local_120 = (int *****)0x0;
        local_70 = &local_150;
        local_3c = (int ******)&DAT_00000001;
        local_bc = (int ******)&local_78;
        local_50 = (int ******)&DAT_01d2ea4c;
        local_c0 = (int ******)&DAT_00579295;
        local_6c = (int ******)&DAT_0142e7a4;
        local_74 = (int ******)&LAB_0141185c;
        local_78 = local_140 + 0x1b;
        local_b0 = local_d0;
        local_ac = local_cc;
        local_a8 = local_c8;
        local_130 = (undefined **)DAT_01d4e994[7];
        local_12c = (int ******)DAT_01d4e994[8];
        local_128 = ppppppiVar28;
        local_124 = unaff_r9;
        local_38 = DAT_01d4e994 + 7;
        FUN_01aaa328(ppppppiVar4,pcVar3,ppppppiVar26[4],&local_b0,&local_40);
        ppppppiVar22 = ppppppiVar27;
      }
    }
  }
  ppppppiVar4 = local_140;
  uVar32 = CONCAT44(ppppppiVar22,unaff_r5);
  bVar2 = *(byte *)(local_140 + 0x1b);
  if (8 < bVar2) {
    if (bVar2 == 9) {
      unaff_r9 = (int ******)(uint)*(byte *)(local_140 + 0x1f);
      uVar32 = *(undefined8 *)(local_140 + 0x1c);
      ppppppiVar28 = (int ******)local_140[0x1e];
      local_130 = (undefined **)
                  CONCAT22(CONCAT11(local_130._3_1_,*(undefined1 *)((int)local_140 + 0x6f)),
                           *(undefined2 *)((int)local_140 + 0x6d));
    }
    else {
      uVar32 = FUN_013d4df8(local_140[0x1c],local_140[0x1d]);
    }
  }
  pbVar7 = local_13c;
  local_78 = (int ******)CONCAT22(CONCAT11(local_78._3_1_,local_130._2_1_),(undefined2)local_130);
  if (((*local_13c != 0xb) && (9 < *local_13c)) && (*(int *)(local_13c + 8) != 0)) {
    thunk_FUN_01be4678(*(undefined4 *)(local_13c + 4));
  }
  uVar6 = local_144;
  uVar5 = local_148;
  pppppiVar20 = local_150;
  *(int *)(pbVar7 + 4) = (int)uVar32;
  *(undefined2 *)(pbVar7 + 1) = (undefined2)local_78;
  pbVar7[3] = local_78._2_1_;
  *pbVar7 = bVar2;
  *(int *)(pbVar7 + 8) = (int)((ulonglong)uVar32 >> 0x20);
  *(int *******)(pbVar7 + 0xc) = ppppppiVar28;
  *(int *******)(pbVar7 + 0x10) = unaff_r9;
  if (local_150 == (int *****)0x2 && local_14c == 0) {
    local_130 = (undefined **)0x0;
    local_12c = (int ******)0x45;
    local_128 = (int ******)0x0;
    local_124 = (int ******)0x0;
    FUN_014304d0(&local_78,ppppppiVar4);
    if ((char)local_68 != '\x02') {
      (*(code *)local_78[4])(&local_6c,local_74,local_70);
    }
LAB_018079c4:
    local_124 = (int ******)0x0;
    local_128 = (int ******)0x0;
LAB_018079d0:
    local_12c = (int ******)0x0;
    local_130 = (undefined **)&DAT_00000001;
    local_120 = (int *****)((uint)local_120 & 0xffffff00);
  }
  else {
    cVar9 = *(char *)(ppppppiVar4 + 0x21);
    FUN_01437b28(&local_c0,ppppppiVar4);
    if (cVar9 == '\x02') {
      local_130 = (undefined **)0x0;
      local_12c = (int ******)0x45;
      local_128 = (int ******)0x0;
      local_124 = (int ******)0x0;
      FUN_0142fa40(&local_b0,ppppppiVar4);
      ppppppiVar26 = local_a8;
      ppppppiVar22 = local_b0;
      if (uStack_98._2_1_ == '\x02') {
        FUN_0142f9bc(&local_130,local_b0,1,local_a8);
        iVar10 = FUN_01437858();
        if (iVar10 == 0) {
          if (((DAT_01d50f88 < 4) &&
              ((DAT_01d4e918 - 1 < 2 ||
               ((DAT_01d4e918 != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4e910), cVar9 != '\0')))))) &&
             (iVar10 = FUN_01aaa278(DAT_01d4e910), iVar10 != 0)) {
            if (*(int ******)(DAT_01d4e910 + 0x20) == (int *****)0x0) {
LAB_01809158:
              puVar16 = &DAT_01cf4de8;
              goto LAB_01809160;
            }
            local_74 = (int ******)&local_40;
            local_128 = *(int *******)(DAT_01d4e910 + 0x24);
            local_124 = *(int *******)(DAT_01d4e910 + 0x28);
            local_78 = (int ******)&local_130;
            local_58 = (int ******)&local_78;
            local_54 = (int ******)&DAT_00000001;
            local_120 = (int *****)0x0;
            local_70 = (int ******)&DAT_01d2ea4c;
            local_3c = (int ******)0x73;
            local_40 = (int ******)&DAT_00478101;
            local_130 = (undefined **)*(int ******)(DAT_01d4e910 + 0x1c);
            local_12c = (int ******)*(int ******)(DAT_01d4e910 + 0x20);
            local_50 = (int ******)(DAT_01d4e910 + 0x1c);
            FUN_0142e9a8(&local_58);
          }
          else {
            iVar10 = DAT_01d4e910;
            if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
              local_8c = *(int *******)(DAT_01d4e910 + 0x14);
              local_88 = *(int *******)(DAT_01d4e910 + 0x18);
              local_90 = (int ******)0x2;
              DataMemoryBarrier(0xb);
              ppppppiVar28 = DAT_01d4edc8;
              pcVar3 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                ppppppiVar28 = (int ******)&DAT_01cfc5e0;
                pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar13 = (*(code *)ppppppiVar28[3])(pcVar3,&local_90);
              if (iVar13 != 0) {
                if (*(int ******)(DAT_01d4e910 + 0x20) == (int *****)0x0) goto LAB_01809158;
                local_54 = (int ******)&local_80;
                local_128 = *(int *******)(DAT_01d4e910 + 0x24);
                local_124 = *(int *******)(DAT_01d4e910 + 0x28);
                local_58 = (int ******)&local_130;
                local_40 = (int ******)&local_58;
                local_3c = (int ******)&DAT_00000001;
                local_7c = 0x73;
                local_120 = (int *****)0x0;
                local_50 = (int ******)&DAT_01d2ea4c;
                local_80 = (int ******)&DAT_00478101;
                local_78 = local_90;
                local_74 = local_8c;
                local_70 = local_88;
                local_130 = (undefined **)*(int ******)(DAT_01d4e910 + 0x1c);
                local_12c = (int ******)*(int ******)(DAT_01d4e910 + 0x20);
                local_38 = (int ******)(DAT_01d4e910 + 0x1c);
                FUN_01aaa328(iVar10,pcVar3,ppppppiVar28[4],&local_78,&local_40);
              }
            }
          }
          ppppppiVar28 = (int ******)ppppppiVar22[10];
          if (ppppppiVar28 <= ppppppiVar26) {
            puVar16 = &DAT_01cf5348;
LAB_01809138:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(ppppppiVar26,ppppppiVar28,puVar16);
          }
          pppppiVar20 = ppppppiVar22[9] + (int)ppppppiVar26 * 0xd;
          ppppiVar17 = *pppppiVar20;
          uVar15 = 0;
          if (ppppiVar17 != (int ****)0x0) {
            uVar15 = 2 - (int)ppppiVar17;
          }
          if ((uVar15 & 1) == 0) {
            pppppiVar20 = ppppppiVar22[9] + (int)ppppppiVar26 * 0xd + 3;
          }
          else {
            ppppppiVar26 = (int ******)pppppiVar20[2];
            ppppppiVar28 = (int ******)ppppppiVar22[0xd];
            if (ppppppiVar28 <= ppppppiVar26) {
              puVar16 = &DAT_01cf5298;
              goto LAB_01809138;
            }
            pppppiVar20 = ppppppiVar22[0xc] + (int)ppppppiVar26 * 9 + 4;
          }
          ppppppiVar28 = (int ******)pppppiVar20[2];
          ppppppiVar22 = (int ******)0x0;
          ppppppiVar26 = (int ******)((int)ppppppiVar28 + 9);
          if ((int)ppppppiVar26 < 0) {
LAB_01808b78:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(ppppppiVar22,ppppppiVar26);
          }
          ppppppiVar27 = (int ******)&DAT_00000001;
          if (ppppppiVar26 != (int ******)0x0) {
            ppppppiVar22 = (int ******)&DAT_00000001;
            ppppppiVar27 = (int ******)FUN_01298504(ppppppiVar26,1);
            if (ppppppiVar27 == (int ******)0x0) goto LAB_01808b78;
            ppppppiVar28 = (int ******)pppppiVar20[2];
            ppppppiVar22 = ppppppiVar26;
          }
          local_3c = (int ******)0x0;
          ppppiVar17 = pppppiVar20[1];
          uVar15 = 0x20 - LZCOUNT((uint)ppppppiVar22 >> 10);
          if (6 < uVar15) {
            uVar15 = 7;
          }
          local_34 = (int ******)(uVar15 << 2 | 1);
          local_40 = ppppppiVar27;
          local_38 = ppppppiVar22;
          if (ppppppiVar22 < ppppppiVar28) {
            FUN_01283c9c(&local_40,ppppppiVar28);
          }
          ppppppiVar27 = local_38;
          ppppppiVar26 = local_3c;
          ppppppiVar22 = local_40;
          FUN_01bed4e2((int)local_40 + (int)local_3c,ppppiVar17,ppppppiVar28);
          ppppppiVar18 = (int ******)((int)ppppppiVar27 - (int)ppppppiVar26);
          if (ppppppiVar18 < ppppppiVar28) {
            local_130 = (undefined **)ppppppiVar28;
            goto LAB_01809050;
          }
          local_3c = (int ******)((int)ppppppiVar26 + (int)ppppppiVar28);
          if ((uint)((int)ppppppiVar27 - (int)local_3c) < 2) {
            FUN_01283c9c(&local_40,2);
            ppppppiVar22 = local_40;
          }
          *(undefined2 *)((int)ppppppiVar22 + (int)local_3c) = 0x202c;
          ppppppiVar18 = (int ******)((int)local_38 - (int)local_3c);
          if (ppppppiVar18 < (int ******)0x2) {
            local_130 = (undefined **)0x2;
LAB_0180904c:
LAB_01809050:
            local_12c = ppppppiVar18;
                    /* WARNING: Subroutine does not return */
            FUN_01284540();
          }
          local_3c = (int ******)((int)local_3c + 2);
          if ((uint)((int)local_38 - (int)local_3c) < 7) {
            FUN_01283c9c(&local_40,7);
            *(undefined4 *)((int)local_40 + (int)local_3c) = 0x6e756863;
            *(undefined4 *)((int)local_40 + (int)local_3c + 3) = 0x64656b6e;
            ppppppiVar18 = (int ******)((int)local_38 - (int)local_3c);
            if (ppppppiVar18 < &DAT_00000007) {
              local_130 = (undefined **)&DAT_00000007;
              goto LAB_0180904c;
            }
          }
          else {
            *(undefined4 *)((int)local_40 + (int)local_3c) = 0x6e756863;
            *(undefined4 *)((int)local_40 + (int)local_3c + 3) = 0x64656b6e;
          }
          ppppppiVar22 = local_34;
          local_3c = (int ******)((int)local_3c + 7);
          if (((uint)local_34 & 1) == 0) {
            local_6c = local_34;
            ppppppiVar28 = (int ******)&DAT_01d2e520;
            local_74 = local_40;
            local_70 = local_3c;
          }
          else {
            local_54 = (int ******)((int)local_40 - ((uint)local_34 >> 5));
            local_58 = (int ******)((int)local_38 + ((uint)local_34 >> 5));
            local_50 = (int ******)((int)local_3c + ((uint)local_34 >> 5));
            FUN_01283524(&local_78,&local_58);
            ppppppiVar28 = local_78;
            local_2c[0] = (int ******)((uint)ppppppiVar22 >> 5);
            if (local_70 < local_2c[0]) {
              local_128 = (int ******)&local_80;
              local_80 = local_70;
              local_124 = (int ******)&LAB_01a6a304;
              local_12c = (int ******)&LAB_01a6a304;
              local_130 = (undefined **)local_2c;
                    /* WARNING: Subroutine does not return */
              FUN_012fb100(&DAT_005ac267,&local_130,&DAT_01d2e534);
            }
            local_70 = (int ******)((int)local_70 - (int)local_2c[0]);
            local_74 = (int ******)((int)local_74 + (int)local_2c[0]);
            bVar31 = local_78 == (int ******)0x0;
            local_78 = (int ******)0x0;
            if (bVar31) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01cf65f8);
            }
          }
          local_78 = (int ******)0x0;
          ppppppiVar22 = (int ******)0x0;
          while( true ) {
            local_130 = (undefined **)ppppppiVar28;
            local_12c = local_74;
            local_128 = local_70;
            local_124 = local_6c;
            if (local_70 == ppppppiVar22) break;
            bVar2 = *(byte *)((int)local_74 + (int)ppppppiVar22);
            ppppppiVar22 = (int ******)((int)ppppppiVar22 + 1);
            if ((bVar2 != 9) && (bVar2 < 0x20 || bVar2 == 0x7f)) {
              (*(code *)ppppppiVar28[4])(&local_124);
              if (local_78 != (int ******)0x0) {
                (*(code *)local_78[4])(&local_6c,local_74,local_70);
              }
                    /* WARNING: Subroutine does not return */
              FUN_013073dc("original header value plus ascii is valid",0x29,&local_78,&DAT_01d1c91c,
                           &DAT_01cf6910);
            }
          }
          local_58 = ppppppiVar28;
          local_54 = local_74;
          local_50 = local_70;
          ppppppiStack_4c = local_6c;
          (*(code *)(*pppppiVar20)[4])(pppppiVar20 + 3,pppppiVar20[1],pppppiVar20[2]);
          *pppppiVar20 = (int ****)local_130;
          pppppiVar20[1] = (int ****)local_12c;
          pppppiVar20[2] = (int ****)local_128;
          pppppiVar20[3] = (int ****)local_124;
          *(undefined1 *)(pppppiVar20 + 4) = 0;
        }
        local_12c = (int ******)0x0;
        local_130 = (undefined **)0x0;
        local_120 = (int *****)((uint)local_120 & 0xffffff00);
        if (local_c0 != (int ******)0x0 || local_bc != (int ******)0x0) {
          local_b0 = (int ******)0x0;
          local_ac = (int ******)&DAT_00000018;
          local_a8 = (int ******)0x0;
          local_a4 = (int ******)0x0;
          FUN_014304d0(&local_78,ppppppiVar4,&local_b0);
          if ((char)local_68 != '\x02') {
            (*(code *)local_78[4])(&local_6c,local_74,local_70);
          }
        }
      }
      else {
        local_78 = local_b0;
        local_74 = local_ac;
        local_70 = local_a8;
        local_6c = local_a4;
        local_68 = pppppiStack_a0;
        ppppppiStack_64 = ppppppiStack_9c;
        pppppiStack_60 = uStack_98;
        if (((uint)local_c0 & 1) == 0) {
          if (((uint)pppppiVar20 & 1) == 0) {
            pppppiVar23 = (int *****)0x2;
            bVar31 = true;
            ppppppiVar22 = ppppppiStack_9c;
            goto LAB_01808920;
          }
          if ((*(byte *)(ppppppiVar4 + 0x1b) < 8) &&
             ((1 << (uint)*(byte *)(ppppppiVar4 + 0x1b) & 0xa2U) != 0)) {
            ppppppiVar22 = (int ******)0x0;
            local_b4 = (int ******)0x0;
            goto LAB_01808194;
          }
          local_130 = (undefined **)local_b0;
          local_12c = local_ac;
          local_128 = local_a8;
          local_124 = local_a4;
          local_120 = pppppiStack_a0;
          local_11c = ppppppiStack_9c;
          local_118 = uStack_98;
          FUN_0142eaa0(&local_58);
          FUN_01430ae4(&local_b0,&local_58);
          pppppiVar23 = (int *****)0x0;
        }
        else {
          ppppppiVar22 = local_b8;
LAB_01808194:
          bVar31 = false;
          pppppiVar23 = (int *****)&DAT_00000001;
          ppppppiVar28 = local_b4;
LAB_01808920:
          if (local_ac != (int ******)0x0) {
            (*(code *)local_ac[4])(&local_68,local_a8,local_a4);
          }
          ppppppiStack_9c = ppppppiVar22;
          if (bVar31) {
            if (((uint)pppppiVar20 & 1) != 0) {
              FUN_0142eb14();
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x1809170);
              (*pcVar1)();
            }
            FUN_0142e90c(&local_130,ppppppiVar4,uVar5,uVar6);
            goto LAB_018079e0;
          }
        }
        local_120 = (int *****)((uint)local_120 & 0xffffff00);
        local_12c = (int ******)0x0;
        local_130 = (undefined **)pppppiVar23;
        local_128 = ppppppiStack_9c;
        local_124 = ppppppiVar28;
      }
    }
    else {
      local_78 = (int ******)0x0;
      local_74 = (int ******)&DAT_00000045;
      local_70 = (int ******)0x0;
      local_6c = (int ******)0x0;
      FUN_014304d0(&local_130,ppppppiVar4);
      if ((char)local_120 != '\x02') {
        (*(code *)local_130[4])(&local_124,local_12c,local_128);
        if ((DAT_01d50f88 == 0) &&
           (((DAT_01d4e90c - 1 < 2 ||
             ((DAT_01d4e90c != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4e904), cVar9 != '\0')))) &&
            (iVar10 = FUN_01aaa278(DAT_01d4e904), iVar10 != 0)))) {
          if (*(int ******)(DAT_01d4e904 + 0x20) == (int *****)0x0) {
LAB_01809148:
            puVar16 = &DAT_01cf4dd8;
            goto LAB_01809160;
          }
          local_128 = *(int *******)(DAT_01d4e904 + 0x24);
          local_74 = (int ******)&local_58;
          local_124 = *(int *******)(DAT_01d4e904 + 0x28);
          local_b0 = (int ******)&local_78;
          local_ac = (int ******)&DAT_00000001;
          local_120 = (int *****)0x0;
          local_70 = (int ******)&DAT_01d2ea4c;
          local_54 = (int ******)&DAT_00000053;
          local_58 = (int ******)&DAT_004780d8;
          local_130 = (undefined **)*(int ******)(DAT_01d4e904 + 0x1c);
          local_12c = (int ******)*(int ******)(DAT_01d4e904 + 0x20);
          local_a8 = (int ******)(DAT_01d4e904 + 0x1c);
          local_78 = (int ******)&local_130;
          FUN_0142e814(&local_b0);
        }
        else {
          iVar10 = DAT_01d4e904;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_3c = *(int *******)(DAT_01d4e904 + 0x14);
            local_38 = *(int *******)(DAT_01d4e904 + 0x18);
            local_40 = (int ******)&DAT_00000005;
            DataMemoryBarrier(0xb);
            ppppppiVar22 = DAT_01d4edc8;
            pcVar3 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              ppppppiVar22 = (int ******)&DAT_01cfc5e0;
              pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar13 = (*(code *)ppppppiVar22[3])(pcVar3);
            if (iVar13 != 0) {
              if (*(int ******)(DAT_01d4e904 + 0x20) == (int *****)0x0) goto LAB_01809148;
              local_ac = (int ******)&local_90;
              local_128 = *(int *******)(DAT_01d4e904 + 0x24);
              local_124 = *(int *******)(DAT_01d4e904 + 0x28);
              local_58 = (int ******)&local_b0;
              local_120 = (int *****)0x0;
              local_54 = (int ******)&DAT_00000001;
              local_8c = (int ******)&DAT_00000053;
              local_a8 = (int ******)&DAT_01d2ea4c;
              local_90 = (int ******)&DAT_004780d8;
              local_78 = local_40;
              local_74 = local_3c;
              local_70 = local_38;
              local_130 = (undefined **)*(int ******)(DAT_01d4e904 + 0x1c);
              local_12c = (int ******)*(int ******)(DAT_01d4e904 + 0x20);
              local_b0 = (int ******)&local_130;
              local_50 = (int ******)(DAT_01d4e904 + 0x1c);
              FUN_01aaa328(iVar10,pcVar3,ppppppiVar22[4],&local_78,&local_58);
            }
          }
        }
      }
      if (((uint)local_c0 & 1) != 0) {
        local_128 = local_b8;
        local_124 = local_b4;
        goto LAB_018079d0;
      }
      if (((uint)pppppiVar20 & 1) != 0) goto LAB_018079c4;
      FUN_0142e90c(&local_130,ppppppiVar4,uVar5,uVar6);
    }
  }
LAB_018079e0:
  ppppppiVar22 = (int ******)(param_2 + 0x2c);
  uVar15 = ((int)ppppppiVar4[0xd] + (int)ppppppiVar4[10]) * 0x1e + 0x1e;
  if ((uint)(param_2[0x2c] - param_2[0x2e]) < uVar15) {
    FUN_016092cc(ppppppiVar22,param_2[0x2e],uVar15,1,1);
  }
  pppppiVar20 = (int *****)&DAT_00477ddd;
  pppppiVar23 = (int *****)0x7;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(ppppppiVar4 + 0x1b)) {
  case 1:
    pppppiVar23 = (int *****)0x3;
    pppppiVar20 = (int *****)&DAT_00477de4;
    break;
  case 2:
    pppppiVar23 = (int *****)0x4;
    pppppiVar20 = (int *****)&DAT_0056e630;
    break;
  case 3:
    pppppiVar23 = (int *****)0x3;
    pppppiVar20 = (int *****)&DAT_00477de7;
    break;
  case 4:
    pppppiVar23 = (int *****)0x6;
    pppppiVar20 = (int *****)&DAT_00477dea;
    break;
  case 5:
    pppppiVar23 = (int *****)0x4;
    pppppiVar20 = (int *****)&DAT_0056efe0;
    break;
  case 6:
    pppppiVar23 = (int *****)0x5;
    pppppiVar20 = (int *****)&DAT_005319d2;
    break;
  case 7:
    pppppiVar20 = (int *****)&DAT_00477df0;
    break;
  case 8:
    pppppiVar23 = (int *****)0x5;
    pppppiVar20 = (int *****)&DAT_00477df7;
    break;
  case 9:
    pppppiVar23 = (int *****)(uint)*(byte *)(ppppppiVar4 + 0x1f);
    if ((int *****)0xf < pppppiVar23) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,pppppiVar23,0xf,&DAT_01cf4040);
    }
    pppppiVar20 = (int *****)((int)ppppppiVar4 + 0x6d);
    break;
  case 10:
    pppppiVar20 = ppppppiVar4[0x1c];
    pppppiVar23 = ppppppiVar4[0x1d];
  }
  FUN_01ac6cbc(ppppppiVar22,pppppiVar20,pppppiVar23);
  FUN_01ac6cbc(ppppppiVar22,&DAT_005319c3,1);
  local_74 = (int ******)FUN_01411f40;
  local_b0 = ppppppiVar22;
  local_78 = ppppppiVar4 + 0x10;
  FUN_012fa178(&local_b0,&DAT_01cf4ff0,&DAT_005b3d9f,&local_78);
  cVar9 = *(char *)(ppppppiVar4 + 0x21);
  if (cVar9 == '\x01') {
    puVar16 = &DAT_00570a88;
    goto LAB_018082ec;
  }
  if (cVar9 != '\x02') {
    if (cVar9 != '\x03') {
      local_b0 = (int ******)CONCAT31(local_b0._1_3_,cVar9);
      local_74 = (int ******)&LAB_01410f18;
      local_78 = (int ******)&local_b0;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0057aa1f,&local_78,&DAT_01cf5268);
    }
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d4e9a8 - 1 < 2 ||
         ((DAT_01d4e9a8 != 0 && (cVar9 = FUN_01aaafa8(&DAT_01d4e9a0), cVar9 != '\0')))))) &&
       (iVar10 = FUN_01aaa278(DAT_01d4e9a0), iVar10 != 0)) {
      if (*(int *******)(DAT_01d4e9a0 + 0x20) != (int ******)0x0) {
        local_3c = (int ******)&local_90;
        local_70 = *(int *******)(DAT_01d4e9a0 + 0x24);
        local_6c = *(int *******)(DAT_01d4e9a0 + 0x28);
        local_b8 = (int ******)(DAT_01d4e9a0 + 0x1c);
        local_78 = (int ******)*local_b8;
        local_c0 = (int ******)&local_40;
        local_bc = (int ******)&DAT_00000001;
        local_68 = (int *****)0x0;
        local_38 = (int ******)&DAT_01d2ea4c;
        local_8c = (int ******)&DAT_0000005d;
        local_90 = (int ******)&DAT_00478a59;
        local_74 = *(int *******)(DAT_01d4e9a0 + 0x20);
        local_40 = (int ******)&local_78;
        FUN_01aaaecc(DAT_01d4e9a0,&local_c0);
        iVar10 = DAT_01d4e9a0;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_54 = *(int *******)(DAT_01d4e9a0 + 0x14);
          local_50 = *(int *******)(DAT_01d4e9a0 + 0x18);
          local_58 = (int ******)&SUB_00000004;
          DataMemoryBarrier(0xb);
          ppppppiVar28 = DAT_01d4edc8;
          pcVar3 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            ppppppiVar28 = (int ******)&DAT_01cfc5e0;
            pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar13 = (*(code *)ppppppiVar28[3])(pcVar3,&local_58);
          if (iVar13 != 0) {
            local_b0 = local_58;
            local_ac = local_54;
            local_a8 = local_50;
            FUN_01aaa328(iVar10,pcVar3,ppppppiVar28[4],&local_b0,&local_c0);
          }
        }
        goto LAB_01808148;
      }
    }
    else {
      iVar10 = DAT_01d4e9a0;
      puVar16 = &DAT_00570c30;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_018082ec;
      local_bc = *(int *******)(DAT_01d4e9a0 + 0x14);
      local_b8 = *(int *******)(DAT_01d4e9a0 + 0x18);
      local_c0 = (int ******)&SUB_00000004;
      DataMemoryBarrier(0xb);
      ppppppiVar28 = DAT_01d4edc8;
      pcVar3 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        ppppppiVar28 = (int ******)&DAT_01cfc5e0;
        pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar13 = (*(code *)ppppppiVar28[3])(pcVar3);
      if (iVar13 == 0) goto LAB_018082ec;
      if (*(int *******)(DAT_01d4e9a0 + 0x20) != (int ******)0x0) {
        local_54 = (int ******)&local_90;
        local_70 = *(int *******)(DAT_01d4e9a0 + 0x24);
        local_40 = (int ******)&local_58;
        local_6c = *(int *******)(DAT_01d4e9a0 + 0x28);
        local_68 = (int *****)0x0;
        local_3c = (int ******)&DAT_00000001;
        local_50 = (int ******)&DAT_01d2ea4c;
        local_8c = (int ******)&DAT_0000005d;
        local_90 = (int ******)&DAT_00478a59;
        local_b0 = local_c0;
        local_ac = local_bc;
        local_a8 = local_b8;
        local_78 = *(int *******)(DAT_01d4e9a0 + 0x1c);
        local_74 = *(int *******)(DAT_01d4e9a0 + 0x20);
        local_58 = (int ******)&local_78;
        local_38 = (int ******)(DAT_01d4e9a0 + 0x1c);
        FUN_01aaa328(iVar10,pcVar3,ppppppiVar28[4],&local_b0,&local_40);
        goto LAB_018082ec;
      }
    }
    puVar16 = &DAT_01cf5258;
LAB_01809160:
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar16);
  }
LAB_01808148:
  puVar16 = &DAT_00570c30;
LAB_018082ec:
  FUN_01ac6cbc(ppppppiVar22,puVar16,8);
  FUN_01ac6cbc(ppppppiVar22,&DAT_00531047,2);
  pppppiVar20 = ppppppiVar4[0x20];
  ppppiVar17 = extraout_r1;
  if (pppppiVar20 != (int *****)0x0) {
    ppppiVar17 = pppppiVar20[3];
  }
  if (pppppiVar20 != (int *****)0x0 && ppppiVar17 != (int ****)0x0) {
    ppppiVar30 = *pppppiVar20;
    ppppiVar17 = pppppiVar20[1];
    uVar15 = (uint)ppppiVar17 & 0x43eba7e;
    local_178 = 0;
    while( true ) {
      uVar24 = *(uint *)((int)ppppiVar30 + uVar15);
      uVar29 = (uVar24 & 0x80808080 ^ 0x80808080) & (uVar24 ^ 0x2020202) + 0xfefefeff;
      while (uVar29 != 0) {
        uVar19 = uVar15 + ((uint)LZCOUNT(uVar29 << 0x18 | (uVar29 >> 8 & 0xff) << 0x10 |
                                         (uVar29 >> 0x10 & 0xff) << 8 | uVar29 >> 0x18) >> 3) &
                 (uint)ppppiVar17;
        ppppiVar25 = ppppiVar30 + uVar19 * -6 + -6;
        uVar29 = uVar29 - 1 & uVar29;
        if ((*ppppiVar25 == (int ***)0xb57ef088 && ppppiVar25[2] == (int ***)0x43eba7e) &&
            (ppppiVar25[1] == (int ***)0xb4a4199 && ppppiVar25[3] == (int ***)0x6f978c88)) {
          pppiVar21 = ppppiVar30[uVar19 * -6 + -2];
          (*(code *)ppppiVar30[uVar19 * -6 + -1][3])(&local_78,pppiVar21);
          if ((local_78 != (int ******)0xb57ef088 || local_70 != (int ******)0x43eba7e) ||
              (local_74 != (int ******)0xb4a4199 || local_6c != (int ******)0x6f978c88))
          goto LAB_01808324;
          FUN_0142eb5c(ppppppiVar4,pppiVar21,ppppppiVar22,local_138);
          goto LAB_01808614;
        }
      }
      if ((uVar24 & 0x80808080 & uVar24 << 1) != 0) break;
      local_178 = local_178 + 4;
      uVar15 = uVar15 + local_178 & (uint)ppppiVar17;
    }
  }
LAB_01808324:
  local_78 = (int ******)0x0;
  if (ppppppiVar4[10] == (int *****)0x0) {
    local_78 = (int ******)0x2;
  }
  if (local_138 == '\0') {
    local_6c = (int ******)0x0;
    local_70 = ppppppiVar4;
    while( true ) {
      uVar32 = FUN_0141117c(&local_78);
      iVar10 = (int)((ulonglong)uVar32 >> 0x20);
      if ((int)uVar32 == 0) break;
      uVar32 = FUN_00f80570();
      FUN_01ac6cbc(ppppppiVar22,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
      FUN_01ac6cbc(ppppppiVar22,0x5312dd,2);
      FUN_01ac6cbc(ppppppiVar22,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
      FUN_01ac6cbc(ppppppiVar22,&DAT_00531047,2);
    }
  }
  else {
    local_6c = (int ******)0x0;
    local_70 = ppppppiVar4;
    while( true ) {
      uVar32 = FUN_0141117c(&local_78);
      iVar10 = (int)((ulonglong)uVar32 >> 0x20);
      if ((int)uVar32 == 0) break;
      uVar32 = FUN_00f80570();
      FUN_0142f0d0(ppppppiVar22,(int)uVar32,(int)((ulonglong)uVar32 >> 0x20));
      FUN_01ac6cbc(ppppppiVar22,0x5312dd,2);
      FUN_01ac6cbc(ppppppiVar22,*(undefined4 *)(iVar10 + 4),*(undefined4 *)(iVar10 + 8));
      FUN_01ac6cbc(ppppppiVar22,&DAT_00531047,2);
    }
  }
LAB_01808614:
  FUN_01ac6cbc(ppppppiVar22,&DAT_00531047,2);
  iVar10 = (int)ppppppiVar4[10] + 1;
  ppppppiVar4[10] = (int *****)0x0;
  pppppiVar20 = ppppppiVar4[9];
  while (iVar10 = iVar10 + -1, iVar10 != 0) {
    FUN_0137bfa4(pppppiVar20);
    pppppiVar20 = pppppiVar20 + 0xd;
  }
  iVar10 = (int)ppppppiVar4[0xd] + 1;
  ppppppiVar4[0xd] = (int *****)0x0;
  pppppiVar20 = ppppppiVar4[0xc] + 4;
  while( true ) {
    ppppppiVar27 = local_11c;
    pppppiVar8 = local_120;
    ppppppiVar26 = local_124;
    ppppppiVar28 = local_128;
    ppppppiVar22 = local_12c;
    pppppiVar23 = (int *****)local_130;
    iVar10 = iVar10 + -1;
    if (iVar10 == 0) break;
    (*(code *)(*pppppiVar20)[4])(pppppiVar20 + 3,pppppiVar20[1],pppppiVar20[2]);
    pppppiVar20 = pppppiVar20 + 9;
  }
  pppppiVar20 = ppppppiVar4[6];
  pppppiVar14 = ppppppiVar4[7];
  *ppppppiVar4 = (int *****)0x0;
  ppppppiVar4[1] = (int *****)0x0;
  if (pppppiVar14 != (int *****)0x0) {
    pppppiVar11 = pppppiVar20;
    do {
      pppppiVar12 = pppppiVar11 + 1;
      *pppppiVar11 = (int ****)0xffff;
      pppppiVar11 = pppppiVar12;
    } while (pppppiVar12 != pppppiVar20 + (int)pppppiVar14);
  }
  FUN_0134c39c(&local_f0);
  FUN_01834abc(&local_f0);
  if (pppppiVar23 == (int *****)0x2 && ppppppiVar22 == (int ******)0x0) {
    if (param_2[0x25] != 0) {
      FUN_017cca78();
    }
    param_2[0x25] = (int)ppppppiVar28;
    param_2[0x18] = 5;
    param_2[0x19] = 0;
    *param_1 = 2;
    param_1[1] = 0;
    FUN_01809438(param_3 + 0x10);
    FUN_0142e6dc(param_3);
  }
  else {
    local_130 = (undefined **)*param_3;
    local_12c = (int ******)param_3[1];
    local_128 = (int ******)param_3[2];
    local_124 = (int ******)param_3[3];
    local_120 = param_3[4];
    local_11c = (int ******)param_3[5];
    local_118 = param_3[6];
    pppppiStack_114 = param_3[7];
    pppppiStack_110 = param_3[8];
    pppppiStack_10c = param_3[9];
    local_108 = param_3[10];
    pppppiStack_104 = param_3[0xb];
    pppppiStack_100 = param_3[0xc];
    pppppiStack_fc = param_3[0xd];
    pppppiStack_f8 = param_3[0xe];
    pppppiStack_f4 = param_3[0xf];
    if (*param_2 != 3 || param_2[1] != 0) {
      FUN_0142e6dc(param_2);
    }
    *param_2 = (int)local_130;
    param_2[1] = (int)local_12c;
    param_2[2] = (int)local_128;
    param_2[3] = (int)local_124;
    param_2[4] = (int)local_120;
    param_2[5] = (int)local_11c;
    param_2[6] = (int)local_118;
    param_2[7] = (int)pppppiStack_114;
    param_2[8] = (int)pppppiStack_110;
    param_2[9] = (int)pppppiStack_10c;
    param_2[10] = (int)local_108;
    param_2[0xb] = (int)pppppiStack_104;
    param_2[0xc] = (int)pppppiStack_100;
    param_2[0xd] = (int)pppppiStack_fc;
    param_2[0xe] = (int)pppppiStack_f8;
    param_2[0xf] = (int)pppppiStack_f4;
    *param_1 = pppppiVar23;
    param_1[1] = ppppppiVar22;
    param_1[2] = ppppppiVar28;
    param_1[3] = ppppppiVar26;
    param_1[4] = pppppiVar8;
    param_1[5] = ppppppiVar27;
    FUN_01809438(param_3 + 0x10);
  }
  FUN_0178e884(param_3[0x20]);
  return;
}

