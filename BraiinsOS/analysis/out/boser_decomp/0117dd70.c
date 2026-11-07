// FUN_0117dd70 @ 0117dd70 size=2072 calls_out=4 calls_in=2
// strings: 

void FUN_0117dd70(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  uint uVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  char cVar5;
  char cVar6;
  byte bVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  undefined4 *puVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined4 *puVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 *puVar23;
  uint uVar24;
  uint uVar25;
  undefined4 *puVar26;
  bool bVar27;
  ulonglong uVar28;
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
  
  uVar28 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar3 = uVar28 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar3 = uVar28;
  }
  if (param_2 < 0x1001) {
    uVar8 = param_2 - (param_2 >> 1);
    if (0x3f < uVar8) {
      uVar8 = 0x40;
    }
  }
  else {
    uVar8 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar18 = (uVar8 & 1) + (uVar8 >> 1);
    uVar8 = (1 << iVar18) + (param_2 >> iVar18) >> 1;
  }
  uVar17 = 0;
  uVar25 = 0;
  uVar24 = 1;
  do {
    uVar12 = 0;
    local_1cc = 1;
    if (uVar17 < param_2) {
      local_1cc = param_2 - uVar17;
      iVar18 = param_1 + uVar17 * 0xc;
      if (local_1cc < uVar8) {
LAB_0117de6c:
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
          FUN_0117e5b4(iVar18,local_1cc,param_3,param_4,0,0);
          local_1cc = local_1cc << 1 | 1;
        }
      }
      else {
        if (local_1cc < 2) {
          uVar12 = local_1cc;
        }
        else {
          local_64 = *(char **)(iVar18 + 0x10);
          local_60 = *(int *)(iVar18 + 0x14);
          local_46 = false;
          local_26 = false;
          if (local_60 != 0) {
            local_46 = *local_64 == '/';
          }
          local_5c = 6;
          local_48 = 0x201;
          local_44 = *(char **)(iVar18 + 4);
          local_40 = *(int *)(iVar18 + 8);
          if (local_40 != 0) {
            local_26 = *local_44 == '/';
          }
          local_3c = 6;
          local_28 = 0x201;
          cVar5 = FUN_019af7b8(&local_64,&local_44);
          if (cVar5 < '\0') {
            if (local_1cc != 2) {
              uVar12 = 2;
              puVar26 = (undefined4 *)(param_1 + 0x10 + uVar17 * 0xc);
              do {
                local_64 = (char *)puVar26[3];
                local_60 = puVar26[4];
                local_46 = false;
                local_26 = false;
                if (local_60 != 0) {
                  local_46 = *local_64 == '/';
                }
                local_5c = 6;
                local_48 = 0x201;
                local_44 = (char *)*puVar26;
                local_40 = puVar26[1];
                if (local_40 != 0) {
                  local_26 = *local_44 == '/';
                }
                local_3c = 6;
                local_28 = 0x201;
                cVar6 = FUN_019af7b8(&local_64,&local_44);
                if ((uint)(int)cVar6 < 0x80000000) goto LAB_0117e0d8;
                uVar12 = uVar12 + 1;
                puVar26 = puVar26 + 3;
              } while (local_1cc != uVar12);
              goto LAB_0117e0d4;
            }
            uVar12 = 2;
            uVar13 = 1;
LAB_0117e0f8:
            uVar14 = 0;
            iVar9 = param_1 + -0xc + uVar17 * 0xc + uVar12 * 0xc;
            do {
              iVar15 = 0;
              do {
                uVar21 = *(undefined4 *)(iVar18 + iVar15 * -4);
                *(undefined4 *)(iVar18 + iVar15 * -4) = *(undefined4 *)(iVar9 + iVar15 * -4);
                *(undefined4 *)(iVar9 + iVar15 * -4) = uVar21;
                bVar27 = iVar15 != -2;
                iVar15 = iVar15 + -1;
              } while (bVar27);
              uVar14 = uVar14 + 1;
              iVar18 = iVar18 + 0xc;
              iVar9 = iVar9 + -0xc;
            } while (uVar14 != uVar13);
          }
          else {
            uVar12 = 2;
            if (local_1cc != 2) {
              puVar26 = (undefined4 *)(param_1 + 0x10 + uVar17 * 0xc);
              do {
                local_64 = (char *)puVar26[3];
                local_60 = puVar26[4];
                local_46 = false;
                local_26 = false;
                if (local_60 != 0) {
                  local_46 = *local_64 == '/';
                }
                local_5c = 6;
                local_48 = 0x201;
                local_44 = (char *)*puVar26;
                local_40 = puVar26[1];
                if (local_40 != 0) {
                  local_26 = *local_44 == '/';
                }
                local_3c = 6;
                local_28 = 0x201;
                cVar6 = FUN_019af7b8(&local_64,&local_44);
                if (cVar6 < '\0') goto LAB_0117e0d8;
                uVar12 = uVar12 + 1;
                puVar26 = puVar26 + 3;
              } while (local_1cc != uVar12);
LAB_0117e0d4:
              uVar12 = local_1cc;
LAB_0117e0d8:
              if (uVar12 < uVar8) goto LAB_0117de6c;
              if (cVar5 < '\0') {
                uVar13 = uVar12 >> 1;
                if (uVar13 != 0) goto LAB_0117e0f8;
                uVar12 = 1;
              }
            }
          }
        }
        local_1cc = uVar12 << 1 | 1;
      }
      uVar12 = uVar17 - (uVar24 >> 1);
      uVar13 = uVar17 + (local_1cc >> 1);
      uVar14 = uVar13 + uVar17;
      lVar2 = (uVar3 & 0xffffffff) * (ulonglong)uVar14;
      lVar4 = uVar3 * CONCAT14(CARRY4(uVar12,uVar17),uVar12 + uVar17);
      uVar13 = (uint)CARRY4(uVar13,uVar17) * (int)uVar3 +
               uVar14 * (int)(uVar3 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)((ulonglong)lVar4 >> 0x20);
      uVar12 = LZCOUNT((uint)lVar2 ^ (uint)lVar4) + 0x20;
      if (uVar13 != 0) {
        uVar12 = LZCOUNT(uVar13);
      }
    }
    if (1 < uVar25) {
      do {
        uVar13 = uVar25 - 1;
        if (abStack_a7[uVar25] < uVar12) goto LAB_0117e524;
        uVar19 = local_1b0[uVar13];
        uVar25 = uVar19 >> 1;
        uVar14 = uVar25 + (uVar24 >> 1);
        if ((param_4 < uVar14) || (((uVar19 | uVar24) & 1) != 0)) {
          puVar26 = (undefined4 *)(param_1 + (uVar17 - uVar14) * 0xc);
          if ((uVar19 & 1) == 0) {
            FUN_0117e5b4(puVar26,uVar25,param_3,param_4,LZCOUNT(uVar25 | 1) << 1 ^ 0x3e,0);
          }
          uVar1 = uVar24 >> 1;
          if ((uVar24 & 1) == 0) {
            FUN_0117e5b4(puVar26 + uVar25 * 3,uVar1,param_3,param_4,LZCOUNT(uVar1 | 1) << 1 ^ 0x3e,0
                        );
          }
          if (1 < uVar19 && 1 < uVar24) {
            uVar24 = uVar25;
            if (uVar1 < uVar25) {
              uVar24 = uVar1;
            }
            if (uVar24 <= param_4) {
              puVar20 = puVar26 + uVar25 * 3;
              puVar10 = puVar26;
              if (uVar1 < uVar25) {
                puVar10 = puVar20;
              }
              FUN_01bed4e2(param_3,puVar10,uVar24 * 0xc);
              puVar23 = param_3 + uVar24 * 3;
              puVar10 = param_3;
              if (uVar1 < uVar25) {
                puVar11 = (undefined4 *)(param_1 + -0xc + uVar17 * 0xc);
                do {
                  local_64 = (char *)puVar23[-2];
                  local_60 = puVar23[-1];
                  local_46 = false;
                  local_26 = false;
                  if (local_60 != 0) {
                    local_46 = *local_64 == '/';
                  }
                  local_5c = 6;
                  local_48 = 0x201;
                  local_44 = (char *)puVar20[-2];
                  local_40 = puVar20[-1];
                  if (local_40 != 0) {
                    local_26 = *local_44 == '/';
                  }
                  local_3c = 6;
                  local_28 = 0x201;
                  bVar7 = FUN_019af7b8(&local_64,&local_44);
                  puVar16 = puVar20 + -3;
                  if ((uint)(int)(char)bVar7 < 0x80000000) {
                    puVar16 = puVar23 + -3;
                  }
                  uVar21 = puVar16[1];
                  uVar22 = puVar16[2];
                  puVar23 = puVar23 + -3 + ((uint)(bVar7 >> 7) | (uint)(bVar7 >> 7) << 1);
                  uVar24 = bVar7 >> 7 ^ 1;
                  *puVar11 = *puVar16;
                  puVar11[1] = uVar21;
                  puVar11[2] = uVar22;
                  puVar20 = puVar20 + -3 + (uVar24 | uVar24 << 1);
                } while ((puVar20 != puVar26) && (puVar11 = puVar11 + -3, puVar23 != param_3));
                puVar16 = puVar20;
              }
              else {
                do {
                  local_64 = (char *)puVar20[1];
                  local_60 = puVar20[2];
                  local_46 = false;
                  local_26 = false;
                  if (local_60 != 0) {
                    local_46 = *local_64 == '/';
                  }
                  local_5c = 6;
                  local_48 = 0x201;
                  local_44 = (char *)puVar10[1];
                  local_40 = puVar10[2];
                  if (local_40 != 0) {
                    local_26 = *local_44 == '/';
                  }
                  local_3c = 6;
                  local_28 = 0x201;
                  bVar7 = FUN_019af7b8(&local_64,&local_44);
                  puVar11 = puVar20;
                  if ((uint)(int)(char)bVar7 < 0x80000000) {
                    puVar11 = puVar10;
                  }
                  uVar21 = puVar11[1];
                  uVar22 = puVar11[2];
                  uVar24 = bVar7 >> 7 ^ 1;
                  puVar16 = puVar26 + 3;
                  *puVar26 = *puVar11;
                  puVar26[1] = uVar21;
                  puVar26[2] = uVar22;
                  puVar10 = puVar10 + (uVar24 | uVar24 << 1);
                } while ((puVar10 != puVar23) &&
                        (puVar20 = puVar20 + ((uint)(bVar7 >> 7) | (uint)(bVar7 >> 7) << 1),
                        puVar26 = puVar16, puVar20 != (undefined4 *)(param_1 + uVar17 * 0xc)));
              }
              FUN_01bed4e2(puVar16,puVar10,(int)puVar23 - (int)puVar10);
            }
          }
          uVar24 = uVar14 * 2 | 1;
        }
        else {
          uVar24 = uVar14 * 2;
        }
        uVar25 = uVar13;
      } while (1 < uVar13);
      uVar25 = 1;
    }
LAB_0117e524:
    abStack_a7[uVar25 + 1] = (byte)uVar12;
    local_1b0[uVar25] = uVar24;
    if (param_2 <= uVar17) {
      if ((uVar24 & 1) == 0) {
        FUN_0117e5b4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar25 = uVar25 + 1;
    uVar17 = uVar17 + (local_1cc >> 1);
    uVar24 = local_1cc;
  } while( true );
}

