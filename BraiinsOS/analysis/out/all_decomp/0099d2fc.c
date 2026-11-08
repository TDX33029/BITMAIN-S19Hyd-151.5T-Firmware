// FUN_0099d2fc @ 0099d2fc size=6168 calls_out=29 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | SetGloba | SetGloba | lDefaultError

/* WARNING: Removing unreachable block (ram,0x0099e108) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0099d2fc(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  bool bVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  byte *pbVar9;
  int iVar10;
  byte ************ppppppppppppbVar11;
  byte ***********pppppppppppbVar12;
  byte ***********pppppppppppbVar13;
  byte *********pppppppppbVar14;
  char *pcVar15;
  undefined4 *puVar16;
  byte *pbVar17;
  char cVar18;
  uint uVar19;
  byte ***********pppppppppppbVar20;
  undefined *puVar21;
  byte **********ppppppppppbVar22;
  int iVar23;
  byte ***********pppppppppppbVar24;
  byte ***********pppppppppppbVar25;
  byte ***********pppppppppppbVar26;
  byte ***********pppppppppppbVar27;
  byte **********ppppppppppbVar28;
  undefined1 uVar29;
  undefined1 uVar30;
  byte ***********unaff_r11;
  undefined8 uVar31;
  byte ***********local_244;
  byte ***********local_240;
  byte ***********local_23c;
  byte ***********local_220;
  byte ***********local_1f8;
  byte ***********local_1e0;
  byte ***********local_1dc;
  byte ***********local_1d8;
  byte ***********local_1d4;
  byte ***********local_1d0;
  byte ***********local_1cc;
  byte ***********local_1c8;
  byte ***********local_1c4;
  byte ***********pppppppppppbStack_1c0;
  byte ***********pppppppppppbStack_1bc;
  byte ***********local_1b8;
  byte ************ppppppppppppbStack_1b4;
  byte ***********pppppppppppbStack_1b0;
  byte ***********local_1a8;
  byte ************ppppppppppppbStack_1a4;
  byte ***********pppppppppppbStack_1a0;
  byte ***********local_19c;
  int local_198;
  byte ***********local_194;
  byte ***********local_190;
  byte ***********local_18c;
  byte ***********local_188;
  byte ***********local_184;
  byte ***********pppppppppppbStack_180;
  byte ***********local_17c;
  byte ***********local_178;
  undefined4 local_174;
  byte ***********pppppppppppbStack_170;
  byte ***********pppppppppppbStack_16c;
  byte ***********local_168;
  byte ***********local_164;
  byte ***********local_160;
  byte ***********pppppppppppbStack_15c;
  byte ***********local_158;
  byte ***********pppppppppppbStack_154;
  byte ***********local_148;
  byte ***********local_144;
  byte ***********local_140;
  byte ***********local_13c;
  byte ***********local_138;
  byte ***********pppppppppppbStack_134;
  byte ***********pppppppppppbStack_130;
  byte ***********pppppppppppbStack_12c;
  byte ***********local_128;
  byte ***********local_124;
  undefined4 local_120;
  byte ***********local_11c;
  byte ***********local_118;
  undefined4 local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  int *piStack_108;
  undefined4 uStack_104;
  byte ***********local_100;
  byte ************local_fc;
  byte ***********local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int *local_e8;
  undefined4 uStack_e4;
  byte ***********local_e0;
  byte ***********local_dc;
  byte ***********local_d8;
  byte ***********local_d4;
  byte ***********local_d0;
  byte ***********local_cc;
  byte ***********pppppppppppbStack_c8;
  undefined4 local_c4;
  byte ************ppppppppppppbStack_c0;
  byte ***********pppppppppppbStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  int *piStack_ac;
  byte ***********local_6c;
  int local_68;
  byte ***********local_64;
  byte ***********local_60;
  byte ***********local_5c;
  byte ***********pppppppppppbStack_58;
  byte ***********local_50;
  byte ************local_4c;
  byte ***********local_48;
  byte ***********local_40;
  byte ***********local_3c;
  byte ***********local_38;
  byte ***********local_34;
  byte ************local_30;
  byte ***********local_2c [2];
  
  local_10c = CONCAT13(local_10c._3_1_,
                       CONCAT12(local_10c._2_1_,CONCAT11(local_10c._1_1_,(undefined1)local_10c)));
  piVar5 = (int *)param_2[0x1c];
LAB_0099d3b8:
  do {
    while( true ) {
      pppppppppppbVar26 = (byte ***********)param_2[0x13];
      pppppppppppbVar27 = (byte ***********)param_2[0x14];
      pppppppppppbVar20 = (byte ***********)param_2[0x15];
      param_2[0x13] = 0x80000000;
      if (pppppppppppbVar26 != (byte ***********)&DAT_80000000) break;
LAB_0099d3d4:
      uVar6 = param_2[0xc];
      while (uVar6 != 0) {
        param_2[0x17] = uVar6;
        uVar19 = uVar6;
        if ((*(char *)((int)param_2 + 0x26) == '\x01') && (uVar6 < (uint)param_2[0x12])) {
          iVar23 = param_2[0x12] - 1;
          puVar16 = (undefined4 *)(param_2[0x11] + iVar23 * 0x20);
          pppppppppppbVar20 = (byte ***********)puVar16[2];
          uVar7 = puVar16[3];
          param_2[0x12] = iVar23;
          if ((uVar6 < (uint)param_2[7]) || ((uint)param_2[8] < uVar6)) {
            if (pppppppppppbVar20 != (byte ***********)0x0) {
              thunk_FUN_016d3fb4(uVar7);
              uVar6 = param_2[0xc];
              uVar19 = param_2[0x17];
            }
          }
          else if (pppppppppppbVar20 != (byte ***********)&DAT_80000000) {
            local_1d8 = (byte ***********)*puVar16;
            local_1d4 = (byte ***********)puVar16[1];
            local_1cc = (byte ***********)puVar16[3];
            local_1c8 = (byte ***********)puVar16[4];
            local_1c4 = (byte ***********)puVar16[5];
            pppppppppppbStack_1c0 = (byte ***********)puVar16[6];
            pppppppppppbStack_1bc = (byte ***********)puVar16[7];
            local_1d0 = pppppppppppbVar20;
            local_1e0 = (byte ***********)0x0;
            goto LAB_0099e00c;
          }
        }
        if ((uint)param_2[8] < uVar19) {
LAB_0099d708:
          if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00566610,0x20,&DAT_018af238);
          }
LAB_0099d710:
          uVar6 = uVar6 - 1;
          param_2[0xc] = uVar6;
          puVar16 = (undefined4 *)(param_2[0xb] + uVar6 * 0x20);
          local_e0 = (byte ***********)*puVar16;
          local_dc = (byte ***********)puVar16[1];
          local_d8 = (byte ***********)puVar16[2];
          local_d4 = (byte ***********)puVar16[3];
          local_d0 = (byte ***********)puVar16[4];
          local_cc = (byte ***********)puVar16[5];
          pppppppppppbStack_c8 = (byte ***********)puVar16[6];
          local_c4 = (byte ***********)puVar16[7];
          FUN_016c11c0(&local_e0);
          if (*(char *)(param_2 + 9) == '\x01') {
            if (param_2[0xf] == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00418dd8,0x21,&DAT_018af248);
            }
            iVar23 = param_2[0xf] + -1;
            piVar8 = (int *)(param_2[0xe] + iVar23 * 0xc);
            iVar10 = *piVar8;
            param_2[0xf] = iVar23;
            if (iVar10 != 0) {
              thunk_FUN_016d3fb4(piVar8[1]);
            }
          }
          uVar19 = param_2[0x16];
          if (uVar6 < (uint)param_2[0x16]) {
            uVar19 = uVar6;
          }
          param_2[0x16] = uVar19;
        }
        else {
          if (uVar6 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00418d87,0x1e,&DAT_018af218);
          }
          iVar23 = param_2[0xb] + uVar6 * 0x20;
          pppppppppppbVar20 = *(byte ************)(iVar23 + -0x20);
          if (pppppppppppbVar20 != (byte ***********)0x80000003) {
            if (pppppppppppbVar20 == (byte ***********)0x80000002) {
              iVar23 = *(int *)(iVar23 + -4);
              FUN_016056c8(&local_128);
              pppppppppppbVar20 = local_120;
              if (((uint)local_128 & 1) != 0) {
                pppppppppppbVar26 = (byte ***********)(iVar23 + 1);
                if (local_120 == (byte ***********)0x0) {
                  local_c4 = pppppppppppbVar26;
                  local_cc = local_11c;
                  pppppppppppbStack_c8 = local_118;
                  local_d8 = (byte ***********)&DAT_80000000;
                  local_dc = (byte ***********)&DAT_80000000;
                  local_e0 = (byte ***********)&DAT_00000001;
                }
                else {
                  local_100 = local_120;
                  *(undefined4 *)((uint)&local_100 | 4) = local_11c;
                  ((undefined4 *)((uint)&local_100 | 4))[1] = local_118;
                  local_f4 = local_114;
                  uStack_f0 = uStack_110;
                  uStack_ec = local_10c;
                  local_e8 = piStack_108;
                  uStack_e4 = uStack_104;
                  FUN_016c2544(&local_e0,pppppppppppbVar26,&local_100);
                  DataMemoryBarrier(0xb);
                  do {
                    iVar23 = *local_e8;
                    bVar4 = (bool)hasExclusiveAccess(local_e8);
                  } while (!bVar4);
                  *local_e8 = iVar23 + -1;
                  if (iVar23 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_015f4880(local_e8);
                  }
                  *(byte *)pppppppppppbVar20 = 0;
                  if (local_fc != (byte ************)0x0) {
                    thunk_FUN_016d3fb4(pppppppppppbVar20);
                  }
                }
                ppppppppppppbVar11 = &local_e0;
                goto LAB_0099d6e8;
              }
              local_1e0 = (byte ***********)&SUB_00000002;
            }
            else {
              *(undefined4 *)(iVar23 + -0x20) = 0x80000001;
              local_1e0 = (byte ***********)&SUB_00000002;
              if (pppppppppppbVar20 != (byte ***********)0x80000001) {
                local_1d8 = *(byte ************)(iVar23 + -0x1c);
                local_1d4 = *(byte ************)(iVar23 + -0x18);
                local_1d0 = *(byte ************)(iVar23 + -0x14);
                local_1cc = *(byte ************)(iVar23 + -0x10);
                local_1c8 = *(byte ************)(iVar23 + -0xc);
                local_1c4 = *(byte ************)(iVar23 + -8);
                local_1e0 = (byte ***********)&DAT_00000001;
                local_1dc = pppppppppppbVar20;
              }
              if (local_1e0 != (byte ***********)&SUB_00000002) goto LAB_0099d658;
            }
LAB_0099d704:
            uVar6 = param_2[0xc];
            goto LAB_0099d708;
          }
          ppppppppppppbVar11 = *(byte *************)(iVar23 + -0x18);
          if (ppppppppppppbVar11 == *(byte *************)(iVar23 + -0x10)) {
            local_1e0 = (byte ***********)&SUB_00000002;
            goto LAB_0099d710;
          }
          *(byte *************)(iVar23 + -0x18) = ppppppppppppbVar11 + 10;
LAB_0099d6e8:
          local_1e0 = *ppppppppppppbVar11;
          local_1dc = ppppppppppppbVar11[1];
          local_1d8 = ppppppppppppbVar11[2];
          local_1d4 = ppppppppppppbVar11[3];
          local_1d0 = ppppppppppppbVar11[4];
          local_1cc = ppppppppppppbVar11[5];
          local_1c8 = ppppppppppppbVar11[6];
          local_1c4 = ppppppppppppbVar11[7];
          pppppppppppbStack_1c0 = ppppppppppppbVar11[8];
          pppppppppppbStack_1bc = ppppppppppppbVar11[9];
          if (local_1e0 == (byte ***********)&SUB_00000002) goto LAB_0099d704;
LAB_0099d658:
          if (((uint)local_1e0 & 1) != 0) goto LAB_0099e01c;
          local_148 = local_1d8;
          local_144 = local_1d4;
          local_140 = local_1d0;
          local_13c = local_1cc;
          local_138 = local_1c8;
          pppppppppppbStack_134 = local_1c4;
          pppppppppppbStack_130 = pppppppppppbStack_1c0;
          pppppppppppbStack_12c = pppppppppppbStack_1bc;
          FUN_016c0860(&local_1e0,param_2);
          if (local_1e0 != (byte ***********)&SUB_00000002) goto LAB_0099e00c;
        }
        uVar6 = param_2[0xc];
      }
      if (*(char *)((int)param_2 + 0x26) == '\0') {
LAB_0099e9a4:
        *param_1 = 0x80000000;
        return;
      }
      param_2[0x17] = 0;
      if (param_2[0x12] == 0) goto LAB_0099e9a4;
      iVar23 = param_2[0x12] + -1;
      puVar16 = (undefined4 *)(param_2[0x11] + iVar23 * 0x20);
      pppppppppppbVar20 = (byte ***********)puVar16[2];
      uVar7 = puVar16[3];
      param_2[0x12] = iVar23;
      if (param_2[7] != 0) {
        if (pppppppppppbVar20 != (byte ***********)0x0) {
          thunk_FUN_016d3fb4(uVar7);
        }
        goto LAB_0099e9a4;
      }
      if (pppppppppppbVar20 == (byte ***********)&DAT_80000000) goto LAB_0099e9a4;
      local_1d8 = (byte ***********)*puVar16;
      local_1d4 = (byte ***********)puVar16[1];
      local_1cc = (byte ***********)puVar16[3];
      local_1c8 = (byte ***********)puVar16[4];
      local_1c4 = (byte ***********)puVar16[5];
      pppppppppppbStack_1c0 = (byte ***********)puVar16[6];
      pppppppppppbStack_1bc = (byte ***********)puVar16[7];
      local_1e0 = (byte ***********)0x0;
      local_1d0 = pppppppppppbVar20;
LAB_0099d468:
      pppppppppppbVar12 = local_1c8;
      pppppppppppbVar27 = local_1cc;
      pppppppppppbVar26 = local_1d0;
      if (local_1c8 == (byte ***********)0x0) {
        cVar3 = false;
      }
      else {
        cVar3 = *(byte *)local_1cc == 0x2f;
      }
      cVar18 = '\x06';
      uVar6 = (uint)local_174 >> 0x10;
      local_174 = (byte ***********)CONCAT22((ushort)uVar6 & 0xff00,0x201);
      local_188 = (byte ***********)CONCAT31(local_188._1_3_,6);
      local_18c = (byte ***********)0x4;
      local_190 = (byte ***********)&DAT_00568d68;
      pppppppppppbVar20 = local_1cc;
      pppppppppppbVar13 = local_1c8;
      uVar30 = 2;
      uVar29 = 1;
      while( true ) {
        local_120 = (byte ***********)CONCAT31(local_120._1_3_,cVar18);
        local_128 = pppppppppppbVar20;
        local_124 = pppppppppppbVar13;
        FUN_016dd1aa((int)&local_120 + 1,&local_e0,0x13);
        local_10c = CONCAT31(CONCAT21(CONCAT11(local_10c._3_1_,cVar3),uVar30),uVar29);
        FUN_015c7164(&local_148,&local_128);
        FUN_015c7164(&local_100,&local_190);
        local_e0 = local_148;
        local_dc = local_144;
        local_d8 = local_140;
        local_d4 = local_13c;
        local_d0 = local_138;
        local_cc = pppppppppppbStack_134;
        pppppppppppbStack_c8 = pppppppppppbStack_130;
        local_c4 = local_100;
        ppppppppppppbStack_c0 = local_fc;
        pppppppppppbStack_bc = local_f8;
        local_b8 = local_f4;
        uStack_b4 = uStack_f0;
        uStack_b0 = uStack_ec;
        piStack_ac = local_e8;
        if (((uint)local_148 & 0xff) == 10) break;
        if (((uint)local_100 & 0xff) == 10) goto LAB_0099d92c;
        iVar23 = FUN_015e5598(&local_e0,&local_c4);
        pppppppppppbVar13 = local_124;
        pppppppppppbVar20 = local_128;
        if (iVar23 == 0) goto LAB_0099d950;
        cVar18 = (char)local_120;
        FUN_016dd1aa(&local_168,(int)&local_120 + 1,0x13);
        uVar30 = local_10c._1_1_;
        uVar29 = (undefined1)local_10c;
        cVar3 = local_10c._2_1_;
        if (cVar18 != '\x06') {
          local_e0 = local_168;
          local_dc = local_164;
          local_d8 = local_160;
          local_d4 = pppppppppppbStack_15c;
          local_d0._0_3_ = SUB43(local_158,0);
        }
      }
      if (((uint)local_100 & 0xff) == 10) {
LAB_0099d92c:
        pppppppppppbVar20 = (byte ***********)&DAT_80000000;
        if (cVar3 != '\x02') {
          uVar7 = 0;
          if ((int)pppppppppppbVar12 < 0) {
LAB_0099eb18:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar7,unaff_r11);
          }
          if (pppppppppppbVar12 == (byte ***********)0x0) {
            unaff_r11 = (byte ***********)&DAT_00000001;
            pppppppppppbVar20 = (byte ***********)0x0;
          }
          else {
            unaff_r11 = (byte ***********)thunk_FUN_016d4a50(pppppppppppbVar12);
            if (unaff_r11 == (byte ***********)0x0) {
              uVar7 = 1;
              unaff_r11 = pppppppppppbVar12;
              goto LAB_0099eb18;
            }
            pppppppppppbVar20 = pppppppppppbVar12;
          }
          FUN_016dd1aa(unaff_r11,pppppppppppbVar27,pppppppppppbVar12);
          local_220 = pppppppppppbVar12;
        }
      }
      else {
LAB_0099d950:
        pppppppppppbVar20 = (byte ***********)&DAT_80000000;
      }
      if (pppppppppppbVar26 != (byte ***********)0x0) {
        thunk_FUN_016d3fb4(pppppppppppbVar27);
      }
      if (pppppppppppbVar20 != (byte ***********)&DAT_80000000) {
        uVar7 = param_2[0x19];
        iVar23 = param_2[0x1a];
        FUN_015ec424(&local_40,unaff_r11,local_220);
        pppppppppppbVar12 = local_3c;
        pppppppppppbVar26 = local_40;
        pppppppppppbVar27 = unaff_r11;
        if (local_40 == (byte ***********)&DAT_80000000) {
          local_60 = local_3c;
          local_5c = local_38;
          if ((DAT_018d9130 < 4) && (DAT_018da8a4 != '\0')) {
            if (DAT_018da8a4 == '\x01') {
LAB_0099da1c:
              DataMemoryBarrier(0xb);
              puVar21 = DAT_018daa78;
              if (DAT_018dd984 != 2) {
                puVar21 = &DAT_018ae394;
              }
              pcVar15 = s_SetGloba_00414c05;
              if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, DAT_018daa70 != 0)) {
                pcVar15 = DAT_018daa74 + (*(int *)(puVar21 + 8) - 1U & 0xfffffff8) + 8;
              }
              iVar23 = (**(code **)(puVar21 + 0x14))(pcVar15,DAT_018da89c);
              if (iVar23 == 0) goto LAB_0099deec;
            }
            else if (DAT_018da8a4 != '\x02') {
              cVar3 = FUN_0169ac90(&DAT_018da89c);
              if (cVar3 == '\0') goto LAB_0099deec;
              if (cVar3 != '\x02') goto LAB_0099da1c;
            }
            if (DAT_018da89c[8] == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01869574);
            }
            pppppppppppbVar26 = (byte ***********)(DAT_018da89c + 7);
            local_128 = (byte ***********)*pppppppppppbVar26;
            local_124 = (byte ***********)DAT_018da89c[8];
            local_120 = (byte ***********)DAT_018da89c[9];
            local_11c = (byte ***********)DAT_018da89c[10];
            local_118 = (byte ***********)0x0;
            FUN_006008c8(&local_100,unaff_r11,local_220);
            local_144 = (byte ***********)&local_50;
            local_148 = (byte ***********)&local_128;
            local_168 = (byte ***********)&local_148;
            local_188 = (byte ***********)&local_60;
            local_190 = (byte ***********)&local_100;
            local_184 = (byte ***********)FUN_015ef5b4;
            local_164 = (byte ***********)&DAT_00000001;
            local_cc = (byte ***********)DAT_018da89c;
            local_18c = (byte ***********)&LAB_016cf57c;
            local_50 = (byte ***********)&DAT_00583f1d;
            local_d0 = (byte ***********)&local_168;
            local_140 = (byte ***********)&DAT_018abb78;
            local_e0 = (byte ***********)&DAT_00000001;
            local_dc = (byte ***********)0x0;
            DataMemoryBarrier(0xb);
            puVar21 = &DAT_018ae394;
            pcVar15 = s_SetGloba_00414c05;
            if (DAT_018dd984 == 2) {
              pcVar15 = DAT_018daa74;
              puVar21 = DAT_018daa78;
              if (DAT_018daa70 != 0) {
                pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
              }
            }
            local_160 = pppppppppppbVar26;
            local_4c = &local_190;
            iVar23 = (**(code **)(puVar21 + 0x28))(pcVar15,&local_e0);
            if (iVar23 != 0) {
              (**(code **)(puVar21 + 0x2c))(pcVar15,&local_e0);
            }
            if (((uint)local_100 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(local_fc);
            }
          }
LAB_0099deec:
          pppppppppppbVar26 = local_5c;
          if ((char)local_60 == '\x03') {
            ppppppppppbVar22 = local_5c[1];
            ppppppppppbVar28 = *local_5c;
            pppppppppbVar14 = *ppppppppppbVar22;
            if (pppppppppbVar14 != (byte *********)0x0) {
              (*(code *)pppppppppbVar14)(ppppppppppbVar28);
            }
            if (ppppppppppbVar22[1] != (byte *********)0x0) {
              thunk_FUN_016d3fb4(ppppppppppbVar28);
            }
            thunk_FUN_016d3fb4(pppppppppppbVar26);
          }
          goto joined_r0x0099d3ac;
        }
        pbVar17 = (byte *)0x0;
        pppppppppppbVar13 = (byte ***********)((int)local_3c + (int)local_38);
        pbVar9 = pbVar17;
        pppppppppppbVar24 = local_3c;
        if (local_38 == (byte ***********)0x0) {
          pbVar9 = (byte *)0x0;
          pppppppppppbVar25 = local_3c;
LAB_0099dde0:
          do {
            do {
              pppppppppppbVar24 = pppppppppppbVar13;
              if (pppppppppppbVar25 == pppppppppppbVar24) goto LAB_0099df58;
              pppppppppppbVar13 = (byte ***********)((int)pppppppppppbVar24 + -1);
              uVar6 = (uint)(char)*(byte *)pppppppppppbVar13;
              if (0x7fffffff < uVar6) {
                pppppppppppbVar13 = (byte ***********)((int)pppppppppppbVar24 + -2);
                bVar1 = *(byte *)pppppppppppbVar13;
                if ((char)bVar1 < -0x40) {
                  pppppppppppbVar13 = (byte ***********)((int)pppppppppppbVar24 + -3);
                  bVar2 = *(byte *)pppppppppppbVar13;
                  if ((char)bVar2 < -0x40) {
                    pppppppppppbVar13 = pppppppppppbVar24 + -1;
                    uVar19 = (int)(char)bVar2 & 0x3fU | (*(byte *)pppppppppppbVar13 & 7) << 6;
                  }
                  else {
                    uVar19 = bVar2 & 0xf;
                  }
                  uVar19 = (int)(char)bVar1 & 0x3fU | uVar19 << 6;
                }
                else {
                  uVar19 = bVar1 & 0x1f;
                }
                uVar6 = uVar6 & 0x3f | uVar19 << 6;
              }
            } while ((uVar6 - 9 < 5) || (uVar6 == 0x20));
            if (uVar6 < 0x80) goto LAB_0099ded0;
            uVar19 = uVar6 >> 8;
            if (uVar19 < 0x20) {
              if (uVar19 == 0) {
                bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 1;
joined_r0x0099decc:
                if (bVar1 == 0) goto LAB_0099ded0;
              }
              else if ((uVar19 != 0x16) || (uVar6 != 0x1680)) goto LAB_0099ded0;
              goto LAB_0099dde0;
            }
            if (uVar19 == 0x20) {
              bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 2;
              goto joined_r0x0099decc;
            }
            if ((uVar19 != 0x30) || (uVar6 != 0x3000)) goto LAB_0099ded0;
          } while( true );
        }
        do {
          pppppppppppbVar25 = (byte ***********)((int)pppppppppppbVar24 + 1);
          uVar6 = (uint)*(byte *)pppppppppppbVar24;
          if (0x7fffffff < (uint)(int)(char)*(byte *)pppppppppppbVar24) {
            uVar19 = *(byte *)((int)pppppppppppbVar24 + 1) & 0x3f;
            if (uVar6 < 0xe0) {
              uVar6 = uVar19 | (uVar6 & 0x1f) << 6;
              pppppppppppbVar25 = (byte ***********)((int)pppppppppppbVar24 + 2);
            }
            else {
              uVar19 = *(byte *)((int)pppppppppppbVar24 + 2) & 0x3f | uVar19 << 6;
              if (uVar6 < 0xf0) {
                uVar6 = uVar19 | (uVar6 & 0x1f) << 0xc;
                pppppppppppbVar25 = (byte ***********)((int)pppppppppppbVar24 + 3);
              }
              else {
                pppppppppppbVar25 = pppppppppppbVar24 + 1;
                uVar6 = *(byte *)((int)pppppppppppbVar24 + 3) & 0x3f | uVar19 << 6 |
                        (uVar6 & 7) << 0x12;
              }
            }
          }
          pbVar17 = pbVar9 + ((int)pppppppppppbVar25 - (int)pppppppppppbVar24);
          if ((4 < uVar6 - 9) && (uVar6 != 0x20)) {
            if (uVar6 < 0x80) goto LAB_0099dde0;
            uVar19 = uVar6 >> 8;
            if (uVar19 < 0x20) {
              if (uVar19 == 0) {
                bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 1;
                goto joined_r0x0099ddc0;
              }
              if ((uVar19 != 0x16) || (uVar6 != 0x1680)) goto LAB_0099dde0;
            }
            else if (uVar19 == 0x20) {
              bVar1 = (&DAT_0041951b)[uVar6 & 0xff] & 2;
joined_r0x0099ddc0:
              if (bVar1 == 0) goto LAB_0099dde0;
            }
            else if ((uVar19 != 0x30) || (uVar6 != 0x3000)) goto LAB_0099dde0;
          }
          pbVar9 = pbVar17;
          pppppppppppbVar24 = pppppppppppbVar25;
        } while (pppppppppppbVar25 != pppppppppppbVar13);
        pbVar9 = (byte *)0x0;
        pbVar17 = (byte *)0x0;
        goto LAB_0099df58;
      }
    }
    if (*(char *)((int)param_2 + 0x27) == '\0') {
LAB_0099dbcc:
      local_e0 = pppppppppppbVar26;
      local_dc = pppppppppppbVar27;
      local_d8 = pppppppppppbVar20;
      FUN_016c2968(&local_190,0,&local_e0,0);
      if (local_190 == (byte ***********)0x0) {
        local_168 = local_188;
        local_164 = local_184;
        local_160 = pppppppppppbStack_180;
        pppppppppppbStack_15c = local_17c;
        local_158 = local_178;
        pppppppppppbStack_154 = local_174;
        FUN_016c0860(&local_1e0,param_2);
        if (local_1e0 == (byte ***********)&SUB_00000002) goto LAB_0099d3d4;
      }
      else {
        local_1e0 = local_190;
        local_1dc = local_18c;
        local_1d8 = local_188;
        local_1d4 = local_184;
        local_1d0 = pppppppppppbStack_180;
        local_1cc = local_17c;
        local_1c8 = local_178;
        local_1c4 = local_174;
        pppppppppppbStack_1c0 = pppppppppppbStack_170;
        pppppppppppbStack_1bc = pppppppppppbStack_16c;
        if (local_190 == (byte ***********)&SUB_00000002) goto LAB_0099e9a4;
      }
LAB_0099e00c:
      if (((uint)local_1e0 & 1) == 0) goto LAB_0099d468;
    }
    else {
      FUN_015f5984(&local_e0,pppppppppppbVar27,pppppppppppbVar20);
      if (local_e0 == (byte ***********)0x0) {
        param_2[2] = local_d8;
        param_2[3] = local_d4;
        *param_2 = 1;
        param_2[1] = 0;
        goto LAB_0099dbcc;
      }
      pppppppppppbVar13 = *(byte ************)((uint)&local_e0 | 4);
      pppppppppppbVar12 = (byte ***********)((undefined4 *)((uint)&local_e0 | 4))[1];
      uVar7 = 0;
      if ((int)pppppppppppbVar20 < 0) {
LAB_0099eafc:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,local_23c);
      }
      if (pppppppppppbVar20 == (byte ***********)0x0) {
        local_1f8 = (byte ***********)0x0;
        local_23c = (byte ***********)&DAT_00000001;
      }
      else {
        local_23c = (byte ***********)thunk_FUN_016d4a50(pppppppppppbVar20);
        if (local_23c == (byte ***********)0x0) {
          uVar7 = 1;
          local_23c = pppppppppppbVar20;
          goto LAB_0099eafc;
        }
        local_1f8 = pppppppppppbVar20;
      }
      FUN_016dd1aa(local_23c,pppppppppppbVar27,pppppppppppbVar20);
      local_1d0 = pppppppppppbVar20;
      local_1d8 = local_1f8;
      local_1dc = (byte ***********)0x80000000;
      local_1d4 = local_23c;
      local_1e0 = (byte ***********)&DAT_00000001;
      local_1c4 = (byte ***********)0x0;
      local_1cc = pppppppppppbVar13;
      local_1c8 = pppppppppppbVar12;
      if (pppppppppppbVar26 != (byte ***********)0x0) {
        thunk_FUN_016d3fb4(pppppppppppbVar27);
      }
    }
LAB_0099e01c:
    pppppppppppbVar26 = local_1c8;
    pppppppppppbVar27 = local_1cc;
    pppppppppppbVar20 = local_1d0;
    if (local_1dc == (byte ***********)0x0) goto joined_r0x0099d3ac;
    if (local_1dc != (byte ***********)0x80000000) {
      thunk_FUN_016d3fb4();
      goto joined_r0x0099d3ac;
    }
    if (((uint)local_1d8 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_1d4);
    }
  } while (((uint)pppppppppppbVar27 & 0xff) != 3);
  ppppppppppbVar22 = *pppppppppppbVar26;
  ppppppppppbVar28 = pppppppppppbVar26[1];
  pppppppppbVar14 = *ppppppppppbVar28;
  if (pppppppppbVar14 != (byte *********)0x0) {
    (*(code *)pppppppppbVar14)(ppppppppppbVar22);
  }
  if (ppppppppppbVar28[1] != (byte *********)0x0) {
    thunk_FUN_016d3fb4(ppppppppppbVar22);
  }
LAB_0099d3b0:
  thunk_FUN_016d3fb4(pppppppppppbVar26);
  goto LAB_0099d3b8;
LAB_0099ded0:
  pbVar17 = (byte *)(((int)pbVar17 - (int)pppppppppppbVar25) + (int)pppppppppppbVar24);
LAB_0099df58:
  bVar4 = false;
  if ((int)pbVar17 - (int)pbVar9 == iVar23) {
    iVar23 = thunk_FUN_016dd50a((byte *)((int)local_3c + (int)pbVar9),uVar7,iVar23);
    bVar4 = iVar23 == 0;
  }
  if (pppppppppppbVar26 != (byte ***********)0x0) {
    thunk_FUN_016d3fb4(pppppppppppbVar12);
  }
  if (!bVar4) {
joined_r0x0099d3ac:
    pppppppppppbVar26 = pppppppppppbVar27;
    if (pppppppppppbVar20 == (byte ***********)0x0) goto LAB_0099d3b8;
    goto LAB_0099d3b0;
  }
  if (local_220 == (byte ***********)0x0) {
    bVar4 = false;
  }
  else {
    bVar4 = *(byte *)unaff_r11 == 0x2f;
  }
  local_d8 = (byte ***********)CONCAT31(local_d8._1_3_,6);
  local_c4 = (byte ***********)CONCAT22(CONCAT11(local_c4._3_1_,bVar4),0x201);
  local_e0 = unaff_r11;
  local_dc = local_220;
  FUN_015c7164(&local_128,&local_e0);
  if (2 < ((uint)local_128 & 0xff) - 7) {
LAB_0099ead4:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0034929c,0xf,&DAT_01869564);
  }
  uVar31 = FUN_015c7664(&local_e0);
  if ((int)uVar31 == 0) goto LAB_0099ead4;
  FUN_006008c8(&local_e0,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
  pppppppppppbVar27 = local_d8;
  pppppppppppbVar26 = local_dc;
  uVar7 = 0;
  if ((int)local_d8 < 0) {
LAB_0099eb48:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,local_240);
  }
  if (local_d8 == (byte ***********)0x0) {
    iVar23 = 1;
    FUN_016dd1aa(1,1,0);
    local_240 = (byte ***********)&DAT_00000001;
    pppppppppppbVar12 = (byte ***********)0x0;
  }
  else {
    local_240 = (byte ***********)thunk_FUN_016d4a50(local_d8);
    if (local_240 == (byte ***********)0x0) {
      uVar7 = 1;
      local_240 = pppppppppppbVar27;
      goto LAB_0099eb48;
    }
    FUN_016dd1aa(local_240,pppppppppppbVar26,pppppppppppbVar27);
    iVar23 = thunk_FUN_016d4a50(pppppppppppbVar27);
    if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pppppppppppbVar27);
    }
    FUN_016dd1aa(iVar23,local_240,pppppppppppbVar27);
    thunk_FUN_016d3fb4(local_240);
    pppppppppppbVar12 = pppppppppppbVar27;
  }
  if (((uint)local_e0 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(pppppppppppbVar26);
  }
  if (pppppppppppbVar20 != (byte ***********)0x0) {
    thunk_FUN_016d3fb4(unaff_r11);
  }
  local_194 = pppppppppppbVar27;
  local_19c = pppppppppppbVar12;
  local_198 = iVar23;
  if (pppppppppppbVar27 == (byte ***********)0x0) {
    FUN_016dd1aa(1,iVar23,0);
    local_64 = pppppppppppbVar27;
    local_68 = 1;
    pppppppppppbVar27 = (byte ***********)0x0;
    local_6c = (byte ***********)0x0;
  }
  else {
    iVar10 = thunk_FUN_016d4a50(pppppppppppbVar27);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,pppppppppppbVar27);
    }
    FUN_016dd1aa(iVar10,iVar23,pppppppppppbVar27);
    local_64 = pppppppppppbVar27;
    local_6c = pppppppppppbVar27;
    local_68 = iVar10;
    if (*(byte *)((int)pppppppppppbVar27 + iVar10 + -1) == 0x2f) {
    }
    else {
      FUN_015bf41c(&local_6c,pppppppppppbVar27,1,1,1);
      *(byte *)(local_68 + (int)local_64) = 0x2f;
      pppppppppppbVar27 = (byte ***********)((int)local_64 + 1);
      local_64 = pppppppppppbVar27;
    }
  }
  if ((uint)((int)local_6c - (int)pppppppppppbVar27) < 7) {
    FUN_015bf41c(&local_6c,pppppppppppbVar27,7,1,1);
    pppppppppppbVar27 = local_64;
  }
  pbVar9 = (byte *)(local_68 + (int)pppppppppppbVar27);
  pbVar9[0] = 0x6f;
  pbVar9[1] = 0x66;
  pbVar9[2] = 0x5f;
  pbVar9[3] = 0x6e;
  local_64 = (byte ***********)((int)pppppppppppbVar27 + 7);
  pbVar9[3] = 0x6e;
  pbVar9[4] = 0x6f;
  pbVar9[5] = 100;
  pbVar9[6] = 0x65;
  if (*(byte *)((int)local_64 + local_68 + -1) != 0x2f) {
    if (local_6c == local_64) {
      FUN_015bf41c(&local_6c,local_64,1,1,1);
    }
    *(byte *)(local_68 + (int)local_64) = 0x2f;
    local_64 = (byte ***********)((int)local_64 + 1);
  }
  if ((uint)((int)local_6c - (int)local_64) < 4) {
    FUN_015bf41c(&local_6c,local_64,4,1,1);
  }
  iVar23 = local_68;
  pppppppppppbVar20 = local_6c;
  pbVar9 = (byte *)(local_68 + (int)local_64);
  pbVar9[0] = 0x6e;
  pbVar9[1] = 0x61;
  pbVar9[2] = 0x6d;
  pbVar9[3] = 0x65;
  local_64 = local_64 + 1;
  FUN_015ec424(&local_e0,local_68);
  if (pppppppppppbVar20 != (byte ***********)0x0) {
    thunk_FUN_016d3fb4(iVar23);
  }
  pppppppppppbVar20 = local_d8;
  if (local_e0 == (byte ***********)&DAT_80000000) {
    local_60 = (byte ***********)&DAT_80000000;
    if ((char)local_dc == '\x03') {
      ppppppppppbVar22 = local_d8[1];
      ppppppppppbVar28 = *local_d8;
      pppppppppbVar14 = *ppppppppppbVar22;
      if (pppppppppbVar14 != (byte *********)0x0) {
        (*(code *)pppppppppbVar14)(ppppppppppbVar28);
      }
      if (ppppppppppbVar22[1] != (byte *********)0x0) {
        thunk_FUN_016d3fb4(ppppppppppbVar28);
      }
      thunk_FUN_016d3fb4(pppppppppppbVar20);
    }
  }
  else {
    local_60 = local_e0;
    local_5c = local_dc;
    pppppppppppbStack_58 = local_d8;
  }
  FUN_0113d324(&local_e0,local_198,local_194,&DAT_00567728,4);
  pppppppppppbVar27 = local_d8;
  pppppppppppbVar26 = local_dc;
  pppppppppppbVar20 = local_e0;
  local_40 = (byte ***********)&local_19c;
  local_38 = (byte ***********)((uint)local_38 & 0xffffff00);
  local_3c = (byte ***********)CONCAT13(local_3c._3_1_,0x90000);
  local_3c = (byte ***********)CONCAT22(local_3c._2_2_,0x100);
  FUN_0099f850(&local_190,&local_40);
  if (local_190 == (byte ***********)&DAT_80000000) {
    local_48 = (byte ***********)0x0;
    local_4c = (byte ************)&DAT_00000004;
    local_50 = (byte ***********)0x0;
  }
  else {
    ppppppppppppbVar11 = (byte ************)thunk_FUN_016d4a50(0x30);
    if (ppppppppppppbVar11 == (byte ************)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x30);
    }
    *ppppppppppppbVar11 = local_190;
    ppppppppppppbVar11[1] = local_18c;
    iVar23 = 0xc;
    local_100 = (byte ***********)&DAT_00000004;
    ppppppppppppbVar11[2] = local_188;
    local_f8 = (byte ***********)&DAT_00000001;
    local_128 = local_40;
    local_124 = local_3c;
    local_120 = local_38;
    local_fc = ppppppppppppbVar11;
    while( true ) {
      pppppppppppbVar12 = local_f8;
      FUN_0099f850(&local_e0,&local_128);
      if (local_e0 == (byte ***********)&DAT_80000000) break;
      if (pppppppppppbVar12 == local_100) {
        FUN_0099b978(&local_100,pppppppppppbVar12,1,0xc);
        ppppppppppppbVar11 = local_fc;
      }
      local_f8 = (byte ***********)((int)pppppppppppbVar12 + 1);
      puVar16 = (undefined4 *)((int)ppppppppppppbVar11 + iVar23);
      *puVar16 = local_e0;
      iVar23 = iVar23 + 0xc;
      puVar16[1] = local_dc;
      puVar16[2] = local_d8;
    }
    local_50 = local_100;
    local_4c = local_fc;
    local_48 = local_f8;
  }
  if ((DAT_018d9130 < 3) && (DAT_018d9800 != '\0')) {
    if (DAT_018d9800 == '\x01') {
LAB_0099e5ec:
      DataMemoryBarrier(0xb);
      puVar21 = DAT_018daa78;
      if (DAT_018dd984 != 2) {
        puVar21 = &DAT_018ae394;
      }
      pcVar15 = s_SetGloba_00414c05;
      if ((DAT_018dd984 == 2) && (pcVar15 = DAT_018daa74, DAT_018daa70 != 0)) {
        pcVar15 = DAT_018daa74 + (*(int *)(puVar21 + 8) - 1U & 0xfffffff8) + 8;
      }
      iVar23 = (**(code **)(puVar21 + 0x14))(pcVar15,DAT_018d97f8);
      if (iVar23 == 0) goto LAB_0099e798;
    }
    else if (DAT_018d9800 != '\x02') {
      cVar3 = FUN_0169ac90(&DAT_018d97f8);
      if (cVar3 == '\0') goto LAB_0099e798;
      if (cVar3 != '\x02') goto LAB_0099e5ec;
    }
    if (DAT_018d97f8[8] == (byte *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186934c);
    }
    local_124 = (byte ***********)DAT_018d97f8[8];
    local_120 = (byte ***********)DAT_018d97f8[9];
    local_11c = (byte ***********)DAT_018d97f8[10];
    local_2c[0] = local_48;
    local_160 = (byte ***********)(DAT_018d97f8 + 7);
    local_128 = (byte ***********)*local_160;
    local_30 = &local_190;
    local_118 = (byte ***********)0x0;
    local_34 = (byte ***********)&DAT_005943b7;
    local_184 = (byte ***********)&LAB_00fac484;
    local_188 = (byte ***********)local_2c;
    local_18c = (byte ***********)FUN_00847b70;
    local_190 = (byte ***********)&local_60;
    local_168 = (byte ***********)&local_100;
    local_f8 = (byte ***********)&DAT_018abb78;
    local_fc = &local_34;
    local_100 = (byte ***********)&local_128;
    local_d0 = (byte ***********)&local_168;
    local_164 = (byte ***********)&DAT_00000001;
    local_dc = (byte ***********)0x0;
    local_e0 = (byte ***********)&DAT_00000001;
    DataMemoryBarrier(0xb);
    pcVar15 = s_SetGloba_00414c05;
    puVar21 = &DAT_018ae394;
    if (DAT_018dd984 == 2) {
      pcVar15 = DAT_018daa74;
      puVar21 = DAT_018daa78;
      if (DAT_018daa70 != 0) {
        pcVar15 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
      }
    }
    local_cc = (byte ***********)DAT_018d97f8;
    iVar23 = (**(code **)(puVar21 + 0x28))(pcVar15,&local_e0);
    if (iVar23 != 0) {
      (**(code **)(puVar21 + 0x2c))(pcVar15,&local_e0);
    }
  }
LAB_0099e798:
  if (local_48 == (byte ***********)0x0) {
    FUN_00fab1e0(&local_e0,local_198,local_194);
    local_128 = (byte ***********)0x0;
    if (local_e0 == (byte ***********)0x0) {
      local_124 = local_d8;
      local_128 = local_dc;
    }
    local_dc = (byte ***********)FUN_0121e33c;
    local_e0 = (byte ***********)&local_128;
    FUN_00600d2c(&local_148,&DAT_00583a59,&local_e0);
    pppppppppppbVar12 = (byte ***********)FUN_0099eef0(&local_148);
    if (local_50 != (byte ***********)0x0) {
      thunk_FUN_016d3fb4(local_4c);
    }
    if (pppppppppppbVar20 != (byte ***********)0x0) {
      thunk_FUN_016d3fb4(pppppppppppbVar26);
    }
    if (((uint)local_60 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_5c);
    }
    pppppppppppbVar20 = (byte ***********)&DAT_80000000;
    if (local_19c == (byte ***********)0x0) goto LAB_0099ea24;
LAB_0099e8a0:
    thunk_FUN_016d3fb4(local_198);
    pppppppppppbVar27 = local_244;
  }
  else {
    local_1a8 = local_50;
    ppppppppppppbStack_1a4 = local_4c;
    pppppppppppbStack_1a0 = local_48;
    if (((uint)local_60 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_5c);
    }
    pppppppppppbVar12 = pppppppppppbVar26;
    local_244 = pppppppppppbVar27;
    if (local_19c != (byte ***********)0x0) goto LAB_0099e8a0;
  }
  if (pppppppppppbVar20 != (byte ***********)&DAT_80000000) {
    local_1b8 = local_1a8;
    ppppppppppppbStack_1b4 = ppppppppppppbStack_1a4;
    pppppppppppbStack_1b0 = pppppppppppbStack_1a0;
    if (pppppppppppbVar20 != (byte ***********)0x80000001) {
      param_1[1] = pppppppppppbVar12;
      param_1[2] = pppppppppppbVar27;
      param_1[3] = local_1a8;
      param_1[4] = ppppppppppppbStack_1a4;
      param_1[5] = pppppppppppbStack_1a0;
      *param_1 = pppppppppppbVar20;
      return;
    }
    local_244 = pppppppppppbVar27;
    goto LAB_0099d3b8;
  }
LAB_0099ea24:
  puVar16 = (undefined4 *)*piVar5;
  if (puVar16 != (undefined4 *)0x0) {
    (**(code **)*puVar16)();
  }
  *piVar5 = (int)pppppppppppbVar12;
  *param_1 = 0x80000000;
  return;
}

