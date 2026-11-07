// FUN_015a9594 @ 015a9594 size=2832 calls_out=2 calls_in=1
// strings: /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-rust-1.94.1/lib/rustlib/src/rust/library/core/src/cmp.rs

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015a9594(undefined4 *param_1,undefined **param_2,int param_3,undefined **param_4,
                 undefined **param_5)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined **ppuVar7;
  undefined **ppuVar8;
  undefined **ppuVar9;
  undefined **ppuVar10;
  byte extraout_r1;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **extraout_r1_00;
  int iVar13;
  char *pcVar14;
  uint uVar15;
  undefined **ppuVar16;
  char *pcVar17;
  uint uVar18;
  undefined **ppuVar19;
  undefined **ppuVar20;
  byte bVar21;
  undefined **ppuVar22;
  int iVar23;
  undefined **ppuVar24;
  undefined **ppuVar25;
  undefined **unaff_r8;
  undefined **ppuVar26;
  undefined **ppuVar27;
  char *unaff_r9;
  undefined **unaff_r10;
  undefined **ppuVar28;
  undefined **in_r12;
  undefined **ppuVar29;
  undefined **extraout_r12;
  undefined **ppuVar30;
  uint uVar31;
  bool bVar32;
  undefined1 local_a4;
  undefined1 local_a0;
  byte local_9c;
  undefined **local_98;
  undefined **local_94;
  byte local_90;
  byte local_8c;
  short local_88;
  ushort local_84;
  undefined **local_80;
  undefined **local_7c;
  undefined *local_68;
  undefined **local_64;
  undefined **local_60;
  undefined **local_5c;
  undefined **local_58;
  undefined **local_54;
  undefined **local_50;
  undefined4 local_4c;
  ushort local_48;
  byte bStack_46;
  byte bStack_45;
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte bStack_41;
  byte bStack_40;
  byte bStack_3f;
  undefined4 local_3e;
  undefined4 local_3a;
  undefined4 local_36;
  undefined **local_30;
  undefined **local_2c;
  undefined **local_28;
  
  local_3a = 0x2070080;
  local_3e = 0x8080ffff;
  ppuVar24 = (undefined **)&DAT_80000000;
  puVar6 = (undefined *)0x0;
  bStack_42 = 0;
  bStack_41 = 0;
  bStack_40 = 0xff;
  bStack_3f = 0;
  ppuVar22 = (undefined **)0xffffffff;
  local_5c = (undefined **)&DAT_80000000;
  local_60 = (undefined **)0x0;
  local_64 = (undefined **)0x0;
  local_68 = (undefined *)0x0;
  local_36 = 0;
  bStack_46 = 0xff;
  bStack_45 = 0xff;
  bStack_44 = 0xff;
  bStack_43 = 0xff;
  local_48 = 0;
  local_4c = (undefined **)0x80008000;
  local_50 = (undefined **)0xffffffff;
  local_54 = (undefined **)&DAT_80000000;
  local_58 = (undefined **)&DAT_80000000;
  if (param_3 == 0) {
    local_58 = (undefined **)0x0;
    ppuVar9 = (undefined **)0x0;
    local_5c = param_4;
    ppuVar10 = param_2;
    local_4c = unaff_r8;
    local_60 = in_r12;
    if (param_5 == (undefined **)0x0) goto LAB_015a9938;
  }
  else {
    ppuVar24 = &local_68;
    param_3 = param_3 * 0xc;
    do {
      FUN_015aa238(&local_30,param_2,ppuVar24,param_4,param_5);
      uVar15 = local_3a;
      ppuVar22 = local_50;
      if (local_30 != (undefined **)0x3) {
        local_68 = (undefined *)0x1;
        local_7c = local_2c;
        local_48 = 0;
        bStack_46 = 0;
        bStack_45 = 0;
        bStack_44 = 0;
        bStack_43 = 0;
        local_3e._0_1_ = 0;
        local_3e._1_1_ = 0;
        local_64 = local_30;
        local_5c = local_28;
        bStack_42 = extraout_r1;
        goto LAB_015a96cc;
      }
      param_2 = param_2 + 3;
      param_3 = param_3 + -0xc;
      param_5 = local_28;
      param_4 = local_2c;
    } while (param_3 != 0);
    ppuVar10 = param_2;
    if (local_28 == (undefined **)0x0) {
      ppuVar7 = (undefined **)(uint)local_4c._2_2_;
      local_84 = local_4c._2_2_;
      unaff_r10 = (undefined **)(uint)local_3a._1_1_;
      ppuVar8 = (undefined **)(uint)bStack_43;
      ppuVar9 = (undefined **)(uint)bStack_44;
      ppuVar24 = (undefined **)(uint)bStack_45;
      bVar5 = local_3e._1_1_;
      ppuVar26 = (undefined **)(uint)local_3e._1_1_;
      uVar4 = (undefined1)local_3e;
      unaff_r9 = (char *)(local_3e & 0xff);
      ppuVar25 = (undefined **)(uint)bStack_3f;
      local_90 = bStack_3f;
      ppuVar20 = (undefined **)(uint)bStack_41;
      local_9c = bStack_41;
      ppuVar28 = (undefined **)(uint)bStack_42;
      uVar31 = (uint)bStack_46;
      ppuVar10 = (undefined **)(uint)local_48;
      ppuVar16 = (undefined **)(uint)bStack_40;
      local_8c = bStack_40;
      local_80 = local_54;
      if (local_36._3_1_ == '\x02') {
        local_7c = local_60;
        local_a0 = (undefined1)(local_3e >> 0x18);
        local_a4 = (undefined1)(local_3e >> 0x10);
        local_94 = local_50;
        local_98 = local_58;
        ppuVar24 = (undefined **)(local_3a & 0xff);
        local_88 = (short)local_4c;
        goto LAB_015a96cc;
      }
      ppuVar11 = (undefined **)(local_3a >> 0x10 & 0xff);
      uVar3 = local_3a >> 0x18;
      bVar21 = local_36._1_1_;
      if (((uint)local_4c & 0xffff) == 0x8000) {
        bVar21 = 2;
      }
      ppuVar29 = local_58;
      if (((uVar31 != 0xff) && (local_58 == (undefined **)&DAT_80000000)) && (bVar21 != 2)) {
        if ((bVar21 & 1) != 0) {
          uVar31 = -uVar31;
        }
        ppuVar29 = (undefined **)((short)local_4c * 100 + uVar31);
        if (ppuVar29 + -0x9c4 < (undefined **)0xffffb1e1) {
          ppuVar29 = (undefined **)&DAT_80000000;
        }
      }
      bVar21 = local_36._2_1_;
      if (ppuVar7 == (undefined **)0x8000) {
        bVar21 = 2;
      }
      ppuVar12 = local_54;
      ppuVar19 = ppuVar7;
      if (((ppuVar24 != (undefined **)0xff) && (local_54 == (undefined **)&DAT_80000000)) &&
         (bVar21 != 2)) {
        if ((bVar21 & 1) != 0) {
          ppuVar24 = (undefined **)-(int)ppuVar24;
        }
        ppuVar12 = ppuVar24 + (short)local_4c._2_2_ * 0x19;
        ppuVar19 = ppuVar12 + -0x9c4;
        ppuVar7 = (undefined **)0xffffb1e1;
        if (ppuVar19 < (undefined **)0xffffb1e1) {
          ppuVar12 = (undefined **)&DAT_80000000;
        }
      }
      ppuVar27 = ppuVar25;
      if (ppuVar29 == (undefined **)&DAT_80000000) {
LAB_015a98f8:
        if (ppuVar28 != (undefined **)0x0) {
          ppuVar10 = ppuVar11;
        }
        if ((ppuVar28 != (undefined **)0x0 && ppuVar10 != (undefined **)&DAT_00000007) &&
           (ppuVar12 != (undefined **)&DAT_80000000)) {
          FUN_01631f10(&local_68,ppuVar12,ppuVar28,ppuVar11);
          ppuVar9 = extraout_r1_00;
          ppuVar24 = local_64;
          ppuVar30 = extraout_r12;
          if (local_68 != (undefined *)0x0) {
            unaff_r9 = (char *)CONCAT13(bStack_45,CONCAT12(bStack_46,local_48));
            ppuVar9 = (undefined **)
                      CONCAT13(bStack_41,CONCAT12(bStack_42,CONCAT11(bStack_43,bStack_44)));
            puVar6 = local_68;
            ppuVar22 = local_54;
            unaff_r10 = local_50;
            goto LAB_015a9938;
          }
          goto LAB_015a9f10;
        }
        ppuVar10 = ppuVar9;
        if (ppuVar9 != (undefined **)0xff) {
          ppuVar10 = ppuVar11;
        }
        if ((ppuVar9 == (undefined **)0xff || ppuVar10 == (undefined **)&DAT_00000007) ||
           (ppuVar29 == (undefined **)&DAT_80000000)) {
          ppuVar9 = ppuVar8;
          if (ppuVar8 != (undefined **)0xff) {
            ppuVar9 = ppuVar11;
          }
          puVar6 = (undefined *)0x0;
          local_58 = ppuVar7;
          local_5c = ppuVar19;
          local_4c = ppuVar25;
          unaff_r10 = ppuVar28;
          local_60 = ppuVar29;
          if ((ppuVar8 == (undefined **)0xff || ppuVar9 == (undefined **)&DAT_00000007) ||
             (ppuVar29 == (undefined **)&DAT_80000000)) goto LAB_015a9938;
          ppuVar30 = (undefined **)((int)ppuVar29 << 10);
          iVar13 = ((int)ppuVar30 >> 10) + 999999;
          if (ppuVar29 + -0x9c4 < (undefined **)0xffffb1e1) goto LAB_015a9e48;
          iVar23 = (int)((ulonglong)((longlong)iVar13 * -0x51eb851f) >> 0x20);
          lVar1 = (longlong)iVar13 * 0x5b5 + ((ulonglong)((longlong)iVar13 * 0x5b5) >> 0x3e);
          uVar31 = ((iVar23 >> 5) - (iVar23 >> 0x1f)) + iVar13 / 400 +
                   ((uint)lVar1 >> 2 | (int)((ulonglong)lVar1 >> 0x20) << 0x1e) + 0xea551bce;
          iVar13 = (int)(((ulonglong)uVar31 << 0x20) + (longlong)(int)uVar31 * -0x6db6db6d >> 0x20);
          pcVar17 = (char *)((int)ppuVar11 +
                            (uint)*(ushort *)
                                   (&UNK_00424016 +
                                   (uVar31 + ((iVar13 >> 2) - (iVar13 >> 0x1f)) * -7) * 2) +
                            (int)ppuVar8 * 7);
          pcVar14 = pcVar17 + 1;
          if (0x16c < ((uint)pcVar17 & 0xffff)) {
            ppuVar28 = (undefined **)((uint)pcVar14 & 0xffff);
            ppuVar24 = ppuVar29 +
                       (((int)ppuVar29 * 0x147b >> 0x13) - ((int)ppuVar29 * 0x147b >> 0x1f)) * -0x19
            ;
            if (ppuVar28 == (undefined **)0x16e) {
              uVar31 = 3;
              if (((uint)ppuVar24 & 0xffff) == 0) {
                uVar31 = 0xf;
              }
              if ((uVar31 & (uint)ppuVar29) == 0) goto LAB_015a9bc0;
            }
            goto LAB_015a9dd4;
          }
          ppuVar24 = ppuVar29 +
                     (((int)ppuVar29 * 0x147b >> 0x13) - ((int)ppuVar29 * 0x147b >> 0x1f)) * -0x19;
LAB_015a9bc0:
          uVar31 = 3;
          ppuVar9 = (undefined **)((uint)pcVar14 & 0xffff);
          if (((uint)ppuVar24 & 0xffff) == 0) {
            uVar31 = 0xf;
          }
          if ((uVar31 & (uint)ppuVar29) == 0) {
            ppuVar9 = (undefined **)((uint)ppuVar9 | 0x200);
          }
          ppuVar24 = (undefined **)((uint)ppuVar9 | (uint)ppuVar30);
          goto LAB_015a9f10;
        }
        iVar13 = (((int)ppuVar29 << 10) >> 10) + 999999;
        if ((undefined **)0xffffb1e0 < ppuVar29 + -0x9c4) {
          iVar23 = (int)((ulonglong)((longlong)iVar13 * -0x51eb851f) >> 0x20);
          lVar1 = (longlong)iVar13 * 0x5b5 + ((ulonglong)((longlong)iVar13 * 0x5b5) >> 0x3e);
          uVar31 = ((iVar23 >> 5) - (iVar23 >> 0x1f)) + iVar13 / 400 +
                   ((uint)lVar1 >> 2 | (int)((ulonglong)lVar1 >> 0x20) << 0x1e) + 0xea551bce;
          iVar13 = (int)(((ulonglong)uVar31 << 0x20) + (longlong)(int)uVar31 * -0x6db6db6d >> 0x20);
          uVar18 = (int)ppuVar9 * 7 + (uint)*(byte *)(ppuVar11 + 0x162057) +
                   (uint)*(ushort *)
                          (&UNK_00424030 + (uVar31 + ((iVar13 >> 2) - (iVar13 >> 0x1f)) * -7) * 2);
          uVar31 = uVar18 + 1;
          if (0x16c < (uVar18 & 0xffff)) {
            ppuVar28 = (undefined **)(uVar31 & 0xffff);
            ppuVar24 = ppuVar29 +
                       (((int)ppuVar29 * 0x147b >> 0x13) - ((int)ppuVar29 * 0x147b >> 0x1f)) * -0x19
            ;
            if (ppuVar28 == (undefined **)0x16e) {
              uVar18 = 3;
              if (((uint)ppuVar24 & 0xffff) == 0) {
                uVar18 = 0xf;
              }
              if ((uVar18 & (uint)ppuVar29) == 0) goto LAB_015a9d10;
            }
LAB_015a9dd4:
            uVar15 = 3;
            local_58 = (undefined **)&DAT_0000016d;
            if (((uint)ppuVar24 & 0xffff) == 0) {
              uVar15 = 0xf;
            }
            if ((uVar15 & (uint)ppuVar29) == 0) {
              local_58 = (undefined **)0x16e;
            }
            goto LAB_015a9e08;
          }
          ppuVar24 = ppuVar29 +
                     (((int)ppuVar29 * 0x147b >> 0x13) - ((int)ppuVar29 * 0x147b >> 0x1f)) * -0x19;
          ppuVar28 = ppuVar29;
LAB_015a9d10:
          uVar18 = 3;
          ppuVar9 = (undefined **)(uVar31 & 0xffff);
          if (((uint)ppuVar24 & 0xffff) == 0) {
            uVar18 = 0xf;
          }
          if ((uVar18 & (uint)ppuVar29) == 0) {
            ppuVar9 = (undefined **)((uint)ppuVar9 | 0x200);
          }
          ppuVar24 = (undefined **)((uint)ppuVar9 | (int)ppuVar29 << 10);
          ppuVar27 = local_50;
          ppuVar30 = (undefined **)unaff_r9;
          goto LAB_015a9f10;
        }
LAB_015a9e48:
        puVar6 = &DAT_005672ac;
        local_5c = (undefined **)0xffffffff;
        local_58 = (undefined **)0x270f;
        local_60 = (undefined **)0xffffd8f1;
        ppuVar24 = (undefined **)&DAT_00000004;
        ppuVar9 = (undefined **)&DAT_00000012;
        local_4c = (undefined **)0x0;
      }
      else {
        ppuVar30 = ppuVar29;
        if (ppuVar10 == (undefined **)0x0) {
          if (ppuVar20 != (undefined **)0x0) {
            ppuVar10 = unaff_r10;
          }
          if (ppuVar20 == (undefined **)0x0 || ppuVar10 == (undefined **)0x0) goto LAB_015a98f8;
          if (&DAT_0000001c < ppuVar20) {
            if (unaff_r10 == (undefined **)&SUB_00000002) {
              uVar31 = (int)ppuVar29 * 0x5c29 + 0x51c;
              uVar18 = 3;
              if (((uVar31 & 0xffff) >> 2 | uVar31 * 0x4000 & 0xffff) < 0x28f) {
                uVar18 = 0xf;
              }
              local_58 = (undefined **)&DAT_0000001c;
              ppuVar24 = local_58;
              if ((uVar18 & (uint)ppuVar29) == 0) {
                local_58 = (undefined **)&DAT_0000001d;
                ppuVar24 = local_58;
              }
            }
            else {
              local_58 = (undefined **)&DAT_0000001e;
              ppuVar24 = (undefined **)((byte)(local_3a._1_1_ ^ local_3a._1_1_ >> 3) | 0x1e);
            }
            if (ppuVar24 < ppuVar20) {
              puVar6 = &DAT_00414800;
              unaff_r9 = "for the given month and yea";
              ppuVar24 = (undefined **)0x3;
              ppuVar9 = (undefined **)&DAT_0000001c;
              goto LAB_015a9e10;
            }
          }
          uVar31 = (int)ppuVar29 * 0x5c29 + 0x51c;
          puVar6 = &UNK_0040f2f8;
          uVar18 = 3;
          if (((uVar31 & 0xffff) >> 2 | uVar31 * 0x4000 & 0xffff) < 0x28f) {
            uVar18 = 0xf;
          }
          bVar32 = (uVar18 & (uint)ppuVar29) == 0;
          if (bVar32) {
            puVar6 = &UNK_0040f310;
          }
          uVar31 = (int)ppuVar29 << 10;
          ppuVar9 = (undefined **)&DAT_00000200;
          if (bVar32) {
            uVar31 = (int)ppuVar29 << 10 | 0x200;
          }
          ppuVar24 = (undefined **)
                     (uVar31 | (uint)((uint)*(ushort *)(puVar6 + (int)unaff_r10 * 2 + -2) +
                                     (int)ppuVar20) & 0xffff);
        }
        else {
          if (0xb6 < local_48 >> 1) {
            uVar31 = 3;
            if (((uint)(ppuVar29 +
                       (((int)ppuVar29 * 0x147b >> 0x13) - ((int)ppuVar29 * 0x147b >> 0x1f)) * -0x19
                       ) & 0xffff) == 0) {
              uVar31 = 0xf;
            }
            if ((uVar31 & (uint)ppuVar29) != 0) {
              local_58 = (undefined **)&DAT_0000016d;
              ppuVar28 = (undefined **)0x16e;
LAB_015a9e08:
              unaff_r9 = &DAT_00413061;
              puVar6 = &DAT_00412ff8;
              ppuVar24 = (undefined **)&DAT_00000007;
              ppuVar9 = (undefined **)&DAT_00000012;
              ppuVar20 = ppuVar28;
LAB_015a9e10:
              local_60 = (undefined **)&DAT_00000001;
              local_4c = (undefined **)0x0;
              ppuVar22 = (undefined **)0x0;
              local_5c = (undefined **)0x0;
              unaff_r10 = ppuVar20;
              goto LAB_015a9938;
            }
          }
          uVar31 = 3;
          ppuVar9 = (undefined **)((int)ppuVar29 << 10);
          if (((uint)(ppuVar29 +
                     (((int)ppuVar29 * 0x147b >> 0x13) - ((int)ppuVar29 * 0x147b >> 0x1f)) * -0x19)
              & 0xffff) == 0) {
            uVar31 = 0xf;
          }
          if ((uVar31 & (uint)ppuVar29) == 0) {
            ppuVar9 = (undefined **)((int)ppuVar29 << 10 | 0x200);
          }
          ppuVar24 = (undefined **)((uint)ppuVar9 | (uint)ppuVar10);
        }
LAB_015a9f10:
        local_4c = ppuVar27;
        ppuVar29 = ppuVar28;
        local_60 = ppuVar30;
        if (ppuVar16 == (undefined **)0xff) {
          puVar6 = (undefined *)0x0;
          ppuVar9 = ppuVar25;
          if (ppuVar25 != (undefined **)0x0 && uVar3 != 2) {
            ppuVar10 = ppuVar25;
            if (ppuVar25 != (undefined **)&DAT_0000000c) {
              ppuVar10 = ppuVar25 + 3;
            }
            ppuVar16 = (undefined **)0x0;
            if (ppuVar25 != (undefined **)&DAT_0000000c) {
              ppuVar16 = ppuVar25;
            }
            if ((uVar15 & 0x1000000) != 0) {
              ppuVar16 = ppuVar10;
            }
            if (((undefined **)unaff_r9 != (undefined **)0xff || ppuVar26 != (undefined **)0xff) ||
                ppuVar22 != (undefined **)0xffffffff) goto LAB_015a9f18;
LAB_015a9fb4:
            ppuVar22 = (undefined **)0x0;
            local_64 = (undefined **)(((uint)ppuVar16 & 0xff) << 0x10);
LAB_015aa038:
            param_1[2] = local_64;
            *param_1 = 2;
            param_1[1] = ppuVar22;
            param_1[3] = ppuVar24;
            return;
          }
        }
        else {
LAB_015a9f18:
          uVar2 = SUB41(ppuVar16,0);
          if (ppuVar22 == (undefined **)0xffffffff) {
            if ((undefined **)unaff_r9 != (undefined **)0xff) {
              if (ppuVar26 == (undefined **)0xff) {
                if (unaff_r9 <= &DAT_0000003b) {
                  ppuVar22 = (undefined **)0x0;
                  local_64 = (undefined **)((uint)CONCAT11(uVar2,uVar4) << 8);
                  goto LAB_015aa038;
                }
                puVar6 = &DAT_00414803;
                ppuVar26 = (undefined **)unaff_r9;
              }
              else {
                if (&DAT_0000003b < unaff_r9) goto LAB_015aa050;
                if (ppuVar26 <= &DAT_0000003b) {
                  ppuVar22 = (undefined **)0x0;
                  local_64 = (undefined **)(uint)CONCAT21(CONCAT11(uVar2,uVar4),bVar5);
                  goto LAB_015aa038;
                }
                puVar6 = &DAT_00414809;
              }
              goto LAB_015aa09c;
            }
            if (ppuVar26 == (undefined **)0xff) goto LAB_015a9fb4;
            puVar6 = (undefined *)0x0;
          }
          else {
            puVar6 = (undefined *)0x0;
            if (((undefined **)unaff_r9 != (undefined **)0xff) && (ppuVar26 != (undefined **)0xff))
            {
              if (&DAT_0000003b < unaff_r9) {
LAB_015aa050:
                puVar6 = &DAT_00414803;
                ppuVar26 = (undefined **)unaff_r9;
              }
              else {
                if (ppuVar26 < &DAT_0000003c) {
                  local_64 = (undefined **)(uint)CONCAT21(CONCAT11(uVar2,uVar4),bVar5);
                  goto LAB_015aa038;
                }
                puVar6 = &DAT_00414809;
                ppuVar9 = ppuVar26;
              }
LAB_015aa09c:
              ppuVar24 = (undefined **)&DAT_00000006;
              local_4c = (undefined **)0x0;
              ppuVar29 = ppuVar26;
              local_60 = (undefined **)0x0;
            }
          }
        }
        local_5c = (undefined **)0x0;
        local_58 = (undefined **)&DAT_0000003b;
      }
      unaff_r9 = (char *)0x0;
      ppuVar22 = (undefined **)0x0;
      unaff_r10 = ppuVar29;
LAB_015a9938:
      param_1[2] = puVar6;
      param_1[10] = unaff_r9;
      *param_1 = 0;
      param_1[3] = ppuVar24;
      param_1[0xb] = ppuVar9;
      param_1[4] = local_60;
      param_1[5] = local_5c;
      param_1[6] = local_58;
      param_1[7] = ppuVar22;
      param_1[8] = unaff_r10;
      param_1[9] = local_4c;
      return;
    }
  }
  local_5c = ppuVar10;
  bStack_42 = (byte)param_5;
  local_68 = (undefined *)0x1;
  local_64 = (undefined **)&SUB_00000002;
  local_48 = 0;
  bStack_46 = 0;
  bStack_45 = 0;
  bStack_44 = 0;
  bStack_43 = 0;
  local_3e._0_1_ = 0;
  local_3e._1_1_ = 0;
