// FUN_01671400 @ 01671400 size=5056 calls_out=26 calls_in=5
// strings: Retrieving external resources is not supported once the registry is populated | additionalProperties | allOf | anyOf | itemsInlineTable | dependencies

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01671400(undefined4 *param_1,int *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *puVar5;
  int *piVar6;
  undefined1 uVar7;
  char cVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined1 *puVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  char *pcVar20;
  undefined4 uVar21;
  uint uVar22;
  char *pcVar23;
  int iVar24;
  int **ppiVar25;
  int *piVar26;
  int iVar27;
  int *piVar28;
  int *piVar29;
  int iVar30;
  int *piVar31;
  int iVar32;
  longlong lVar33;
  ulonglong uVar34;
  int *local_ec;
  int *local_e4;
  int *local_e0;
  char *local_dc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int *local_90;
  undefined4 uStack_8c;
  int *local_88;
  int *local_84;
  int *local_80;
  int *local_7c;
  int *local_78;
  int *local_74;
  int *piStack_70;
  char *local_68;
  undefined1 local_64;
  undefined1 *local_60;
  int *local_5c;
  int *local_58;
  int *piStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  lVar33 = FUN_01343b04(param_3,param_4,0x23);
  if ((int)lVar33 == 0) {
    uVar18 = param_4;
    do {
      uVar34 = FUN_01307268(0x23,param_3,uVar18);
      uVar18 = (uint)(uVar34 >> 0x20);
      if ((uVar34 & 1) == 0) break;
      if ((uVar18 < param_4) && (*(char *)(param_3 + uVar18) == '#')) {
        local_dc = (char *)(param_3 + uVar18 + 1);
        iVar24 = param_4 - (uVar18 + 1);
        goto LAB_016714a8;
      }
    } while (uVar18 <= param_4);
    local_dc = &DAT_00000001;
    iVar24 = 0;
    uVar18 = param_4;
LAB_016714a8:
    lVar33 = CONCAT44(iVar24,local_dc);
    iVar24 = *param_2;
    iVar30 = param_2[1];
    local_c8 = *(int **)(iVar30 + 0xc);
    local_c4 = *(int **)(iVar30 + 0x10);
    local_c0 = *(int **)(iVar30 + 0x14);
    uStack_bc = *(undefined4 *)(iVar30 + 0x18);
    uStack_b8 = *(undefined4 *)(iVar30 + 0x1c);
    local_b4 = *(undefined4 *)(iVar30 + 0x20);
    uStack_b0 = *(undefined4 *)(iVar30 + 0x24);
    uStack_ac = *(undefined4 *)(iVar30 + 0x28);
    uStack_a8 = *(undefined4 *)(iVar30 + 0x2c);
    FUN_0166bf5c(&local_60,iVar24,&local_c8,param_3,uVar18);
    piVar29 = local_5c;
    if (local_60 != (undefined1 *)0x8000000a) {
      param_1[2] = local_58;
      param_1[3] = piStack_54;
      param_1[4] = local_50;
      param_1[5] = uStack_4c;
      param_1[6] = uStack_48;
      param_1[7] = uStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = uStack_38;
      param_1[0xb] = uStack_34;
      param_1[0xc] = uStack_30;
      param_1[0xd] = uStack_2c;
      *param_1 = local_60;
      param_1[1] = local_5c;
      return;
    }
  }
  else {
    piVar29 = (int *)param_2[1];
    do {
      iVar24 = *piVar29;
      bVar3 = (bool)hasExclusiveAccess(piVar29);
    } while (!bVar3);
    *piVar29 = iVar24 + 1;
    if (iVar24 < 0) goto LAB_016727f0;
    iVar24 = *param_2;
  }
  iVar30 = (int)((ulonglong)lVar33 >> 0x20);
  local_dc = (char *)lVar33;
  if (*(int *)(iVar24 + 0x3c) == 0) {
    iVar15 = piVar29[3];
    iVar17 = piVar29[4];
  }
  else {
    iVar15 = piVar29[3];
    iVar17 = piVar29[4];
    uVar9 = FUN_01676700(iVar24 + 0x40);
    uVar18 = uVar9 >> 0x19;
    uVar22 = *(uint *)(iVar24 + 0x34);
    iVar27 = *(int *)(iVar24 + 0x30);
    iVar32 = 0;
    while( true ) {
      uVar9 = uVar22 & uVar9;
      uVar19 = *(uint *)(iVar27 + uVar9);
      uVar10 = uVar19 ^ uVar18 * 0x1010101;
      for (uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff; uVar10 != 0;
          uVar10 = uVar10 - 1 & uVar10) {
        uVar11 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                        (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                 uVar22;
        iVar12 = *(int *)(iVar27 + -0xc + uVar11 * -0xc);
        if ((iVar17 == *(int *)(iVar12 + 0x10)) &&
           (iVar12 = thunk_FUN_01bed842(iVar15,*(undefined4 *)(iVar12 + 0xc)), iVar12 == 0)) {
          iVar27 = iVar27 + uVar11 * -0xc;
          if (iVar30 == 0) {
            FUN_016729e0(&local_60,param_2,piVar29);
            iVar24 = *(int *)(iVar27 + -8);
            param_1[2] = local_60;
            param_1[3] = local_5c;
            param_1[4] = local_58;
            uVar7 = *(undefined1 *)(iVar27 + -4);
          }
          else {
            if (*local_dc == '/') {
              FUN_016729e0(&local_a0,param_2,piVar29);
              pcVar20 = *(char **)(iVar27 + -8);
              local_7c = (int *)0x0;
              local_80 = (int *)&SUB_00000004;
              local_84 = (int *)0x0;
              if ((iVar30 != 1) && (local_dc[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb514(local_dc,iVar30,1,iVar30,&DAT_01d073f4);
              }
              FUN_01655afc(&local_60,local_dc + 1,local_dc + iVar30);
              piVar6 = local_58;
              piVar29 = local_5c;
              puVar5 = local_60;
              if (local_60 != (undefined1 *)0x80000001) {
                piVar28 = (int *)0x0;
                puVar13 = (undefined4 *)((uint)&local_60 | 4);
                local_e0 = (int *)0x0;
                local_e4 = (int *)&SUB_00000004;
                piVar26 = (int *)0x0;
                goto LAB_016718d4;
              }
              uVar21 = 0;
              if (-1 < lVar33) {
                uVar21 = 1;
                iVar24 = FUN_01298504(iVar30,1);
                if (iVar24 != 0) {
                  FUN_01bed4e2(iVar24,local_dc,iVar30);
                  *param_1 = 0x80000003;
                  param_1[1] = iVar30;
                  param_1[2] = iVar24;
                  param_1[3] = iVar30;
                  param_1[4] = piVar29;
                  param_1[5] = piVar6;
                  goto LAB_01672774;
                }
              }
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar21,iVar30);
            }
            FUN_0166d0f0(&local_60,iVar24,piVar29 + 2,local_dc,iVar30);
            piVar6 = local_5c;
            if (local_60 != (undefined1 *)0x8000000a) {
              param_1[2] = local_58;
              param_1[3] = piStack_54;
              param_1[4] = local_50;
              param_1[5] = uStack_4c;
              param_1[6] = uStack_48;
              param_1[7] = uStack_44;
              param_1[8] = local_40;
              param_1[9] = local_3c;
              param_1[10] = uStack_38;
              param_1[0xb] = uStack_34;
              param_1[0xc] = uStack_30;
              param_1[0xd] = uStack_2c;
              *param_1 = local_60;
              param_1[1] = local_5c;
              goto LAB_01671758;
            }
            FUN_016729e0(&local_90,param_2,piVar29);
            if (*piVar6 == 1) {
              if (local_88 != (int *)0x0) goto LAB_0167184c;
              ppiVar25 = (int **)0x0;
              goto LAB_016724e0;
            }
            iVar24 = piVar6[3];
            param_1[2] = local_90;
            param_1[3] = uStack_8c;
            param_1[4] = local_88;
            uVar7 = (undefined1)piVar6[4];
          }
          *(undefined1 *)(param_1 + 5) = uVar7;
          *param_1 = 0x8000000a;
          param_1[1] = iVar24;
          return;
        }
      }
      if ((uVar19 & 0x80808080 & uVar19 << 1) != 0) break;
      iVar32 = iVar32 + 4;
      uVar9 = uVar9 + iVar32;
    }
  }
  iVar24 = thunk_FUN_01be5118(0x4d);
  if (iVar24 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x4d);
  }
  FUN_01bed4e2(iVar24,
               "Retrieving external resources is not supported once the registry is populated",0x4d)
  ;
  puVar13 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar13 = 0x4d;
  puVar13[1] = iVar24;
  puVar13[2] = 0x4d;
  FUN_016706dc(&local_60,iVar15,iVar17,puVar13,&DAT_01d0701c);
  *param_1 = local_60;
  param_1[1] = local_5c;
  param_1[2] = local_58;
  param_1[3] = piStack_54;
  param_1[4] = local_50;
  param_1[5] = uStack_4c;
  param_1[6] = uStack_48;
  param_1[7] = uStack_44;
  param_1[8] = local_40;
  param_1[9] = local_3c;
  param_1[10] = uStack_38;
  param_1[0xb] = uStack_34;
  param_1[0xc] = uStack_30;
  param_1[0xd] = uStack_2c;
LAB_01671758:
  DataMemoryBarrier(0xb);
  do {
    iVar24 = *piVar29;
    bVar3 = (bool)hasExclusiveAccess(piVar29);
  } while (!bVar3);
  *piVar29 = iVar24 + -1;
  if (iVar24 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670d04(piVar29);
    return;
  }
  return;
LAB_016718d4:
  bVar3 = true;
  do {
    if (piVar6 < piVar28) {
LAB_01671990:
      piVar31 = piVar6;
      local_ec = piVar26;
      goto LAB_01671994;
    }
    uVar18 = (int)piVar6 - (int)piVar28;
    if (uVar18 < 8) {
      uVar9 = 0;
      if (uVar18 == 0) {
        uVar34 = 0;
      }
      else {
        do {
          if (((undefined1 *)((int)piVar29 + (int)piVar28))[uVar9] == '/') {
            uVar34 = CONCAT44(uVar9,1);
            goto LAB_01671944;
          }
          uVar9 = uVar9 + 1;
        } while (uVar18 != uVar9);
        uVar34 = (ulonglong)uVar18 << 0x20;
      }
    }
    else {
      uVar34 = FUN_01307168(0x2f,(undefined1 *)((int)piVar29 + (int)piVar28));
    }
LAB_01671944:
    if ((uVar34 & 1) == 0) {
      piVar28 = piVar6;
      goto LAB_01671990;
    }
    piVar31 = (int *)((int)piVar28 + (int)(uVar34 >> 0x20));
    piVar28 = (int *)((int)piVar31 + 1);
  } while ((piVar6 <= piVar31) || (*(char *)((int)piVar29 + (int)piVar31) != '/'));
  bVar3 = false;
  local_ec = piVar28;
LAB_01671994:
  uVar18 = (int)piVar31 - (int)piVar26;
  pcVar23 = (char *)((int)piVar29 + (int)piVar26);
  if (*pcVar20 == '\x04') {
    if (uVar18 != 1) {
      if (uVar18 == 0) {
        uVar7 = 0;
        goto LAB_016723f4;
      }
      cVar8 = *pcVar23;
LAB_01671a68:
      iVar24 = 0;
      if (cVar8 == '+') {
        iVar24 = -1;
      }
      uVar9 = (uint)(cVar8 == '+');
      if (uVar18 - uVar9 < 9) {
        if (uVar18 == uVar9) {
          uVar22 = 0;
        }
        else {
          piVar14 = (int *)((int)piVar31 + iVar24);
          uVar22 = 0;
          puVar16 = (undefined1 *)((int)piVar29 + uVar9);
          do {
            pbVar1 = puVar16 + (int)piVar26;
            if (9 < *pbVar1 - 0x30) goto LAB_016723f0;
            piVar14 = (int *)((int)piVar14 + -1);
            puVar16 = puVar16 + 1;
            uVar22 = (*pbVar1 - 0x30) + uVar22 * 10;
          } while (piVar26 != piVar14);
        }
      }
      else {
        piVar14 = (int *)((int)piVar31 + iVar24);
        uVar22 = 0;
        puVar16 = (undefined1 *)((int)piVar29 + uVar9);
        while (piVar26 != piVar14) {
          uVar9 = (uint)((ulonglong)uVar22 * 10);
          if ((int)((ulonglong)uVar22 * 10 >> 0x20) != 0) {
            uVar7 = 1;
            if ((byte)puVar16[(int)piVar26] - 0x30 < 10) {
              uVar7 = 2;
            }
            goto LAB_016723f4;
          }
          uVar10 = (byte)puVar16[(int)piVar26] - 0x30;
          if (9 < uVar10) goto LAB_016723f0;
          uVar22 = uVar10 + uVar9;
          puVar16 = puVar16 + 1;
          piVar14 = (int *)((int)piVar14 + -1);
          if (CARRY4(uVar10,uVar9)) {
            uVar7 = 2;
            goto LAB_016723f4;
          }
        }
      }
      if (uVar22 < *(uint *)(pcVar20 + 0xc)) {
        iVar24 = *(int *)(pcVar20 + 8);
        if (local_e0 == local_84) {
          FUN_019ee178(&local_84);
          local_e4 = local_80;
        }
        pcVar20 = (char *)(iVar24 + uVar22 * 0x18);
        local_e4[(int)local_e0 * 3] = -0x7fffffff;
        (local_e4 + (int)local_e0 * 3)[1] = uVar22;
        goto LAB_01671b88;
      }
      FUN_01670780(&local_60,local_dc,iVar30);
      *param_1 = local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = piStack_54;
      param_1[4] = local_50;
      param_1[5] = uStack_4c;
      param_1[6] = uStack_48;
      param_1[7] = uStack_44;
      param_1[8] = local_40;
      param_1[9] = local_3c;
      param_1[10] = uStack_38;
      param_1[0xb] = uStack_34;
      param_1[0xc] = uStack_30;
      param_1[0xd] = uStack_2c;
      goto LAB_01672760;
    }
    cVar8 = *pcVar23;
    uVar7 = 1;
    if ((cVar8 != '+') && (cVar8 != '-')) goto LAB_01671a68;
    goto LAB_016723f4;
  }
  FUN_016792f0(&local_c8,pcVar23,uVar18);
  piVar31 = local_c0;
  piVar26 = local_c4;
  if (*pcVar20 != '\x05') {
LAB_01672634:
    FUN_01670780(&local_60,local_dc,iVar30);
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = local_58;
    param_1[3] = piStack_54;
    param_1[4] = local_50;
    param_1[5] = uStack_4c;
    param_1[6] = uStack_48;
    param_1[7] = uStack_44;
    param_1[8] = local_40;
    param_1[9] = local_3c;
    param_1[10] = uStack_38;
    param_1[0xb] = uStack_34;
    param_1[0xc] = uStack_30;
    param_1[0xd] = uStack_2c;
    if (local_c8 != (int *)&DAT_80000000) {
      FUN_019bb7e0(local_c8,piVar26);
    }
    goto LAB_01672760;
  }
  pcVar20 = (char *)FUN_0196b3a8(*(undefined4 *)(pcVar20 + 4),*(undefined4 *)(pcVar20 + 8),local_c4,
                                 local_c0);
  piVar14 = local_c8;
  if (pcVar20 == (char *)0x0) goto LAB_01672634;
  if (local_e0 == local_84) {
    FUN_019ee178(&local_84);
    local_e4 = local_80;
  }
  local_e4 = local_e4 + (int)local_e0 * 3;
  *local_e4 = (int)piVar14;
  local_e4[1] = (int)piVar26;
  local_e4[2] = (int)piVar31;
LAB_01671b88:
  local_e0 = (int *)((int)local_e0 + 1);
  local_64 = *(undefined1 *)(iVar27 + -4);
  local_e4 = local_80;
  local_7c = local_e0;
  local_68 = pcVar20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(local_64) {
  case 0:
    if (local_e0 != (int *)0x0) {
      piVar31 = local_80 + (int)local_e0 * 3;
      piVar26 = local_80;
      do {
        piVar14 = piVar26 + 3;
        if (*piVar26 != -0x7fffffff) {
          iVar24 = piVar26[2];
          if (iVar24 == 5) {
            iVar15 = piVar26[1];
            uVar21 = 5;
            pcVar23 = "itemsInlineTable";
LAB_01671f9c:
            iVar17 = thunk_FUN_01bed842(iVar15,pcVar23,uVar21);
            if ((iVar17 == 0) && (*local_68 == '\x05')) break;
          }
          else {
            iVar15 = piVar26[1];
            if (iVar24 == 0xc) {
              uVar21 = 0xc;
              pcVar23 = "dependencies";
              goto LAB_01671f9c;
            }
          }
          iVar17 = 0;
          do {
            if ((*(int *)((int)&DAT_01d0704c + iVar17) == iVar24) &&
               (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d07048 + iVar17),iVar15,
                                            iVar24), iVar32 == 0)) goto LAB_01671f50;
            iVar17 = iVar17 + 8;
          } while (iVar17 != 0x18);
          iVar17 = 0;
          while ((*(int *)((int)&DAT_01d071fc + iVar17) != iVar24 ||
                 (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d071f8 + iVar17),iVar15,
                                              iVar24), iVar32 != 0))) {
            iVar17 = iVar17 + 8;
            if (iVar17 == 0x30) goto LAB_01672240;
          }
          if (piVar14 == piVar31) goto LAB_01672240;
          piVar14 = piVar26 + 6;
        }
LAB_01671f50:
        piVar26 = piVar14;
      } while (piVar14 != piVar31);
    }
    break;
  case 1:
    if (local_e0 != (int *)0x0) {
      piVar31 = local_80 + (int)local_e0 * 3;
      piVar26 = local_80;
      do {
        piVar14 = piVar26 + 3;
        if (*piVar26 != -0x7fffffff) {
          iVar24 = piVar26[2];
          if (iVar24 == 5) {
            iVar15 = piVar26[1];
            uVar21 = 5;
            pcVar23 = "itemsInlineTable";
LAB_016720c8:
            iVar17 = thunk_FUN_01bed842(iVar15,pcVar23,uVar21);
            if ((iVar17 == 0) && (*local_68 == '\x05')) break;
          }
          else {
            iVar15 = piVar26[1];
            if (iVar24 == 0xc) {
              uVar21 = 0xc;
              pcVar23 = "dependencies";
              goto LAB_016720c8;
            }
          }
          iVar17 = 0;
          do {
            if ((*(int *)((int)&DAT_01d06fa8 + iVar17) == iVar24) &&
               (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d06fa4 + iVar17),iVar15,
                                            iVar24), iVar32 == 0)) goto LAB_0167207c;
            iVar17 = iVar17 + 8;
          } while (iVar17 != 0x28);
          iVar17 = 0;
          while ((*(int *)((int)&DAT_01d071fc + iVar17) != iVar24 ||
                 (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d071f8 + iVar17),iVar15,
                                              iVar24), iVar32 != 0))) {
            iVar17 = iVar17 + 8;
            if (iVar17 == 0x30) goto LAB_0167228c;
          }
          if (piVar14 == piVar31) goto LAB_0167228c;
          piVar14 = piVar26 + 6;
        }
