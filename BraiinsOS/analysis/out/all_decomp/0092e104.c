// FUN_0092e104 @ 0092e104 size=4960 calls_out=30 calls_in=1
// strings: LoadBalanceStrategyQuotaFixedShareRatiovariant index 0 <= i < 25variant index 0 <= i < 8 | can only flatten structs and maps | SetGloba | SetGloba | lDefaultError | lDefaultError

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0092e104(undefined4 *param_1,uint *param_2,uint *******param_3)

{
  undefined *puVar1;
  byte bVar2;
  longlong lVar3;
  char cVar4;
  undefined1 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  byte *pbVar8;
  uint *******pppppppuVar9;
  int iVar10;
  uint *******pppppppuVar11;
  undefined4 uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  uint *******extraout_r2;
  uint *******extraout_r2_00;
  uint *******extraout_r2_01;
  uint *******extraout_r2_02;
  uint *******pppppppuVar16;
  uint ******ppppppuVar17;
  uint *******pppppppuVar18;
  int iVar19;
  char *pcVar20;
  uint *puVar21;
  uint *puVar22;
  uint ******ppppppuVar23;
  uint ******ppppppuVar24;
  uint *******pppppppuVar25;
  uint *******pppppppuVar26;
  uint *******unaff_r11;
  uint *******pppppppuVar27;
  bool bVar28;
  bool bVar29;
  uint in_fpscr;
  uint *******local_19c;
  uint *******local_198;
  uint *******local_194;
  uint *******local_190;
  uint *******local_18c;
  uint *******local_174;
  uint *******local_170;
  uint *******local_164;
  uint *******local_160;
  uint *******local_15c;
  uint *******local_158;
  uint *******pppppppuStack_154;
  uint *******pppppppuStack_150;
  uint *******local_148;
  uint *******local_144;
  undefined4 local_140;
  uint *******local_13c;
  undefined8 local_138;
  uint *******local_130;
  uint *******local_12c;
  int local_128;
  uint local_124;
  undefined4 local_120;
  undefined4 local_11c;
  uint ******local_118;
  undefined4 local_114;
  uint *******local_110;
  uint *******local_10c;
  uint *******local_108;
  uint *******pppppppuStack_104;
  uint *******local_100;
  float fStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  uint *******local_f0;
  uint *******local_ec;
  uint *******local_e8;
  uint *******local_e4;
  uint *******local_e0;
  float local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  uint *******local_d0;
  uint *******local_cc;
  uint *******pppppppuStack_c8;
  uint *******pppppppuStack_c4;
  undefined4 uStack_c0;
  undefined2 uStack_bc;
  undefined1 uStack_ba;
  int local_b8;
  uint local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint *******local_a8;
  uint *******local_a4;
  uint *******pppppppuStack_a0;
  uint *******pppppppuStack_9c;
  undefined4 uStack_98;
  undefined2 local_94;
  undefined1 local_92;
  uint *******local_90;
  float local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  uint *******local_80;
  float fStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint *******local_70;
  uint *******local_6c;
  undefined8 local_68;
  uint *******local_60;
  uint *******local_5c;
  uint *******local_58;
  uint *******local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint *******local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined2 uStack_2c;
  undefined1 uStack_2a;
  undefined1 uStack_25;
  
  iVar19 = (int)param_3 * 8;
  pppppppuVar25 = (uint *******)0x0;
  pppppppuVar16 = (uint *******)&DAT_00000008;
  local_15c = (uint *******)0x0;
  puVar6 = (undefined4 *)((uint)&local_110 | 4);
  local_164 = (uint *******)0x0;
  local_160 = (uint *******)&DAT_00000008;
  local_174 = (uint *******)&DAT_80000000;
  puVar22 = param_2;
LAB_0092e178:
  do {
    puVar21 = puVar22;
    if (puVar21 == param_2 + iVar19) goto LAB_0092e6e4;
    puVar22 = puVar21 + 8;
    uVar7 = *puVar21;
    if (uVar7 != 0x80000015) {
      uVar13 = 0x15;
      if ((int)uVar7 < 0) {
        uVar13 = uVar7 ^ 0x80000000;
      }
      switch(uVar13) {
      case 1:
        local_68._0_5_ = CONCAT14((char)puVar21[1],0x80000001);
        break;
      default:
        FUN_008f7820(&local_70,puVar21,&uStack_25,&DAT_01867278);
        if (local_70 == (uint *******)&SUB_00000002) {
          pppppppuVar9 = (uint *******)local_68;
          goto LAB_0092e454;
        }
        local_158 = local_68._4_4_;
        pppppppuStack_154 = local_60;
        pppppppuStack_150 = local_5c;
        param_1[6] = local_58;
        param_1[7] = local_54;
        param_1[8] = local_50;
        param_1[9] = local_4c;
        param_1[10] = local_48;
        param_1[0xb] = uStack_44;
        *param_1 = local_70;
        param_1[1] = local_6c;
        param_1[2] = (uint *******)local_68;
        param_1[3] = local_68._4_4_;
        param_1[4] = local_60;
        param_1[5] = local_5c;
        local_148 = local_158;
        local_144 = pppppppuStack_154;
        local_140 = pppppppuStack_150;
        goto LAB_0092eac0;
      case 4:
        local_60 = (uint *******)puVar21[2];
        local_5c = (uint *******)puVar21[3];
        local_68 = CONCAT44(local_68._4_4_,&DAT_80000004);
        break;
      case 0xc:
        pppppppuVar18 = (uint *******)puVar21[3];
        piVar15 = (int *)puVar21[2];
        if (pppppppuVar18 == (uint *******)&DAT_00000004) {
          if (*piVar15 == 0x656d616e) {
            local_68 = CONCAT44(local_68._4_4_,0x80000015);
            lVar3 = local_68;
            local_68._0_4_ = (uint *******)0x80000015;
            pppppppuVar9 = (uint *******)local_68;
            local_68 = lVar3;
            goto LAB_0092e454;
          }
          pppppppuVar9 = (uint *******)&DAT_00000004;
          pppppppuVar11 = (uint *******)thunk_FUN_016d4a50(4);
          if (pppppppuVar11 == (uint *******)0x0) {
            uVar12 = 1;
            goto LAB_0092f520;
          }
          local_194 = (uint *******)&DAT_00000004;
        }
        else {
          uVar12 = 0;
          pppppppuVar9 = local_198;
          if ((int)pppppppuVar18 < 0) goto LAB_0092f520;
          if (pppppppuVar18 == (uint *******)0x0) {
            local_194 = (uint *******)0x0;
            pppppppuVar11 = (uint *******)&DAT_00000001;
          }
          else {
            pppppppuVar11 = (uint *******)thunk_FUN_016d4a50(pppppppuVar18);
            if (pppppppuVar11 == (uint *******)0x0) goto LAB_0092f510;
            local_194 = pppppppuVar18;
          }
        }
        FUN_016dd1aa(pppppppuVar11,piVar15,pppppppuVar18);
        pppppppuVar9 = (uint *******)&DAT_8000000c;
        local_198 = pppppppuVar11;
        local_5c = pppppppuVar18;
        goto LAB_0092e438;
      case 0xd:
        if (((uint *******)puVar21[2] == (uint *******)&DAT_00000004) &&
           (*(int *)puVar21[1] == 0x656d616e)) {
          local_68 = CONCAT44(local_68._4_4_,0x80000015);
        }
        else {
          local_68 = CONCAT44((int *)puVar21[1],&DAT_8000000d);
          local_60 = (uint *******)puVar21[2];
        }
        break;
      case 0xe:
        pppppppuVar18 = (uint *******)puVar21[3];
        pcVar20 = (char *)puVar21[2];
        if (pppppppuVar18 == (uint *******)&DAT_00000004) {
          cVar4 = *pcVar20;
          bVar28 = cVar4 == 'n';
          if (bVar28) {
            cVar4 = pcVar20[1];
          }
          if (bVar28 && cVar4 == 'a') {
            cVar4 = pcVar20[2];
            bVar28 = cVar4 == 'm';
            if (bVar28) {
              cVar4 = pcVar20[3];
            }
            if (bVar28 && cVar4 == 'e') {
              local_68 = CONCAT44(local_68._4_4_,0x80000015);
              lVar3 = local_68;
              local_68._0_4_ = (uint *******)0x80000015;
              pppppppuVar9 = (uint *******)local_68;
              local_68 = lVar3;
              goto LAB_0092e454;
            }
          }
LAB_0092e2ac:
          pppppppuVar11 = (uint *******)thunk_FUN_016d4a50(pppppppuVar18);
          if (pppppppuVar11 == (uint *******)0x0) {
LAB_0092f510:
            uVar12 = 1;
            pppppppuVar9 = pppppppuVar18;
LAB_0092f520:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar12,pppppppuVar9);
          }
          local_194 = pppppppuVar18;
        }
        else {
          uVar12 = 0;
          pppppppuVar9 = local_19c;
          if ((int)pppppppuVar18 < 0) goto LAB_0092f520;
          if (pppppppuVar18 != (uint *******)0x0) goto LAB_0092e2ac;
          local_194 = (uint *******)0x0;
          pppppppuVar11 = (uint *******)&DAT_00000001;
        }
        FUN_016dd1aa(pppppppuVar11,pcVar20,pppppppuVar18);
        pppppppuVar9 = (uint *******)0x8000000e;
        local_19c = pppppppuVar11;
        local_5c = pppppppuVar18;
LAB_0092e438:
        local_68 = CONCAT44(local_194,pppppppuVar9);
        local_60 = pppppppuVar11;
        goto LAB_0092e454;
      case 0xf:
        pbVar8 = (byte *)puVar21[1];
        bVar28 = (uint *******)puVar21[2] == (uint *******)&DAT_00000004;
        if (bVar28) {
          param_3 = (uint *******)(uint)*pbVar8;
        }
        bVar29 = bVar28 && param_3 == (uint *******)0x6e;
        if (bVar28 && param_3 == (uint *******)0x6e) {
          bVar29 = pbVar8[1] == 0x61;
        }
        if (((bVar29) && (pbVar8[2] == 0x6d)) && (pbVar8[3] == 0x65)) {
          local_68 = CONCAT44(local_68._4_4_,0x80000015);
        }
        else {
          local_68 = CONCAT44(pbVar8,0x8000000f);
          local_60 = (uint *******)puVar21[2];
        }
      }
      pppppppuVar9 = (uint *******)local_68;
LAB_0092e454:
      local_158 = local_68._4_4_;
      pppppppuStack_154 = local_60;
      pppppppuStack_150 = local_5c;
      if (pppppppuVar9 != (uint *******)0x80000015) {
        if (pppppppuVar9 == (uint *******)0x80000016) goto LAB_0092e6e4;
        *puVar6 = local_68._4_4_;
        puVar6[1] = local_60;
        puVar6[2] = local_5c;
        local_110 = pppppppuVar9;
        FUN_015791cc(&local_68);
        local_54 = local_5c;
        local_58 = local_60;
        pppppppuVar18 = (uint *******)local_68;
        local_ec = (uint *******)local_68;
        local_e8 = local_68._4_4_;
        local_e4 = local_60;
        local_e0 = local_5c;
        local_138 = CONCAT44(local_138._4_4_,(uint *******)local_68);
        local_130 = local_60;
        local_12c = local_5c;
        local_148 = local_110;
        local_144 = local_10c;
        local_140 = local_108;
        local_13c = pppppppuStack_104;
        local_70 = local_110;
        local_6c = local_10c;
        local_68 = CONCAT44(pppppppuStack_104,local_108);
        local_60 = pppppppuVar18;
        local_5c = local_138._4_4_;
        if (pppppppuVar25 == local_164) {
          FUN_009f4b90(&local_164);
          pppppppuVar16 = local_160;
        }
        pppppppuVar18 = pppppppuVar16 + (int)pppppppuVar25 * 8;
        pppppppuVar25 = (uint *******)((int)pppppppuVar25 + 1);
        *pppppppuVar18 = (uint ******)local_70;
        pppppppuVar18[1] = (uint ******)local_6c;
        pppppppuVar18[2] = (uint ******)(uint *******)local_68;
        pppppppuVar18[3] = (uint ******)local_68._4_4_;
        pppppppuVar18[4] = (uint ******)local_60;
        pppppppuVar18[5] = (uint ******)local_5c;
        pppppppuVar18[6] = (uint ******)local_58;
        pppppppuVar18[7] = (uint ******)local_54;
        param_3 = local_5c;
        local_15c = pppppppuVar25;
        goto LAB_0092e178;
      }
      if (local_174 != (uint *******)&DAT_80000000) {
        FUN_009244cc(&local_70,&DAT_00568d68,4);
        *param_1 = local_70;
        param_1[1] = local_6c;
        param_1[2] = (uint *******)local_68;
        param_1[3] = local_68._4_4_;
        param_1[4] = local_60;
        param_1[5] = local_5c;
        param_1[6] = local_58;
        param_1[7] = local_54;
        param_1[8] = local_50;
        param_1[9] = local_4c;
        param_1[10] = local_48;
        param_1[0xb] = uStack_44;
        goto LAB_0092eac0;
      }
      uVar7 = puVar21[4];
      uVar13 = 0x15;
      if ((int)uVar7 < 0) {
        uVar13 = uVar7 ^ 0x80000000;
      }
      iVar14 = 0x14;
      iVar10 = 0x18;
      switch(uVar13) {
      case 0xc:
        unaff_r11 = (uint *******)puVar21[7];
        uVar12 = 0;
        pppppppuVar18 = local_18c;
        if ((int)unaff_r11 < 0) goto LAB_0092f504;
        uVar7 = puVar21[6];
        if (unaff_r11 == (uint *******)0x0) {
          local_174 = (uint *******)0x0;
          local_170 = (uint *******)&DAT_00000001;
        }
        else {
          local_170 = (uint *******)thunk_FUN_016d4a50(unaff_r11,local_18c);
          pppppppuVar18 = unaff_r11;
          if (local_170 == (uint *******)0x0) {
LAB_0092f4fc:
            uVar12 = 1;
LAB_0092f504:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar12,pppppppuVar18);
          }
          local_174 = unaff_r11;
        }
        FUN_016dd1aa(local_170,uVar7,unaff_r11);
        param_3 = extraout_r2_00;
        local_18c = local_170;
        break;
      case 0xd:
        unaff_r11 = (uint *******)puVar21[6];
        uVar12 = 0;
        pppppppuVar18 = local_190;
        if ((int)unaff_r11 < 0) goto LAB_0092f504;
        uVar7 = puVar21[5];
        if (unaff_r11 == (uint *******)0x0) {
          local_170 = (uint *******)&DAT_00000001;
          local_174 = (uint *******)0x0;
        }
        else {
          local_170 = (uint *******)thunk_FUN_016d4a50(unaff_r11,local_190);
          pppppppuVar18 = unaff_r11;
          if (local_170 == (uint *******)0x0) goto LAB_0092f4fc;
          local_174 = unaff_r11;
        }
        FUN_016dd1aa(local_170,uVar7,unaff_r11);
        param_3 = extraout_r2_01;
        local_190 = local_170;
        break;
      case 0xe:
        iVar10 = 0x1c;
        iVar14 = 0x18;
      case 0xf:
        FUN_009270b8(&local_70,*(undefined4 *)((int)puVar21 + iVar14),
                     *(undefined4 *)((int)puVar21 + iVar10));
        param_3 = extraout_r2;
LAB_0092e50c:
        if (local_70 != (uint *******)&SUB_00000002) {
          param_1[4] = local_60;
          param_1[5] = local_5c;
          param_1[6] = local_58;
          param_1[7] = local_54;
          param_1[8] = local_50;
          param_1[9] = local_4c;
          param_1[10] = local_48;
          param_1[0xb] = uStack_44;
          local_174 = (uint *******)0x0;
          *param_1 = local_70;
          param_1[1] = local_6c;
          param_1[2] = (uint *******)local_68;
          param_1[3] = local_68._4_4_;
          goto LAB_0092eac0;
        }
        local_170 = (uint *******)local_68;
        local_174 = local_6c;
        unaff_r11 = local_68._4_4_;
        goto LAB_0092e178;
      default:
        FUN_008f7820(&local_70,puVar21 + 4,&uStack_25,&DAT_01867c28);
        param_3 = extraout_r2_02;
        goto LAB_0092e50c;
      }
      local_68 = CONCAT44(unaff_r11,local_170);
      local_6c = local_174;
      local_70 = (uint *******)&SUB_00000002;
    }
  } while( true );
