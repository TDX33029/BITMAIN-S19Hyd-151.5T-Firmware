// FUN_007305c4 @ 007305c4 size=4164 calls_out=20 calls_in=2
// strings: assertion failed: edge.height == self.node.height - 1 | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements | assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

/* WARNING: Removing unreachable block (ram,0x00731588) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007305c4(char *param_1,int param_2,int param_3,byte *******param_4,uint param_5,
                 uint param_6)

{
  code *pcVar1;
  ushort uVar2;
  byte bVar3;
  undefined2 uVar4;
  short sVar5;
  undefined4 *puVar6;
  byte *******pppppppbVar7;
  int iVar8;
  byte *******pppppppbVar9;
  byte *******pppppppbVar10;
  char *pcVar11;
  byte *pbVar12;
  byte ******ppppppbVar13;
  byte *******pppppppbVar14;
  byte ******ppppppbVar15;
  byte bVar16;
  uint uVar17;
  undefined4 uVar18;
  byte *******pppppppbVar19;
  uint uVar20;
  byte *******pppppppbVar21;
  ushort *puVar22;
  byte bVar23;
  int iVar24;
  byte *******pppppppbVar25;
  ushort *puVar26;
  uint *puVar27;
  undefined4 uVar28;
  int *piVar29;
  undefined4 uVar30;
  short sVar31;
  short sVar32;
  short sVar33;
  uint uVar34;
  char cVar35;
  uint uVar36;
  byte *******pppppppbVar37;
  byte *******pppppppbVar38;
  bool bVar39;
  byte ******local_374;
  byte *******local_370;
  byte *******local_36c;
  byte *******local_368;
  byte *******local_364;
  byte *******local_35c;
  byte ******local_358;
  byte *******local_354;
  char *local_350;
  undefined *local_34c;
  byte *******local_324;
  uint local_320;
  byte *******local_308;
  uint local_304;
  byte *******local_300;
  byte *******local_2fc;
  byte *******local_2f8;
  int local_2f4;
  byte *******local_2f0;
  byte ******local_2ec;
  undefined4 local_2e8;
  byte *******local_2e4;
  byte *******local_2e0;
  byte *******local_2dc;
  byte ******local_2d8;
  byte ******ppppppbStack_2d4;
  byte ******ppppppbStack_2d0;
  byte ******ppppppbStack_2cc;
  byte ******ppppppbStack_2c8;
  byte ******local_2c4;
  byte ******ppppppbStack_2c0;
  byte ******ppppppbStack_2bc;
  byte ******ppppppbStack_2b8;
  byte ******ppppppbStack_2b4;
  byte ******local_2b0;
  byte ******ppppppbStack_2ac;
  byte ******ppppppbStack_2a8;
  byte ******ppppppbStack_2a4;
  byte ******ppppppbStack_2a0;
  byte ******ppppppbStack_29c;
  byte ******local_298;
  byte *******local_294;
  byte *******local_290;
  byte *******local_28c;
  byte *******local_288;
  byte *******local_284;
  byte ******local_280;
  byte ******ppppppbStack_27c;
  byte ******ppppppbStack_278;
  byte ******ppppppbStack_274;
  byte ******ppppppbStack_270;
  byte ******local_26c;
  byte ******ppppppbStack_268;
  byte ******ppppppbStack_264;
  byte ******ppppppbStack_260;
  byte ******ppppppbStack_25c;
  byte ******local_258;
  byte ******ppppppbStack_254;
  byte ******ppppppbStack_250;
  byte ******ppppppbStack_24c;
  byte ******ppppppbStack_248;
  byte ******ppppppbStack_244;
  byte *******local_240;
  byte *******pppppppbStack_23c;
  short local_238;
  byte local_236;
  byte *******local_22c;
  undefined4 local_228;
  byte *******local_224;
  undefined1 auStack_220 [96];
  byte ******local_1c0;
  byte ******ppppppbStack_1bc;
  byte ******ppppppbStack_1b8;
  byte ******ppppppbStack_1b4;
  byte ******ppppppbStack_1b0;
  byte ******local_1ac;
  byte ******ppppppbStack_1a8;
  byte ******ppppppbStack_1a4;
  byte ******ppppppbStack_1a0;
  byte ******ppppppbStack_19c;
  byte ******local_198;
  byte ******ppppppbStack_194;
  byte ******ppppppbStack_190;
  byte ******ppppppbStack_18c;
  byte ******ppppppbStack_188;
  byte ******ppppppbStack_184;
  undefined4 local_160;
  byte *******local_15c;
  undefined4 local_158;
  byte *******local_154 [4];
  byte *******local_144;
  byte *******pppppppbStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 local_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  byte ******local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  byte *******local_f8 [2];
  byte *******local_f0 [2];
  byte *******local_e8;
  undefined4 local_e4;
  byte *******local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  byte ******local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_88;
  byte *******local_84 [24];
  
  if (param_2 != 0) {
    do {
      puVar27 = (uint *)(param_2 + 0xb0);
      uVar17 = 0xffffffff;
      uVar36 = (uint)*(ushort *)(param_2 + 0x10e);
      iVar24 = uVar36 << 3;
      do {
        if (iVar24 == 0) goto LAB_00730644;
        uVar20 = *puVar27;
        uVar34 = puVar27[1];
        iVar24 = iVar24 + -8;
        uVar17 = uVar17 + 1;
        puVar27 = puVar27 + 2;
        uVar20 = (uint)(uVar34 == 0 && (param_6 <= uVar20) <= uVar34) -
                 (uint)((uint)(uVar20 <= param_6) <= -uVar34);
      } while (uVar20 == 1);
      uVar36 = uVar17;
      if ((uVar20 & 0xff) == 0) {
        pcVar11 = (char *)(param_2 + uVar17 * 0x10);
        if (*pcVar11 != 'O') {
          uVar18 = *(undefined4 *)(pcVar11 + 4);
          uVar28 = *(undefined4 *)(pcVar11 + 8);
          uVar30 = *(undefined4 *)(pcVar11 + 0xc);
          *(undefined4 *)param_1 = *(undefined4 *)pcVar11;
          *(undefined4 *)(param_1 + 4) = uVar18;
          *(undefined4 *)(param_1 + 8) = uVar28;
          *(undefined4 *)(param_1 + 0xc) = uVar30;
          return;
        }
        piVar29 = *(int **)(pcVar11 + 4);
        do {
          iVar24 = *piVar29;
          bVar39 = (bool)hasExclusiveAccess(piVar29);
        } while (!bVar39);
        *piVar29 = iVar24 + 1;
        if (iVar24 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x73162c);
          (*pcVar1)();
        }
        *(int **)(param_1 + 4) = piVar29;
        *param_1 = 'O';
        return;
      }
LAB_00730644:
      if (param_3 == 0) break;
      param_3 = param_3 + -1;
      param_2 = *(int *)(param_2 + uVar36 * 4 + 0x110);
    } while( true );
  }
  if (param_5 < param_6) {
    local_2e8._2_2_ = 0;
    local_2e8._0_1_ = '\x13';
    local_2e8._1_1_ = 0;
    local_2dc = (byte *******)0x0;
LAB_00731358:
    *(short *)(param_1 + 2) = local_2e8._2_2_;
    param_1[1] = local_2e8._1_1_;
    *param_1 = (char)local_2e8;
    *(byte ********)(param_1 + 4) = local_2fc;
    *(byte ********)(param_1 + 8) = param_4;
    *(byte ********)(param_1 + 0xc) = local_2dc;
    return;
  }
  local_2f8 = (byte *******)((int)param_4 + param_6);
  local_2ec = (byte ******)0x8;
  puVar6 = (undefined4 *)((uint)&local_160 | 4);
  local_2f4 = param_5 - param_6;
  sVar31 = 0;
  local_2dc = (byte *******)0x0;
  local_304 = 0;
  local_2e4 = (byte *******)0x0;
  bVar16 = 0;
  local_2e8 = (byte *******)0x0;
  sVar32 = 0;
  local_2f0 = (byte *******)0x0;
  local_34c = &DAT_01d305c8;
  local_350 = &DAT_00533a41;
  local_308 = (byte *******)0x0;
LAB_00730790:
  sVar33 = sVar32;
  bVar23 = bVar16;
  do {
    pppppppbVar14 = (byte *******)&local_2f8;
    FUN_00719bb8(&local_160,pppppppbVar14);
    pppppppbVar10 = local_154[0];
    pppppppbVar7 = local_158;
    if ((char)local_160 != 'O') {
      local_2fc = local_15c;
      pppppppbVar14 = local_154[0];
      param_4 = local_158;
      sVar33 = local_160._2_2_;
      bVar23 = local_160._1_1_;
      cVar35 = (char)local_160;
      goto LAB_0073134c;
    }
    if (local_158 == (byte *******)0x0 && local_154[0] == (byte *******)0x0) {
      local_154[3] = local_2e0;
      local_144 = local_2dc;
      if (local_2f0 != (byte *******)&DAT_80000000) {
        local_154[2] = local_2e4;
        local_158 = local_2f0;
        local_15c = (byte *******)0x1;
        local_160 = (byte ******)0x1;
        local_154[1] = local_2e8;
        local_154[0] = (byte *******)local_2ec;
        puVar6 = (undefined4 *)thunk_FUN_01be5118(0x20);
        if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x20);
        }
        *puVar6 = local_160;
        puVar6[1] = local_15c;
        puVar6[2] = local_158;
        puVar6[3] = local_154[0];
        puVar6[4] = local_154[1];
        puVar6[5] = local_154[2];
        puVar6[6] = local_154[3];
        puVar6[7] = local_144;
        *param_1 = 'O';
        *(undefined4 **)(param_1 + 4) = puVar6;
        return;
      }
      local_2fc = local_2e4;
      param_4 = local_2e0;
      goto LAB_00731358;
    }
    FUN_00719c74(&local_160,pppppppbVar14);
    sVar32 = local_160._2_2_;
    if ((char)local_160 != 'O') {
      local_2fc = local_15c;
      pppppppbVar14 = local_154[0];
      param_4 = local_158;
      sVar33 = local_160._2_2_;
      bVar23 = local_160._1_1_;
      cVar35 = (char)local_160;
      goto LAB_0073134c;
    }
    if (local_160._2_2_ == 0) {
      cVar35 = '\b';
      goto LAB_007314f4;
    }
    if (local_2f4 == 0) {
      pppppppbVar14 = (byte *******)0x0;
      cVar35 = '\x13';
      local_2fc = local_2f8;
LAB_0073143c:
      sVar33 = 0;
      param_4 = local_2f8;
      goto LAB_0073134c;
    }
    local_2f4 = local_2f4 + -1;
    bVar16 = *(byte *)local_2f8;
    if (1 < bVar16) {
      cVar35 = '\n';
      local_2f8 = (byte *******)((int)local_2f8 + 1);
      goto LAB_0073143c;
    }
    iVar24 = 0;
    do {
      *(undefined4 *)((int)&local_88 + iVar24) = 0;
      iVar8 = iVar24 + 0x10;
      *(undefined4 *)((int)local_84 + iVar24) = 0;
      *(undefined4 *)((int)local_84 + iVar24 + 4) = 0;
      iVar24 = iVar8;
    } while (iVar8 != 0x50);
    local_2f8 = (byte *******)((int)local_2f8 + 1);
    FUN_01bed4e2(&local_158,&local_88,0x50);
    local_15c = (byte *******)0x0;
    local_160 = (byte ******)0x0;
    while( true ) {
      pppppppbVar14 = (byte *******)&local_2f8;
      FUN_00719c74(&local_88,pppppppbVar14);
      cVar35 = (char)local_88;
      if ((char)local_88 != 'O') goto LAB_00731310;
      sVar33 = local_88._2_2_;
      if (local_88._2_2_ == 0) break;
      FUN_00719c74(&local_88,pppppppbVar14);
      cVar35 = (char)local_88;
      if ((char)local_88 != 'O') goto LAB_00731310;
      sVar5 = local_88._2_2_;
      if (local_88._2_2_ == 0x21) {
        FUN_00719ad0(&local_88,pppppppbVar14);
        if ((char)local_88 != 'O') {
          cVar35 = (char)local_88;
          goto LAB_0073131c;
        }
        local_304 = ((uint)local_84[1] & 0xffff) >> 8;
        local_308 = (byte *******)((uint)local_84[1] >> 0x10);
        pppppppbVar14 = local_84[2];
        pppppppbVar9 = local_84[1];
      }
      else {
        local_304 = 0;
        local_308 = (byte *******)0x0;
        pppppppbVar14 = (byte *******)0x0;
        pppppppbVar9 = (byte *******)0x0;
        if (local_88._2_2_ == 0) {
          cVar35 = '\t';
          pppppppbVar14 = local_308;
          param_4 = (byte *******)0x0;
          bVar23 = 0;
          local_308._0_2_ = sVar31;
          goto LAB_0073132c;
        }
      }
      pppppppbVar37 = local_154[0];
      local_300 = (byte *******)CONCAT22(sVar5,sVar33);
      bVar23 = (byte)pppppppbVar9;
      uVar4 = SUB42(local_308,0);
      bVar3 = (byte)local_304;
      local_2fc = pppppppbVar14;
      sVar31 = sVar5;
      if (local_160 == (byte ******)0x0) {
        if (local_15c == (byte *******)&DAT_00000005) {
          pppppppbVar9 = (byte *******)thunk_FUN_01be5118(0x50);
          if (pppppppbVar9 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(8,0x50);
          }
          local_88 = 5;
          local_84[0] = pppppppbVar9;
          FUN_01bed4e2(pppppppbVar9,&local_158,0x50);
          local_84[1] = (byte *******)0x5;
          FUN_0126721c(&local_88);
          local_84[0][0x15] = (byte ******)pppppppbVar14;
          local_84[0][0x16] = (byte ******)local_300;
          *(undefined2 *)((int)local_84[0] + 0x52) = uVar4;
          *(byte *)(local_84[0] + 0x14) = bVar23;
          local_84[0][0x17] = (byte ******)local_84[0];
          *(byte *)((int)local_84[0] + 0x51) = bVar3;
          local_84[1] = (byte *******)&DAT_00000006;
          local_160 = (byte ******)0x1;
          *puVar6 = local_88;
          puVar6[1] = local_84[0];
          puVar6[2] = 6;
        }
        else {
          if (&SUB_00000004 < local_15c) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(local_15c,5,&DAT_01ce6d60);
          }
          *(byte *)(&local_158 + (int)local_15c * 4) = bVar23;
          local_154[(int)local_15c * 4 + 2] = local_15c;
          local_154[(int)local_15c * 4] = pppppppbVar14;
          local_154[(int)local_15c * 4 + 1] = local_300;
          *(undefined2 *)((int)local_154 + (int)local_15c * 0x10 + -2) = uVar4;
          *(byte *)((int)local_154 + (int)local_15c * 0x10 + -3) = bVar3;
          local_15c = (byte *******)((int)local_15c + 1);
        }
      }
      else {
        if (local_154[0] == local_15c) {
          FUN_0126721c(puVar6);
        }
        pppppppbVar9 = local_158 + (int)pppppppbVar37 * 4;
        *(byte *)pppppppbVar9 = bVar23;
        pppppppbVar9[1] = (byte ******)pppppppbVar14;
        pppppppbVar9[2] = (byte ******)local_300;
        pppppppbVar9[3] = (byte ******)pppppppbVar9;
        *(undefined2 *)((int)pppppppbVar9 + 2) = uVar4;
        *(byte *)((int)pppppppbVar9 + 1) = bVar3;
        local_154[0] = (byte *******)((int)pppppppbVar37 + 1);
      }
    }
    FUN_00719c74(&local_88,pppppppbVar14);
    ppppppbVar15 = local_160;
    cVar35 = (char)local_88;
    if ((char)local_88 != 'O') {
LAB_00731310:
LAB_0073131c:
      pppppppbVar14 = local_84[2];
      param_4 = local_84[1];
      bVar23 = local_88._1_1_;
      local_2fc = local_84[0];
      local_308._0_2_ = local_88._2_2_;
LAB_0073132c:
      sVar33 = (short)local_308;
      if (local_160 != (byte ******)0x0) {
        FUN_0134c054(local_15c,local_158,8,0x10);
      }
      goto LAB_0073134c;
    }
    if (local_88._2_2_ != 0) {
      cVar35 = '\r';
      bVar23 = (byte)local_304;
      param_4 = local_300;
      goto LAB_0073132c;
    }
    bVar39 = local_160 == (byte ******)0x2;
    local_e8 = local_154[3];
    local_e4 = local_144;
    local_e0 = pppppppbStack_140;
    uStack_dc = uStack_13c;
    uStack_d8 = uStack_138;
    local_d4 = local_134;
    uStack_d0 = uStack_130;
    uStack_cc = uStack_12c;
    uStack_c8 = uStack_128;
    uStack_c4 = uStack_124;
    pppppppbVar14 = &local_120;
    if (!bVar39) {
      pppppppbVar14 = (byte *******)&local_e8;
    }
    local_c0 = local_120;
    uStack_bc = uStack_11c;
    uStack_b8 = uStack_118;
    uStack_b4 = uStack_114;
    uStack_b0 = uStack_110;
    uStack_ac = uStack_10c;
    pppppppbVar9 = local_15c;
    if (!bVar39) {
      local_35c = local_15c;
      pppppppbVar9 = &local_1c0;
      local_1c0 = *pppppppbVar14;
      ppppppbStack_1bc = pppppppbVar14[1];
      ppppppbStack_1b8 = pppppppbVar14[2];
      ppppppbStack_1b4 = pppppppbVar14[3];
      ppppppbStack_1b0 = pppppppbVar14[4];
      local_1ac = pppppppbVar14[5];
      ppppppbStack_1a8 = pppppppbVar14[6];
      ppppppbStack_1a4 = pppppppbVar14[7];
      ppppppbStack_1a0 = pppppppbVar14[8];
      ppppppbStack_19c = pppppppbVar14[9];
      local_198 = pppppppbVar14[10];
      ppppppbStack_194 = pppppppbVar14[0xb];
      ppppppbStack_190 = pppppppbVar14[0xc];
      ppppppbStack_18c = pppppppbVar14[0xd];
      ppppppbStack_188 = pppppppbVar14[0xe];
      ppppppbStack_184 = pppppppbVar14[0xf];
    }
    if (bVar39 || local_160 == (byte ******)0x3) {
      local_2fc = local_154[0];
      pppppppbVar14 = local_154[2];
      param_4 = local_154[1];
      sVar33 = local_158._2_2_;
      bVar23 = local_158._1_1_;
      cVar35 = (char)local_158;
      goto LAB_0073134c;
    }
    local_280 = *pppppppbVar9;
    ppppppbStack_27c = pppppppbVar9[1];
    ppppppbStack_278 = pppppppbVar9[2];
    ppppppbStack_274 = pppppppbVar9[3];
    ppppppbStack_270 = pppppppbVar9[4];
    local_2d8 = local_280;
    ppppppbStack_2d4 = ppppppbStack_27c;
    ppppppbStack_2d0 = ppppppbStack_278;
    ppppppbStack_2cc = ppppppbStack_274;
    ppppppbStack_2c8 = ppppppbStack_270;
    local_26c = pppppppbVar9[5];
    ppppppbStack_268 = pppppppbVar9[6];
    ppppppbStack_264 = pppppppbVar9[7];
    ppppppbStack_260 = pppppppbVar9[8];
    ppppppbStack_25c = pppppppbVar9[9];
    local_2c4 = local_26c;
    ppppppbStack_2c0 = ppppppbStack_268;
    ppppppbStack_2bc = ppppppbStack_264;
    ppppppbStack_2b8 = ppppppbStack_260;
    ppppppbStack_2b4 = ppppppbStack_25c;
    local_2b0 = pppppppbVar9[10];
    ppppppbStack_2ac = pppppppbVar9[0xb];
    ppppppbStack_2a8 = pppppppbVar9[0xc];
    ppppppbStack_2a4 = pppppppbVar9[0xd];
    ppppppbStack_2a0 = pppppppbVar9[0xe];
    ppppppbStack_29c = pppppppbVar9[0xf];
    local_28c = local_154[0];
    local_288 = local_154[1];
    param_4 = (byte *******)&DAT_00000068;
    local_284 = local_154[2];
    local_294 = local_35c;
    local_290 = local_158;
    local_298 = local_160;
    pppppppbVar14 = (byte *******)&local_2f8;
    local_240 = pppppppbVar7;
    pppppppbStack_23c = pppppppbVar10;
    local_238 = sVar32;
    local_236 = bVar16;
    local_258 = local_2b0;
    ppppppbStack_254 = ppppppbStack_2ac;
    ppppppbStack_250 = ppppppbStack_2a8;
    ppppppbStack_24c = ppppppbStack_2a4;
    ppppppbStack_248 = ppppppbStack_2a0;
    ppppppbStack_244 = ppppppbStack_29c;
    if (pppppppbVar10 != (byte *******)0x0) break;
    pppppppbVar9 = (byte *******)((int)pppppppbVar7 + -1);
    if (pppppppbVar9 < local_2e8) goto joined_r0x00731500;
    if (pppppppbVar9 != local_2e8) break;
    if ((local_2dc != (byte *******)0x0) &&
       (iVar24 = FUN_0134bfa8(local_2e4,local_2e0,pppppppbVar7,0), iVar24 != 0))
    goto joined_r0x00731500;
    if (pppppppbVar9 == local_2f0) {
      FUN_01a3ab44(&local_2f0);
    }
    FUN_01bed4e2(local_2ec + (int)pppppppbVar9 * 0x1a,&local_298,0x68);
    local_2e8 = pppppppbVar7;
    sVar33 = sVar32;
    bVar23 = bVar16;
  } while( true );
  if (local_2e4 != (byte *******)0x0) {
    pppppppbVar9 = local_2e4;
    pppppppbVar37 = local_2e0;
    do {
      param_4 = (byte *******)&DAT_ffffffff;
      pppppppbVar38 = (byte *******)(uint)*(ushort *)((int)pppppppbVar9 + 0x4d6);
      iVar24 = (int)pppppppbVar38 << 3;
      pppppppbVar19 = pppppppbVar9;
      do {
        if (iVar24 == 0) goto LAB_00730cc0;
        pppppppbVar21 = (byte *******)*pppppppbVar19;
        pppppppbVar25 = (byte *******)pppppppbVar19[1];
        iVar24 = iVar24 + -8;
        param_4 = (byte *******)((int)param_4 + 1);
        pppppppbVar19 = pppppppbVar19 + 2;
        pppppppbVar14 =
             (byte *******)
             (uint)(pppppppbVar25 <= pppppppbVar10 &&
                   (uint)(pppppppbVar7 <= pppppppbVar21) <=
                   (uint)((int)pppppppbVar25 - (int)pppppppbVar10));
        uVar36 = (int)pppppppbVar14 -
                 (uint)(pppppppbVar10 <= pppppppbVar25 &&
                       (uint)(pppppppbVar21 <= pppppppbVar7) <=
                       (uint)((int)pppppppbVar10 - (int)pppppppbVar25));
      } while (uVar36 == 1);
      pppppppbVar38 = param_4;
      if ((uVar36 & 0xff) == 0) goto joined_r0x00731500;
LAB_00730cc0:
      if (pppppppbVar37 == (byte *******)0x0) goto LAB_00730d40;
      pppppppbVar37 = (byte *******)((int)pppppppbVar37 + -1);
      pppppppbVar9 = (byte *******)pppppppbVar9[(int)((int)pppppppbVar38 + 0x136)];
    } while( true );
  }
  local_2e4 = (byte *******)FUN_0134c0a0();
  ((byte *)((int)local_2e4 + 0x4d6))[0] = 1;
  ((byte *)((int)local_2e4 + 0x4d6))[1] = 0;
  *local_2e4 = (byte ******)pppppppbVar7;
  local_2e4[1] = (byte ******)pppppppbVar10;
  local_2e4[0x134] = (byte ******)0x0;
  local_2e0 = (byte *******)0x0;
  FUN_01bed4e2(local_2e4 + 0x16,&local_298,0x68);
  goto LAB_00730d30;
LAB_00730d40:
  local_364 = (byte *******)0x0;
  puVar22 = (ushort *)((int)pppppppbVar9 + 0x4d6);
  local_228 = 0;
  param_4 = pppppppbVar38;
  local_22c = pppppppbVar9;
  local_224 = pppppppbVar38;
  if (*puVar22 < 0xb) {
    FUN_0134bdb0(&local_160,&local_22c,pppppppbVar7,pppppppbVar10,&local_298);
  }
  else {
    uVar36 = 4;
    bVar39 = false;
    if (&SUB_00000004 < pppppppbVar38) {
      if (pppppppbVar38 == (byte *******)&DAT_00000005) {
        uVar36 = 5;
      }
      else {
        if (pppppppbVar38 == (byte *******)&DAT_00000006) {
          uVar36 = 5;
          param_4 = (byte *******)0x0;
        }
        else {
          param_4 = (byte *******)((int)pppppppbVar38 + -7);
          uVar36 = 6;
        }
        bVar39 = true;
      }
    }
    local_354 = (byte *******)FUN_0134c0a0();
    pbVar12 = (byte *)((int)local_354 + 0x4d6);
    pbVar12[0] = 0;
    pbVar12[1] = 0;
    local_354[0x134] = (byte ******)0x0;
    local_374 = pppppppbVar9[uVar36 * 2];
    pppppppbVar14 = (byte *******)(pppppppbVar9 + uVar36 * 2)[1];
    uVar17 = ~uVar36 + (uint)*puVar22;
    *(short *)pbVar12 = (short)uVar17;
    pppppppbVar37 = pppppppbVar9 + uVar36 * 0x1a + 0x16;
    local_358 = *pppppppbVar37;
    local_368 = (byte *******)pppppppbVar37[2];
    local_36c = (byte *******)pppppppbVar37[1];
    FUN_01bed4e2(&local_160,pppppppbVar37 + 3,0x5c);
    if (0xb < uVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar17,0xb,&DAT_01d2ff10);
    }
    FUN_01bed4e2(local_354,pppppppbVar9 + (uVar36 + 1) * 2,uVar17 * 8);
    FUN_01bed4e2(local_354 + 0x16,pppppppbVar9 + (uVar36 + 1) * 0x1a + 0x16,uVar17 * 0x68);
    *puVar22 = (ushort)uVar36;
    FUN_01bed4e2(&local_88,&local_160,0x5c);
    local_e4 = 0;
    local_e8 = local_354;
    if (!bVar39) {
      local_e8 = pppppppbVar9;
    }
    local_e0 = param_4;
    FUN_0134bdb0(&local_160,&local_e8,pppppppbVar7,pppppppbVar10,&local_298);
    if (local_358 != (byte ******)0x2) {
      FUN_01bed4e2(auStack_220,&local_88,0x5c);
      pppppppbVar7 = (byte *******)pppppppbVar9[0x134];
      if (pppppppbVar7 == (byte *******)0x0) {
        local_364 = (byte *******)0x0;
      }
      else {
        do {
          local_370 = pppppppbVar14;
          local_320 = (uint)*(ushort *)(pppppppbVar9 + 0x135);
          local_160 = local_358;
          local_15c = local_36c;
          local_158 = local_368;
          FUN_01bed4e2(local_154,auStack_220,0x5c);
          puVar22 = (ushort *)((int)pppppppbVar7 + 0x4d6);
          uVar2 = *puVar22;
          local_35c = local_370;
          if (uVar2 < 0xb) {
            FUN_0134be8c(pppppppbVar7,local_320,local_374,local_370,&local_160,local_354);
            param_4 = local_370;
            goto LAB_00730d30;
          }
          param_4 = (byte *******)&SUB_00000004;
          local_324 = (byte *******)local_f0;
          if (4 < local_320) {
            if (local_320 == 5) {
              param_4 = (byte *******)&DAT_00000005;
            }
            else if (local_320 == 6) {
              local_324 = (byte *******)local_f8;
              param_4 = (byte *******)&DAT_00000005;
              local_320 = 0;
            }
            else {
              param_4 = (byte *******)&DAT_00000006;
              local_320 = local_320 - 7;
              local_324 = (byte *******)local_f8;
            }
          }
          pppppppbVar10 = (byte *******)FUN_0134c0c0();
          puVar26 = (ushort *)((int)pppppppbVar10 + 0x4d6);
          *puVar26 = 0;
          pppppppbVar10[0x134] = (byte ******)0x0;
          ppppppbVar15 = pppppppbVar7[(int)param_4 * 2];
          pppppppbVar14 = (byte *******)(pppppppbVar7 + (int)param_4 * 2)[1];
          uVar36 = ~(uint)param_4 + (uint)*puVar22;
          *puVar26 = (ushort)uVar36;
          pppppppbVar9 = pppppppbVar7 + (int)param_4 * 0x1a + 0x16;
          local_358 = *pppppppbVar9;
          local_368 = (byte *******)pppppppbVar9[2];
          local_36c = (byte *******)pppppppbVar9[1];
          FUN_01bed4e2(&local_88,pppppppbVar9 + 3,0x5c);
          if (0xb < uVar36) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar36,0xb,&DAT_01d2ff10);
          }
          FUN_01bed4e2(pppppppbVar10,pppppppbVar7 + ((int)param_4 + 1) * 2,uVar36 * 8);
          FUN_01bed4e2(pppppppbVar10 + 0x16,pppppppbVar7 + (int)((int)param_4 + 1) * 0x1a + 0x16,
                       uVar36 * 0x68);
          *puVar22 = (ushort)param_4;
          FUN_01bed4e2(&local_e8,&local_88,0x5c);
          uVar36 = (uint)*puVar26;
          iVar24 = uVar36 + 1;
          if (0xb < uVar36) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,iVar24,0xc,&DAT_01d2ff20);
          }
          if ((uint)uVar2 - (int)param_4 != iVar24) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
          }
          local_364 = (byte *******)((int)local_364 + 1);
          FUN_01bed4e2(pppppppbVar10 + 0x136,pppppppbVar7 + (int)((int)param_4 + 0x137),iVar24 * 4);
          uVar17 = 0;
          do {
            ppppppbVar13 = (pppppppbVar10 + 0x136)[uVar17];
            *(short *)(ppppppbVar13 + 0x135) = (short)uVar17;
            ppppppbVar13[0x134] = (byte *****)pppppppbVar10;
            if (uVar36 <= uVar17) break;
            uVar17 = uVar17 + 1;
          } while (uVar17 <= uVar36);
          FUN_01bed4e2(&local_88,&local_e8,0x5c);
          local_f8[0] = pppppppbVar10;
          local_f0[0] = pppppppbVar7;
          FUN_0134be8c(*local_324,local_320,local_374,local_370,&local_160,local_354);
          FUN_01bed4e2(&local_1c0,&local_88,0x5c);
          pppppppbVar9 = local_f0[0];
          if (local_358 == (byte ******)0x2) goto LAB_00730d30;
          local_354 = local_f8[0];
          FUN_01bed4e2(auStack_220,&local_1c0,0x5c);
          pppppppbVar7 = (byte *******)pppppppbVar9[0x134];
          local_374 = ppppppbVar15;
        } while (pppppppbVar7 != (byte *******)0x0);
      }
      local_370 = pppppppbVar14;
      param_4 = local_2e0;
      pppppppbVar14 = local_2e4;
      if (local_2e4 == (byte *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2fee0);
      }
      pppppppbVar7 = (byte *******)FUN_0134c0c0();
      puVar22 = (ushort *)((int)pppppppbVar7 + 0x4d6);
      *puVar22 = 0;
      pppppppbVar7[0x134] = (byte ******)0x0;
      pppppppbVar7[0x136] = (byte ******)pppppppbVar14;
      if ((byte *******)0xfffffffe < param_4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d305e8);
      }
      *(undefined2 *)(pppppppbVar14 + 0x135) = 0;
      pppppppbVar14[0x134] = (byte ******)pppppppbVar7;
      local_2e4 = pppppppbVar7;
      local_2e0 = (byte *******)((int)param_4 + 1);
      if (local_364 != param_4) {
        uVar18 = 0x30;
        goto LAB_00731620;
      }
      uVar36 = (uint)*puVar22;
      if (10 < uVar36) {
        uVar18 = 0x20;
        local_350 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
        local_34c = &DAT_01d305d8;
LAB_00731620:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(local_350,uVar18,local_34c);
      }
      uVar2 = (ushort)(uVar36 + 1);
      *puVar22 = uVar2;
      pppppppbVar7[uVar36 * 2] = local_374;
      (pppppppbVar7 + uVar36 * 2)[1] = (byte ******)local_370;
      pppppppbVar7[uVar36 * 0x1a + 0x17] = (byte ******)local_36c;
      pppppppbVar7[uVar36 * 0x1a + 0x18] = (byte ******)local_368;
      pppppppbVar7[uVar36 * 0x1a + 0x16] = local_358;
      FUN_01bed4e2(pppppppbVar7 + uVar36 * 0x1a + 0x19,auStack_220,0x5c);
      (pppppppbVar7 + 0x136)[uVar36 + 1] = (byte ******)local_354;
      *(ushort *)(local_354 + 0x135) = uVar2;
      local_354[0x134] = (byte ******)pppppppbVar7;
    }
  }
LAB_00730d30:
  local_2dc = (byte *******)((int)local_2dc + 1);
  goto LAB_00730790;
joined_r0x00731500:
  if (ppppppbVar15 != (byte ******)0x0) {
    FUN_0134c054(local_35c,local_290,8,0x10);
  }
  cVar35 = '\x0e';
  sVar33 = 0;
LAB_007314f4:
  bVar23 = 0;
LAB_0073134c:
  FUN_0073058c(&local_2f0);
  local_2dc = pppppppbVar14;
  local_2e8._2_2_ = sVar33;
  local_2e8._1_1_ = bVar23;
  local_2e8._0_1_ = cVar35;
  goto LAB_00731358;
}