LAB_0167207c:
        piVar26 = piVar14;
      } while (piVar14 != piVar31);
    }
    break;
  case 2:
    if (local_e0 != (int *)0x0) {
      piVar31 = local_80 + (int)local_e0 * 3;
      piVar26 = local_80;
      do {
        piVar14 = piVar26 + 3;
        if (*piVar26 != -0x7fffffff) {
          iVar24 = piVar26[2];
          if (iVar24 == 5) {
            iVar15 = piVar26[1];
            uVar21 = 5;
            pcVar23 = "itemsInlineTable";
LAB_01671d64:
            iVar17 = thunk_FUN_01bed842(iVar15,pcVar23,uVar21);
            if ((iVar17 == 0) && (*local_68 == '\x05')) break;
          }
          else {
            iVar15 = piVar26[1];
            if (iVar24 == 0xc) {
              uVar21 = 0xc;
              pcVar23 = "dependencies";
              goto LAB_01671d64;
            }
          }
          iVar17 = 0;
          do {
            if ((*(int *)((int)&DAT_01d071bc + iVar17) == iVar24) &&
               (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d071b8 + iVar17),iVar15,
                                            iVar24), iVar32 == 0)) goto LAB_01671d18;
            iVar17 = iVar17 + 8;
          } while (iVar17 != 0x40);
          iVar17 = 0;
          while ((*(int *)((int)&DAT_01d071fc + iVar17) != iVar24 ||
                 (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d071f8 + iVar17),iVar15,
                                              iVar24), iVar32 != 0))) {
            iVar17 = iVar17 + 8;
            if (iVar17 == 0x30) goto LAB_016721f4;
          }
          if (piVar14 == piVar31) goto LAB_016721f4;
          piVar14 = piVar26 + 6;
        }
