// FUN_0071a118 @ 0071a118 size=3232 calls_out=7 calls_in=1
// strings: .llvm. | `fmt::Error`s should be impossible without a `fmt::Formatter`

/* WARNING: Removing unreachable block (ram,0x0071ac98) */

void FUN_0071a118(ushort *****param_1,ushort *****param_2,ushort ****param_3)

{
  byte bVar1;
  ulonglong uVar2;
  ushort *****pppppuVar3;
  ushort *****pppppuVar4;
  uint uVar5;
  ushort *****pppppuVar6;
  int iVar7;
  ushort *****pppppuVar8;
  undefined *puVar9;
  ushort ****extraout_r1;
  ushort ****ppppuVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  undefined1 *puVar13;
  undefined4 uVar14;
  ushort ****extraout_r3;
  ushort ****ppppuVar15;
  undefined1 *puVar16;
  int iVar17;
  ushort *****pppppuVar18;
  ushort *****pppppuVar19;
  ushort ****ppppuVar20;
  ushort *****pppppuVar21;
  ushort *****pppppuVar22;
  uint uVar23;
  ushort *****unaff_r8;
  ushort *****unaff_r9;
  ushort *****unaff_r11;
  ushort ****ppppuVar24;
  bool bVar25;
  bool bVar26;
  ushort *****local_68;
  ushort *****local_64;
  ushort *****local_60;
  uint local_5c;
  ushort *****local_58;
  undefined4 local_54;
  int local_50;
  ushort *****local_4c;
  ushort *****local_44;
  ushort *****local_38;
  ushort *****local_34;
  int iStack_30;
  ushort *****pppppuStack_2c;
  undefined1 uStack_25;
  
  FUN_012fbd94(&local_68);
  pppppuVar8 = local_60;
  pppppuVar3 = local_64;
  ppppuVar20 = (ushort ****)0x2;
  ppppuVar10 = extraout_r1;
  ppppuVar15 = extraout_r3;
  pppppuVar21 = param_2;
  pppppuVar19 = param_1;
  if (local_68 != (ushort *****)0x0) goto LAB_0071a8b4;
  FUN_01306b30(&local_68,local_64,local_60,".llvm.",6);
  pppppuVar18 = param_1;
  if (local_68 == (ushort *****)0x1) {
    pppppuVar21 = (ushort *****)((int)pppppuStack_2c + -1);
    pppppuVar19 = (ushort *****)&local_60;
    unaff_r11 = pppppuStack_2c;
    if (local_44 == (ushort *****)&DAT_ffffffff) {
      pppppuVar22 = (ushort *****)((int)local_4c + (int)pppppuVar21);
      if (pppppuVar22 < local_34) {
        pppppuVar18 = pppppuStack_2c;
        if (pppppuStack_2c < local_58) {
          pppppuVar18 = local_58;
        }
LAB_0071a404:
        uVar23 = *(byte *)((int)local_38 + (int)pppppuVar22) & 0x3f;
        local_44 = (ushort *****)((uint)local_60 >> uVar23 | local_5c << (0x20 - uVar23 & 0xff));
        if (-1 < (int)(uVar23 - 0x20)) {
          local_44 = (ushort *****)(local_5c >> (uVar23 - 0x20 & 0xff));
        }
        if (((uint)local_44 & 1) == 0) {
          local_4c = (ushort *****)((int)local_4c + (int)pppppuStack_2c);
        }
        else {
          pppppuVar19 = local_58;
          do {
            local_44 = pppppuVar19;
            if (pppppuVar18 == local_44) {
              pppppuVar19 = (ushort *****)((int)local_58 + -1);
              goto LAB_0071a480;
            }
            if (local_34 <= (ushort *****)((int)local_4c + (int)local_44)) {
              pppppuVar19 = (ushort *****)((int)local_4c + (int)local_58);
              goto LAB_0071ad08;
            }
            pppppuVar19 = (ushort *****)((int)local_44 + 1);
          } while (*(byte *)(iStack_30 + (int)local_44) ==
                   ((byte *)((int)local_38 + (int)local_4c))[(int)local_44]);
          local_4c = (ushort *****)((int)local_44 + (int)((int)local_4c + (1 - (int)local_58)));
          local_44 = (ushort *****)((int)local_44 + 1);
        }
        goto LAB_0071a4bc;
      }
    }
    else {
      pppppuVar22 = (ushort *****)((int)local_4c + (int)pppppuVar21);
      if (pppppuVar22 < local_34) {
LAB_0071a1ec:
        uVar5 = *(byte *)((int)local_38 + (int)pppppuVar22) & 0x3f;
        pppppuVar18 = (ushort *****)(0x20 - uVar5);
        uVar23 = (uint)local_60 >> uVar5 | local_5c << ((uint)pppppuVar18 & 0xff);
        if (-1 < (int)(uVar5 - 0x20)) {
          uVar23 = local_5c >> (uVar5 - 0x20 & 0xff);
        }
        if ((uVar23 & 1) == 0) {
          local_4c = (ushort *****)((int)local_4c + (int)pppppuStack_2c);
          local_44 = (ushort *****)0x0;
        }
        else {
          pppppuVar18 = (ushort *****)((int)local_38 + (int)local_4c);
          pppppuVar19 = local_58;
          if (local_58 < local_44) {
            pppppuVar19 = local_44;
          }
          pppppuVar22 = pppppuStack_2c;
          if (pppppuStack_2c < pppppuVar19) {
            pppppuVar22 = pppppuVar19;
          }
          pppppuVar4 = pppppuVar19;
          do {
            pppppuVar6 = pppppuVar4;
            if (pppppuVar22 == pppppuVar6) {
              pppppuVar19 = local_58;
              goto LAB_0071a290;
            }
            if (local_34 <= (ushort *****)((int)local_4c + (int)pppppuVar6)) {
              pppppuVar19 = (ushort *****)((int)pppppuVar19 + (int)local_4c);
LAB_0071ad08:
              if (pppppuVar19 < local_34) {
                pppppuVar19 = local_34;
              }
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(pppppuVar19,local_34,&DAT_01d2e38c);
            }
            pppppuVar4 = (ushort *****)((int)pppppuVar6 + 1);
          } while (*(byte *)(iStack_30 + (int)pppppuVar6) ==
                   *(byte *)((int)pppppuVar18 + (int)pppppuVar6));
          local_4c = (ushort *****)((int)pppppuVar6 + (int)((int)local_4c + (1 - (int)local_58)));
          local_44 = (ushort *****)0x0;
        }
        goto LAB_0071a2d4;
      }
    }
  }
  else {
    pppppuVar19 = (ushort *****)(local_5c >> 0x10 & 0xff);
    local_44 = param_2;
    pppppuStack_2c = unaff_r11;
    if (pppppuVar19 == (ushort *****)0x0) {
      local_5c = local_5c & 0xff;
      do {
        if (local_64 != (ushort *****)0x0) {
          if (local_64 < local_34) {
            if ((char)*(byte *)((int)local_38 + (int)local_64) < -0x40) goto LAB_0071ad14;
          }
          else if (local_64 != local_34) {
LAB_0071ad14:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514(local_38,local_34,local_64,local_34,&DAT_01d2e39c);
          }
        }
        if (local_64 == local_34) {
          local_4c = local_34;
          if ((local_5c & 1) == 0) goto LAB_0071a5f8;
          goto LAB_0071a4f0;
        }
        pppppuVar18 = (ushort *****)((int)local_38 + (int)local_64);
        local_44 = (ushort *****)(int)(char)*(byte *)pppppuVar18;
        uVar23 = (uint)*(byte *)pppppuVar18;
        if ((ushort *****)0x7fffffff < local_44) {
          local_44 = (ushort *****)(uVar23 & 0x1f);
          uVar5 = *(byte *)((int)pppppuVar18 + 1) & 0x3f;
          if (uVar23 < 0xe0) {
            uVar23 = uVar5 | (int)local_44 << 6;
          }
          else {
            uVar5 = *(byte *)((int)pppppuVar18 + 2) & 0x3f | uVar5 << 6;
            if (uVar23 < 0xf0) {
              uVar23 = uVar5 | (int)local_44 << 0xc;
            }
            else {
              uVar23 = *(byte *)((int)pppppuVar18 + 3) & 0x3f | uVar5 << 6 | (uVar23 & 7) << 0x12;
            }
          }
        }
        if ((local_5c & 1) != 0) goto LAB_0071a4e0;
        pppppuVar18 = (ushort *****)&DAT_00000001;
        if (0x7f < uVar23) {
          pppppuVar18 = (ushort *****)0x2;
        }
        local_5c = 1;
        if ((0x7ff < uVar23) && (pppppuVar18 = (ushort *****)&SUB_00000004, uVar23 < 0x10000)) {
          pppppuVar18 = (ushort *****)&DAT_00000003;
        }
        local_64 = (ushort *****)((int)pppppuVar18 + (int)local_64);
      } while( true );
    }
  }
LAB_0071a4cc:
  local_38 = pppppuVar19;
  unaff_r11 = pppppuStack_2c;
  goto LAB_0071a5f8;
  while( true ) {
    if (pppppuStack_2c <= (ushort *****)((int)local_58 + -1)) goto LAB_0071acd8;
    pppppuVar22 = (ushort *****)((int)local_4c + (int)pppppuVar19);
    if (local_34 <= pppppuVar22) goto LAB_0071ace8;
    local_44 = (ushort *****)(uint)((byte *)((int)local_38 + (int)local_4c))[(int)pppppuVar19];
    pbVar11 = (byte *)(iStack_30 + (int)pppppuVar19);
    pppppuVar19 = (ushort *****)((int)pppppuVar19 + -1);
    if ((ushort *****)(uint)*pbVar11 != local_44) break;
LAB_0071a480:
    if (pppppuVar19 == (ushort *****)&DAT_ffffffff) goto LAB_0071a4f0;
  }
  local_4c = (ushort *****)((int)local_4c + local_50);
LAB_0071a4bc:
  pppppuVar22 = (ushort *****)((int)local_4c + (int)pppppuVar21);
  pppppuVar19 = pppppuVar21;
  if (local_34 <= pppppuVar22) goto LAB_0071a4cc;
  goto LAB_0071a404;
LAB_0071a290:
  do {
    if (pppppuVar19 <= local_44) goto LAB_0071a4f0;
    pppppuVar19 = (ushort *****)((int)pppppuVar19 + -1);
    if (pppppuStack_2c <= pppppuVar19) {
LAB_0071acd8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(pppppuVar19,pppppuStack_2c,&DAT_01d2e36c);
    }
    pppppuVar22 = (ushort *****)((int)pppppuVar19 + (int)local_4c);
    if (local_34 <= pppppuVar22) {
LAB_0071ace8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(pppppuVar22,local_34,&DAT_01d2e37c);
    }
    pppppuVar18 = (ushort *****)(uint)*(byte *)(iStack_30 + (int)pppppuVar19);
  } while (pppppuVar18 == (ushort *****)(uint)*(byte *)((int)local_38 + (int)pppppuVar22));
  local_4c = (ushort *****)((int)local_4c + local_50);
  local_44 = (ushort *****)((int)pppppuStack_2c - local_50);
LAB_0071a2d4:
  pppppuVar22 = (ushort *****)((int)local_4c + (int)pppppuVar21);
  pppppuVar19 = pppppuVar21;
  if (local_34 <= pppppuVar22) goto LAB_0071a4cc;
  goto LAB_0071a1ec;
LAB_0071a4e0:
  local_4c = local_64;
LAB_0071a4f0:
  pppppuVar19 = (ushort *****)((int)local_4c + 6);
  if (pppppuVar19 != (ushort *****)0x0) {
    if (pppppuVar19 < pppppuVar8) {
      if ((char)*(byte *)((int)pppppuVar3 + (int)pppppuVar19) < -0x40) goto LAB_0071a510;
    }
    else if (pppppuVar19 != pppppuVar8) {
LAB_0071a510:
      puVar9 = &DAT_01d223d4;
      local_4c = pppppuVar8;
      goto LAB_0071ad50;
    }
  }
  local_38 = (ushort *****)((int)pppppuVar3 + (int)pppppuVar8);
  pppppuVar19 = (ushort *****)((int)pppppuVar3 + (int)pppppuVar19);
  do {
    if (pppppuVar19 == local_38) {
LAB_0071a5c4:
      if (local_4c == (ushort *****)0x0) {
        unaff_r8 = (ushort *****)0x0;
        goto LAB_0071a81c;
      }
      if (local_4c < pppppuVar8) {
        local_38 = (ushort *****)(int)(char)*(byte *)((int)pppppuVar3 + (int)local_4c);
        if (-0x41 < (int)local_38) {
          pppppuVar8 = local_4c;
          break;
        }
      }
      else if (local_4c == pppppuVar8) break;
      pppppuVar19 = (ushort *****)0x0;
      puVar9 = &DAT_01d223e4;
      goto LAB_0071ad50;
    }
    pppppuVar21 = (ushort *****)((int)pppppuVar19 + 1);
    pppppuVar18 = (ushort *****)(int)(char)*(byte *)pppppuVar19;
    puVar16 = (undefined1 *)(uint)*(byte *)pppppuVar19;
    if ((ushort *****)0x7fffffff < pppppuVar18) {
      pppppuVar18 = (ushort *****)(*(byte *)((int)pppppuVar19 + 1) & 0x3f);
      if (puVar16 < (undefined1 *)0xe0) {
        puVar16 = (undefined1 *)((uint)pppppuVar18 | ((uint)puVar16 & 0x1f) << 6);
        pppppuVar21 = (ushort *****)((int)pppppuVar19 + 2);
      }
      else {
        local_44 = (ushort *****)(*(byte *)((int)pppppuVar19 + 2) & 0x3f);
        pppppuVar18 = (ushort *****)((uint)local_44 | (int)pppppuVar18 << 6);
        if (puVar16 < (undefined1 *)0xf0) {
          puVar16 = (undefined1 *)((uint)pppppuVar18 | ((uint)puVar16 & 0x1f) << 0xc);
          pppppuVar21 = (ushort *****)((int)pppppuVar19 + 3);
        }
        else {
          puVar16 = (undefined1 *)
                    (*(byte *)((int)pppppuVar19 + 3) & 0x3f | (int)pppppuVar18 << 6 |
                    ((uint)puVar16 & 7) << 0x12);
          if (puVar16 == &DAT_00110000) goto LAB_0071a5c4;
          pppppuVar21 = pppppuVar19 + 1;
        }
      }
    }
    bVar25 = (undefined1 *)0xfffffff7 < puVar16 + -0x47;
    bVar26 = puVar16 == (undefined1 *)0x3f;
    if (!bVar25 || bVar26) {
      bVar25 = (undefined1 *)0xfffffff4 < puVar16 + -0x3a;
      bVar26 = puVar16 + -0x3a == (undefined1 *)0xfffffff5;
    }
    pppppuVar19 = pppppuVar21;
  } while (bVar25 && !bVar26);
LAB_0071a5f8:
  unaff_r8 = pppppuVar8;
  if ((ushort *****)0x2 < pppppuVar8) {
    iVar17 = 3;
    iVar7 = thunk_FUN_01bed842("_ZN",pppppuVar3,3);
    if (iVar7 == 0) {
      iVar7 = -3;
      if ((pppppuVar8 == (ushort *****)&DAT_00000003) ||
         (-0x41 < (char)*(byte *)((int)pppppuVar3 + 3))) goto LAB_0071a6ec;
      puVar9 = &DAT_01d223c4;
LAB_0071ad94:
      uVar14 = 3;
      goto LAB_0071ad9c;
    }
    local_38 = (ushort *****)(uint)*(ushort *)pppppuVar3;
    if (local_38 != (ushort *****)0x4e5a) {
      if (pppppuVar8 < &SUB_00000004) goto LAB_0071a7a8;
      if (*pppppuVar3 == (ushort ****)0x4e5a5f5f) {
        iVar17 = 4;
        iVar7 = -4;
        if ((pppppuVar8 != (ushort *****)&SUB_00000004) && ((char)*(byte *)(pppppuVar3 + 1) < -0x40)
           ) {
          pppppuVar19 = (ushort *****)&SUB_00000004;
          puVar9 = &DAT_01d223a4;
          local_4c = pppppuVar8;
          goto LAB_0071ad50;
        }
        goto LAB_0071a6ec;
      }
      goto LAB_0071a7b8;
    }
    if (-0x41 < (char)*(byte *)((int)pppppuVar3 + 2)) goto LAB_0071a6d0;
    puVar9 = &DAT_01d223b4;
LAB_0071ad70:
    uVar14 = 2;
LAB_0071ad9c:
                    /* WARNING: Subroutine does not return */
    FUN_012fb514(pppppuVar3,pppppuVar8,uVar14,pppppuVar8,puVar9);
  }
  if ((pppppuVar8 == (ushort *****)0x2) &&
     (local_38 = (ushort *****)(uint)*(ushort *)pppppuVar3, local_38 == (ushort *****)0x4e5a)) {
LAB_0071a6d0:
    iVar17 = 2;
    iVar7 = -2;
LAB_0071a6ec:
    unaff_r9 = (ushort *****)((int)pppppuVar8 + iVar7);
    ppppuVar15 = (ushort ****)((int)pppppuVar3 + iVar17);
    pppppuVar21 = (ushort *****)((int)ppppuVar15 + (int)unaff_r9);
    local_38 = unaff_r9;
    ppppuVar10 = ppppuVar15;
    do {
      if (local_38 == (ushort *****)0x0) {
        local_38 = (ushort *****)0x0;
        if (unaff_r9 != (ushort *****)0x0) {
          pppppuVar19 = (ushort *****)((int)ppppuVar15 + 1);
          pppppuVar22 = (ushort *****)(int)(char)*(byte *)ppppuVar15;
          puVar16 = (undefined1 *)(uint)*(byte *)ppppuVar15;
          if ((ushort *****)0x7fffffff < pppppuVar22) {
            pppppuVar22 = (ushort *****)((uint)puVar16 & 0x1f);
            uVar23 = *(byte *)((int)ppppuVar15 + 1) & 0x3f;
            if (puVar16 < (undefined1 *)0xe0) {
              puVar16 = (undefined1 *)(uVar23 | (int)pppppuVar22 << 6);
              pppppuVar19 = (ushort *****)((int)ppppuVar15 + 2);
            }
            else {
              uVar23 = *(byte *)((int)ppppuVar15 + 2) & 0x3f | uVar23 << 6;
              if (puVar16 < (undefined1 *)0xf0) {
                puVar16 = (undefined1 *)(uVar23 | (int)pppppuVar22 << 0xc);
                pppppuVar19 = (ushort *****)((int)ppppuVar15 + 3);
              }
              else {
                pppppuVar22 = (ushort *****)((uint)puVar16 & 7);
                pppppuVar19 = (ushort *****)(ppppuVar15 + 1);
                puVar16 = (undefined1 *)
                          (*(byte *)((int)ppppuVar15 + 3) & 0x3f | uVar23 << 6 |
                          (int)pppppuVar22 << 0x12);
              }
            }
          }
          if (puVar16 == (undefined1 *)0x45) {
            unaff_r11 = (ushort *****)0x0;
            goto LAB_0071a9cc;
          }
          local_38 = pppppuVar22;
          pppppuVar18 = pppppuVar19;
          if (puVar16 != &DAT_00110000) {
            unaff_r11 = (ushort *****)0x0;
            goto LAB_0071a9f0;
          }
        }
        break;
      }
      bVar1 = *(byte *)ppppuVar10;
      local_38 = (ushort *****)((int)local_38 + -1);
      ppppuVar10 = (ushort ****)((int)ppppuVar10 + 1);
    } while (-1 < (char)bVar1);
LAB_0071a7a8:
    local_44 = pppppuVar8;
    if (pppppuVar8 < &DAT_00000003) goto LAB_0071a81c;
LAB_0071a7b8:
    pppppuVar21 = pppppuVar8;
    if (*(ushort *)pppppuVar3 != 0x525f) {
      local_44 = pppppuVar8;
      if (*(byte *)pppppuVar3 != 0x52) {
        if ((pppppuVar8 != (ushort *****)&DAT_00000003) &&
           (iVar7 = thunk_FUN_01bed842("__R",pppppuVar3,3), iVar7 == 0)) {
          unaff_r9 = (ushort *****)((int)pppppuVar3 + 3);
          bVar1 = *(byte *)unaff_r9;
          if ((char)bVar1 < -0x40) {
            puVar9 = &DAT_01d22324;
            goto LAB_0071ad94;
          }
          iVar7 = -3;
          goto LAB_0071a878;
        }
        goto LAB_0071a82c;
      }
      goto LAB_0071a840;
    }
    unaff_r9 = (ushort *****)((int)pppppuVar3 + 2);
    bVar1 = *(byte *)unaff_r9;
    if ((char)bVar1 < -0x40) {
      puVar9 = &DAT_01d22344;
      goto LAB_0071ad70;
    }
    iVar7 = -2;
  }
  else {
LAB_0071a81c:
    if (unaff_r8 == (ushort *****)0x2) {
      local_38 = (ushort *****)(uint)*(byte *)pppppuVar3;
    }
    pppppuVar8 = local_44;
    if (unaff_r8 != (ushort *****)0x2 || local_38 != (ushort *****)&DAT_00000052) {
LAB_0071a82c:
      ppppuVar15 = (ushort ****)0x0;
      unaff_r9 = (ushort *****)0x0;
      ppppuVar10 = (ushort ****)0x0;
      ppppuVar20 = (ushort ****)0x2;
      pppppuVar21 = pppppuVar8;
      pppppuVar19 = pppppuVar18;
      goto LAB_0071a8b4;
    }
LAB_0071a840:
    pppppuVar8 = unaff_r8;
    unaff_r9 = (ushort *****)((int)pppppuVar3 + 1);
    bVar1 = *(byte *)unaff_r9;
    if ((char)bVar1 < -0x40) {
      pppppuVar19 = (ushort *****)&DAT_00000001;
      puVar9 = &DAT_01d22334;
      local_4c = pppppuVar8;
LAB_0071ad50:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(pppppuVar3,pppppuVar8,pppppuVar19,local_4c,puVar9);
    }
    iVar7 = -1;
    pppppuVar21 = local_44;
    unaff_r8 = pppppuVar8;
  }
LAB_0071a878:
  ppppuVar20 = (ushort ****)0x2;
  pppppuVar19 = pppppuVar18;
  if (bVar1 - 0x41 < 0x1a) {
    unaff_r11 = (ushort *****)((int)unaff_r8 + iVar7);
    pppppuVar8 = (ushort *****)0x0;
    do {
      if (unaff_r11 == pppppuVar8) {
        local_60 = (ushort *****)0x0;
        local_5c = 0;
        local_58 = (ushort *****)0x0;
        local_54 = 0;
        local_68 = unaff_r9;
        local_64 = unaff_r11;
        iVar7 = FUN_018a21dc(&local_68,0);
        if (iVar7 != 0) {
LAB_0071aca0:
                    /* WARNING: Subroutine does not return */
          FUN_013073dc("`fmt::Error`s should be impossible without a `fmt::Formatter`",0x3d,
                       &uStack_25,&DAT_01d22384,&DAT_01d22364);
        }
        if (local_68 == (ushort *****)0x0) {
LAB_0071ab40:
          ppppuVar20 = (ushort ****)0x2;
          unaff_r9 = (ushort *****)0x0;
          ppppuVar10 = (ushort ****)0x0;
          ppppuVar15 = (ushort ****)0x0;
          goto LAB_0071a8b4;
        }
        if ((local_60 < local_64) && (*(byte *)((int)local_68 + (int)local_60) - 0x41 < 0x1a)) {
          local_58 = (ushort *****)0x0;
          local_54 = 0;
          iVar7 = FUN_018a21dc(&local_68,0);
          if (iVar7 != 0) goto LAB_0071aca0;
          pppppuVar21 = pppppuVar3;
          if (local_68 == (ushort *****)0x0) goto LAB_0071ab40;
        }
        if (local_60 != (ushort *****)0x0) {
          if (local_60 < local_64) {
            if ((char)*(byte *)((int)local_68 + (int)local_60) < -0x40) goto LAB_0071a9b4;
          }
          else if (local_64 != local_60) {
LAB_0071a9b4:
                    /* WARNING: Subroutine does not return */
            FUN_012fb514();
          }
        }
        ppppuVar24 = (ushort ****)((int)local_64 - (int)local_60);
        pppppuVar19 = (ushort *****)((int)local_68 + (int)local_60);
        ppppuVar15 = (ushort ****)0x0;
        goto LAB_0071ab60;
      }
      pbVar11 = (byte *)((int)unaff_r9 + (int)pppppuVar8);
      pppppuVar8 = (ushort *****)((int)pppppuVar8 + 1);
    } while (-1 < (char)*pbVar11);
  }
  ppppuVar15 = (ushort ****)0x0;
  unaff_r9 = (ushort *****)0x0;
  ppppuVar10 = (ushort ****)0x0;
  goto LAB_0071a8b4;
code_r0x0071ac88:
  ppppuVar10 = ppppuVar24;
  goto LAB_0071ac90;
  while( true ) {
    puVar12 = (undefined1 *)0x0;
    do {
      pppppuVar22 = pppppuVar19;
      uVar2 = ZEXT48(puVar12);
      uVar23 = (uint)(uVar2 * 10);
      puVar12 = puVar13 + uVar23;
      pppppuVar18 = pppppuVar22;
      if (((int)(uVar2 * 10 >> 0x20) != 0 || CARRY4((uint)puVar13,uVar23)) ||
         (local_38 = pppppuVar22, pppppuVar22 == pppppuVar21)) goto LAB_0071a7a8;
      pppppuVar18 = (ushort *****)((int)pppppuVar22 + 1);
      puVar16 = (undefined1 *)(uint)*(byte *)pppppuVar22;
      if (0x7fffffff < (uint)(int)(char)*(byte *)pppppuVar22) {
        uVar23 = *(byte *)((int)pppppuVar22 + 1) & 0x3f;
        if (puVar16 < (undefined1 *)0xe0) {
          puVar16 = (undefined1 *)(uVar23 | ((uint)puVar16 & 0x1f) << 6);
          pppppuVar18 = (ushort *****)((int)pppppuVar22 + 2);
        }
        else {
          uVar23 = *(byte *)((int)pppppuVar22 + 2) & 0x3f | uVar23 << 6;
          if (puVar16 < (undefined1 *)0xf0) {
            puVar16 = (undefined1 *)(uVar23 | ((uint)puVar16 & 0x1f) << 0xc);
            pppppuVar18 = (ushort *****)((int)pppppuVar22 + 3);
          }
          else {
            puVar16 = (undefined1 *)
                      (*(byte *)((int)pppppuVar22 + 3) & 0x3f | uVar23 << 6 |
                      ((uint)puVar16 & 7) << 0x12);
            if (puVar16 == &DAT_00110000) goto LAB_0071a7a8;
            pppppuVar18 = pppppuVar22 + 1;
          }
        }
      }
      puVar13 = puVar16 + -0x30;
      pppppuVar19 = pppppuVar18;
    } while (puVar13 < (undefined1 *)0xa);
    for (; pppppuVar19 = pppppuVar18, puVar12 != (undefined1 *)0x0; puVar12 = puVar12 + -1) {
      local_38 = pppppuVar22;
      pppppuVar18 = pppppuVar19;
      if (pppppuVar19 == pppppuVar21) goto LAB_0071a7a8;
      pppppuVar18 = (ushort *****)((int)pppppuVar19 + 1);
      puVar16 = (undefined1 *)(uint)*(byte *)pppppuVar19;
      if (0x7fffffff < (uint)(int)(char)*(byte *)pppppuVar19) {
        uVar23 = *(byte *)((int)pppppuVar19 + 1) & 0x3f;
        if (puVar16 < (undefined1 *)0xe0) {
          puVar16 = (undefined1 *)(uVar23 | ((uint)puVar16 & 0x1f) << 6);
          pppppuVar18 = (ushort *****)((int)pppppuVar19 + 2);
        }
        else {
          uVar23 = *(byte *)((int)pppppuVar19 + 2) & 0x3f | uVar23 << 6;
          if (puVar16 < (undefined1 *)0xf0) {
            puVar16 = (undefined1 *)(uVar23 | ((uint)puVar16 & 0x1f) << 0xc);
            pppppuVar18 = (ushort *****)((int)pppppuVar19 + 3);
          }
          else {
            puVar16 = (undefined1 *)
                      (*(byte *)((int)pppppuVar19 + 3) & 0x3f | uVar23 << 6 |
                      ((uint)puVar16 & 7) << 0x12);
            local_38 = pppppuVar19;
            if (puVar16 == &DAT_00110000) goto LAB_0071a7a8;
            pppppuVar18 = pppppuVar19 + 1;
          }
        }
      }
      pppppuVar22 = pppppuVar19;
    }
    unaff_r11 = (ushort *****)((int)unaff_r11 + 1);
    if (puVar16 == (undefined1 *)0x45) break;
LAB_0071a9f0:
    puVar13 = puVar16 + -0x30;
    local_38 = pppppuVar22;
    pppppuVar18 = pppppuVar19;
    if ((undefined1 *)0x9 < puVar13) goto LAB_0071a7a8;
  }
LAB_0071a9cc:
  ppppuVar24 = (ushort ****)((int)pppppuVar21 - (int)pppppuVar19);
LAB_0071ab60:
  ppppuVar20 = (ushort ****)0x2;
  ppppuVar10 = (ushort ****)0x0;
  if (ppppuVar24 != (ushort ****)0x0) {
    pppppuVar21 = pppppuVar3;
    if (*(byte *)pppppuVar19 == 0x2e) {
      puVar16 = (undefined1 *)0x2e;
      pppppuVar8 = pppppuVar19;
      do {
        if ((char)puVar16 < '\0') {
          uVar23 = *(byte *)((int)pppppuVar8 + 1) & 0x3f;
          if (puVar16 < (undefined1 *)0xe0) {
            puVar16 = (undefined1 *)(uVar23 | ((uint)puVar16 & 0x1f) << 6);
            pppppuVar8 = (ushort *****)((int)pppppuVar8 + 2);
          }
          else {
            pppppuVar21 = (ushort *****)(*(byte *)((int)pppppuVar8 + 2) & 0x3f);
            uVar23 = (uint)pppppuVar21 | uVar23 << 6;
            if (puVar16 < (undefined1 *)0xf0) {
              puVar16 = (undefined1 *)(uVar23 | ((uint)puVar16 & 0x1f) << 0xc);
              pppppuVar8 = (ushort *****)((int)pppppuVar8 + 3);
            }
            else {
              puVar16 = (undefined1 *)
                        (*(byte *)((int)pppppuVar8 + 3) & 0x3f | uVar23 << 6 |
                        ((uint)puVar16 & 7) << 0x12);
              if (puVar16 == &DAT_00110000) goto code_r0x0071ac88;
              pppppuVar8 = pppppuVar8 + 1;
            }
          }
        }
        else {
          pppppuVar8 = (ushort *****)((int)pppppuVar8 + 1);
        }
        if (0x19 < ((uint)puVar16 & 0x1fffdf) - 0x41) {
          puVar13 = puVar16 + -0x30;
          bVar26 = (undefined1 *)0x9 < puVar13;
          if (bVar26) {
            puVar13 = puVar16 + -0x21;
          }
          if (bVar26 && (undefined1 *)0xe < puVar13) {
            puVar13 = puVar16 + -0x3a;
            bVar26 = (undefined1 *)0x6 < puVar13;
            if (bVar26) {
              puVar13 = puVar16 + -0x5b;
            }
            if ((bVar26 && (undefined1 *)0x5 < puVar13) && ((undefined1 *)0x3 < puVar16 + -0x7b)) {
              ppppuVar20 = (ushort ****)0x2;
              break;
            }
          }
        }
        if (pppppuVar8 == (ushort *****)((int)pppppuVar19 + (int)ppppuVar24)) goto code_r0x0071ac88;
        puVar16 = (undefined1 *)(uint)*(byte *)pppppuVar8;
      } while( true );
    }
    goto LAB_0071a8b4;
  }
LAB_0071ac90:
  ppppuVar20 = (ushort ****)0x1;
  pppppuVar21 = pppppuVar3;
LAB_0071a8b4:
  param_1[8] = (ushort ****)param_2;
  param_1[9] = param_3;
  *param_1 = ppppuVar20;
  param_1[1] = ppppuVar15;
  param_1[2] = (ushort ****)unaff_r9;
  param_1[3] = (ushort ****)unaff_r11;
  param_1[4] = (ushort ****)pppppuVar21;
  param_1[5] = (ushort ****)unaff_r8;
  param_1[6] = (ushort ****)pppppuVar19;
  param_1[7] = ppppuVar10;
  return;
}

