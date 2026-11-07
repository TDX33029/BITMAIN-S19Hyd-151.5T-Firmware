// FUN_0137d1fc @ 0137d1fc size=4840 calls_out=16 calls_in=6
// strings: no in-progress search to update | no in-progress search to finish | internal error: entered unreachable code: sid being unknown is a bug

/* WARNING: Removing unreachable block (ram,0x0137dd2c) */

void FUN_0137d1fc(uint *param_1,uint param_2,uint param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  int *piVar8;
  uint extraout_r3;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  ulonglong uVar24;
  uint local_90;
  uint local_88;
  uint local_84;
  uint local_78 [4];
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58 [4];
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_2c;
  uint local_28;
  
  uVar18 = param_4[4];
  uVar19 = param_4[5];
  if (uVar19 < uVar18) {
    *param_1 = 0;
    return;
  }
  if ((char)param_4[6] != '\0') {
    uVar22 = param_4[3];
    if (uVar19 < uVar22) {
      bVar1 = *(byte *)(param_4[2] + uVar19);
      uVar20 = (uint)bVar1;
      iVar12 = *param_4;
      uVar13 = param_4[1];
      iVar4 = thunk_FUN_016dd50a(param_2 + 600,"",0x20);
      if (iVar4 == 0) {
LAB_0137d3c8:
        uVar20 = (uint)*(byte *)(param_2 + uVar20 + 0x58);
        uVar14 = uVar20;
        if (iVar12 != 0) goto LAB_0137d37c;
        goto LAB_0137d3ec;
      }
      puVar9 = (uint *)(param_2 + 600 + (bVar1 >> 3 & 0xfffffff0));
      local_78[0] = *puVar9;
      local_78[1] = puVar9[1];
      local_78[2] = puVar9[2];
      local_78[3] = puVar9[3];
      uStack_68 = 0;
      local_5c = 0;
      local_60 = 0;
      local_64 = 0;
      if ((local_78[(uVar20 & 0x7f) >> 5] >> (uVar20 & 0x1f) & 1) == 0) goto LAB_0137d3c8;
      local_34 = CONCAT31(local_34._1_3_,bVar1);
      local_38 = 4;
LAB_0137d4fc:
      uVar22 = local_34;
      uVar18 = local_38;
      iVar4 = 2;
      if (2 < local_38) {
        iVar4 = local_38 - 3;
      }
      puVar5 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (iVar4 == 0) {
        if (puVar5 == (undefined1 *)0x0) goto LAB_0137e1f8;
        uVar3 = 1;
      }
      else {
        if (iVar4 != 1) {
          if (puVar5 == (undefined1 *)0x0) goto LAB_0137e1f8;
          *puVar5 = 3;
          iVar4 = 8;
          *(uint *)(puVar5 + 4) = uVar18;
          goto LAB_0137d57c;
        }
        if (puVar5 == (undefined1 *)0x0) {
LAB_0137e1f8:
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        puVar5[1] = (char)uVar22;
        uVar3 = 0;
      }
      *puVar5 = uVar3;
      iVar4 = 4;
      uVar22 = uVar19;
LAB_0137d57c:
      *(uint *)(puVar5 + iVar4) = uVar22;
      *param_1 = 2;
      param_1[1] = (uint)puVar5;
      return;
    }
    iVar12 = *param_4;
    uVar13 = param_4[1];
    uVar20 = 2;
    uVar14 = uVar20;
    if (iVar12 == 0) {
LAB_0137d3ec:
      uVar16 = *(uint *)(param_3 + 0x88);
      uVar20 = uVar14;
      if (uVar16 <= uVar14) goto LAB_0137d4d4;
LAB_0137d5b8:
      uVar14 = *(uint *)(*(int *)(param_3 + 0x84) + uVar14 * 4);
      if ((int)uVar14 < 0) {
LAB_0137d764:
        local_2c = param_2;
        local_28 = param_3;
        FUN_01390a98(&local_38,&local_2c,iVar12,uVar13,uVar20);
        uVar14 = local_34;
        if (local_38 != 5) goto LAB_0137d4fc;
      }
    }
    else {
LAB_0137d37c:
      if (iVar12 != 2) {
        uVar14 = uVar20 + 6;
        uVar16 = *(uint *)(param_3 + 0x88);
        if (uVar16 <= uVar14) goto LAB_0137d4d4;
        goto LAB_0137d5b8;
      }
      if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
        local_34 = uVar13;
LAB_0137d4f4:
        local_38 = 2;
        goto LAB_0137d4fc;
      }
      if (uVar13 < *(uint *)(*(int *)(param_2 + 0x278) + 0x154)) {
        uVar14 = uVar20 + uVar13 * 6 + 0xc;
        uVar16 = *(uint *)(param_3 + 0x88);
        if (uVar16 <= uVar14) goto LAB_0137d4d4;
        goto LAB_0137d5b8;
      }
      uVar14 = FUN_01391aa4(*(undefined4 *)(param_2 + 0x27c));
      if (0x7fffffff < uVar14) goto LAB_0137d764;
    }
    if (uVar18 != uVar19) {
      uVar19 = uVar19 - 1;
      if ((*(uint *)(param_3 + 0xb0) & 1) != 0) {
        uVar13 = *(uint *)(param_3 + 0xb4);
        uVar20 = *(uint *)(param_3 + 0xb8);
        iVar4 = uVar13 - uVar20;
        if (uVar13 < uVar20 || iVar4 == 0) {
          iVar4 = uVar20 - uVar13;
        }
        *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar4;
      }
      iVar12 = param_4[2];
      uVar13 = uVar18 + 3;
      iVar4 = param_2 + 0x158;
      if (0xfffffffc < uVar18) {
        uVar13 = 0xffffffff;
      }
      *(uint *)(param_3 + 0xb4) = uVar19;
      *(undefined4 *)(param_3 + 0xb0) = 1;
      *(uint *)(param_3 + 0xb8) = uVar19;
      do {
        if (uVar14 < 0x8000000) {
          if (uVar18 <= uVar19) {
            iVar11 = *(int *)(param_3 + 0x78);
            uVar21 = *(uint *)(param_3 + 0x7c);
            do {
              uVar20 = *(uint *)(iVar11 + (uVar14 + *(byte *)(iVar4 + (uint)*(byte *)(iVar12 + 
                                                  uVar19))) * 4);
              if ((uVar19 <= uVar13) || (0x7ffffff < uVar20)) {
                uVar16 = uVar14;
LAB_0137d954:
                if (uVar20 < 0x80000000) goto LAB_0137d87c;
                if (*(int *)(param_3 + 0xb0) != 1) goto LAB_0137e1e0;
                *(uint *)(param_3 + 0xb8) = uVar19;
                uVar10 = (uint)*(byte *)(iVar12 + uVar19);
                uVar14 = uVar16 + *(byte *)(iVar4 + uVar10);
                if (uVar21 <= uVar14) {
LAB_0137e464:
                    /* WARNING: Subroutine does not return */
                  FUN_00faa4a4(uVar14,uVar21,&DAT_01893ad0);
                }
                uVar20 = *(uint *)(iVar11 + uVar14 * 4);
                uVar14 = uVar16;
                if (0x7fffffff < uVar20) goto LAB_0137d9a0;
                goto LAB_0137d87c;
              }
              iVar17 = iVar12 + uVar19;
              uVar14 = *(uint *)(iVar11 + (uVar20 + *(byte *)(iVar4 + (uint)*(byte *)(iVar17 + -1)))
                                          * 4);
              if (0x7ffffff < uVar14) {
                uVar19 = uVar19 - 1;
LAB_0137d94c:
                uVar16 = uVar20;
                uVar20 = uVar14;
                goto LAB_0137d954;
              }
              uVar20 = *(uint *)(iVar11 + (uVar14 + *(byte *)(iVar4 + (uint)*(byte *)(iVar17 + -2)))
                                          * 4);
              if (0x7ffffff < uVar20) {
                uVar19 = uVar19 - 2;
                uVar16 = uVar14;
                goto LAB_0137d954;
              }
              uVar14 = *(uint *)(iVar11 + (uVar20 + *(byte *)(iVar4 + (uint)*(byte *)(iVar17 + -3)))
                                          * 4);
              if (0x7ffffff < uVar14) {
                uVar19 = uVar19 - 3;
                goto LAB_0137d94c;
              }
              uVar19 = uVar19 - 4;
            } while (uVar18 <= uVar19);
          }
        }
        else {
          if (*(int *)(param_3 + 0xb0) == 0) {
LAB_0137e1e0:
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8("no in-progress search to update",0x1f,&DAT_01892a40);
          }
          *(uint *)(param_3 + 0xb8) = uVar19;
          if (uVar22 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar19,uVar22,&DAT_01892a80);
          }
          uVar10 = (uint)*(byte *)(iVar12 + uVar19);
          uVar20 = (uVar14 & 0x7ffffff) + (uint)*(byte *)(iVar4 + uVar10);
          if (*(uint *)(param_3 + 0x7c) <= uVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar20,*(uint *)(param_3 + 0x7c),&DAT_01893ad0);
          }
          uVar20 = *(uint *)(*(int *)(param_3 + 0x78) + uVar20 * 4);
          if ((int)uVar20 < 0) {
LAB_0137d9a0:
            local_2c = param_2;
            local_28 = param_3;
            uVar24 = FUN_01390198(&local_2c,uVar14,uVar10 << 8);
            uVar20 = (uint)(uVar24 >> 0x20);
            if ((uVar24 & 1) != 0) goto LAB_0137d9dc;
          }
LAB_0137d87c:
          uVar14 = uVar20;
          if ((0x7ffffff < uVar14) && ((uVar14 & 0x10000000) == 0)) {
            if ((uVar14 & 0x8000000) != 0) {
              uVar18 = FUN_0137a834(*(undefined4 *)(*(int *)(param_2 + 0x278) + 0x154),
                                    *(undefined4 *)(param_2 + 0x27c),*(undefined4 *)(param_3 + 0x90)
                                    ,*(undefined4 *)(param_3 + 0x94),uVar14,0);
              uVar22 = *(uint *)(param_3 + 0xb0);
              uVar13 = *(uint *)(param_3 + 0xb4);
              *(undefined4 *)(param_3 + 0xb0) = 0;
              if ((uVar22 & 1) != 0) {
                param_1[1] = uVar18;
                param_1[2] = uVar19 + 1;
                iVar4 = uVar19 - uVar13;
                if (uVar19 < uVar13) {
                  iVar4 = uVar13 - uVar19;
                }
                iVar12 = *(int *)(param_3 + 0x70);
                *param_1 = 1;
                *(int *)(param_3 + 0x70) = iVar12 + iVar4;
                return;
              }
              goto LAB_0137e204;
            }
            if ((uVar14 & 0x40000000) != 0) {
              uVar18 = *(uint *)(param_3 + 0xb4);
              uVar22 = *(uint *)(param_3 + 0xb0);
              *(undefined4 *)(param_3 + 0xb0) = 0;
              if ((uVar22 & 1) != 0) {
                *param_1 = 0;
                iVar4 = uVar19 - uVar18;
                if (uVar19 < uVar18) {
                  iVar4 = uVar18 - uVar19;
                }
                *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar4;
                return;
              }
              goto LAB_0137e204;
            }
            if ((uVar14 & 0x20000000) == 0) {
LAB_0137e3e0:
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("internal error: entered unreachable code: sid being unknown is a bug",
                           0x89,&DAT_01892a90);
            }
            uVar18 = *(uint *)(param_3 + 0xb0);
            uVar13 = *(uint *)(param_3 + 0xb4);
            *(undefined4 *)(param_3 + 0xb0) = 0;
            if ((uVar18 & 1) == 0) goto LAB_0137e204;
            iVar4 = uVar19 - uVar13;
            if (uVar19 < uVar13) {
              iVar4 = uVar13 - uVar19;
            }
            *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar4;
            if (uVar22 <= uVar19) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar19,uVar22,&DAT_01892aa0);
            }
            uVar19 = FUN_013c7204(*(undefined1 *)(iVar12 + uVar19),uVar19);
            goto LAB_0137d9e0;
          }
        }
        bVar23 = uVar19 != uVar18;
        uVar19 = uVar19 - 1;
      } while (bVar23);
      uVar13 = *(uint *)(param_3 + 0xb4);
      uVar19 = *(uint *)(param_3 + 0xb0);
      *(undefined4 *)(param_3 + 0xb0) = 0;
      if ((uVar19 & 1) != 0) {
        iVar4 = uVar18 - uVar13;
        if (uVar18 < uVar13) {
          iVar4 = uVar13 - uVar18;
        }
        *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar4;
        if (uVar18 == 0) {
          uVar24 = FUN_0137a900(param_2,param_3,uVar14);
          uVar6 = (undefined4)(uVar24 >> 0x20);
          if ((uVar24 & 1) == 0) {
            uVar18 = 0;
            if ((uVar24 & 0x800000000000000) == 0) {
              *param_1 = 0;
              param_1[1] = (uint)uVar24;
              param_1[2] = 0;
              return;
            }
LAB_0137e14c:
            uVar19 = FUN_0137a834(*(undefined4 *)(*(int *)(param_2 + 0x278) + 0x154),
                                  *(undefined4 *)(param_2 + 0x27c),*(undefined4 *)(param_3 + 0x90),
                                  *(undefined4 *)(param_3 + 0x94),uVar6,0);
            *param_1 = 1;
            param_1[1] = uVar19;
            param_1[2] = uVar18;
            return;
          }
          uVar19 = FUN_013c723c(0);
        }
        else {
          uVar19 = uVar18 - 1;
          if (uVar22 <= uVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar19,uVar22,&DAT_01892ad0);
          }
          uVar3 = *(undefined1 *)(iVar12 + uVar19);
          uVar24 = FUN_0137a984(param_2,param_3,uVar14,uVar3);
          uVar6 = (undefined4)(uVar24 >> 0x20);
          if ((uVar24 & 1) == 0) {
            if ((uVar24 & 0x800000000000000) != 0) goto LAB_0137e14c;
            if ((uVar24 & 0x2000000000000000) == 0) {
              *param_1 = 0;
              param_1[1] = (uint)uVar24;
              param_1[2] = uVar18;
              return;
            }
            uVar19 = FUN_013c7204(uVar3,uVar19);
          }
          else {
            uVar19 = FUN_013c723c(uVar18);
          }
        }
        *param_1 = 2;
        param_1[1] = uVar19;
        return;
      }
      goto LAB_0137e204;
    }
    if (uVar18 == 0) {
      uVar19 = *(uint *)(param_3 + 0x7c);
      uVar18 = *(byte *)(param_2 + 599) + 1 + (uVar14 & 0x7ffffff);
      if (uVar19 <= uVar18) goto LAB_0137e49c;
      uVar19 = *(uint *)(param_3 + 0x78);
      uVar18 = *(uint *)(uVar19 + uVar18 * 4);
      if (-1 < (int)uVar18) {
        uVar24 = (ulonglong)uVar18 << 0x20;
LAB_0137e39c:
        uVar6 = (undefined4)(uVar24 >> 0x20);
        uVar22 = (uint)uVar24;
        uVar18 = 0;
        if ((uVar24 & 0x800000000000000) == 0) goto LAB_0137e3d0;
LAB_0137e3a8:
        uVar19 = uVar18;
        uVar22 = FUN_0137a834(*(undefined4 *)(*(int *)(param_2 + 0x278) + 0x154),
                              *(undefined4 *)(param_2 + 0x27c),*(undefined4 *)(param_3 + 0x90),
                              *(undefined4 *)(param_3 + 0x94),uVar6,0);
        uVar18 = 1;
LAB_0137e3d0:
        *param_1 = uVar18;
        param_1[1] = uVar22;
        param_1[2] = uVar19;
        return;
      }
      uVar6 = FUN_0138d580();
      local_2c = param_2;
      local_28 = param_3;
      uVar24 = FUN_01390198(&local_2c,uVar14,uVar6);
      uVar19 = extraout_r3;
      if ((uVar24 & 1) == 0) goto LAB_0137e39c;
LAB_0137d71c:
      uVar19 = FUN_013c723c(0);
      goto LAB_0137e314;
    }
    if (uVar22 <= uVar18 - 1) goto LAB_0137e474;
    uVar13 = (uint)*(byte *)(param_4[2] + (uVar18 - 1));
    uVar22 = *(uint *)(param_3 + 0x7c);
    uVar20 = (uVar14 & 0x7ffffff) + (uint)*(byte *)(param_2 + uVar13 + 0x158);
    if (uVar22 <= uVar20) goto LAB_0137e488;
    uVar19 = *(uint *)(*(int *)(param_3 + 0x78) + uVar20 * 4);
    if ((int)uVar19 < 0) {
      local_2c = param_2;
      local_28 = param_3;
      uVar24 = FUN_01390198(&local_2c,uVar14,uVar13 << 8);
      if ((uVar24 & 1) == 0) goto LAB_0137e2e8;
LAB_0137d628:
      uVar19 = FUN_013c723c(uVar18);
      goto LAB_0137e314;
    }
    uVar24 = (ulonglong)uVar19 << 0x20;