LAB_01671d18:
        piVar26 = piVar14;
      } while (piVar14 != piVar31);
    }
    break;
  case 3:
    if (local_e0 != (int *)0x0) {
      piVar31 = local_80 + (int)local_e0 * 3;
      piVar26 = local_80;
      do {
        piVar14 = piVar26 + 3;
        if (*piVar26 != -0x7fffffff) {
          iVar24 = piVar26[2];
          iVar15 = piVar26[1];
          if (((iVar24 == 5) &&
              (iVar17 = thunk_FUN_01bed842(iVar15,"itemsInlineTable",5), iVar17 == 0)) &&
             (*local_68 == '\x05')) break;
          iVar17 = 0;
          do {
            if ((*(int *)((int)&DAT_01d07104 + iVar17) == iVar24) &&
               (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d07100 + iVar17),iVar15,
                                            iVar24), iVar32 == 0)) goto LAB_01671e44;
            iVar17 = iVar17 + 8;
          } while (iVar17 != 0x58);
          iVar17 = 0;
          while ((*(int *)((int)&DAT_01d0715c + iVar17) != iVar24 ||
                 (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d07158 + iVar17),iVar15,
                                              iVar24), iVar32 != 0))) {
            iVar17 = iVar17 + 8;
            if (iVar17 == 0x40) goto LAB_016721a8;
          }
          if (piVar14 == piVar31) goto LAB_016721a8;
          piVar14 = piVar26 + 6;
        }
