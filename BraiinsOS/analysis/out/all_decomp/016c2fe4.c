// FUN_016c2fe4 @ 016c2fe4 size=2140 calls_out=3 calls_in=2
// strings: 

void FUN_016c2fe4(int param_1,uint param_2,uint *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint *puVar22;
  int *piVar23;
  int iVar24;
  uint uVar25;
  uint *puVar26;
  int iVar27;
  uint uVar28;
  uint *puVar29;
  uint uVar30;
  uint uVar31;
  bool bVar32;
  ulonglong uVar33;
  uint local_194;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar33 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar33 & 0xffffffff);
  uVar2 = uVar33 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar33 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar33;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar24 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar24) + (param_2 >> iVar24) >> 1;
  }
  uVar31 = 0;
  uVar28 = 0;
  uVar25 = 1;
  do {
    uVar30 = 0;
    local_194 = 1;
    if (uVar31 < param_2) {
      local_194 = param_2 - uVar31;
      piVar23 = (int *)(param_1 + uVar31 * 0x28);
      if (local_194 < uVar5) {
LAB_016c3120:
        if (param_5 == 0) {
          if (uVar5 <= local_194) {
            local_194 = uVar5;
          }
          local_194 = local_194 << 1;
        }
        else {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_016bf3ac(piVar23,local_194,param_3,param_4,0,0,param_6);
          local_194 = local_194 << 1 | 1;
        }
      }
      else {
        uVar30 = local_194;
        if (1 < local_194) {
          puVar10 = (undefined4 *)*param_6;
          if (piVar23[10] == 1) {
            if (*piVar23 != 0) goto LAB_016c31e0;
LAB_016c326c:
            uVar30 = 2;
            bVar32 = true;
            if (local_194 != 2) {
              iVar24 = param_1 + 0x30 + uVar31 * 0x28;
              do {
                if (*(int *)(iVar24 + 0x20) == 0) {
                  if ((*(int *)(iVar24 + -8) != 0) ||
                     (cVar4 = (**(code **)((*(undefined4 **)*puVar10)[1] + 0x10))
                                        (**(undefined4 **)*puVar10,iVar24 + 0x28,iVar24),
                     cVar4 != -1)) goto LAB_016c37f0;
                }
                else if (*(int *)(iVar24 + -8) != 0) goto LAB_016c37f0;
                uVar30 = uVar30 + 1;
                iVar24 = iVar24 + 0x28;
              } while (local_194 != uVar30);
              uVar30 = local_194;
LAB_016c37f0:
              bVar32 = true;
            }
          }
          else {
            if ((*piVar23 == 0) &&
               (cVar4 = (**(code **)((*(undefined4 **)*puVar10)[1] + 0x10))
                                  (**(undefined4 **)*puVar10,piVar23 + 0xc,piVar23 + 2), cVar4 == -1
               )) goto LAB_016c326c;
LAB_016c31e0:
            uVar30 = 2;
            bVar32 = false;
            if (local_194 != 2) {
              iVar24 = param_1 + 0x30 + uVar31 * 0x28;
              do {
                if (*(int *)(iVar24 + 0x20) == 0) {
                  if ((*(int *)(iVar24 + -8) == 0) &&
                     (cVar4 = (**(code **)((*(undefined4 **)*puVar10)[1] + 0x10))
                                        (**(undefined4 **)*puVar10,iVar24 + 0x28,iVar24),
                     cVar4 == -1)) {
                    bVar32 = false;
                    goto joined_r0x016c3264;
                  }
                }
                else if (*(int *)(iVar24 + -8) == 0) {
                  bVar32 = false;
                  goto joined_r0x016c3264;
                }
                uVar30 = uVar30 + 1;
                iVar24 = iVar24 + 0x28;
              } while (local_194 != uVar30);
              bVar32 = false;
              uVar30 = local_194;
            }
          }
joined_r0x016c3264:
          if (uVar30 < uVar5) goto LAB_016c3120;
          bVar32 = !bVar32;
          uVar12 = uVar5;
          if (!bVar32) {
            uVar12 = uVar30 >> 1;
            bVar32 = uVar12 == 0;
          }
          if (!bVar32) {
            iVar24 = uVar31 * 0x28;
            iVar9 = param_1 + -0x14 + uVar30 * 0x28;
            iVar27 = param_1;
            do {
              iVar16 = iVar9 + iVar24;
              puVar10 = (undefined4 *)(iVar27 + iVar24);
              uVar11 = *puVar10;
              iVar27 = iVar27 + 0x28;
              uVar12 = uVar12 - 1;
              *puVar10 = *(undefined4 *)(iVar16 + -0x14);
              *(undefined4 *)(iVar16 + -0x14) = uVar11;
              uVar11 = puVar10[1];
              puVar10[1] = *(undefined4 *)(iVar16 + -0x10);
              *(undefined4 *)(iVar16 + -0x10) = uVar11;
              uVar11 = puVar10[2];
              puVar10[2] = *(undefined4 *)(iVar16 + -0xc);
              *(undefined4 *)(iVar16 + -0xc) = uVar11;
              uVar11 = puVar10[3];
              puVar10[3] = *(undefined4 *)(iVar16 + -8);
              *(undefined4 *)(iVar16 + -8) = uVar11;
              uVar11 = puVar10[4];
              puVar10[4] = *(undefined4 *)(iVar16 + -4);
              *(undefined4 *)(iVar16 + -4) = uVar11;
              uVar11 = *(undefined4 *)(iVar9 + iVar24);
              *(undefined4 *)(iVar9 + iVar24) = puVar10[5];
              iVar9 = iVar9 + -0x28;
              puVar10[5] = uVar11;
              uVar11 = *(undefined4 *)(iVar16 + 4);
              *(undefined4 *)(iVar16 + 4) = puVar10[6];
              puVar10[6] = uVar11;
              uVar11 = puVar10[7];
              puVar10[7] = *(undefined4 *)(iVar16 + 8);
              *(undefined4 *)(iVar16 + 8) = uVar11;
              uVar11 = *(undefined4 *)(iVar16 + 0xc);
              *(undefined4 *)(iVar16 + 0xc) = puVar10[8];
              puVar10[8] = uVar11;
              uVar11 = puVar10[9];
              puVar10[9] = *(undefined4 *)(iVar16 + 0x10);
              *(undefined4 *)(iVar16 + 0x10) = uVar11;
            } while (uVar12 != 0);
          }
        }
        local_194 = uVar30 << 1 | 1;
      }
      uVar30 = uVar31 - (uVar25 >> 1);
      uVar12 = uVar31 + (local_194 >> 1);
      uVar13 = uVar12 + uVar31;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar13;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar30,uVar31),uVar30 + uVar31);
      uVar12 = (uint)CARRY4(uVar12,uVar31) * (int)uVar2 +
               uVar13 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar30 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar12 != 0) {
        uVar30 = LZCOUNT(uVar12);
      }
    }
    if (uVar28 < 2) {
      abStack_67[uVar28 + 1] = (byte)uVar30;
      local_170[uVar28] = uVar25;
    }
    else {
      do {
        while( true ) {
          uVar12 = uVar28 - 1;
          if (abStack_67[uVar28] < uVar30) goto LAB_016c37d4;
          uVar18 = local_170[uVar12];
          uVar13 = uVar18 >> 1;
          uVar17 = uVar13 + (uVar25 >> 1);
          uVar28 = uVar12;
          if ((uVar17 <= param_4) && (((uVar18 | uVar25) & 1) == 0)) break;
          puVar14 = (uint *)(param_1 + (uVar31 - uVar17) * 0x28);
          if ((uVar18 & 1) == 0) {
            FUN_016bf3ac(puVar14,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0,param_6);
          }
          if ((uVar25 & 1) == 0) {
            FUN_016bf3ac(puVar14 + uVar13 * 10,uVar25 >> 1,param_3,param_4,
                         LZCOUNT(uVar25 >> 1 | 1) << 1 ^ 0x3e,0,param_6);
          }
          uVar19 = uVar25 >> 1;
          if (1 < uVar18 && 1 < uVar25) {
            uVar25 = uVar13;
            if (uVar19 < uVar13) {
              uVar25 = uVar19;
            }
            if (uVar25 <= param_4) {
              puVar10 = (undefined4 *)*param_6;
              puVar20 = puVar14 + uVar13 * 10;
              puVar15 = puVar14;
              if (uVar19 < uVar13) {
                puVar15 = puVar20;
              }
              FUN_016dd1aa(param_3,puVar15,uVar25 * 0x28);
              puVar22 = param_3 + uVar25 * 10;
              puVar15 = param_3;
              if (uVar19 < uVar13) {
                puVar8 = (uint *)(param_1 + -0x28 + uVar31 * 0x28);
                do {
                  puVar26 = puVar20 + -10;
                  uVar25 = 0;
                  puVar29 = puVar22 + -10;
                  puVar7 = puVar29;
                  if (*puVar29 == 0) {
                    if (((*puVar26 & 1) == 0) &&
                       (puVar6 = *(undefined4 **)*puVar10,
                       cVar4 = (**(code **)(puVar6[1] + 0x10))(*puVar6,puVar22 + -8,puVar20 + -8),
                       cVar4 == -1)) goto LAB_016c3690;
                  }
                  else if ((*puVar26 & 1) == 0) {
LAB_016c3690:
                    uVar25 = 1;
                    puVar7 = puVar26;
                  }
                  uVar13 = puVar7[1];
                  uVar18 = puVar7[2];
                  uVar19 = puVar7[3];
                  uVar21 = puVar7[4];
                  *puVar8 = *puVar7;
                  puVar8[1] = uVar13;
                  puVar8[2] = uVar18;
                  puVar8[3] = uVar19;
                  puVar8[4] = uVar21;
                  uVar13 = puVar7[6];
                  uVar18 = puVar7[7];
                  uVar19 = puVar7[8];
                  uVar21 = puVar7[9];
                  puVar22 = puVar29 + (uVar25 | uVar25 << 2) * 2;
                  puVar8[5] = puVar7[5];
                  puVar8[6] = uVar13;
                  puVar8[7] = uVar18;
                  puVar8[8] = uVar19;
                  puVar8[9] = uVar21;
                  puVar20 = puVar26 + (uVar25 ^ 1 | (uVar25 ^ 1) << 2) * 2;
                } while ((puVar20 != puVar14) && (puVar8 = puVar8 + -10, puVar22 != param_3));
                puVar7 = puVar20;
              }
              else {
                do {
                  puVar8 = puVar15;
                  if (*puVar20 == 0) {
                    iVar27 = 0;
                    iVar24 = 1;
                    if (*puVar15 != 0) goto LAB_016c378c;
                    puVar6 = *(undefined4 **)*puVar10;
                    cVar4 = (**(code **)(puVar6[1] + 0x10))(*puVar6,puVar20 + 2,puVar15 + 2);
                    if (cVar4 == -1) goto LAB_016c3714;
                  }
                  else if (*puVar15 == 0) {
LAB_016c3714:
                    iVar27 = 1;
                    iVar24 = 0;
                    puVar8 = puVar20;
                  }
                  else {
LAB_016c378c:
                    iVar27 = 0;
                    iVar24 = 1;
                  }
                  uVar25 = puVar8[1];
                  uVar13 = puVar8[2];
                  uVar18 = puVar8[3];
                  uVar19 = puVar8[4];
                  puVar7 = puVar14 + 10;
                  *puVar14 = *puVar8;
                  puVar14[1] = uVar25;
                  puVar14[2] = uVar13;
                  puVar14[3] = uVar18;
                  puVar14[4] = uVar19;
                  uVar25 = puVar8[6];
                  uVar13 = puVar8[7];
                  uVar18 = puVar8[8];
                  uVar19 = puVar8[9];
                  puVar15 = puVar15 + iVar24 * 10;
                  bVar32 = puVar15 != puVar22;
                  puVar14[5] = puVar8[5];
                  puVar14[6] = uVar25;
                  puVar14[7] = uVar13;
                  puVar14[8] = uVar18;
                  puVar14[9] = uVar19;
                  if (bVar32) {
                    iVar24 = iVar27;
                  }
                  puVar8 = (uint *)(iVar24 * 5);
                  if (bVar32) {
                    puVar20 = puVar20 + iVar24 * 10;
                    puVar8 = (uint *)(param_1 + uVar31 * 0x28);
                  }
                  puVar14 = puVar7;
                } while (bVar32 && puVar20 != puVar8);
              }
              FUN_016dd1aa(puVar7,puVar15,(int)puVar22 - (int)puVar15);
            }
          }
          uVar25 = uVar17 * 2 | 1;
          if (uVar12 < 2) goto LAB_016c37d0;
        }
        uVar25 = uVar17 * 2;
      } while (1 < uVar12);
LAB_016c37d0:
      uVar28 = 1;
LAB_016c37d4:
      abStack_67[uVar28 + 1] = (byte)uVar30;
      local_170[uVar28] = uVar25;
    }
    if (param_2 <= uVar31) {
      if ((uVar25 & 1) == 0) {
        FUN_016bf3ac(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0,param_6);
      }
      return;
    }
    uVar28 = uVar28 + 1;
    uVar31 = uVar31 + (local_194 >> 1);
    uVar25 = local_194;
  } while( true );
}