code_r0x0092e79c:
  pppppppuVar16 = pppppppuVar16 + 8;
  iVar19 = iVar19 + -0x20;
  if (iVar19 == 0) goto LAB_0092e7a8;
  goto LAB_0092e77c;
code_r0x0092ecb0:
  iVar19 = iVar19 + -0x20;
  pppppppuVar25 = local_ec;
  if (iVar19 == 0) goto code_r0x0092ecbc;
  goto LAB_0092eca4;
code_r0x0092ecbc:
  local_ec = local_e4;
  goto LAB_0092ecc0;
LAB_0092e6e4:
  pppppppuVar9 = local_174;
  pppppppuVar18 = local_170;
  if (local_174 == (uint *******)&DAT_80000000) {
    FUN_009243d8(&local_70,&DAT_00568d68,4);
    if (local_70 != (uint *******)&SUB_00000002) {
      param_1[4] = local_60;
      param_1[5] = local_5c;
      param_1[6] = local_58;
      param_1[7] = local_54;
      param_1[8] = local_50;
      param_1[9] = local_4c;
      param_1[10] = local_48;
      param_1[0xb] = uStack_44;
      local_174 = (uint *******)0x0;
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = (uint *******)local_68;
      param_1[3] = local_68._4_4_;
LAB_0092eac0:
      FUN_00953170(pppppppuVar16,pppppppuVar25);
      bVar28 = true;
      pppppppuVar18 = pppppppuVar16;
      pppppppuVar9 = local_164;
joined_r0x0092ead8:
      if (pppppppuVar9 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar18);
      }
      if (bVar28 && ((uint)local_174 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_170);
        return;
      }
      return;
    }
    pppppppuVar9 = local_6c;
    pppppppuVar18 = (uint *******)local_68;
    unaff_r11 = local_68._4_4_;
  }
  bVar28 = local_174 == (uint *******)&DAT_80000000;
  local_114 = 0x13;
  local_118 = (uint ******)0x358f85;
  pppppppuVar11 = pppppppuVar18;
  if (pppppppuVar25 != (uint *******)0x0) {
    iVar19 = (int)pppppppuVar25 << 5;
LAB_0092e77c:
    FUN_01578f04(&local_110,pppppppuVar16,&DAT_01867fb8,2);
    pppppppuVar26 = local_108;
    pppppppuVar27 = local_10c;
    if (local_110 == (uint *******)0x80000015) goto code_r0x0092e79c;
    local_f0 = local_110;
    local_ec = local_10c;
    local_e8 = local_108;
    local_e4 = pppppppuStack_104;
    local_e0 = local_100;
    local_dc = fStack_fc;
    local_d8 = local_f8;
    local_80 = local_100;
    fStack_7c = fStack_fc;
    uStack_78 = local_f8;
    uStack_74 = local_f4;
    uVar7 = 0x15;
    local_d4 = local_f4;
    if ((int)local_110 < 0) {
      uVar7 = (uint)local_110 ^ 0x80000000;
    }
    switch(uVar7) {
    case 1:
      pppppppuVar16 = (uint *******)((uint)local_10c & 0xff);
      if (pppppppuVar16 == (uint *******)0x0) {
LAB_0092ee4c:
        uVar5 = 0;
      }
      else {
        if (pppppppuVar16 != (uint *******)&DAT_00000001) {
          uStack_34 = (uint *******)0x0;
          local_40 = (uint *******)CONCAT31(local_40._1_3_,1);
          local_38 = pppppppuVar16;
          FUN_00924358(&local_70,&local_40,&DAT_0187d078,&DAT_018ab990);
          break;
        }
LAB_0092efc4:
        uVar5 = 1;
      }
      local_70 = (uint *******)&SUB_00000002;
      local_6c = (uint *******)CONCAT31(local_6c._1_3_,uVar5);
      break;
    default:
      FUN_008f73e8(&local_70,&local_f0,&uStack_25,&DAT_01867138);
      goto LAB_0092f024;
    case 4:
      if (local_108 == (uint *******)0x0 && pppppppuStack_104 == (uint *******)0x0)
      goto LAB_0092ee4c;
      if (local_108 == (uint *******)&DAT_00000001 && pppppppuStack_104 == (uint *******)0x0)
      goto LAB_0092efc4;
      local_38 = local_108;
      local_40 = (uint *******)CONCAT31(local_40._1_3_,1);
      uStack_34 = pppppppuStack_104;
      FUN_00924358(&local_70,&local_40,&DAT_0187d078,&DAT_018ab990);
      break;
    case 0xc:
      if (pppppppuStack_104 == (uint *******)&DAT_00000005) {
        iVar19 = thunk_FUN_016dd50a(local_108,"quota",5);
        uVar5 = 0;
LAB_0092f000:
        if (iVar19 == 0) {
          local_6c = (uint *******)CONCAT31(local_6c._1_3_,uVar5);
          local_70 = (uint *******)&SUB_00000002;
          goto joined_r0x0092edf8;
        }
      }
      else if (pppppppuStack_104 == (uint *******)&DAT_00000011) {
        iVar19 = thunk_FUN_016dd50a(local_108,"fixed_share_ratio",0x11);
        uVar5 = 1;
        goto LAB_0092f000;
      }
      FUN_00924538(&local_70,pppppppuVar26,pppppppuStack_104,&DAT_01867fb8,2);
      goto joined_r0x0092edf8;
    case 0xd:
      if (local_108 == (uint *******)&DAT_00000005) {
        iVar19 = thunk_FUN_016dd50a(local_10c,"quota",5);
        if (iVar19 == 0) goto LAB_0092ee4c;
      }
      else if ((local_108 == (uint *******)&DAT_00000011) &&
              (iVar19 = thunk_FUN_016dd50a(local_10c,"fixed_share_ratio",0x11), iVar19 == 0))
      goto LAB_0092efc4;
      FUN_00924538(&local_70,pppppppuVar27,pppppppuVar26,&DAT_01867fb8,2);
      break;
    case 0xe:
      FUN_0093a65c(&local_70,local_108,pppppppuStack_104);
joined_r0x0092edf8:
      if (pppppppuVar27 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar26);
      }
      goto LAB_0092f024;
    case 0xf:
      FUN_0093a65c(&local_70,local_10c,local_108);
    }
    FUN_008f7448(&local_f0);