LAB_01671e44:
        piVar26 = piVar14;
      } while (piVar14 != piVar31);
    }
    break;
  default:
    if (local_e0 != (int *)0x0) {
      piVar31 = local_80 + (int)local_e0 * 3;
      piVar26 = local_80;
      do {
        piVar14 = piVar26 + 3;
        if (*piVar26 != -0x7fffffff) {
          iVar15 = piVar26[1];
          iVar24 = 0;
          iVar17 = piVar26[2];
          do {
            if ((*(int *)((int)&DAT_01d07064 + iVar24) == iVar17) &&
               (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d07060 + iVar24),iVar15,
                                            iVar17), iVar32 == 0)) goto LAB_01671bf4;
            iVar24 = iVar24 + 8;
          } while (iVar24 != 0x58);
          iVar24 = 0;
          while ((*(int *)((int)&DAT_01d070bc + iVar24) != iVar17 ||
                 (iVar32 = thunk_FUN_01bed842(*(undefined4 *)((int)&DAT_01d070b8 + iVar24),iVar15,
                                              iVar17), iVar32 != 0))) {
            iVar24 = iVar24 + 8;
            if (iVar24 == 0x48) goto LAB_01671ca4;
          }
          if (piVar14 == piVar31) goto LAB_01671ca4;
          piVar14 = piVar26 + 6;
        }