LAB_0137e2e8:
    uVar6 = (undefined4)(uVar24 >> 0x20);
    if ((uVar24 & 0x800000000000000) != 0) goto LAB_0137e3a8;
    if ((uVar24 & 0x2000000000000000) == 0) {
      *param_1 = 0;
      param_1[1] = uVar13;
      param_1[2] = (uint)uVar24;
      return;
    }
LAB_0137e30c:
    uVar19 = FUN_013c7204(uVar13,uVar18 - 1);
LAB_0137e314:
    *param_1 = 2;
    param_1[1] = uVar19;
    return;
  }
  uVar22 = param_4[3];
  if (uVar19 < uVar22) {
    iVar12 = *param_4;
    bVar1 = *(byte *)(param_4[2] + uVar19);
    uVar20 = (uint)bVar1;
    uVar13 = param_4[1];
    iVar4 = thunk_FUN_016dd50a(param_2 + 600,"",0x20);
    if (iVar4 != 0) {
      puVar9 = (uint *)(param_2 + 600 + (bVar1 >> 3 & 0xfffffff0));
      local_58[0] = *puVar9;
      local_58[1] = puVar9[1];
      local_58[2] = puVar9[2];
      local_58[3] = puVar9[3];
      uStack_48 = 0;
      local_3c = 0;
      local_40 = 0;
      local_44 = 0;
      if ((local_58[(uVar20 & 0x7f) >> 5] >> (uVar20 & 0x1f) & 1) != 0) {
        local_34 = CONCAT31(local_34._1_3_,bVar1);
        local_38 = 4;
        goto LAB_0137d4fc;
      }
    }
    uVar20 = (uint)*(byte *)(param_2 + uVar20 + 0x58);
    uVar14 = uVar20;
    local_84 = param_3;
    if (iVar12 != 0) goto LAB_0137d3ac;
LAB_0137d420:
    uVar16 = *(uint *)(param_3 + 0x88);
    uVar20 = uVar14;
    if (uVar16 <= uVar14) {
LAB_0137d4d4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar14,uVar16,&DAT_01893b00);
    }