LAB_0092f024:
    pppppppuVar26 = local_6c;
    pppppppuVar27 = local_70;
    pppppppuVar16 = local_e0;
    if (local_70 == (uint *******)&SUB_00000002) {
      local_3c._3_1_ = SUB41(local_e0,0);
      local_38._0_3_ = (undefined3)((uint)local_e0 >> 8);
      local_38._3_1_ = SUB41(local_dc,0);
      uStack_34._0_3_ = (undefined3)((uint)local_dc >> 8);
      uStack_34._3_1_ = (undefined1)local_d8;
      uStack_30._0_3_ = (undefined3)((uint)local_d8 >> 8);
      uStack_30._3_1_ = (undefined1)local_d4;
      uStack_2c = (undefined2)((uint)local_d4 >> 8);
      uStack_2a = (undefined1)((uint)local_d4 >> 0x18);
      local_a8 = local_40;
      local_a4 = local_3c;
      pppppppuStack_a0 = local_38;
      pppppppuStack_9c = uStack_34;
      uStack_98 = uStack_30;
      local_94 = uStack_2c;
      local_92 = uStack_2a;
      local_d0 = local_40;
      local_cc = local_3c;
      pppppppuStack_c8 = local_38;
      pppppppuStack_c4 = uStack_34;
      uStack_c0 = uStack_30;
      uStack_bc = uStack_2c;
      uStack_ba = uStack_2a;
      local_90 = local_e0;
      local_88 = local_d8;
      uStack_84 = local_d4;
      local_8c = local_dc;
      if ((char)local_6c == '\0') {
        if (local_e0 == (uint *******)0x80000015) {
          local_40 = (uint *******)CONCAT31(local_40._1_3_,0xd);
          FUN_00f3ce3c(&local_70,&local_40,&DAT_01878148,&DAT_018ab990);
        }
        else {
          FUN_008f7be0(&local_70,&local_90);
        }
        if (local_70 != (uint *******)&SUB_00000002) goto LAB_0092f334;
        local_13c = local_6c;
        local_140 = (uint *******)0x0;
        local_148 = (uint *******)&SUB_00000002;
        pppppppuVar26 = pppppppuVar25;
      }
      else {
        if (local_e0 == (uint *******)0x80000015) {
          local_40 = (uint *******)CONCAT31(local_40._1_3_,0xd);
          FUN_00f3ce3c(&local_70,&local_40,&DAT_01878148,&DAT_018ab990);
          goto LAB_0092f30c;
        }
        uVar7 = 0x15;
        if ((int)local_e0 < 0) {
          uVar7 = (uint)local_e0 ^ 0x80000000;
        }
        local_8c._0_2_ = SUB42(local_dc,0);
        switch(uVar7) {
        case 1:
          uVar7 = (uint)local_dc & 0xff;
          goto LAB_0092f298;
        case 2:
          uVar7 = (uint)local_dc & 0xffff;
LAB_0092f298:
          local_68 = VectorUnsignedToFloat(uVar7,(byte)(in_fpscr >> 0x16) & 3);
          break;
        case 3:
          local_68 = VectorUnsignedToFloat(local_dc,(byte)(in_fpscr >> 0x16) & 3);
          break;
        case 4:
          local_68 = FUN_01845f30(local_d8,local_d4);
          break;
        case 5:
          iVar19 = (int)local_38._3_1_;
          goto LAB_0092f2ac;
        case 6:
          iVar19 = (int)local_8c._0_2_;
LAB_0092f2ac:
          local_68 = VectorSignedToFloat(iVar19,(byte)(in_fpscr >> 0x16) & 3);
          break;
        case 7:
          local_68 = VectorSignedToFloat(local_dc,(byte)(in_fpscr >> 0x16) & 3);
          break;
        case 8:
          local_68 = FUN_01845d5c(local_d8,local_d4);
          break;
        case 9:
          uVar7 = 0xbff00000;
          if ((uint)local_dc < 0x80000000) {
            uVar7 = 0;
          }
          local_68 = ((ulonglong)
                      ((uint)((ulonglong)(double)local_dc >> 0x20) & 0x7fffffff | uVar7 & 0x80000000
                      ) << 0x20) + ((ulonglong)(double)local_dc & 0xffffffff);
          break;
        case 10:
          local_68 = CONCAT44(local_d4,local_d8);
          break;
        default:
          FUN_008f73e8(&local_70,&local_90,&uStack_25,&DAT_018673a8);
          goto LAB_0092f30c;
        }
        local_70 = (uint *******)&SUB_00000002;
        FUN_008f7448(&local_90);
LAB_0092f30c:
        if (local_70 == (uint *******)&SUB_00000002) {
          local_140 = (uint *******)&DAT_00000001;
          local_148 = (uint *******)&SUB_00000002;
          local_138 = local_68;
          pppppppuVar26 = pppppppuVar25;
        }
        else {
LAB_0092f334:
          local_148 = local_70;
          local_144 = local_6c;
          local_140 = (uint *******)local_68;
          local_13c = local_68._4_4_;
          local_138 = CONCAT44(local_5c,local_60);
          local_130 = local_58;
          local_12c = local_54;
          local_128 = local_50;
          local_124 = local_4c;
          local_120 = local_48;
          local_11c = uStack_44;
          pppppppuVar26 = pppppppuVar25;
        }
      }
    }
    else {
      bVar2 = (byte)local_68;
      pppppppuVar11 = (uint *******)(uint)(byte)local_68;
      FUN_016dd1aa(&local_a8,(int)&local_68 + 1,0x17);
      local_b8 = local_50;
      local_b4 = local_4c;
      local_b0 = local_48;
      local_ac = uStack_44;
      if (pppppppuVar16 != (uint *******)0x80000015) {
        FUN_008f7448(&local_e0);
      }
      local_d0 = local_a8;
      local_cc = local_a4;
      pppppppuStack_c8 = pppppppuStack_a0;
      pppppppuStack_c4 = pppppppuStack_9c;
      uStack_c0 = uStack_98;
      uStack_bc = local_94;
      uStack_ba = local_92;
      local_128 = local_b8;
      local_124 = local_b4;
      local_120 = local_b0;
      local_11c = local_ac;
      FUN_016dd1aa((int)&local_140 + 1,&local_d0,0x17);
      local_140 = (uint *******)CONCAT31(local_140._1_3_,bVar2);
      local_144 = pppppppuVar26;
      local_148 = pppppppuVar27;
    }
    goto LAB_0092e7d4;
  }