LAB_015a96cc:
  *(ushort *)(param_1 + 8) = local_48;
  *(char *)((int)param_1 + 0x2e) = (char)ppuVar24;
  *(ushort *)((int)param_1 + 0x1e) = local_84;
  *(undefined1 *)((int)param_1 + 0x2d) = local_a0;
  *(short *)(param_1 + 7) = local_88;
  *(undefined1 *)(param_1 + 0xb) = local_a4;
  param_1[2] = local_7c;
  *(byte *)((int)param_1 + 0x29) = local_90;
  param_1[4] = local_98;
  *(byte *)(param_1 + 10) = local_8c;
  param_1[5] = local_80;
  *(char *)((int)param_1 + 0x2f) = (char)unaff_r10;
  *(byte *)((int)param_1 + 0x2b) = local_3e._1_1_;
  *(undefined1 *)((int)param_1 + 0x2a) = (undefined1)local_3e;
  *(byte *)((int)param_1 + 0x27) = local_9c;
  *(byte *)((int)param_1 + 0x26) = bStack_42;
  *(byte *)((int)param_1 + 0x25) = bStack_43;
  *(byte *)(param_1 + 9) = bStack_44;
  *(byte *)((int)param_1 + 0x23) = bStack_45;
  *(byte *)((int)param_1 + 0x22) = bStack_46;
  *param_1 = local_68;
  param_1[1] = local_64;
  param_1[3] = local_5c;
  param_1[6] = local_94;
  return;
}

