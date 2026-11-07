// FUN_012685d8 @ 012685d8 size=2496 calls_out=5 calls_in=2
// strings: 

void FUN_012685d8(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 *puVar24;
  undefined4 *puVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  undefined4 *puVar29;
  bool bVar30;
  ulonglong uVar31;
  uint local_1cc;
  uint local_1b0 [66];
  byte abStack_a7 [67];
  char *local_64;
  int local_60;
  undefined1 local_5c;
  undefined2 local_48;
  undefined1 local_46;
  char *local_44;
  int local_40;
  undefined1 local_3c;
  undefined2 local_28;
  undefined1 local_26;
  
  uVar31 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar5 = uVar31 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar31;
  }
  iVar4 = (int)(uVar5 >> 0x20);
  if (param_2 < 0x1001) {
    uVar8 = param_2 - (param_2 >> 1);
    if (0x3f < uVar8) {
      uVar8 = 0x40;
    }
  }
  else {
    uVar8 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar20 = (uVar8 & 1) + (uVar8 >> 1);
    uVar8 = (1 << iVar20) + (param_2 >> iVar20) >> 1;
  }
  uVar9 = 0;
  uVar26 = 0;
  uVar28 = 1;
  do {
    uVar19 = 0;
    local_1cc = 1;
    if (uVar9 < param_2) {
      local_1cc = param_2 - uVar9;
      iVar20 = param_1 + uVar9 * 0x1c;
      if (local_1cc < uVar8) {
LAB_012686f0:
        if (param_5 == 0) {
          if (uVar8 <= local_1cc) {
            local_1cc = uVar8;
          }
          local_1cc = local_1cc << 1;
        }
        else {
          if (0x1f < local_1cc) {
            local_1cc = 0x20;
          }
          FUN_01265624(iVar20,local_1cc,param_3,param_4,0,0);
          local_1cc = local_1cc << 1 | 1;
        }
      }
      else {
        uVar19 = local_1cc;
        if (1 < local_1cc) {
          bVar7 = FUN_01268158(*(undefined4 *)(iVar20 + 0x20),*(undefined4 *)(iVar20 + 0x24),
                               *(undefined4 *)(iVar20 + 4),*(undefined4 *)(iVar20 + 8));
          if (bVar7 == 2) {
            if (*(byte *)(iVar20 + 0x28) != *(byte *)(iVar20 + 0xc)) {
              if (*(byte *)(iVar20 + 0xc) <= *(byte *)(iVar20 + 0x28)) goto LAB_01268cd0;
              goto LAB_01268dd0;
            }
            local_64 = *(char **)(iVar20 + 0x30);
            local_60 = *(int *)(iVar20 + 0x34);
            local_46 = false;
            local_26 = false;
            if (local_60 != 0) {
              local_46 = *local_64 == '/';
            }
            local_5c = 6;
            local_48 = 0x201;
            local_44 = *(char **)(iVar20 + 0x14);
            local_40 = *(int *)(iVar20 + 0x18);
            if (local_40 != 0) {
              local_26 = *local_44 == '/';
            }
            local_3c = 6;
            local_28 = 0x201;
            cVar6 = FUN_019af7b8(&local_64,&local_44);
            if (cVar6 < '\0') goto LAB_01268dd0;
LAB_01268cd0:
            uVar19 = 2;
            bVar30 = false;
            if (local_1cc != 2) {
              pbVar18 = (byte *)(param_1 + 0x28 + uVar9 * 0x1c);
              do {
                bVar7 = FUN_01268158(*(undefined4 *)(pbVar18 + 0x14),*(undefined4 *)(pbVar18 + 0x18)
                                     ,*(undefined4 *)(pbVar18 + -8),*(undefined4 *)(pbVar18 + -4));
                if (bVar7 == 2) {
                  if (pbVar18[0x1c] == *pbVar18) {
                    local_64 = *(char **)(pbVar18 + 0x24);
                    local_60 = *(int *)(pbVar18 + 0x28);
                    local_46 = false;
                    local_26 = false;
                    if (local_60 != 0) {
                      local_46 = *local_64 == '/';
                    }
                    local_5c = 6;
                    local_48 = 0x201;
                    local_44 = *(char **)(pbVar18 + 8);
                    local_40 = *(int *)(pbVar18 + 0xc);
                    if (local_40 != 0) {
                      local_26 = *local_44 == '/';
                    }
                    local_3c = 6;
                    local_28 = 0x201;
                    cVar6 = FUN_019af7b8(&local_64,&local_44);
                    if (cVar6 < '\0') {
                      bVar30 = false;
                      goto LAB_01268ec8;
                    }
                  }
                  else if (pbVar18[0x1c] < *pbVar18) goto LAB_01268ec8;
                }
                else if ((bVar7 & 1) != 0) goto LAB_01268ec8;
                uVar19 = uVar19 + 1;
                pbVar18 = pbVar18 + 0x1c;
              } while (local_1cc != uVar19);
              goto LAB_01268ec4;
            }
          }
          else {
            if ((bVar7 & 1) == 0) goto LAB_01268cd0;
LAB_01268dd0:
            uVar19 = 2;
            bVar30 = true;
            if (local_1cc != 2) {
              pbVar18 = (byte *)(param_1 + 0x28 + uVar9 * 0x1c);
              do {
                bVar7 = FUN_01268158(*(undefined4 *)(pbVar18 + 0x14),*(undefined4 *)(pbVar18 + 0x18)
                                     ,*(undefined4 *)(pbVar18 + -8),*(undefined4 *)(pbVar18 + -4));
                if (bVar7 == 2) {
                  if (pbVar18[0x1c] == *pbVar18) {
                    local_64 = *(char **)(pbVar18 + 0x24);
                    local_60 = *(int *)(pbVar18 + 0x28);
                    local_46 = false;
                    local_26 = false;
                    if (local_60 != 0) {
                      local_46 = *local_64 == '/';
                    }
                    local_5c = 6;
                    local_48 = 0x201;
                    local_44 = *(char **)(pbVar18 + 8);
                    local_40 = *(int *)(pbVar18 + 0xc);
                    if (local_40 != 0) {
                      local_26 = *local_44 == '/';
                    }
                    local_3c = 6;
                    local_28 = 0x201;
                    cVar6 = FUN_019af7b8(&local_64,&local_44);
                    if ((uint)(int)cVar6 < 0x80000000) goto LAB_01268ec8;
                  }
                  else if (*pbVar18 <= pbVar18[0x1c]) goto LAB_01268ec8;
                }
                else if ((bVar7 & 1) == 0) goto LAB_01268ec8;
                uVar19 = uVar19 + 1;
                pbVar18 = pbVar18 + 0x1c;
              } while (local_1cc != uVar19);
LAB_01268ec4:
              uVar19 = local_1cc;
            }
          }
LAB_01268ec8:
          if (uVar19 < uVar8) goto LAB_012686f0;
          if (bVar30) {
            if (uVar19 >> 1 == 0) {
            }
            else {
              uVar10 = 0;
              iVar15 = param_1 + -0x1c + uVar19 * 0x1c + uVar9 * 0x1c;
              do {
                iVar17 = 0;
                do {
                  uVar21 = *(undefined4 *)(iVar20 + iVar17 * -4);
                  *(undefined4 *)(iVar20 + iVar17 * -4) = *(undefined4 *)(iVar15 + iVar17 * -4);
                  *(undefined4 *)(iVar15 + iVar17 * -4) = uVar21;
                  bVar30 = iVar17 != -6;
                  iVar17 = iVar17 + -1;
                } while (bVar30);
                uVar10 = uVar10 + 1;
                iVar20 = iVar20 + 0x1c;
                iVar15 = iVar15 + -0x1c;
              } while (uVar10 != uVar19 >> 1);
            }
          }
        }
        local_1cc = uVar19 << 1 | 1;
      }
      uVar10 = uVar9 - (uVar28 >> 1);
      uVar11 = uVar10 + uVar9;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar11;
      uVar16 = (local_1cc >> 1) + uVar9 * 2;
      lVar3 = (ulonglong)uVar16 * (uVar5 & 0xffffffff);
      uVar19 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar10 = iVar4 * uVar16 + (int)((ulonglong)lVar3 >> 0x20) ^
               (uint)CARRY4(uVar10,uVar9) * (int)uVar5 +
               uVar11 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar10 != 0) {
        uVar19 = LZCOUNT(uVar10);
      }
    }
    if (1 < uVar26) {
      puVar12 = (undefined4 *)(param_1 + uVar9 * 0x1c);
      do {
        uVar10 = uVar26 - 1;
        if (abStack_a7[uVar26] < uVar19) goto LAB_01268bf8;
        uVar16 = local_1b0[uVar10];
        uVar26 = uVar16 >> 1;
        uVar11 = uVar26 + (uVar28 >> 1);
        if ((param_4 < uVar11) || (((uVar16 | uVar28) & 1) != 0)) {
          puVar13 = (undefined4 *)(param_1 + (uVar9 - uVar11) * 0x1c);
          if ((uVar16 & 1) == 0) {
            FUN_01265624(puVar13,uVar26,param_3,param_4,LZCOUNT(uVar26 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar28 >> 1;
          if ((uVar28 & 1) == 0) {
            FUN_01265624(puVar13 + uVar26 * 7,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar16 && 1 < uVar28) {
            uVar28 = uVar26;
            if (uVar1 < uVar26) {
              uVar28 = uVar1;
            }
            if (uVar28 <= param_4) {
              puVar24 = puVar13 + uVar26 * 7;
              puVar29 = puVar13;
              if (uVar1 < uVar26) {
                puVar29 = puVar24;
              }
              puVar14 = (undefined4 *)FUN_01bed4e2(param_3,puVar29,uVar28 * 0x1c);
              puVar27 = param_3 + uVar28 * 7;
              puVar25 = param_3;
              if (uVar1 < uVar26) {
                puVar24 = (undefined4 *)(param_1 + -0x1c + uVar9 * 0x1c);
                do {
                  uVar28 = FUN_01268158(puVar27[-6],puVar27[-5],puVar29[-6],puVar29[-5]);
                  uVar28 = uVar28 & 0xff;
                  if (uVar28 == 2) {
                    if (*(byte *)(puVar27 + -4) == *(byte *)(puVar29 + -4)) {
                      local_64 = (char *)puVar27[-2];
                      local_60 = puVar27[-1];
                      local_46 = false;
                      local_26 = false;
                      if (local_60 != 0) {
                        local_46 = *local_64 == '/';
                      }
                      local_5c = 6;
                      local_48 = 0x201;
                      local_44 = (char *)puVar29[-2];
                      local_40 = puVar29[-1];
                      if (local_40 != 0) {
                        local_26 = *local_44 == '/';
                      }
                      local_3c = 6;
                      local_28 = 0x201;
                      cVar6 = FUN_019af7b8(&local_64,&local_44);
                      uVar28 = (uint)(cVar6 < '\0');
                    }
                    else {
                      uVar28 = 0;
                      if (*(byte *)(puVar27 + -4) < *(byte *)(puVar29 + -4)) {
                        uVar28 = 1;
                      }
                    }
                  }
                  puVar14 = puVar27 + -7;
                  if ((uVar28 & 1) != 0) {
                    puVar14 = puVar29 + -7;
                  }
                  uVar21 = puVar14[1];
                  uVar22 = puVar14[2];
                  *puVar24 = *puVar14;
                  puVar24[1] = uVar21;
                  puVar24[2] = uVar22;
                  uVar21 = puVar14[4];
                  uVar22 = puVar14[5];
                  uVar23 = puVar14[6];
                  puVar27 = puVar27 + -7 + (uVar28 & 1) * 7;
                  puVar24[3] = puVar14[3];
                  puVar24[4] = uVar21;
                  puVar24[5] = uVar22;
                  puVar24[6] = uVar23;
                  puVar29 = puVar29 + -7 + (~uVar28 & 1) * 7;
                } while ((puVar29 != puVar13) && (puVar24 = puVar24 + -7, puVar27 != param_3));
              }
              else {
                if (uVar28 != 0) {
                  puVar14 = puVar12;
                }
                if (!(uVar28 == 0 || puVar24 == puVar14)) {
                  puVar13 = puVar29;
                  do {
                    uVar28 = FUN_01268158(puVar24[1],puVar24[2],puVar25[1],puVar25[2]);
                    uVar28 = uVar28 & 0xff;
                    if (uVar28 == 2) {
                      if (*(byte *)(puVar24 + 3) == *(byte *)(puVar25 + 3)) {
                        local_64 = (char *)puVar24[5];
                        local_60 = puVar24[6];
                        local_46 = false;
                        local_26 = false;
                        if (local_60 != 0) {
                          local_46 = *local_64 == '/';
                        }
                        local_5c = 6;
                        local_48 = 0x201;
                        local_44 = (char *)puVar25[5];
                        local_40 = puVar25[6];
                        if (local_40 != 0) {
                          local_26 = *local_44 == '/';
                        }
                        local_3c = 6;
                        local_28 = 0x201;
                        cVar6 = FUN_019af7b8(&local_64,&local_44);
                        uVar28 = (uint)(cVar6 < '\0');
                      }
                      else {
                        uVar28 = 0;
                        if (*(byte *)(puVar24 + 3) < *(byte *)(puVar25 + 3)) {
                          uVar28 = 1;
                        }
                      }
                    }
                    puVar14 = puVar25;
                    if ((uVar28 & 1) != 0) {
                      puVar14 = puVar24;
                    }
                    uVar21 = puVar14[1];
                    uVar22 = puVar14[2];
                    puVar29 = puVar13 + 7;
                    *puVar13 = *puVar14;
                    puVar13[1] = uVar21;
                    puVar13[2] = uVar22;
                    uVar21 = puVar14[4];
                    uVar22 = puVar14[5];
                    uVar23 = puVar14[6];
                    puVar13[3] = puVar14[3];
                    puVar13[4] = uVar21;
                    puVar13[5] = uVar22;
                    puVar13[6] = uVar23;
                    puVar25 = puVar25 + (~uVar28 & 1) * 7;
                    bVar30 = puVar25 != puVar27;
                    uVar26 = ~uVar28 & 1;
                    if (bVar30) {
                      uVar26 = uVar28 & 1;
                    }
                    puVar14 = (undefined4 *)(uVar26 * 7);
                    if (bVar30) {
                      puVar24 = puVar24 + uVar26 * 7;
                      puVar14 = puVar12;
                    }
                    puVar13 = puVar29;
                  } while (bVar30 && puVar24 != puVar14);
                }
              }
              FUN_01bed4e2(puVar29,puVar25,(int)puVar27 - (int)puVar25);
            }
          }
          uVar28 = uVar11 * 2 | 1;
        }
        else {
          uVar28 = uVar11 * 2;
        }
        uVar26 = uVar10;
      } while (1 < uVar10);
      uVar26 = 1;
    }
LAB_01268bf8:
    abStack_a7[uVar26 + 1] = (byte)uVar19;
    local_1b0[uVar26] = uVar28;
    if (param_2 <= uVar9) {
      if ((uVar28 & 1) == 0) {
        FUN_01265624(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar26 = uVar26 + 1;
    uVar9 = uVar9 + (local_1cc >> 1);
    uVar28 = local_1cc;
  } while( true );
}

