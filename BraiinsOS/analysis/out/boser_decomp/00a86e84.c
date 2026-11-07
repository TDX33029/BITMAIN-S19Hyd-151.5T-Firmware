// FUN_00a86e84 @ 00a86e84 size=3740 calls_out=26 calls_in=1
// strings: hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00a86e84(uint *param_1,uint *param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  char cVar6;
  int iVar7;
  int *piVar8;
  undefined2 *puVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  undefined1 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint *puVar18;
  char *pcVar19;
  uint *puVar20;
  undefined2 *local_dd8;
  undefined2 *local_dd4;
  undefined2 *local_dd0;
  undefined2 *local_da4;
  undefined1 local_da0;
  undefined2 *local_d64;
  undefined2 local_d60;
  undefined1 local_d5e;
  undefined2 local_d3a;
  undefined2 *local_d38;
  undefined2 *puStack_d34;
  undefined2 *puStack_d30;
  undefined1 local_d2c;
  undefined2 *local_d28;
  undefined2 *local_d24;
  undefined2 *local_d20;
  undefined2 *puStack_d1c;
  undefined2 *puStack_d18;
  undefined1 local_d14;
  undefined1 local_d13;
  undefined2 local_d12;
  undefined1 local_d10;
  undefined2 local_d0f;
  undefined1 local_d0d;
  undefined1 auStack_d08 [152];
  undefined2 *local_c70;
  undefined2 *puStack_c6c;
  undefined2 *puStack_c68;
  undefined2 *local_c64;
  undefined2 *puStack_c60;
  uint uStack_c5c;
  uint uStack_c58;
  undefined4 local_c48;
  undefined2 *puStack_c44;
  undefined2 *puStack_c40;
  undefined2 *local_c3c;
  undefined4 local_c38;
  uint uStack_c34;
  uint uStack_c30;
  undefined2 *local_c28;
  undefined2 *local_c24;
  undefined2 *local_c20;
  undefined2 *local_c1c;
  undefined2 *local_c18;
  undefined4 local_c14;
  undefined4 local_c10;
  undefined2 *puStack_c0c;
  undefined2 *local_c08;
  undefined2 *local_c04;
  undefined2 *local_c00;
  undefined2 *local_bfc;
  uint uStack_bf8;
  uint uStack_bf4;
  undefined4 local_bf0;
  undefined2 *local_bb8;
  undefined2 *puStack_bb4;
  undefined2 *puStack_bb0;
  undefined2 *puStack_bac;
  undefined4 local_ba8;
  undefined4 uStack_ba4;
  undefined4 uStack_ba0;
  uint uStack_b9c;
  int *local_b98;
  undefined4 local_b94;
  undefined4 local_b90;
  undefined4 uStack_b8c;
  undefined4 uStack_b88;
  undefined4 uStack_b84;
  undefined4 local_b80;
  undefined4 uStack_b7c;
  undefined4 uStack_b78;
  undefined4 uStack_b74;
  undefined4 uStack_b70;
  undefined2 *local_b6c;
  undefined2 *puStack_b68;
  undefined2 *puStack_b64;
  undefined2 *local_b60;
  undefined2 *puStack_b5c;
  uint uStack_b58;
  uint uStack_b54;
  int *local_b50;
  byte local_b38;
  undefined1 local_b37;
  int *local_278;
  undefined1 local_274;
  undefined1 auStack_273 [43];
  undefined1 local_248;
  undefined2 *local_240;
  undefined2 *puStack_23c;
  undefined2 *puStack_238;
  undefined2 *local_234;
  undefined4 local_180;
  undefined2 *local_17c;
  undefined2 *local_178;
  undefined2 *local_174;
  undefined2 *puStack_170;
  undefined4 local_16c;
  uint local_168;
  undefined2 *local_164;
  undefined2 *local_160;
  undefined2 *local_15c;
  undefined2 *local_158;
  undefined2 *local_154;
  uint uStack_150;
  uint uStack_14c;
  undefined4 local_148;
  int *local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int *local_c8;
  byte local_c4;
  undefined2 *local_c0;
  undefined2 *local_bc;
  undefined2 *local_b8;
  undefined2 *local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  uint local_a4;
  undefined2 *local_a0;
  undefined2 *local_9c;
  undefined2 *puStack_98;
  undefined2 *local_94;
  undefined2 *puStack_90;
  uint uStack_8c;
  uint uStack_88;
  undefined4 ******local_80;
  undefined **local_7c;
  undefined4 *local_78;
  undefined4 ******local_70;
  undefined **local_6c;
  undefined4 *local_68;
  undefined4 *****local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined *local_50;
  undefined4 local_4c;
  undefined4 ******local_48;
  undefined **local_44;
  undefined4 *local_40;
  undefined4 ******ppppppuStack_38;
  undefined **ppuStack_34;
  undefined4 *puStack_30;
  
  if (*param_2 == 5) {
    uVar12 = param_2[0xf];
    *(undefined1 *)(param_2 + 0xf) = 3;
    if ((char)uVar12 == '\x03') {
LAB_00a87c60:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_0051d182,0x1d,&DAT_01d21154);
    }
    uVar13 = param_2[2];
    uVar15 = param_2[3];
    uVar16 = param_2[4];
    *param_1 = param_2[1];
    param_1[1] = uVar13;
    param_1[2] = uVar15;
    param_1[3] = uVar16;
    uVar13 = param_2[6];
    uVar15 = param_2[7];
    uVar16 = param_2[8];
    uVar17 = param_2[9];
    param_1[4] = param_2[5];
    param_1[5] = uVar13;
    param_1[6] = uVar15;
    param_1[7] = uVar16;
    param_1[8] = uVar17;
    uVar13 = param_2[0xb];
    uVar15 = param_2[0xc];
    uVar16 = param_2[0xd];
    uVar17 = param_2[0xe];
    param_1[9] = param_2[10];
    param_1[10] = uVar13;
    param_1[0xb] = uVar15;
    param_1[0xc] = uVar16;
    param_1[0xd] = uVar17;
    uVar2 = *(undefined2 *)((int)param_2 + 0x3d);
    uVar14 = *(undefined1 *)((int)param_2 + 0x3f);
    *(char *)(param_1 + 0xe) = (char)uVar12;
    *(undefined1 *)((int)param_1 + 0x3b) = uVar14;
    *(undefined2 *)((int)param_1 + 0x39) = uVar2;
  }
  else {
    uVar13 = (uint)&local_c28 | 2;
    uVar12 = *param_2;
    while( true ) {
      iVar7 = uVar12 - 2;
      if (uVar12 < 2) {
        iVar7 = 0;
      }
      puVar18 = param_2;
      if (iVar7 == 1) {
        puVar18 = param_2 + 1;
      }
      if (iVar7 != 0) break;
      puVar20 = puVar18 + 0x30;
      if (*puVar18 != 2) {
        uVar12 = (uint)(byte)*puVar20;
      }
      if (*puVar18 == 2 || uVar12 == 6) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("Map must not be polled after it returned `Poll::Ready`",0x36,&DAT_01d2da7c);
      }
      while( true ) {
        iVar7 = uVar12 - 3;
        if (uVar12 < 3 || iVar7 == 0) {
          iVar7 = 0;
        }
        if (iVar7 != 0) break;
        *(byte *)puVar20 = 3;
        if (uVar12 == 3) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(&DAT_0050d999,0xe,&DAT_01d1de34);
        }
        FUN_01bed4e2(&local_240,(int)puVar18 + 0xc1,0x2b);
        piVar8 = (int *)puVar18[0x3b];
        do {
          iVar7 = *piVar8;
          bVar3 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar3);
        *piVar8 = iVar7 + 1;
        if (iVar7 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xa87d38);
          (*pcVar1)();
        }
        local_274 = (undefined1)uVar12;
        local_278 = piVar8;
        FUN_01bed4e2(auStack_273,&local_240,0x2b);
        local_248 = 0;
        uVar15 = thunk_FUN_01be5118(0x9e8);
        if (uVar15 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x9e8);
        }
        FUN_01bed4e2(uVar15,&local_c28,0x9e8);
        FUN_00a7af24(puVar20);
        uVar12 = 4;
        *(undefined1 *)(puVar18 + 0x30) = 4;
        puVar18[0x31] = uVar15;
        puVar18[0x32] = (uint)&DAT_01d2dfcc;
      }
      if (iVar7 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0050d9a7,0x2b,&DAT_01d1de44);
      }
      (**(code **)(puVar18[0x32] + 0xc))(&local_c28,puVar18[0x31],param_3);
      uVar12 = (uint)local_c28 & 0xffff;
      if (uVar12 == 3) {
        local_240 = local_c24;
        puStack_23c = local_c20;
        puStack_238 = local_c1c;
        local_234 = local_c18;
        FUN_00a7af24(puVar20);
        *(byte *)puVar20 = 5;
        FUN_01bed4e2(uVar13,&local_240,0x10);
        uVar12 = 3;
        local_c48 = local_c28;
        puStack_c44 = local_c24;
        puStack_c40 = local_c20;
        local_c3c = local_c1c;
        local_c38 = (undefined2 *)CONCAT22(local_c38._2_2_,local_c18._0_2_);
        bVar3 = false;
      }
      else {
        if (uVar12 == 4) {
          *(undefined1 *)(param_1 + 0xe) = 3;
          return;
        }
        FUN_01bed4e2((int)&local_c38 + 2,&local_c14,0xc);
        local_da4 = local_bfc;
        local_dd8 = local_c00;
        local_dd4 = local_c04;
        local_dd0 = local_c08;
        FUN_01bed4e2(&local_c48,uVar13,0x12);
        bVar3 = (byte)*puVar20 == 6;
      }
      local_180._0_2_ = (short)uVar12;
      FUN_01bed4e2((uint)&local_180 | 2,&local_c48,0x1e);
      if (bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
      }
      local_160 = local_dd0;
      local_15c = local_dd4;
      FUN_009d6730(puVar20);
      puVar5 = local_178;
      puVar4 = local_17c;
      *(byte *)puVar20 = 6;
      if (uVar12 == 3) {
        uVar14 = 3;
        local_a0 = local_174;
        local_9c = puStack_170;
        bVar3 = true;
        local_d64 = local_178;
        puVar9 = local_17c;
      }
      else {
        puVar9 = (undefined2 *)thunk_FUN_01be5118(0x30);
        if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x30);
        }
        *puVar9 = (short)uVar12;
        *(undefined2 **)(puVar9 + 2) = puVar4;
        *(undefined2 **)(puVar9 + 4) = puVar5;
        uVar14 = 2;
        puVar9[1] = local_180._2_2_;
        *(undefined2 **)(puVar9 + 6) = local_174;
        *(undefined2 **)(puVar9 + 8) = puStack_170;
        *(uint *)(puVar9 + 10) = local_16c;
        *(uint *)(puVar9 + 0xc) = local_168;
        *(undefined2 **)(puVar9 + 0xe) = local_164;
        *(undefined2 **)(puVar9 + 0x10) = local_160;
        *(undefined2 **)(puVar9 + 0x12) = local_15c;
        *(undefined2 **)(puVar9 + 0x14) = local_dd8;
        *(undefined2 **)(puVar9 + 0x16) = local_da4;
        bVar3 = false;
        local_d64 = (undefined2 *)&DAT_01d2cbc8;
      }
      local_d20 = local_a0;
      puStack_d1c = local_9c;
      puStack_d18 = puStack_98;
      local_d14 = local_94._0_1_;
      local_d10 = 2;
      local_d28 = puVar9;
      local_d24 = local_d64;
      local_d13 = uVar14;
      if (*puVar18 == 2) {
LAB_00a87cd8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2da6c);
      }
      FUN_01bed4e2(&local_c28,puVar18,0xc0);
      if ((char)puVar18[0x30] != '\x06') {
        FUN_009d6730(puVar20);
      }
      puVar4 = local_c28;
      FUN_01bed4e2(auStack_d08,(uint)&local_c28 | 4,0xbc);
      *puVar18 = 2;
      if (puVar4 == (undefined2 *)0x2) goto LAB_00a87cd8;
      local_240 = puVar4;
      FUN_01bed4e2((uint)&local_240 | 4,auStack_d08,0xbc);
      if (!bVar3) {
        local_d38 = local_d20;
        puStack_d34 = puStack_d1c;
        puStack_d30 = puStack_d18;
        local_d2c = local_d14;
        local_d60 = local_d0f;
        local_d5e = local_d0d;
        local_d3a = local_d12;
        FUN_00a86574(&local_240);
        local_c20 = local_d38;
        local_c1c = puStack_d34;
        local_c18 = puStack_d30;
        local_c14 = CONCAT22(local_d3a,CONCAT11(uVar14,local_d2c));
        local_c10 = CONCAT13(local_d5e,CONCAT21(local_d60,2));
        local_c28 = puVar9;
        local_c24 = local_d64;
        FUN_009d6a4c(param_2);
        local_148._0_1_ = 2;
        *param_2 = 4;
        local_168._0_1_ = 2;
        local_240 = local_d38;
        puStack_23c = puStack_d34;
        puStack_238 = puStack_d30;
        local_234._0_1_ = local_d2c;
        local_a0._0_2_ = local_d3a;
        local_c48 = (undefined2 *)(uint)CONCAT12(local_d5e,local_d60);
        local_180 = puVar9;
        local_16c._1_1_ = uVar14;
        goto LAB_00a87ac0;
      }
      local_180 = puVar4;
      FUN_01bed4e2((uint)&local_180 | 4,auStack_d08,0xbc);
      local_b8 = local_d20;
      local_b4 = puStack_d1c;
      local_c0 = puVar9;
      local_bc = local_d64;
      FUN_014435a8(&local_b0,puStack_d1c);
      uVar12 = local_a4 & 0xff;
      if (uVar12 == 0 && local_c4 == 0) {
        local_c28 = local_c70;
        local_c24 = puStack_c6c;
        local_c20 = puStack_c68;
        local_c1c = local_c64;
        local_c18 = puStack_c60;
        local_c14 = uStack_c5c;
        local_c10 = uStack_c58;
        FUN_00a7d68c(&local_c48,&local_c8,&local_c28,1);
        FUN_00a800bc(&local_c28);
        if ((char)local_c48 != '\x03') {
          local_c28 = local_c48;
          local_c24 = puStack_c44;
          local_c20 = puStack_c40;
          local_c1c = local_c3c;
          local_c18 = local_c38;
          local_c14 = uStack_c34;
          local_c10 = uStack_c30;
          if ((DAT_01d50f88 == 0) &&
             (((DAT_01d4fbc8 - 1 < 2 ||
               ((DAT_01d4fbc8 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4fbc0), cVar6 != '\0')))) &&
              (iVar7 = FUN_01aaa278(DAT_01d4fbc0), iVar7 != 0)))) {
            if (*(int *)(DAT_01d4fbc0 + 0x20) == 0) {
LAB_00a87d20:
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d21018);
            }
            local_6c = &local_50;
            local_70 = &local_64;
            local_80 = &local_70;
            local_78 = (undefined4 *)(DAT_01d4fbc0 + 0x1c);
            local_64 = (undefined4 *****)*local_78;
            local_5c = *(undefined4 *)(DAT_01d4fbc0 + 0x24);
            local_58 = *(undefined4 *)(DAT_01d4fbc0 + 0x28);
            local_54 = 0;
            local_7c = (undefined **)&DAT_00000001;
            local_68 = (undefined4 *)&DAT_01d2ea4c;
            local_4c = 0x43;
            local_50 = &DAT_0051cef7;
            local_60 = *(int *)(DAT_01d4fbc0 + 0x20);
            FUN_01aaaecc(DAT_01d4fbc0,&local_80);
            iVar7 = DAT_01d4fbc0;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_44 = *(undefined ***)(DAT_01d4fbc0 + 0x14);
              local_40 = *(undefined4 **)(DAT_01d4fbc0 + 0x18);
              local_48 = (undefined4 ******)&DAT_00000005;
              DataMemoryBarrier(0xb);
              pcVar19 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar19 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar11 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar11 = &DAT_01cfc5e0;
              }
              iVar10 = (*(code *)puVar11[3])(pcVar19,&local_48);
              if (iVar10 != 0) {
                ppppppuStack_38 = local_48;
                ppuStack_34 = local_44;
                puStack_30 = local_40;
                FUN_01aaa328(iVar7,pcVar19,puVar11[4],&ppppppuStack_38,&local_80);
              }
            }
          }
          else {
            iVar7 = DAT_01d4fbc0;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_7c = *(undefined ***)(DAT_01d4fbc0 + 0x14);
              local_78 = *(undefined4 **)(DAT_01d4fbc0 + 0x18);
              local_80 = (undefined4 ******)&DAT_00000005;
              DataMemoryBarrier(0xb);
              pcVar19 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar19 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar11 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar11 = &DAT_01cfc5e0;
              }
              iVar10 = (*(code *)puVar11[3])(pcVar19,&local_80);
              if (iVar10 != 0) {
                if (*(int *)(DAT_01d4fbc0 + 0x20) == 0) goto LAB_00a87d20;
                local_44 = &local_50;
                local_48 = &local_64;
                local_70 = &local_48;
                local_5c = *(undefined4 *)(DAT_01d4fbc0 + 0x24);
                local_58 = *(undefined4 *)(DAT_01d4fbc0 + 0x28);
                local_54 = 0;
                local_6c = (undefined **)&DAT_00000001;
                local_40 = (undefined4 *)&DAT_01d2ea4c;
                local_4c = 0x43;
                local_50 = &DAT_0051cef7;
                ppppppuStack_38 = local_80;
                ppuStack_34 = local_7c;
                puStack_30 = local_78;
                local_68 = (undefined4 *)(DAT_01d4fbc0 + 0x1c);
                local_64 = *(undefined4 ******)(DAT_01d4fbc0 + 0x1c);
                local_60 = *(int *)(DAT_01d4fbc0 + 0x20);
                FUN_01aaa328(iVar7,pcVar19,puVar11[4],&ppppppuStack_38,&local_70);
              }
            }
          }
          local_a0 = local_c28;
          local_9c = local_c24;
          puStack_98 = local_c20;
          local_94 = local_c1c;
          puStack_90 = local_c18;
          uStack_8c = local_c14;
          uStack_88 = local_c10;
          uVar12 = local_a4 & 0xff;
          goto LAB_00a87808;
        }
        iVar7 = thunk_FUN_01be5118(0x17);
        if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,0x17);
        }
        FUN_01bed4e2(iVar7,&DAT_0051cee0,0x17);
        puVar11 = (undefined4 *)thunk_FUN_01be5118(0xc);
        if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0xc);
        }
        *puVar11 = 0x17;
        puVar11[1] = iVar7;
        puVar11[2] = 0x17;
        FUN_014323b0(&local_b0);
        FUN_00a7afe4(&local_c0);
        if (local_c8 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar7 = *local_c8;
            bVar3 = (bool)hasExclusiveAccess(local_c8);
          } while (!bVar3);
          *local_c8 = iVar7 + -1;
          if (iVar7 == 1) {
            DataMemoryBarrier(0xb);
            FUN_00a8021c(local_c8);
          }
        }
        FUN_017044f0(&local_180);
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *local_110;
          bVar3 = (bool)hasExclusiveAccess(local_110);
        } while (!bVar3);
        *local_110 = iVar7 + -1;
        local_da0 = 2;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018531c0(local_110,local_10c);
        }
      }
      else {
        local_a0 = local_c70;
        local_9c = puStack_c6c;
        puStack_98 = puStack_c68;
        local_94 = local_c64;
        puStack_90 = puStack_c60;
        uStack_8c = uStack_c5c;
        uStack_88 = uStack_c58;
LAB_00a87808:
        local_b38 = local_c4 & 1 | uVar12 == 0;
        FUN_01bed4e2(&local_c28,&local_180,0x70);
        local_bb8 = local_c0;
        puStack_bb4 = local_bc;
        puStack_bb0 = local_b8;
        puStack_bac = local_b4;
        local_b98 = local_110;
        local_b94 = local_10c;
        local_b90 = local_108;
        uStack_b8c = uStack_104;
        uStack_b88 = uStack_100;
        uStack_b84 = uStack_fc;
        local_b80 = local_f8;
        uStack_b7c = uStack_f4;
        uStack_b78 = uStack_f0;
        uStack_b74 = uStack_ec;
        uStack_b70 = uStack_e8;
        local_b50 = local_c8;
        local_b6c = local_a0;
        puStack_b68 = local_9c;
        puStack_b64 = puStack_98;
        local_b60 = local_94;
        puStack_b5c = puStack_90;
        uStack_b58 = uStack_8c;
        uStack_b54 = uStack_88;
        local_ba8 = local_b0;
        uStack_ba4 = uStack_ac;
        uStack_ba0 = uStack_a8;
        uStack_b9c = local_a4;
        local_b37 = 0;
        puVar11 = (undefined4 *)thunk_FUN_01be5118(0x368);
        if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x368);
        }
        FUN_01bed4e2(puVar11,&local_c28,0x368);
        local_da0 = 4;
      }
      FUN_009d6a4c(param_2);
      uVar12 = 3;
      *param_2 = 3;
      param_2[1] = (uint)puVar11;
      param_2[2] = (uint)&DAT_01c0f964;
      param_2[3] = (uint)local_d38;
      param_2[4] = (uint)puStack_d34;
      param_2[5] = (uint)puStack_d30;
      *(undefined1 *)(param_2 + 6) = local_d2c;
      *(undefined1 *)((int)param_2 + 0x19) = 2;
      *(undefined2 *)((int)param_2 + 0x1a) = local_d3a;
      *(undefined1 *)(param_2 + 7) = 0;
      FUN_01bed4e2((int)param_2 + 0x1d,&local_d60,0x1f);
      *(undefined1 *)(param_2 + 0xf) = local_da0;
    }
    if (iVar7 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_0050c6d6,0x22,&DAT_01d1dfac);
    }
    cVar6 = (char)puVar18[0xe];
    if (cVar6 == '\x04') {
      FUN_008da2d4(&local_c28,*puVar18,param_3);
      if ((char)local_bf0 == '\x03') {
        *(undefined1 *)(param_1 + 0xe) = 3;
        return;
      }
    }
    else {
      *(undefined1 *)(puVar18 + 0xe) = 3;
      if (cVar6 == '\x03') goto LAB_00a87c60;
      local_c28 = (undefined2 *)*puVar18;
      local_c24 = (undefined2 *)puVar18[1];
      local_c20 = (undefined2 *)puVar18[2];
      local_c1c = (undefined2 *)puVar18[3];
      local_c18 = (undefined2 *)puVar18[4];
      local_c14 = puVar18[5];
      local_c10 = puVar18[6];
      puStack_c0c = (undefined2 *)puVar18[7];
      local_c08 = (undefined2 *)puVar18[8];
      local_c04 = (undefined2 *)puVar18[9];
      local_c00 = (undefined2 *)puVar18[10];
      local_bfc = (undefined2 *)puVar18[0xb];
      uStack_bf8 = puVar18[0xc];
      uStack_bf4 = puVar18[0xd];
      local_bf0 = CONCAT13(*(undefined1 *)((int)puVar18 + 0x3b),
                           CONCAT21(*(undefined2 *)((int)puVar18 + 0x39),cVar6));
    }
    local_180 = local_c28;
    local_17c = local_c24;
    local_178 = local_c20;
    local_174 = local_c1c;
    puStack_170 = local_c18;
    local_16c = local_c14;
    local_168 = local_c10;
    local_164 = puStack_c0c;
    local_160 = local_c08;
    local_15c = local_c04;
    local_158 = local_c00;
    local_154 = local_bfc;
    uStack_150 = uStack_bf8;
    uStack_14c = uStack_bf4;
    local_148 = local_bf0;
    FUN_009d6a4c(param_2);
    local_d64 = local_17c;
    *param_2 = 4;
    local_240 = local_178;
    puStack_23c = local_174;
    puStack_238 = puStack_170;
    local_234._0_1_ = (undefined1)local_16c;
    local_a0._0_2_ = (undefined2)(local_16c >> 0x10);
    local_c48 = (undefined2 *)(local_168 >> 8);
    local_c28 = local_164;
    local_c24 = local_160;
    local_c20 = local_15c;
    local_c1c = local_158;
    local_c18 = local_154;
    local_c14 = uStack_150;
    local_c10 = uStack_14c;
    local_d60 = local_148._1_2_;
    local_d5e = local_148._3_1_;