LAB_0137d430:
    uVar14 = *(uint *)(*(int *)(param_3 + 0x84) + uVar14 * 4);
    if ((int)uVar14 < 0) {
LAB_0137daf8:
      local_2c = param_2;
      local_28 = param_3;
      FUN_01390a98(&local_38,&local_2c,iVar12,uVar13,uVar20);
      uVar14 = local_34;
      if (local_38 != 5) goto LAB_0137d4fc;
    }
  }
  else {
    iVar12 = *param_4;
    uVar20 = 2;
    uVar13 = param_4[1];
    uVar14 = uVar20;
    if (iVar12 == 0) goto LAB_0137d420;
LAB_0137d3ac:
    if (iVar12 == 1) {
      uVar14 = uVar20 + 6;
      uVar16 = *(uint *)(param_3 + 0x88);
      if (uVar16 <= uVar14) goto LAB_0137d4d4;
      goto LAB_0137d430;
    }
    if ((*(byte *)(param_2 + 0x51) & 1) == 0) {
      local_34 = uVar13;
      goto LAB_0137d4f4;
    }
    if (uVar13 < *(uint *)(*(int *)(param_2 + 0x278) + 0x154)) {
      uVar14 = uVar20 + uVar13 * 6 + 0xc;
      uVar16 = *(uint *)(param_3 + 0x88);
      if (uVar16 <= uVar14) goto LAB_0137d4d4;
      goto LAB_0137d430;
    }
    uVar14 = FUN_01391aa4(*(undefined4 *)(param_2 + 0x27c));
    if (0x7fffffff < uVar14) goto LAB_0137daf8;
  }
  if (uVar18 != uVar19) {
    uVar19 = uVar19 - 1;
    if ((*(uint *)(param_3 + 0xb0) & 1) != 0) {
      uVar13 = *(uint *)(param_3 + 0xb4);
      uVar20 = *(uint *)(param_3 + 0xb8);
      iVar4 = uVar13 - uVar20;
      if (uVar13 < uVar20 || iVar4 == 0) {
        iVar4 = uVar20 - uVar13;
      }
      *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar4;
    }
    iVar11 = param_4[2];
    *(undefined4 *)(param_3 + 0xb0) = 1;
    uVar13 = uVar18 + 3;
    iVar4 = *(int *)(param_2 + 0x278);
    iVar12 = param_2 + 0x158;
    if (0xfffffffc < uVar18) {
      uVar13 = 0xffffffff;
    }
    uVar16 = *(uint *)(param_2 + 0x27c);
    *(uint *)(param_3 + 0xb4) = uVar19;
    uVar20 = uVar16 & 0x1f;
    *(uint *)(param_3 + 0xb8) = uVar19;
    local_88 = 0;
    do {
      if (uVar14 < 0x8000000) {
        if (uVar18 <= uVar19) {
          iVar17 = *(int *)(param_3 + 0x78);
          uVar21 = *(uint *)(param_3 + 0x7c);
          uVar10 = uVar14;
          do {
            uVar7 = *(uint *)(iVar17 + (uVar10 + *(byte *)(iVar12 + (uint)*(byte *)(iVar11 + uVar19)
                                                          )) * 4);
            if ((uVar19 <= uVar13) || (0x7ffffff < uVar7)) {
              if (uVar7 < 0x80000000) goto LAB_0137dd78;
LAB_0137dcec:
              if (*(int *)(param_3 + 0xb0) != 1) goto LAB_0137e1e0;
              *(uint *)(param_3 + 0xb8) = uVar19;
              uVar14 = uVar10 + *(byte *)(iVar12 + (uint)*(byte *)(iVar11 + uVar19));
              if (uVar21 <= uVar14) goto LAB_0137e464;
              uVar7 = *(uint *)(iVar17 + uVar14 * 4);
              if (-1 < (int)uVar7) goto LAB_0137dd78;
              local_2c = param_2;
              local_28 = param_3;
              uVar24 = FUN_01390198(&local_2c,uVar10,(uint)*(byte *)(iVar11 + uVar19) << 8);
              uVar7 = (uint)(uVar24 >> 0x20);
              if ((uVar24 & 1) != 0) goto LAB_0137d9dc;
              goto LAB_0137dd78;
            }
            iVar15 = iVar11 + uVar19;
            uVar14 = *(uint *)(iVar17 + (uVar7 + *(byte *)(iVar12 + (uint)*(byte *)(iVar15 + -1))) *
                                        4);
            if (0x7ffffff < uVar14) {
              uVar19 = uVar19 - 1;
              uVar2 = uVar7;
              uVar7 = uVar14;
joined_r0x0137dd40:
              uVar10 = uVar2;
              if (0x7fffffff < uVar7) goto LAB_0137dcec;
              goto LAB_0137dd78;
            }
            uVar10 = *(uint *)(iVar17 + (uVar14 + *(byte *)(iVar12 + (uint)*(byte *)(iVar15 + -2)))
                                        * 4);
            if (0x7ffffff < uVar10) {
              uVar19 = uVar19 - 2;
              uVar2 = uVar14;
              uVar7 = uVar10;
              goto joined_r0x0137dd40;
            }
            uVar14 = *(uint *)(iVar17 + (uVar10 + *(byte *)(iVar12 + (uint)*(byte *)(iVar15 + -3)))
                                        * 4);
            if (0x7ffffff < uVar14) {
              uVar19 = uVar19 - 3;
              uVar7 = uVar14;
              if ((int)uVar14 < 0) goto LAB_0137dcec;
              goto LAB_0137dd78;
            }
            uVar19 = uVar19 - 4;
            uVar10 = uVar14;
          } while (uVar18 <= uVar19);
        }
        uVar10 = uVar19;
      }
      else {
        if (*(int *)(param_3 + 0xb0) == 0) goto LAB_0137e1e0;
        *(uint *)(param_3 + 0xb8) = uVar19;
        if (uVar22 <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar19,uVar22,&DAT_01892a80);
        }
        uVar10 = (uVar14 & 0x7ffffff) + (uint)*(byte *)(iVar12 + (uint)*(byte *)(iVar11 + uVar19));
        if (*(uint *)(param_3 + 0x7c) <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar10,*(uint *)(param_3 + 0x7c),&DAT_01893ad0);
        }
        uVar7 = *(uint *)(*(int *)(param_3 + 0x78) + uVar10 * 4);
        if ((int)uVar7 < 0) {
          local_2c = param_2;
          local_28 = param_3;
          uVar24 = FUN_01390198(&local_2c,uVar14,(uint)*(byte *)(iVar11 + uVar19) << 8);
          uVar7 = (uint)(uVar24 >> 0x20);
          if ((uVar24 & 1) != 0) goto LAB_0137d9dc;
        }
LAB_0137dd78:
        uVar10 = uVar19;
        uVar14 = uVar7;
        if ((0x7ffffff < uVar7) && ((uVar7 & 0x10000000) == 0)) {
          if ((uVar7 & 0x8000000) == 0) {
            if ((uVar7 & 0x40000000) != 0) {
              uVar18 = *(uint *)(param_3 + 0xb0);
              uVar22 = *(uint *)(param_3 + 0xb4);
              *(undefined4 *)(param_3 + 0xb0) = 0;
              if ((uVar18 & 1) != 0) {
                *param_1 = local_88;
                param_1[1] = local_84;
                param_1[2] = local_90;
                iVar4 = uVar19 - uVar22;
                if (uVar19 < uVar22) {
                  iVar4 = uVar22 - uVar19;
                }
                *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar4;
                return;
              }
              goto LAB_0137e204;
            }
            if ((uVar7 & 0x20000000) == 0) goto LAB_0137e3e0;
            uVar18 = *(uint *)(param_3 + 0xb0);
            uVar13 = *(uint *)(param_3 + 0xb4);
            *(undefined4 *)(param_3 + 0xb0) = 0;
            if ((uVar18 & 1) != 0) {
              iVar4 = uVar19 - uVar13;
              if (uVar19 < uVar13) {
                iVar4 = uVar13 - uVar19;
              }
              *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar4;
              if (uVar22 <= uVar19) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(uVar19,uVar22,&DAT_01892aa0);
              }
              uVar19 = FUN_013c7204(*(undefined1 *)(iVar11 + uVar19),uVar19);
              *param_1 = 2;
              param_1[1] = uVar19;
              return;
            }
            goto LAB_0137e204;
          }
          local_84 = 0;
          if (*(int *)(iVar4 + 0x154) != 1) {
            uVar21 = (uVar7 & 0x7ffffff) >> uVar20;
            if (*(uint *)(param_3 + 0x94) <= (uVar7 & 0x7ffffff) >> uVar20) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar21,*(uint *)(param_3 + 0x94),&DAT_01893ae0);
            }
            piVar8 = (int *)(*(int *)(param_3 + 0x90) + uVar21 * 8);
            iVar17 = *piVar8;
            uVar21 = piVar8[1];
            if (uVar21 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(0,0,&DAT_018942e8);
            }
            if ((*(byte *)(iVar17 + 8) & 2) != 0) {
              if (uVar21 < 0xd) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0xd,uVar21,uVar21,&DAT_018942f8);
              }
              if (uVar21 - 0xd < 4) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,4,uVar21 - 0xd,&DAT_01892db0);
              }
              local_84 = *(uint *)(iVar17 + 0x15);
            }
          }
          local_90 = uVar19 + 1;
          local_88 = 1;
        }
      }
      uVar19 = uVar10 - 1;
    } while (uVar10 != uVar18);
    uVar13 = *(uint *)(param_3 + 0xb4);
    uVar19 = *(uint *)(param_3 + 0xb0);
    *(undefined4 *)(param_3 + 0xb0) = 0;
    if ((uVar19 & 1) == 0) {
LAB_0137e204:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("no in-progress search to finish",0x1f,&DAT_01892a30);
    }
    iVar12 = uVar18 - uVar13;
    if (uVar18 < uVar13) {
      iVar12 = uVar13 - uVar18;
    }
    *(int *)(param_3 + 0x70) = *(int *)(param_3 + 0x70) + iVar12;
    if (uVar18 == 0) {
      uVar24 = FUN_0137a900(param_2,param_3,uVar14);
      uVar6 = (undefined4)(uVar24 >> 0x20);
      if ((uVar24 & 1) != 0) {
        uVar19 = FUN_013c723c(0);
        goto LAB_0137dfe0;
      }
      if ((uVar24 & 0x800000000000000) == 0) goto LAB_0137e0cc;
      uVar18 = 0;
    }
    else {
      uVar19 = uVar18 - 1;
      if (uVar22 <= uVar19) goto LAB_0137e474;
      uVar3 = *(undefined1 *)(iVar11 + uVar19);
      uVar24 = FUN_0137a984(param_2,param_3,uVar14,uVar3);
      uVar6 = (undefined4)(uVar24 >> 0x20);
      if ((uVar24 & 1) != 0) {
        uVar19 = FUN_013c723c(uVar18);
LAB_0137dfe0:
        *param_1 = 2;
        param_1[1] = uVar19;
        return;
      }
      if ((uVar24 & 0x800000000000000) == 0) {
        if ((uVar24 & 0x2000000000000000) == 0) goto LAB_0137e0cc;
        uVar19 = FUN_013c7204(uVar3,uVar19);
        goto LAB_0137dfe0;
      }
    }
    local_90 = uVar18;
    local_84 = FUN_0137a834(*(undefined4 *)(iVar4 + 0x154),uVar16,*(undefined4 *)(param_3 + 0x90),
                            *(undefined4 *)(param_3 + 0x94),uVar6,0);
    local_88 = 1;
