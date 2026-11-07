// FUN_00eb9494 @ 00eb9494 size=3468 calls_out=31 calls_in=2
// strings: application/grpc | Steer must wait for all services to be ready. Did you forget to call poll_ready()?

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00eb9494(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined2 *puVar4;
  undefined4 *puVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  ushort *puVar11;
  int iVar12;
  ushort uVar13;
  uint uVar14;
  undefined4 uVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ushort *puVar19;
  char *****pppppcVar20;
  char *****pppppcVar21;
  char *****pppppcVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined1 auStack_3a0 [192];
  char *****local_2e0;
  char *****local_2dc;
  undefined1 auStack_2d8 [120];
  undefined4 *local_260;
  undefined4 *local_258;
  undefined *local_254;
  undefined8 local_250;
  char *****local_248;
  char *****local_244;
  char *****pppppcStack_240;
  undefined4 local_23c;
  char *****pppppcStack_238;
  char *****pppppcStack_234;
  char *****pppppcStack_230;
  char *****pppppcStack_22c;
  char *****pppppcStack_228;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined1 auStack_1a8 [64];
  byte local_168 [4];
  char *****pppppcStack_164;
  char *****pppppcStack_160;
  char *****pppppcStack_15c;
  char *****pppppcStack_158;
  undefined4 local_154;
  undefined4 uStack_150;
  ushort *local_14c;
  uint local_148;
  undefined4 uStack_144;
  ushort local_140;
  char *****local_118;
  char *****local_114;
  char *****local_110;
  char *****local_10c;
  char *****local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  ushort *puStack_fc;
  uint uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_90;
  undefined4 local_8c;
  undefined8 local_88;
  char *****local_80;
  char *****local_7c;
  char *****local_78;
  undefined8 local_70;
  char *****pppppcStack_68;
  char *****pppppcStack_64;
  char *****pppppcStack_60;
  undefined4 local_5c;
  char *****local_58;
  char *****local_54;
  char *****local_50;
  undefined1 auStack_4c [4];
  char *****local_48;
  char *****local_40;
  char *****local_3c;
  char *****local_38;
  char *****pppppcStack_34;
  char *****pppppcStack_30;
  
  puVar4 = (undefined2 *)((uint)&local_118 | 1);
  pppppcVar20 = (char *****)*param_2;
  pppppcVar22 = (char *****)param_2[1];
  puVar5 = param_2 + 2;
  do {
    pcVar6 = (char *)0x0;
    if ((uint)(pppppcVar20 < &SUB_00000004) <= (uint)-(int)pppppcVar22) {
      pcVar6 = (char *)((int)pppppcVar20 + -3);
    }
    if (pcVar6 != (char *)0x0) {
      if (pcVar6 != &DAT_00000001) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0050d9a7,0x2b,&DAT_01d1de44);
      }
      FUN_00eba594(&local_250,puVar5,param_3);
      if ((char *****)local_250 == (char *****)0x3 && local_250._4_4_ == (char *****)0x0) {
        *param_1 = 3;
        param_1[1] = 0;
      }
      else {
        FUN_01bed4e2(&local_118,&local_250,0x50);
        FUN_00eba9a4(param_2);
        *param_2 = 5;
        param_2[1] = 0;
        FUN_01bed4e2(param_1,&local_118,0x50);
      }
      return;
    }
    iVar7 = param_2[0x30];
    if (iVar7 != 0) {
      uVar14 = param_2[0x2d];
      uVar16 = param_2[0x2f];
      do {
        iVar7 = iVar7 + -1;
        uVar8 = uVar16 - uVar14;
        if (uVar16 < uVar14) {
          uVar8 = uVar16;
        }
        uVar8 = *(uint *)(param_2[0x2e] + uVar8 * 4);
        if ((uint)param_2[0x2c] <= uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar8,param_2[0x2c],&DAT_01c1d440);
        }
        uVar8 = uVar16 + 1;
        uVar16 = uVar8 - uVar14;
        if (uVar8 < uVar14) {
          uVar16 = uVar8;
        }
        param_2[0x2f] = uVar16;
        param_2[0x30] = iVar7;
      } while (iVar7 != 0);
    }
    *param_2 = 3;
    param_2[1] = 0;
    if (pppppcVar20 == (char *****)&DAT_00000003 && pppppcVar22 == (char *****)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_0050d999,0xe,&DAT_01d1de34);
    }
    local_250._0_4_ = pppppcVar20;
    local_250._4_4_ = pppppcVar22;
    FUN_01bed4e2(&local_248,puVar5,0xa0);
    cVar1 = *(char *)(param_2 + 0x22);
    if (cVar1 == '\x03') {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01c15fcc);
    }
    local_114 = (char *****)param_2[0x23];
    local_110 = (char *****)param_2[0x24];
    uVar2 = *(undefined1 *)((int)param_2 + 0x8b);
    *puVar4 = *(undefined2 *)((int)param_2 + 0x89);
    *(undefined1 *)(puVar4 + 1) = uVar2;
    local_10c = (char *****)param_2[0x25];
    local_108 = (char *****)param_2[0x26];
    local_104 = param_2[0x27];
    uStack_100 = param_2[0x28];
    puStack_fc = (ushort *)param_2[0x29];
    local_118 = (char *****)CONCAT31(local_118._1_3_,cVar1);
    puVar9 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x20);
    }
    *puVar9 = local_118;
    puVar9[1] = local_114;
    puVar9[2] = local_110;
    puVar9[3] = local_10c;
    puVar9[4] = local_108;
    puVar9[5] = local_104;
    puVar9[6] = uStack_100;
    puVar9[7] = puStack_fc;
    local_2e0 = pppppcVar20;
    local_2dc = pppppcVar22;
    FUN_01bed4e2(auStack_2d8,puVar5,0x80);
    local_254 = &DAT_01c15190;
    local_258 = puVar9;
    if (local_260 == (undefined4 *)0x0) {
      puVar9 = (undefined4 *)FUN_014333b0();
      *puVar9 = &DAT_0056d238;
      puVar9[1] = 0;
      puVar9[2] = 0;
      puVar9[3] = 0;
      FUN_0178e884(0);
      local_260 = puVar9;
    }
    puVar9 = local_260;
    puVar10 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    uVar15 = param_2[0x33];
    uVar17 = param_2[0x34];
    uVar18 = param_2[0x35];
    *puVar10 = param_2[0x32];
    puVar10[1] = uVar15;
    puVar10[2] = uVar17;
    puVar10[3] = uVar18;
    uVar15 = param_2[0x37];
    uVar17 = param_2[0x38];
    uVar18 = param_2[0x39];
    puVar10[4] = param_2[0x36];
    puVar10[5] = uVar15;
    puVar10[6] = uVar17;
    puVar10[7] = uVar18;
    uVar24 = FUN_01415d14(puVar9,&DAT_00569e58,puVar10,&DAT_01c221d8);
    if ((int)uVar24 != 0) {
      uVar24 = (**(code **)((int)((ulonglong)uVar24 >> 0x20) + 0x1c))();
      iVar7 = (int)((ulonglong)uVar24 >> 0x20);
      uVar15 = (undefined4)uVar24;
      (**(code **)(iVar7 + 0xc))(&local_250,uVar15);
      if (((char *****)local_250 == (char *****)0x1d894ad9 && local_248 == (char *****)0x57413eaf)
          && (local_250._4_4_ == (char *****)0x1efc380c && local_244 == (char *****)0x5bc57458)) {
        thunk_FUN_01be4678(uVar15);
      }
      else {
        FUN_00f80320(uVar15,iVar7);
      }
    }
    FUN_01bed4e2(auStack_1a8,&local_2e0,0x90);
    puVar11 = (ushort *)(uint)*(byte *)(param_2 + 0x31);
    if (puVar11 == (ushort *)0x0) {
      puVar11 = (ushort *)0x0;
      if (local_148 == 0) {
        puVar11 = (ushort *)(uint)local_168[0];
      }
      if (local_148 == 0 && puVar11 == (ushort *)0x0) {
LAB_00eb9954:
        if (local_148 == 0) {
          puVar11 = (ushort *)(uint)local_168[0];
        }
        local_250 = CONCAT44(local_250._4_4_,(char *****)local_250);
        if (local_148 != 0 || puVar11 != (ushort *)0x0) {
          uVar14 = (uint)local_140;
          uVar16 = local_148;
          if (uVar14 != 0xffff) {
            local_250 = CONCAT44(local_250._4_4_,(char *****)local_250);
            if (uVar14 == 0) goto LAB_00eb9f54;
            if (uVar14 < local_148) {
              uVar16 = uVar14;
              if (*(char *)((int)local_14c + uVar14) < -0x40) goto LAB_00eba228;
            }
            else if (local_148 != uVar14) goto LAB_00eba228;
          }
          local_250 = CONCAT44(local_250._4_4_,(char *****)local_250);
          if ((1 < uVar16) &&
             (uVar13 = *local_14c, local_250 = CONCAT44(local_250._4_4_,(char *****)local_250),
             uVar13 == 0x2f2f)) goto LAB_00eb9910;
        }
      }
      else {
        uVar14 = (uint)local_140;
        uVar16 = local_148;
        if (uVar14 == 0xffff) {
LAB_00eb98e0:
          puVar11 = local_14c;
          if (uVar16 == 0) {
            puVar11 = (ushort *)&DAT_005327c4;
          }
          if (uVar16 < 2) {
            uVar16 = 1;
          }
        }
        else {
          if (uVar14 != 0) {
            if (uVar14 < local_148) {
              uVar16 = uVar14;
              if (*(char *)((int)local_14c + uVar14) < -0x40) goto LAB_00eba228;
            }
            else if (local_148 != uVar14) goto LAB_00eba228;
            goto LAB_00eb98e0;
          }
          uVar16 = 1;
          puVar11 = (ushort *)&DAT_005327c4;
        }
        uVar13 = (ushort)*(byte *)((int)puVar11 + (uVar16 - 1));
        puVar11 = local_14c;
        if (uVar13 != 0x2f) goto LAB_00eb9954;
LAB_00eb9910:
        uVar16 = (uint)local_140;
        if (local_148 == 0) {
          uVar13 = (ushort)local_168[0];
        }
        if (local_148 == 0 && uVar13 == 0) {
          puVar11 = (ushort *)&DAT_00000001;
          uVar14 = 0;
        }
        else {
          uVar14 = local_148;
          if (uVar16 != 0xffff) {
            if (uVar16 == 0) {
              uVar14 = 1;
              puVar11 = (ushort *)&DAT_005327c4;
              goto LAB_00eb9a08;
            }
            if (uVar16 < local_148) {
              if (*(char *)((int)local_14c + uVar16) < -0x40) {
LAB_00eba228:
                    /* WARNING: Subroutine does not return */
                FUN_012fb514(local_14c,local_148,0,local_140,&DAT_01d2e584);
              }
              uVar14 = uVar16;
            }
            else if (local_148 != uVar16) goto LAB_00eba228;
          }
          puVar11 = local_14c;
          if (uVar14 == 0) {
            puVar11 = (ushort *)&DAT_005327c4;
          }
          if (uVar14 < 2) {
            uVar14 = 1;
          }
        }
LAB_00eb9a08:
        uVar24 = FUN_01aa7908(puVar11,uVar14);
        local_114 = (char *****)&DAT_0132b6a0;
        local_118 = (char *****)&local_70;
        local_70 = uVar24;
        FUN_00664898(&local_250,&DAT_00586e68,&local_118);
        local_80 = (char *****)local_250;
        local_7c = local_250._4_4_;
        local_78 = local_248;
        FUN_01aa7790(&local_250,local_168);
        FUN_014157b8(&local_70,&local_250);
        if (local_58 == (char *****)0x0) {
          bVar23 = true;
          pppppcVar20 = (char *****)0x0;
        }
        else {
          bVar23 = ((uint)local_48 & 0xffff) != 0xffff;
          if (bVar23) {
            pppppcVar20 = (char *****)(((uint)local_48 & 0xffff) + 1);
            if (pppppcVar20 < local_50) {
              if (*(char *)((int)local_54 + (int)pppppcVar20) < -0x40) {
LAB_00eba1d8:
                    /* WARNING: Subroutine does not return */
                FUN_012fb514();
              }
            }
            else if (local_50 != pppppcVar20) goto LAB_00eba1d8;
            local_88._4_4_ = (int)local_50 - (int)pppppcVar20;
            local_10c = (char *****)&DAT_0132b6a0;
            local_110 = (char *****)&local_88;
            local_114 = (char *****)&LAB_00632348;
            local_118 = (char *****)&local_80;
            local_88._0_4_ = (char ****)((int)local_54 + (int)pppppcVar20);
            FUN_00664898(&local_40,&DAT_005a0981,&local_118);
            pppppcVar20 = local_38;
            pppppcVar22 = local_40;
            pppppcVar21 = local_3c;
          }
          else {
            pppppcVar20 = local_78;
            pppppcVar22 = local_80;
            pppppcVar21 = local_7c;
          }
          FUN_012834b0(&local_118,pppppcVar21,pppppcVar20);
          FUN_014134f0(&local_250,&local_118);
          pppppcVar20 = (char *****)local_250;
          if ((char *****)local_250 == (char *****)0x0) {
            local_118 = (char *****)CONCAT31(local_118._1_3_,local_250._4_1_);
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&local_118,&DAT_01d2e574,&DAT_01d2e544);
          }
          local_118 = local_250._4_4_;
          local_114 = local_248;
          local_110 = local_244;
          local_10c = pppppcStack_240;
          if (pppppcVar22 != (char *****)&DAT_80000000) {
            FUN_019bb7e0(pppppcVar22,pppppcVar21);
          }
          local_40 = local_118;
          local_3c = local_114;
          local_38 = local_110;
          pppppcStack_34 = local_10c;
          if (local_58 != (char *****)0x0) {
            (*(code *)local_58[4])(auStack_4c,local_54,local_50);
          }
        }
        local_54 = local_40;
        local_50 = local_3c;
        local_48 = pppppcStack_34;
        local_248 = pppppcStack_68;
        local_244 = pppppcStack_64;
        pppppcStack_240 = pppppcStack_60;
        local_23c = local_5c;
        pppppcStack_234 = local_40;
        pppppcStack_230 = local_3c;
        pppppcStack_22c = local_38;
        pppppcStack_228 = pppppcStack_34;
        pppppcStack_238 = pppppcVar20;
        local_58 = pppppcVar20;
        local_250 = local_70;
        FUN_01414ce8(&local_118,&local_250);
        if ((char)local_118 != '\x03') {
          FUN_01435814(local_168);
          local_168[0] = (byte)local_118;
          pppppcStack_164 = local_114;
          pppppcStack_160 = local_110;
          pppppcStack_15c = local_10c;
          pppppcStack_158 = local_108;
          local_154 = local_104;
          uStack_150 = uStack_100;
          local_14c = puStack_fc;
          local_148 = uStack_f8;
          uStack_144 = uStack_f4;
          local_140 = (ushort)uStack_f0;
        }
        if (bVar23) {
          FUN_019bb7e0(local_80,local_7c);
        }
      }
    }
    else {
      if (local_148 == 0) {
        puVar11 = (ushort *)(uint)local_168[0];
      }
      if (local_148 != 0 || puVar11 != (ushort *)0x0) {
        uVar14 = (uint)local_140;
        uVar16 = local_148;
        if (uVar14 == 0xffff) {
LAB_00eb9860:
          puVar19 = local_14c;
          if (uVar16 == 0) {
            puVar19 = (ushort *)&DAT_005327c4;
          }
          if (uVar16 < 2) {
            uVar16 = 1;
          }
        }
        else {
          if (uVar14 != 0) {
            if (uVar14 < local_148) {
              if (*(char *)((int)local_14c + uVar14) < -0x40) goto LAB_00eba228;
              uVar16 = uVar14;
            }
            else if (local_148 != uVar14) goto LAB_00eba228;
            goto LAB_00eb9860;
          }
          uVar16 = 1;
          puVar19 = (ushort *)&DAT_005327c4;
        }
        puVar11 = local_14c;
        if (*(char *)((int)puVar19 + (uVar16 - 1)) == '/') {
          bVar3 = 0x2f;
          if (local_148 == 0) {
            bVar3 = local_168[0];
          }
          local_250 = CONCAT44(local_250._4_4_,(char *****)local_250);
          if (local_148 != 0 || bVar3 != 0) {
            uVar16 = local_148;
            if (uVar14 != 0xffff) {
              local_250 = CONCAT44(local_250._4_4_,(char *****)local_250);
              if (uVar14 == 0) goto LAB_00eb9f54;
              if (uVar14 < local_148) {
                if (*(char *)((int)local_14c + uVar14) < -0x40) goto LAB_00eba228;
                uVar16 = uVar14;
              }
              else if (local_148 != uVar14) goto LAB_00eba228;
            }
            local_250 = CONCAT44(local_250._4_4_,(char *****)local_250);
            if ((1 < uVar16) &&
               (puVar11 = (ushort *)(uint)*(ushort *)((int)local_14c + (uVar16 - 2)),
               local_250 = CONCAT44(local_250._4_4_,(char *****)local_250),
               puVar11 == (ushort *)0x2f2f)) goto LAB_00eb9c50;
          }
          goto LAB_00eb9f54;
        }
      }
LAB_00eb9c50:
      if (local_148 == 0) {
        puVar11 = (ushort *)(uint)local_168[0];
      }
      if (local_148 == 0 && puVar11 == (ushort *)0x0) {
        puVar11 = (ushort *)&DAT_00000001;
        uVar16 = 0;
      }
      else {
        uVar14 = (uint)local_140;
        uVar16 = local_148;
        if (uVar14 != 0xffff) {
          if (uVar14 == 0) {
            uVar16 = 1;
            puVar11 = (ushort *)&DAT_005327c4;
            goto LAB_00eb9cdc;
          }
          if (uVar14 < local_148) {
            if (*(char *)((int)local_14c + uVar14) < -0x40) goto LAB_00eba228;
            uVar16 = uVar14;
          }
          else if (local_148 != uVar14) goto LAB_00eba228;
        }
        puVar11 = local_14c;
        if (uVar16 == 0) {
          puVar11 = (ushort *)&DAT_005327c4;
        }
        if (uVar16 < 2) {
          uVar16 = 1;
        }
      }
LAB_00eb9cdc:
      uVar24 = FUN_01aa7908(puVar11,uVar16);
      local_88 = uVar24;
      if ((int)((ulonglong)uVar24 >> 0x20) == 0) {
        pppppcVar20 = (char *****)thunk_FUN_01be5118(1);
        if (pppppcVar20 == (char *****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,1);
        }
        *(char *)pppppcVar20 = '/';
        local_78 = (char *****)&DAT_00000001;
        local_80 = (char *****)&DAT_00000001;
        local_7c = pppppcVar20;
      }
      else {
        local_114 = (char *****)&DAT_0132b6a0;
        local_118 = (char *****)&local_88;
        FUN_00664898(&local_250,&DAT_005a63ea,&local_118);
        local_80 = (char *****)local_250;
        local_7c = local_250._4_4_;
        local_78 = local_248;
      }
      FUN_01aa7790(&local_250,local_168);
      FUN_014157b8(&local_70,&local_250);
      if (local_58 == (char *****)0x0) {
        FUN_012834b0(&local_118,local_7c,local_78);
        FUN_014134f0(&local_250,&local_118);
        if ((char *****)local_250 == (char *****)0x0) {
          local_118 = (char *****)CONCAT31(local_118._1_3_,local_250._4_1_);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_118,&DAT_01d2e574,&DAT_01d2e564);
        }
        bVar23 = true;
        local_40 = (char *****)local_250;
        local_3c = local_250._4_4_;
        local_38 = local_248;
        pppppcStack_34 = local_244;
        pppppcStack_30 = pppppcStack_240;
      }
      else {
        bVar23 = ((uint)local_48 & 0xffff) != 0xffff;
        if (bVar23) {
          pppppcVar20 = (char *****)(((uint)local_48 & 0xffff) + 1);
          if (pppppcVar20 < local_50) {
            if (*(char *)((int)local_54 + (int)pppppcVar20) < -0x40) {
LAB_00eba18c:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514();
            }
          }
          else if (local_50 != pppppcVar20) goto LAB_00eba18c;
          local_3c = (char *****)((int)local_50 - (int)pppppcVar20);
          local_244 = (char *****)&DAT_0132b6a0;
          local_248 = (char *****)&local_40;
          local_250._4_4_ = (char *****)&LAB_00632348;
          local_250._0_4_ = (char *****)&local_80;
          local_40 = (char *****)((int)local_54 + (int)pppppcVar20);
          FUN_00664898(&local_118,&DAT_005a0981,&local_250);
          pppppcVar20 = local_110;
          pppppcVar22 = local_114;
          pppppcVar21 = local_118;
        }
        else {
          pppppcVar20 = local_78;
          pppppcVar22 = local_7c;
          pppppcVar21 = local_80;
        }
        FUN_012834b0(&local_118,pppppcVar22,pppppcVar20);
        FUN_014134f0(&local_250,&local_118);
        if ((char *****)local_250 == (char *****)0x0) {
          local_118 = (char *****)CONCAT31(local_118._1_3_,local_250._4_1_);
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533467,0x2b,&local_118,&DAT_01d2e574,&DAT_01d2e554);
        }
        local_118 = (char *****)local_250;
        local_114 = local_250._4_4_;
        local_110 = local_248;
        local_10c = local_244;
        local_108 = pppppcStack_240;
        if (pppppcVar21 != (char *****)&DAT_80000000) {
          FUN_019bb7e0(pppppcVar21,pppppcVar22);
        }
        local_40 = local_118;
        local_3c = local_114;
        local_38 = local_110;
        pppppcStack_34 = local_10c;
        pppppcStack_30 = local_108;
      }
      if (local_58 != (char *****)0x0) {
        (*(code *)local_58[4])(auStack_4c,local_54,local_50);
      }
      local_58 = local_40;
      local_54 = local_3c;
      local_50 = local_38;
      local_48 = pppppcStack_30;
      local_248 = pppppcStack_68;
      local_244 = pppppcStack_64;
      pppppcStack_240 = pppppcStack_60;
      local_23c = local_5c;
      pppppcStack_238 = local_40;
      pppppcStack_234 = local_3c;
      pppppcStack_230 = local_38;
      pppppcStack_22c = pppppcStack_34;
      pppppcStack_228 = pppppcStack_30;
      local_250 = local_70;
      FUN_01414ce8(&local_118);
      if ((char)local_118 != '\x03') {
        FUN_01435814(local_168);
        pppppcStack_164 = local_114;
        pppppcStack_160 = local_110;
        pppppcStack_15c = local_10c;
        pppppcStack_158 = local_108;
        local_154 = local_104;
        uStack_150 = uStack_100;
        uStack_144 = uStack_f4;
      }
      if (bVar23) {
        FUN_019bb7e0(local_80,local_7c);
      }
    }