LAB_00a87ac0:
    *param_1 = (uint)local_180;
    param_1[1] = (uint)local_d64;
    param_1[2] = (uint)local_240;
    param_1[3] = (uint)puStack_23c;
    param_1[4] = (uint)puStack_238;
    *(undefined1 *)(param_1 + 5) = local_234._0_1_;
    *(undefined1 *)((int)param_1 + 0x15) = local_16c._1_1_;
    *(undefined1 *)(param_1 + 6) = (undefined1)local_168;
    *(undefined2 *)((int)param_1 + 0x16) = local_a0._0_2_;
    *(undefined2 *)((int)param_1 + 0x19) = (undefined2)local_c48;
    *(undefined1 *)((int)param_1 + 0x1b) = local_c48._2_1_;
    param_1[7] = (uint)local_c28;
    param_1[8] = (uint)local_c24;
    param_1[9] = (uint)local_c20;
    param_1[10] = (uint)local_c1c;
    param_1[0xb] = (uint)local_c18;
    param_1[0xc] = local_c14;
    param_1[0xd] = local_c10;
    *(undefined1 *)(param_1 + 0xe) = (undefined1)local_148;
    *(undefined2 *)((int)param_1 + 0x39) = local_d60;
    *(undefined1 *)((int)param_1 + 0x3b) = local_d5e;
  }
  return;
}