LAB_0092e7a8:
  local_70 = &local_118;
  local_6c = (uint *******)&DAT_0157d360;
  FUN_00927010(&local_148,&DAT_00584da0,&local_70);
  pppppppuVar26 = pppppppuVar25;
  pppppppuVar27 = unaff_r11;
LAB_0092e7d4:
  if (local_148 == (uint *******)&SUB_00000002) {
    if (local_140 == (uint *******)0x3) {
      pppppppuVar11 = (uint *******)thunk_FUN_016d4a50(0x21);
      if (pppppppuVar11 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x21);
      }
      FUN_016dd1aa(pppppppuVar11,"can only flatten structs and maps",0x21);
      local_4c = 0x80000000;
      local_50 = 0;
      local_54 = (uint *******)&DAT_00000004;
      local_58 = (uint *******)0x0;
      local_5c = (uint *******)&DAT_00000021;
      local_68 = CONCAT44(0x21,(uint *******)local_68);
      local_70 = (uint *******)0x0;
      local_60 = pppppppuVar11;
      if ((DAT_018d9130 < 4) && (DAT_018d97e8 != '\0')) {
        if (DAT_018d97e8 == '\x01') {
LAB_0092e8ac:
          DataMemoryBarrier(0xb);
          pcVar20 = s_SetGloba_00414c05;
          puVar1 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar20 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar20 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar19 = (**(code **)(puVar1 + 0x14))(pcVar20,DAT_018d97e0);
          if (iVar19 == 0) goto LAB_0092ebf0;
        }
        else if (DAT_018d97e8 != '\x02') {
          cVar4 = FUN_0169ac90(&DAT_018d97e0);
          if (cVar4 == '\0') goto LAB_0092ebf0;
          if (cVar4 != '\x02') goto LAB_0092e8ac;
        }
        if (*(int *)(DAT_018d97e0 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01867d00);
        }
        local_ec = *(uint ********)(DAT_018d97e0 + 0x20);
        local_e8 = *(uint ********)(DAT_018d97e0 + 0x24);
        local_e4 = *(uint ********)(DAT_018d97e0 + 0x28);
        local_110 = (uint *******)&local_f0;
        local_10c = (uint *******)&local_d0;
        local_cc = (uint *******)&local_a8;
        local_38 = (uint *******)(DAT_018d97e0 + 0x1c);
        local_f0 = (uint *******)*local_38;
        local_a8 = (uint *******)&local_70;
        local_40 = (uint *******)&local_110;
        local_e0 = (uint *******)0x0;
        local_108 = (uint *******)&DAT_018abb78;
        local_d0 = (uint *******)&DAT_005713b3;
        local_a4 = (uint *******)FUN_0168c724;
        local_3c = (uint *******)&DAT_00000001;
        local_144 = (uint *******)0x0;
        local_148 = (uint *******)&DAT_00000001;
        local_138 = CONCAT44(DAT_018d97e0,&local_40);
        DataMemoryBarrier(0xb);
        pcVar20 = s_SetGloba_00414c05;
        puVar1 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar20 = DAT_018daa74, puVar1 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar20 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        iVar19 = (**(code **)(puVar1 + 0x28))(pcVar20,&local_148);
        if (iVar19 != 0) {
          (**(code **)(puVar1 + 0x2c))(pcVar20,&local_148);
        }
      }
LAB_0092ebf0:
      if (local_68._4_4_ != (uint *******)0x0) {
        thunk_FUN_016d3fb4(local_60);
      }
      if ((local_4c & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_48);
      }
      pppppppuVar16 = local_54;
      pppppppuVar25 = local_54 + 1;
      for (iVar19 = local_50; iVar19 != 0; iVar19 = iVar19 + -1) {
        if (pppppppuVar25[-1] != (uint ******)0x0) {
          thunk_FUN_016d3fb4(*pppppppuVar25);
        }
        pppppppuVar25 = pppppppuVar25 + 3;
      }
      if (local_58 != (uint *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar16);
      }
      pppppppuVar26 = (uint *******)&DAT_00000021;
      pppppppuVar16 = (uint *******)&SUB_00000002;
      pppppppuVar27 = (uint *******)&DAT_00000021;
    }
    else {
      pppppppuVar26 = local_138._4_4_;
      pppppppuVar16 = local_140;
      pppppppuVar11 = (uint *******)local_138;
      pppppppuVar27 = local_13c;
    }
  }
  else {
    if (local_13c != (uint *******)0x0) {
      thunk_FUN_016d3fb4((uint *******)local_138);
    }
    if ((local_124 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_120);
    }
    pppppppuVar16 = local_12c;
    pppppppuVar25 = local_12c + 1;
    for (iVar19 = local_128; iVar19 != 0; iVar19 = iVar19 + -1) {
      if (pppppppuVar25[-1] != (uint ******)0x0) {
        thunk_FUN_016d3fb4(*pppppppuVar25);
      }
      pppppppuVar25 = pppppppuVar25 + 3;
    }
    if (local_130 != (uint *******)0x0) {
      thunk_FUN_016d3fb4(pppppppuVar16);
    }
    pppppppuVar16 = (uint *******)&SUB_00000002;
  }
  local_e8 = local_164;
  local_e4 = local_160 + (int)local_15c * 8;
  local_ec = local_160;
  local_f0 = local_160;
  if (local_15c != (uint *******)0x0) {
    iVar19 = (int)local_15c << 5;
    pppppppuVar25 = local_160;
LAB_0092eca4:
    local_ec = pppppppuVar25 + 8;
    local_148 = (uint *******)*pppppppuVar25;
    if (local_148 == (uint *******)0x80000015) goto code_r0x0092ecb0;
    ppppppuVar17 = pppppppuVar25[2];
    ppppppuVar23 = pppppppuVar25[3];
    puVar6 = (undefined4 *)((uint)&local_148 | 4);
    *puVar6 = pppppppuVar25[1];
    puVar6[1] = ppppppuVar17;
    puVar6[2] = ppppppuVar23;
    ppppppuVar17 = pppppppuVar25[5];
    ppppppuVar23 = pppppppuVar25[6];
    ppppppuVar24 = pppppppuVar25[7];
    puVar6[3] = pppppppuVar25[4];
    puVar6[4] = ppppppuVar17;
    puVar6[5] = ppppppuVar23;
    puVar6[6] = ppppppuVar24;
    if ((undefined1 *)((int)local_148 + 0x7fffffeb) < (undefined1 *)0x2) goto LAB_0092ecc8;
    uVar7 = 0x15;
    if ((int)local_148 < 0) {
      uVar7 = (uint)local_148 ^ 0x80000000;
    }
    pppppppuVar16 = local_13c;
    pppppppuVar25 = local_140;
    switch(uVar7) {
    case 0xd:
      pppppppuVar16 = local_140;
      pppppppuVar25 = local_144;
    case 0xc:
switchD_0092ed68_caseD_c:
      local_10c = (uint *******)&LAB_008b9b38;
      local_110 = (uint *******)&local_a8;
      local_a8 = (uint *******)&local_40;
      local_40 = pppppppuVar25;
      local_3c = pppppppuVar16;
      FUN_00927010(&local_70,&DAT_0059895d,&local_110);
      *param_1 = local_70;
      param_1[1] = local_6c;
      param_1[2] = (uint *******)local_68;
      param_1[3] = local_68._4_4_;
      param_1[4] = local_60;
      param_1[5] = local_5c;
      param_1[6] = local_58;
      param_1[7] = local_54;
      param_1[8] = local_50;
      param_1[9] = local_4c;
      param_1[10] = local_48;
      param_1[0xb] = uStack_44;
      break;
    case 0xe:
      pppppppuVar16 = local_140;
      pppppppuVar25 = local_13c;
      goto LAB_0092eea0;
    case 0xf:
      pppppppuVar16 = local_144;
LAB_0092eea0:
      FUN_00fab1e0(&local_70,pppppppuVar16,pppppppuVar25);
      if (local_70 == (uint *******)0x0) {
        pppppppuVar16 = (uint *******)local_68;
        pppppppuVar25 = local_6c;
        goto switchD_0092ed68_caseD_c;
      }
switchD_0092ed68_default:
      iVar19 = thunk_FUN_016d4a50(0x12);
      if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,0x12);
      }
      FUN_016dd1aa(iVar19,
                   "unexpected map keystruct FormatHeader with 4 elementsstruct PoolConfig with 4 elementsstruct ScpiPsuConfig with 3 elementsstruct GroupConfigOnly with 1 elementstruct PowerMeterConfig with 1 elementstruct PowerMeterConfigEntry with 2 elements"
                   ,0x12);
      param_1[3] = 0x12;
      param_1[4] = iVar19;
      param_1[5] = 0x12;
      param_1[6] = 0;
      param_1[7] = 4;
      param_1[8] = 0;
      param_1[9] = 0x80000000;
      *param_1 = 0;
      break;
    default:
      goto switchD_0092ed68_default;
    }
    FUN_008f7448(&local_148);
    FUN_008f7448(&local_138);
    FUN_009272d4(&local_f0);
    goto joined_r0x0092ead8;
  }
LAB_0092ecc0:
  local_148 = (uint *******)0x80000016;
LAB_0092ecc8:
  FUN_009272d4(&local_f0);
  param_1[6] = pppppppuVar9;
  param_1[7] = pppppppuVar18;
  param_1[8] = unaff_r11;
  param_1[2] = pppppppuVar16;
  param_1[3] = pppppppuVar27;
  param_1[4] = pppppppuVar11;
  param_1[5] = pppppppuVar26;
  *param_1 = 2;
  return;
}