LAB_01671bf4:
        piVar26 = piVar14;
      } while (piVar14 != piVar31);
    }
  }
  FUN_016712bc(&local_60,&local_a0,&local_68);
  if (local_60 != (undefined1 *)0x8000000a) {
    local_c8 = (int *)*puVar13;
    local_c4 = (int *)puVar13[1];
    local_c0 = (int *)puVar13[2];
    param_1[4] = local_50;
    param_1[5] = uStack_4c;
    param_1[6] = uStack_48;
    param_1[7] = uStack_44;
    param_1[8] = local_40;
    param_1[9] = local_3c;
    param_1[10] = uStack_38;
    param_1[0xb] = uStack_34;
    param_1[0xc] = uStack_30;
    param_1[0xd] = uStack_2c;
    param_1[1] = local_c8;
    param_1[2] = local_c4;
    param_1[3] = local_c0;
    *param_1 = local_60;
    goto LAB_01672760;
  }
  goto LAB_016722dc;
LAB_01671ca4:
  do {
    iVar24 = *local_9c;
    bVar4 = (bool)hasExclusiveAccess(local_9c);
  } while (!bVar4);
  *local_9c = iVar24 + 1;
  if (iVar24 < 0) goto LAB_016727f0;
  if (local_98 == (int *)0x0) goto LAB_016722d4;
  do {
    iVar24 = *local_98;
    bVar4 = (bool)hasExclusiveAccess(local_98);
  } while (!bVar4);
  *local_98 = iVar24 + 1;
  goto LAB_016722cc;