LAB_00eb9f54:
    FUN_01bed4e2(&local_118,auStack_1a8,0x90);
    if (param_2[0x30] != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74("Steer must wait for all services to be ready. Did you forget to call poll_ready()?"
                   ,0x52,&DAT_01c1d450);
    }
    local_250._0_4_ = (char *****)0x0;
    local_250._4_4_ = (char *****)0x1d;
    local_248 = (char *****)0x0;
    local_244 = (char *****)0x0;
    uVar24 = FUN_0160ab20(&local_118,&local_250);
    iVar7 = (int)((ulonglong)uVar24 >> 0x20);
    iVar12 = (int)uVar24;
    uVar16 = 0;
    if (iVar12 != 0) {
      iVar7 = *(int *)(iVar12 + 4);
    }
    if ((iVar12 != 0 && iVar7 != 0) && (0xf < *(uint *)(iVar12 + 8))) {
      iVar7 = thunk_FUN_01bed842("application/grpc",iVar7,0x10);
      uVar16 = (uint)(iVar7 == 0);
    }
    if ((uint)param_2[0x2c] <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar16,param_2[0x2c],&DAT_01c1d460);
    }
    iVar7 = param_2[0x2b];
    FUN_01978558(param_2 + 0x2d,uVar16);
    FUN_01bed4e2(&local_250,&local_118,0x88);
    local_1c4 = local_8c;
    local_1c8 = local_90;
    FUN_00ff5838(auStack_3a0,*(undefined4 *)(iVar7 + uVar16 * 4),&local_250);
    FUN_00eba9a4(param_2);
    pppppcVar22 = (char *****)0x0;
    pppppcVar20 = (char *****)&SUB_00000004;
    *param_2 = 4;
    param_2[1] = 0;
    FUN_01bed4e2(puVar5,auStack_3a0,0xc0);
  } while( true );
}

