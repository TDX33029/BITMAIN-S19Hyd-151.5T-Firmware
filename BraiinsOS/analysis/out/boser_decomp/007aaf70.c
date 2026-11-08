// FUN_007aaf70 @ 007aaf70 size=3684 calls_out=14 calls_in=1
// strings: Should have switched to stored and unencrypted beforehand

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_007aaf70(undefined4 *param_1,uint *param_2)

{
  byte bVar1;
  short sVar2;
  char cVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined1 uVar9;
  undefined2 uVar10;
  ushort uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  undefined2 uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined *puVar30;
  uint unaff_r6;
  uint uVar31;
  undefined2 uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  int iVar36;
  uint uVar37;
  uint *puVar38;
  undefined2 uVar39;
  ushort uVar40;
  undefined4 uVar41;
  bool bVar42;
  undefined8 uVar43;
  longlong lVar44;
  undefined *local_168;
  uint local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint local_128;
  uint local_110;
  int local_10c;
  uint local_108;
  undefined4 local_104;
  undefined *local_fc;
  undefined4 local_ec;
  int local_dc;
  uint local_d0;
  uint local_c4;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  char local_98;
  undefined1 uStack_97;
  undefined2 uStack_96;
  undefined1 uStack_94;
  undefined4 uStack_93;
  undefined1 uStack_8f;
  undefined1 uStack_8e;
  undefined1 uStack_8d;
  undefined1 uStack_8c;
  undefined1 uStack_8b;
  uint local_89;
  undefined1 local_85;
  uint local_84;
  uint local_80;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  undefined4 local_76;
  undefined4 local_72;
  uint local_6e;
  undefined *local_68;
  undefined4 local_64;
  undefined *local_60;
  uint *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  undefined4 local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  undefined2 local_30;
  undefined2 uStack_2e;
  undefined1 local_2c;
  
  uStack_93 = CONCAT13(uStack_93._3_1_,
                       CONCAT12(uStack_93._2_1_,CONCAT11(uStack_93._1_1_,(byte)uStack_93)));
  uVar12 = *param_2 ^ 3 | param_2[1];
  bVar42 = uVar12 == 0;
  if (bVar42) {
    uVar12 = param_2[2];
  }
  if (bVar42 && uVar12 == 0) {
    puVar38 = param_2 + 4;
LAB_007aafdc:
    uVar33 = param_2[0x419];
    uVar34 = param_2[0x41a];
    uVar40 = 10;
    uVar13 = puVar38[2];
    uVar14 = puVar38[3];
    local_168 = &DAT_01d30678;
    for (uVar12 = uVar33; uVar29 = 0xffffffff, uVar12 != uVar33 + uVar34 * 0xc0;
        uVar12 = uVar12 + 0xc0) {
      uVar31 = 0xffffffff;
      uVar37 = 0xffffffff;
      if (*(char *)(uVar12 + 0xab) == '\0') {
        uVar31 = *(uint *)(uVar12 + 0x48);
        if (*(int *)(uVar12 + 0x4c) != 0) {
          uVar31 = uVar29;
        }
        uVar37 = *(uint *)(uVar12 + 0x40);
        if (*(int *)(uVar12 + 0x44) != 0) {
          uVar37 = uVar29;
        }
      }
      uVar27 = *(uint *)(uVar12 + 0x60);
      if (*(int *)(uVar12 + 100) != 0) {
        uVar27 = uVar29;
      }
      if (*(int *)(uVar12 + 0x50) != 0) {
        uVar29 = *(uint *)(uVar12 + 0x54);
        if (uVar29 >> 0x10 == 0) goto LAB_007ab13c;
        FUN_019a6b0c(&local_68,0x28,1,&DAT_01d30750);
        if ((char)local_68 == '\x04') {
          uVar29 = (uint)local_68 >> 0x10;
          goto LAB_007ab13c;
        }
        if (((uint)local_68 & 0xff) == 4) {
          uVar29 = (uint)local_68 >> 0x10;
          goto LAB_007ab13c;
        }
LAB_007abb94:
        uVar41 = 0x80000001;
LAB_007abb98:
        param_1[2] = local_68;
        param_1[1] = uVar41;
        param_1[3] = local_64;
        goto LAB_007abbac;
      }
      uVar29 = 0;
LAB_007ab13c:
      if (*(int *)(uVar12 + 0x58) == 0) {
        uVar35 = 0;
      }
      else {
        uVar35 = *(uint *)(uVar12 + 0x5c);
        if (uVar35 >> 0x10 != 0) {
          FUN_019a6b0c(&local_68,0x28,1,&DAT_01d30750);
          if ((char)local_68 == '\x04') {
            uVar35 = (uint)local_68 >> 0x10;
          }
          else {
            if (((uint)local_68 & 0xff) != 4) goto LAB_007abb94;
            uVar35 = (uint)local_68 >> 0x10;
          }
        }
      }
      if ((*(ushort *)(uVar12 + 0xa0) & 1) == 0) {
        uVar24 = 0;
        uVar32 = 0x21;
      }
      else {
        uVar24 = *(undefined2 *)(uVar12 + 0xa4);
        uVar32 = *(undefined2 *)(uVar12 + 0xa2);
      }
      uVar15 = FUN_01af7f20(uVar12);
      bVar1 = *(byte *)(uVar12 + 0xac);
      uVar11 = (ushort)*(byte *)(uVar12 + 0xad);
      if ((uint)*(byte *)(uVar12 + 0xad) < (uVar15 & 0xffff)) {
        uVar11 = (ushort)uVar15;
      }
      uVar10 = FUN_01af7fe8(uVar12);
      uVar39 = 0;
      if (*(short *)(uVar12 + 0x94) != 0) {
        if (*(short *)(uVar12 + 0x94) == 1) {
          uVar39 = 8;
        }
        else {
          uVar39 = *(undefined2 *)(uVar12 + 0x96);
        }
      }
      uVar19 = *(uint *)(uVar12 + 0x34);
      uVar41 = *(undefined4 *)(uVar12 + 0x98);
      if (uVar19 >> 0x10 != 0) {
        FUN_019a6b0c(&local_68,0x28,1,&DAT_01d30750);
        if ((char)local_68 == '\x04') {
          uVar19 = (uint)local_68 >> 0x10;
        }
        else {
          if (((uint)local_68 & 0xff) != 4) goto LAB_007abb94;
          uVar19 = (uint)local_68 >> 0x10;
        }
      }
      if ((uVar29 ^ 0xffff) < uVar35) {
        uVar41 = 0x80000000;
        local_64 = 0x35;
        local_68 = &DAT_00533ceb;
        goto LAB_007abb98;
      }
      uVar29 = *(uint *)(uVar12 + 0x3c);
      if (uVar29 >> 0x10 != 0) {
        FUN_019a6b0c(&local_68,0x28,1,&DAT_01d30750);
        if (((char)local_68 != '\x04') && (((uint)local_68 & 0xff) != 4)) goto LAB_007abb94;
        uVar29 = (uint)local_68 >> 0x10;
      }
      uStack_94 = (undefined1)uVar39;
      uVar5 = uStack_94;
      uStack_93._0_1_ = (byte)((ushort)uVar39 >> 8);
      uVar6 = (byte)uStack_93;
      uStack_93._3_1_ = (undefined1)uVar32;
      uStack_8f = (undefined1)((ushort)uVar32 >> 8);
      uStack_93._1_1_ = (undefined1)uVar24;
      uVar7 = uStack_93._1_1_;
      uStack_93._2_1_ = (undefined1)((ushort)uVar24 >> 8);
      uVar8 = uStack_93._2_1_;
      uStack_8e = (undefined1)uVar41;
      uStack_8d = (undefined1)((uint)uVar41 >> 8);
      uStack_8c = (undefined1)((uint)uVar41 >> 0x10);
      uStack_8b = (undefined1)((uint)uVar41 >> 0x18);
      uVar9 = uStack_8b;
      unaff_r6 = CONCAT13(uStack_8c,CONCAT12(uStack_8d,CONCAT11(uStack_8e,uStack_8f)));
      local_98 = (char)uVar15;
      cVar3 = local_98;
      uStack_97 = (undefined1)(uVar15 >> 8);
      uVar4 = uStack_97;
      uVar41 = *(undefined4 *)(uVar12 + 0x9c);
      uStack_96 = uVar10;
      if (*(int *)(uVar12 + 0x50) == 0) {
        uVar25 = 0;
        uVar24 = 1;
        iVar36 = 0;
      }
      else {
        uVar35 = *(uint *)(uVar12 + 0x54);
        uVar25 = 0;
        if ((int)uVar35 < 0) {
LAB_007abdd0:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar25,local_110);
        }
        iVar36 = *(int *)(uVar12 + 0x50) + 8;
        if (uVar35 == 0) {
          uVar15 = 0;
          local_110 = 1;
          uStack_8f = 0;
          uStack_8e = 0;
          uStack_8d = 0;
          uStack_94 = 1;
          uStack_93 = 0;
          local_98 = '\0';
          uStack_97 = 0;
          uStack_96 = 0;
        }
        else {
          uVar25 = 1;
          local_110 = FUN_01298504(uVar35,1);
          if (local_110 == 0) {
            local_110 = uVar35;
            goto LAB_007abdd0;
          }
          uVar15 = 0;
          uStack_8f = 0;
          uStack_8e = 0;
          uStack_8d = 0;
          uStack_94 = (undefined1)local_110;
          uStack_93 = local_110 >> 8;
          local_98 = (char)uVar35;
          uStack_97 = (undefined1)(uVar35 >> 8);
          uStack_96 = (undefined2)(uVar35 >> 0x10);
          if (3 < uVar35) {
            uVar16 = 4;
            do {
              uVar22 = uVar15;
              if (uVar35 <= uVar15) {
LAB_007abdb8:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar22,uVar35,local_168);
              }
              uVar22 = uVar15 + 1;
              if (uVar35 <= uVar22) {
                local_168 = &DAT_01d30688;
                goto LAB_007abdb8;
              }
              uVar21 = uVar15 + 2;
              if (uVar35 <= uVar21) {
                local_168 = &DAT_01d30698;
                uVar22 = uVar21;
                goto LAB_007abdb8;
              }
              uVar26 = uVar15 + 3;
              if (uVar35 <= uVar26) {
                local_168 = &DAT_01d306a8;
                uVar22 = uVar26;
                goto LAB_007abdb8;
              }
              puVar20 = (undefined1 *)(iVar36 + uVar15);
              uVar21 = (uint)CONCAT11(*(undefined1 *)(iVar36 + uVar26),
                                      *(undefined1 *)(iVar36 + uVar21));
              uVar16 = uVar21 + uVar16;
              if (uVar35 < uVar16) {
                FUN_01ac6cbc(&local_98,puVar20,uVar35 - uVar15);
                break;
              }
              sVar2 = CONCAT11(*(undefined1 *)(iVar36 + uVar22),*puVar20);
              if (sVar2 != -0x5ee2 && sVar2 != 1) {
                if (uVar16 < uVar15) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(uVar15,uVar16,uVar35,&DAT_01d306b8);
                }
                FUN_01ac6cbc(&local_98,puVar20,uVar16 - uVar15);
              }
              iVar17 = uVar15 + uVar21;
              uVar15 = iVar17 + 4;
              uVar16 = iVar17 + 8;
            } while (uVar16 <= uVar35);
          }
        }
        if (uVar15 < uVar35) {
          FUN_01ac6cbc(&local_98,iVar36 + uVar15,uVar35 - uVar15);
        }
        uVar25 = CONCAT22(uStack_96,CONCAT11(uStack_97,local_98));
        uVar24 = CONCAT11((byte)uStack_93,uStack_94);
        iVar36 = CONCAT13(uStack_8d,CONCAT12(uStack_8e,CONCAT11(uStack_8f,uStack_93._3_1_)));
      }
      iVar17 = 0;
      if (*(int *)(uVar12 + 0x58) != 0) {
        iVar17 = *(int *)(uVar12 + 0x5c);
      }
      local_c4 = *(uint *)(uVar12 + 0x48);
      local_d0 = *(uint *)(uVar12 + 0x4c);
      uVar35 = *(uint *)(uVar12 + 0x40);
      iVar23 = *(int *)(uVar12 + 0x44);
      local_a0 = *(uint *)(uVar12 + 0x60);
      local_a4 = *(uint *)(uVar12 + 100);
      local_a8 = 0;
      local_fc = (undefined *)0x1;
      if (*(char *)(uVar12 + 0xab) == '\0') {
        if ((uint)(local_c4 != 0xffffffff) <= -local_d0) {
          local_10c = 8;
          local_108 = (uint)((uint)(uVar35 != 0xffffffff) <= (uint)-iVar23);
          if (local_108 != 0) {
            local_10c = 0x10;
          }
          goto LAB_007ab5a4;
        }
        if ((uint)(uVar35 != 0xffffffff) <= (uint)-iVar23) {
          local_10c = 8;
          local_fc = (undefined *)0x0;
          local_108 = 1;
          goto LAB_007ab5a4;
        }
        if (local_a4 != 0 || local_a4 < (0xfffffffe < local_a0)) {
          local_fc = (undefined *)0x0;
          local_10c = 0;
          local_108 = 0;
          goto LAB_007ab5c8;
        }
        bVar42 = true;
        local_fc = (undefined *)0x2;
        local_c4 = local_128;
        local_d0 = local_12c;
        local_a8 = local_134;
        local_a0 = local_138;
        local_a4 = local_13c;
        iVar18 = 0;
      }
      else {
        local_10c = 0x10;
        local_108 = 1;
LAB_007ab5a4:
        if ((uint)(local_a0 != 0xffffffff) <= -local_a4) {
LAB_007ab5c8:
          local_10c = local_10c + 8;
          local_a8 = 1;
        }
        local_ec = 0;
        local_104 = 0;
        iVar18 = local_10c + 4;
        bVar42 = false;
        local_dc = iVar23;
        local_130 = uVar35;
      }
      uVar35 = iVar18 + iVar17 + iVar36;
      if (uVar35 >> 0x10 != 0) {
        uVar41 = 0x80000000;
        uVar28 = 0x35;
        puVar30 = &DAT_00533ceb;
LAB_007abb7c:
        FUN_019bb7e0(uVar25,uVar24);
        local_64 = uVar28;
        local_68 = puVar30;
        goto LAB_007abb98;
      }
      uStack_93._0_1_ = (byte)(uVar11 >> 8) | bVar1;
      local_7a = (undefined2)uVar35;
      uStack_94 = (undefined1)uVar11;
      local_7c = (undefined2)uVar19;
      uStack_8d = uVar6;
      uStack_8c = uVar7;
      uStack_8b = uVar8;
      local_98 = 'P';
      uStack_97 = 0x4b;
      uStack_96 = 0x201;
      uStack_93._3_1_ = (undefined1)uVar10;
      uStack_8f = (undefined1)((ushort)uVar10 >> 8);
      uStack_8e = uVar5;
      uStack_93._0_2_ = CONCAT11(cVar3,(byte)uStack_93);
      uStack_93 = CONCAT22(CONCAT11(uStack_93._3_1_,uVar4),(undefined2)uStack_93);
      local_76 = 0;
      local_78 = (undefined2)uVar29;
      local_85 = uVar9;
      local_84 = uVar37;
      local_80 = uVar31;
      local_72 = uVar41;
      local_6e = uVar27;
      local_89 = unaff_r6;
      FUN_007b01f0(&local_68,puVar38,&local_98,0x2e);
      if (((char)local_68 != '\x04') && (((uint)local_68 & 0xff) != 4)) {
        uVar28 = local_64;
        puVar30 = local_68;
LAB_007abb78:
        uVar41 = 0x80000001;
        goto LAB_007abb7c;
      }
      FUN_007b01f0(&local_98,puVar38,*(undefined4 *)(uVar12 + 0x30),*(undefined4 *)(uVar12 + 0x34));
      if ((local_98 != '\x04') &&
         (puVar30 = (undefined *)CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)),
         local_98 != '\x04')) {
LAB_007ab9f0:
        uVar28 = CONCAT13(uStack_93._2_1_,
                          CONCAT12(uStack_93._1_1_,CONCAT11((byte)uStack_93,uStack_94)));
        goto LAB_007abb78;
      }
      if (!bVar42) {
        local_58 = local_c4;
        local_54 = local_d0;
        local_50 = local_108;
        local_4c = local_104;
        local_40 = local_a8;
        local_3c = local_ec;
        local_38 = local_a0;
        uStack_34 = local_a4;
        local_60 = local_fc;
        local_2c = 0;
        uStack_2e = (undefined2)local_10c;
        local_30 = 1;
        local_5c = (uint *)0x0;
        local_48 = local_130;
        local_44 = local_dc;
        uVar43 = FUN_01afa214(&local_60);
        iVar17 = (int)((ulonglong)uVar43 >> 0x20);
        unaff_r6 = (uint)uVar43;
        FUN_007b01f0(&local_98,puVar38,unaff_r6,iVar17);
        if ((local_98 != '\x04') &&
           (puVar30 = (undefined *)CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)),
           local_98 != '\x04')) {
          uVar28 = CONCAT13(uStack_93._2_1_,
                            CONCAT12(uStack_93._1_1_,CONCAT11((byte)uStack_93,uStack_94)));
          uVar41 = 0x80000001;
          if (iVar17 != 0) {
            thunk_FUN_01be4678(unaff_r6);
          }
          goto LAB_007abb7c;
        }
        if (iVar17 != 0) {
          thunk_FUN_01be4678(unaff_r6);
        }
      }
      if (((((iVar36 != 0) && (FUN_007b01f0(&local_98,puVar38,uVar24,iVar36), local_98 != '\x04'))
           && (puVar30 = (undefined *)CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)),
              local_98 != '\x04')) ||
          (((*(int *)(uVar12 + 0x58) != 0 &&
            (FUN_007b01f0(&local_98,puVar38,*(int *)(uVar12 + 0x58) + 8,
                          *(undefined4 *)(uVar12 + 0x5c)), local_98 != '\x04')) &&
           (puVar30 = (undefined *)CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)),
           local_98 != '\x04')))) ||
         ((FUN_007b01f0(&local_98,puVar38,*(undefined4 *)(uVar12 + 0x38),
                        *(undefined4 *)(uVar12 + 0x3c)), local_98 != '\x04' &&
          (puVar30 = (undefined *)CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)),
          local_98 != '\x04')))) goto LAB_007ab9f0;
      FUN_019bb7e0(uVar25,uVar24);
      uVar11 = FUN_01af7f20(uVar12);
      local_128 = local_c4;
      if (uVar40 < uVar11) {
        uVar40 = uVar11;
      }
      local_12c = local_d0;
      local_134 = local_a8;
      local_138 = local_a0;
      local_13c = local_a4;
    }
    uVar33 = puVar38[3];
    uVar29 = puVar38[2];
    uVar34 = uVar29 - uVar13;
    uVar37 = uVar33 - (uVar14 + (uVar29 < uVar13));
    uVar12 = uVar37;
    if (uVar37 <= uVar14 && (uint)(uVar13 <= uVar34) <= uVar37 - uVar14) {
      uVar12 = uVar14;
    }
    uVar27 = param_2[0x41e];
    uVar31 = param_2[0x42a];
    if (uVar27 >> 0x10 == 0 && uVar12 == 0) {
      if (uVar31 != 0) goto LAB_007aba14;
LAB_007abc14:
      uVar43 = FUN_013d4df8(param_2[0x420],param_2[0x421]);
      uVar12 = (uint)((ulonglong)uVar43 >> 0x20);
      uVar41 = (undefined4)uVar43;
      if (uVar12 >> 0x10 == 0) {
        local_5c = (uint *)0x0;
        uVar33 = 0xffff;
        if (uVar27 < 0xffff) {
          uVar33 = uVar27;
        }
        local_4c = CONCAT22(local_4c._2_2_,(short)((ulonglong)uVar43 >> 0x20));
        local_58 = CONCAT22((short)uVar33,(short)uVar33);
        local_50 = uVar13;
        if (uVar14 != 0) {
          local_50 = 0xffffffff;
        }
        local_60 = (undefined *)0x6054b50;
        local_54 = uVar34;
        FUN_007b01f0(&local_98,puVar38,&local_60,0x16);
        if ((local_98 == '\x04') ||
           (puVar30 = (undefined *)CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)),
           local_98 == '\x04')) {
          FUN_007b01f0(&local_60,puVar38,uVar41,uVar12);
          if (((char)local_60 == '\x04') || (((uint)local_60 & 0xff) == 4)) {
            if (uVar12 != 0) {
              thunk_FUN_01be4678(uVar41);
            }
            param_1[2] = uVar13;
            param_1[3] = uVar14;
            uVar41 = 0;
            goto LAB_007abbb0;
          }
          puVar30 = local_60;
          puVar38 = local_5c;
        }
        else {
          puVar38 = (uint *)CONCAT13(uStack_93._2_1_,
                                     CONCAT12(uStack_93._1_1_,CONCAT11((byte)uStack_93,uStack_94)));
        }
        uVar25 = 0x80000001;
        if (uVar12 != 0) goto LAB_007abd54;
      }
      else {
        uVar25 = 0x80000000;
        puVar38 = (uint *)&DAT_00000024;
        puVar30 = &DAT_003e1d0e;
LAB_007abd54:
        thunk_FUN_01be4678(uVar41);
      }
      param_1[1] = uVar25;
      param_1[2] = puVar30;
      param_1[3] = puVar38;
    }
    else {
      if (uVar31 == 0) {
        lVar44 = (ulonglong)unaff_r6 << 0x20;
        local_5c = (uint *)0x2c;
      }
      else {
LAB_007aba14:
        lVar44 = FUN_013d4df8(uVar31,param_2[0x42b]);
        local_5c = (uint *)((int)((ulonglong)lVar44 >> 0x20) + 0x2c);
        uVar27 = param_2[0x41e];
      }
      iVar36 = (int)((ulonglong)lVar44 >> 0x20);
      iVar17 = (int)lVar44;
      local_4c = 0;
      local_50 = 0;
      local_3c = 0;
      local_30 = (undefined2)uVar13;
      uStack_2e = (undefined2)(uVar13 >> 0x10);
      local_2c = (undefined1)uVar14;
      local_44 = 0;
      local_60 = (undefined *)0x6064b50;
      local_54 = CONCAT22(uVar40,uVar40);
      local_48 = uVar27;
      local_40 = uVar27;
      local_38 = uVar34;
      uStack_34 = uVar37;
      FUN_007b01f0(&local_98,puVar38,&local_60,0x38);
      if ((local_98 == '\x04') ||
         (puVar30 = (undefined *)CONCAT22(uStack_96,CONCAT11(uStack_97,local_98)),
         local_98 == '\x04')) {
        if (iVar17 != 0) {
          FUN_007b01f0(&local_60,puVar38,iVar17,iVar36);
          if (((char)local_60 != '\x04') && (((uint)local_60 & 0xff) != 4)) {
            puVar30 = local_60;
            puVar38 = local_5c;
            goto LAB_007abce0;
          }
          if (iVar36 != 0) {
            thunk_FUN_01be4678(iVar17);
          }
        }
        local_50 = 1;
        local_5c = (uint *)0x0;
        local_60 = (undefined *)0x7064b50;
        local_58 = uVar29;
        local_54 = uVar33;
        FUN_007b01f0(&local_98,puVar38,&local_60,0x14);
        if ((local_98 == '\x04') || (local_98 == '\x04')) {
          uVar34 = 0xffffffff;
          uVar27 = param_2[0x41e];
          goto LAB_007abc14;
        }
        param_1[1] = 0x80000001;
        param_1[2] = CONCAT22(uStack_96,CONCAT11(uStack_97,local_98));
        param_1[3] = CONCAT13(uStack_93._2_1_,
                              CONCAT12(uStack_93._1_1_,CONCAT11((byte)uStack_93,uStack_94)));
      }
      else {
        puVar38 = (uint *)CONCAT13(uStack_93._2_1_,
                                   CONCAT12(uStack_93._1_1_,CONCAT11((byte)uStack_93,uStack_94)));
        if (iVar17 != 0) {
LAB_007abce0:
          if (iVar36 != 0) {
            thunk_FUN_01be4678(iVar17);
          }
        }
        param_1[1] = 0x80000001;
        param_1[2] = puVar30;
        param_1[3] = puVar38;
      }
    }
  }
  else {
    FUN_01af9864(&local_60,"Should have switched to stored and unencrypted beforehand",0x39);
    puVar38 = local_5c;
    if (((char)local_60 == '\x04') || (((uint)local_60 & 0xff) == 4)) goto LAB_007aafdc;
    param_1[2] = local_60;
    param_1[1] = 0x80000001;
    param_1[3] = local_5c;
  }
LAB_007abbac:
  uVar41 = 1;
LAB_007abbb0:
  *param_1 = uVar41;
  return;
}