LAB_016721a8:
  do {
    iVar24 = *local_9c;
    bVar4 = (bool)hasExclusiveAccess(local_9c);
  } while (!bVar4);
  *local_9c = iVar24 + 1;
  if (iVar24 < 0) goto LAB_016727f0;
  if (local_98 == (int *)0x0) goto LAB_016722d4;
  do {
    iVar24 = *local_98;
    bVar4 = (bool)hasExclusiveAccess(local_98);
  } while (!bVar4);
  *local_98 = iVar24 + 1;
  goto LAB_016722cc;
LAB_016721f4:
  do {
    iVar24 = *local_9c;
    bVar4 = (bool)hasExclusiveAccess(local_9c);
  } while (!bVar4);
  *local_9c = iVar24 + 1;
  if (iVar24 < 0) goto LAB_016727f0;
  if (local_98 == (int *)0x0) goto LAB_016722d4;
  do {
    iVar24 = *local_98;
    bVar4 = (bool)hasExclusiveAccess(local_98);
  } while (!bVar4);
  *local_98 = iVar24 + 1;
  goto LAB_016722cc;
LAB_0167228c:
  do {
    iVar24 = *local_9c;
    bVar4 = (bool)hasExclusiveAccess(local_9c);
  } while (!bVar4);
  *local_9c = iVar24 + 1;
  if (iVar24 < 0) goto LAB_016727f0;
  if (local_98 == (int *)0x0) goto LAB_016722d4;
  do {
    iVar24 = *local_98;
    bVar4 = (bool)hasExclusiveAccess(local_98);
  } while (!bVar4);
  *local_98 = iVar24 + 1;
  goto LAB_016722cc;