LAB_0137e0cc:
    *param_1 = local_88;
    param_1[1] = local_84;
    param_1[2] = local_90;
    return;
  }
  if (uVar18 == 0) {
    uVar19 = *(uint *)(param_3 + 0x7c);
    uVar18 = *(byte *)(param_2 + 599) + 1 + (uVar14 & 0x7ffffff);
    if (uVar19 <= uVar18) {
LAB_0137e49c:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,uVar19,&DAT_01893af0);
    }
    uVar19 = *(uint *)(*(int *)(param_3 + 0x78) + uVar18 * 4);
    if ((int)uVar19 < 0) {
      uVar6 = FUN_0138d580();
      local_2c = param_2;
      local_28 = param_3;
      uVar24 = FUN_01390198(&local_2c,uVar14,uVar6);
      uVar20 = param_2;
      if ((uVar24 & 1) != 0) goto LAB_0137d71c;
    }
    else {
      uVar24 = (ulonglong)uVar19 << 0x20;
    }
    uVar22 = (uint)(uVar24 >> 0x20);
    uVar19 = (uint)uVar24;
    uVar18 = 0;
    if ((uVar24 & 0x800000000000000) == 0) goto LAB_0137d6d0;
  }
  else {
    uVar19 = uVar18 - 1;
    if (uVar22 <= uVar19) {
LAB_0137e474:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18 - 1,uVar22,&DAT_01892ad0);
    }
    uVar13 = (uint)*(byte *)(param_4[2] + uVar19);
    uVar22 = *(uint *)(param_3 + 0x7c);
    uVar20 = (uVar14 & 0x7ffffff) + (uint)*(byte *)(param_2 + uVar13 + 0x158);
    if (uVar22 <= uVar20) {
LAB_0137e488:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar20,uVar22,&DAT_01893ad0);
    }
    uVar22 = *(uint *)(*(int *)(param_3 + 0x78) + uVar20 * 4);
    if ((int)uVar22 < 0) {
      local_2c = param_2;
      local_28 = param_3;
      uVar24 = FUN_01390198(&local_2c,uVar14,uVar13 << 8);
      uVar22 = (uint)(uVar24 >> 0x20);
      if ((uVar24 & 1) != 0) goto LAB_0137d628;
    }
    if ((uVar22 & 0x8000000) == 0) {
      if ((uVar22 & 0x20000000) == 0) {
        *param_1 = 0;
        param_1[1] = uVar13;
        param_1[2] = uVar19;
        return;
      }
      goto LAB_0137e30c;
    }
  }
  uVar20 = uVar18;
  uVar19 = FUN_0137a834(*(undefined4 *)(*(int *)(param_2 + 0x278) + 0x154),
                        *(undefined4 *)(param_2 + 0x27c),*(undefined4 *)(param_3 + 0x90),
                        *(undefined4 *)(param_3 + 0x94),uVar22,0);
  uVar18 = 1;
LAB_0137d6d0:
  *param_1 = uVar18;
  param_1[1] = uVar19;
  param_1[2] = uVar20;
  return;
LAB_0137d9dc:
  uVar19 = FUN_013c723c(uVar19);
LAB_0137d9e0:
  *param_1 = 2;
  param_1[1] = uVar19;
  return;
}