LAB_01672240:
  do {
    iVar24 = *local_9c;
    bVar4 = (bool)hasExclusiveAccess(local_9c);
  } while (!bVar4);
  *local_9c = iVar24 + 1;
  if (iVar24 < 0) goto LAB_016727f0;
  if (local_98 == (int *)0x0) goto LAB_016722d4;
  do {
    iVar24 = *local_98;
    bVar4 = (bool)hasExclusiveAccess(local_98);
  } while (!bVar4);
  *local_98 = iVar24 + 1;
LAB_016722cc:
  if (iVar24 < 0) goto LAB_016727f0;
LAB_016722d4:
  local_5c = local_a0;
  local_58 = local_9c;
  piStack_54 = local_98;
LAB_016722dc:
  local_c8 = (int *)*puVar13;
  local_c4 = (int *)puVar13[1];
  local_c0 = (int *)puVar13[2];
  local_78 = local_c8;
  local_74 = local_c4;
  piStack_70 = local_c0;
  if ((local_c4 != local_9c) &&
     ((local_c4[4] != local_9c[4] ||
      (iVar24 = thunk_FUN_01bed842(local_c4[3],local_9c[3]), iVar24 != 0)))) {
    FUN_016792a4(&local_84);
    local_e4 = (int *)&SUB_00000004;
    local_7c = (int *)0x0;
    local_80 = (int *)&SUB_00000004;
    local_e0 = (int *)0x0;
    local_84 = (int *)0x0;
  }
  FUN_0150343c(&local_a0);
  local_a0 = local_78;
  local_9c = local_74;
  local_98 = piStack_70;
  piVar26 = local_ec;
  if (bVar3) {
    param_1[2] = local_78;
    param_1[3] = local_74;
    param_1[4] = piStack_70;
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)(iVar27 + -4);
    *param_1 = 0x8000000a;
    param_1[1] = pcVar20;
    if (puVar5 != (undefined1 *)0x80000000) {
      FUN_019bb7e0(puVar5,piVar29);
    }
    FUN_016792a4(&local_84);
    return;
  }
  goto LAB_016718d4;
LAB_0167184c:
  do {
    iVar24 = *local_88;
    bVar3 = (bool)hasExclusiveAccess(local_88);
  } while (!bVar3);
  *local_88 = iVar24 + 1;
  if (iVar24 < 0) {
LAB_016727f0:
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x16727f0);
    (*pcVar2)();
  }
  ppiVar25 = &local_84;
LAB_016724e0:
  local_84 = local_88;
  piVar29 = piVar6 + 3;
  while (ppiVar25 != (int **)0x0) {
    piVar26 = *ppiVar25;
    ppiVar25 = (int **)(piVar26 + 3);
    if (*ppiVar25 == (int *)0x0) {
      ppiVar25 = (int **)0x0;
    }
    FUN_0166d0f0(&local_60,local_90,piVar26[2] + 8,piVar6[1],piVar6[2]);
    if (local_60 == (undefined1 *)0x8000000a) {
      if (*local_5c != 0) {
        piVar29 = local_5c + 3;
      }
    }
    else {
      if (local_60 != &DAT_80000005) {
        *param_1 = local_60;
        param_1[1] = local_5c;
        param_1[2] = local_58;
        param_1[3] = piStack_54;
        param_1[4] = local_50;
        param_1[5] = uStack_4c;
        param_1[6] = uStack_48;
        param_1[7] = uStack_44;
        param_1[8] = local_40;
        param_1[9] = local_3c;
        param_1[10] = uStack_38;
        param_1[0xb] = uStack_34;
        param_1[0xc] = uStack_30;
        param_1[0xd] = uStack_2c;
        FUN_0167294c(&local_84);
        goto LAB_0167262c;
      }
      FUN_019bb7e0(local_5c,local_58);
    }
  }
  FUN_0167294c(&local_84);
  iVar24 = *piVar29;
  FUN_016712bc(&local_60,&local_90,piVar29);
  puVar13 = (undefined4 *)((uint)&local_60 | 4);
  local_c8 = (int *)*puVar13;
  local_c4 = (int *)puVar13[1];
  local_c0 = (int *)puVar13[2];
  if (local_60 == (undefined1 *)0x8000000a) {
    iVar30 = piVar29[1];
    param_1[2] = local_c8;
    param_1[3] = local_c4;
    param_1[4] = local_c0;
    *(char *)(param_1 + 5) = (char)iVar30;
    *param_1 = 0x8000000a;
    param_1[1] = iVar24;
  }
  else {
    param_1[4] = local_50;
    param_1[5] = uStack_4c;
    param_1[6] = uStack_48;
    param_1[7] = uStack_44;
    param_1[8] = local_40;
    param_1[9] = local_3c;
    param_1[10] = uStack_38;
    param_1[0xb] = uStack_34;
    param_1[0xc] = uStack_30;
    param_1[0xd] = uStack_2c;
    param_1[1] = local_c8;
    param_1[2] = local_c4;
    param_1[3] = local_c0;
    *param_1 = local_60;
  }
LAB_0167262c:
  ppiVar25 = &local_90;
LAB_01672780:
  FUN_0150343c(ppiVar25);
  return;
LAB_016723f0:
  uVar7 = 1;
LAB_016723f4:
  uVar21 = 0;
  if (-1 < lVar33) {
    uVar21 = 1;
    iVar24 = FUN_01298504(iVar30,1);
    if (iVar24 != 0) {
      FUN_01bed4e2(iVar24,local_dc,iVar30);
      uVar21 = 0;
      if ((int)uVar18 < 0) {
LAB_016724c0:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar21,uVar18);
      }
      if (piVar31 == piVar26) {
        iVar15 = 1;
        uVar9 = 0;
      }
      else {
        uVar21 = 1;
        iVar15 = FUN_01298504(uVar18,1);
        uVar9 = uVar18;
        if (iVar15 == 0) goto LAB_016724c0;
      }
      FUN_01bed4e2(iVar15,pcVar23,uVar18);
      *(undefined1 *)(param_1 + 7) = uVar7;
      *param_1 = &DAT_80000004;
      param_1[1] = iVar30;
      param_1[2] = iVar24;
      param_1[3] = iVar30;
      param_1[4] = uVar9;
      param_1[5] = iVar15;
      param_1[6] = uVar18;
LAB_01672760:
      if (puVar5 != (undefined1 *)0x80000000) {
        FUN_019bb7e0(puVar5,piVar29);
      }
LAB_01672774:
      FUN_016792a4(&local_84);
      ppiVar25 = &local_a0;
      goto LAB_01672780;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar21,iVar30);
}

