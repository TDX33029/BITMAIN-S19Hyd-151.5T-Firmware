// FUN_01ae4cb0 @ 01ae4cb0 size=1884 calls_out=3 calls_in=2
// strings: 

void FUN_01ae4cb0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5,
                 undefined4 *param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint *puVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int *piVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint *puVar21;
  uint uVar22;
  uint *puVar23;
  uint *puVar24;
  uint *puVar25;
  uint *puVar26;
  int iVar27;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint extraout_r12_02;
  uint uVar28;
  uint extraout_r12_03;
  uint extraout_r12_04;
  uint extraout_r12_05;
  int iVar29;
  bool bVar30;
  ulonglong uVar31;
  uint local_194;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar31 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar31 & 0xffffffff);
  uVar2 = uVar31 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar31 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar31;
  }
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar27 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar27) + (param_2 >> iVar27) >> 1;
  }
  uVar14 = 0;
  uVar16 = 0;
  uVar22 = 1;
  uVar28 = extraout_r12;
  do {
    uVar11 = 0;
    local_194 = 1;
    if (uVar14 < param_2) {
      piVar17 = (int *)(param_1 + uVar14 * 0x28);
      local_194 = param_2 - uVar14;
      if (local_194 < uVar5) {
LAB_01ae4dac:
        if (param_5 != 0) {
          if (0x1f < local_194) {
            local_194 = 0x20;
          }
          FUN_01ae56b4(piVar17,local_194,param_3,param_4,0,0,param_6);
          uVar11 = local_194;
          goto LAB_01ae4f90;
        }
        if (uVar5 <= local_194) {
          local_194 = uVar5;
        }
        local_194 = local_194 << 1;
      }
      else {
        uVar11 = local_194;
        if (1 < local_194) {
          puVar7 = (undefined4 *)*param_6;
          if (piVar17[10] == 1) {
            if (*piVar17 != 0) goto LAB_01ae4e6c;
LAB_01ae4ef0:
            uVar11 = 2;
            bVar30 = true;
            if (local_194 != 2) {
              iVar27 = param_1 + 0x30 + uVar14 * 0x28;
              do {
                if (*(int *)(iVar27 + 0x20) == 0) {
                  if (*(int *)(iVar27 + -8) != 0) goto LAB_01ae4f6c;
                  cVar4 = (**(code **)((*(undefined4 **)*puVar7)[1] + 0x10))
                                    (**(undefined4 **)*puVar7,iVar27 + 0x28,iVar27);
                  uVar28 = extraout_r12_02;
                  if (cVar4 != -1) goto LAB_01ae4f6c;
                }
                else if (*(int *)(iVar27 + -8) != 0) goto LAB_01ae4f6c;
                uVar11 = uVar11 + 1;
                iVar27 = iVar27 + 0x28;
              } while (local_194 != uVar11);
              uVar11 = local_194;
LAB_01ae4f6c:
              bVar30 = true;
            }
          }
          else {
            if (*piVar17 == 0) {
              cVar4 = (**(code **)((*(undefined4 **)*puVar7)[1] + 0x10))
                                (**(undefined4 **)*puVar7,piVar17 + 0xc,piVar17 + 2);
              uVar28 = extraout_r12_00;
              if (cVar4 == -1) goto LAB_01ae4ef0;
            }
LAB_01ae4e6c:
            uVar11 = 2;
            bVar30 = false;
            if (local_194 != 2) {
              iVar27 = param_1 + 0x30 + uVar14 * 0x28;
              do {
                if (*(int *)(iVar27 + 0x20) == 0) {
                  if (*(int *)(iVar27 + -8) == 0) {
                    cVar4 = (**(code **)((*(undefined4 **)*puVar7)[1] + 0x10))
                                      (**(undefined4 **)*puVar7,iVar27 + 0x28,iVar27);
                    uVar28 = extraout_r12_01;
                    if (cVar4 == -1) goto LAB_01ae4ee8;
                  }
                }
                else if (*(int *)(iVar27 + -8) == 0) goto LAB_01ae4ee8;
                uVar11 = uVar11 + 1;
                iVar27 = iVar27 + 0x28;
              } while (local_194 != uVar11);
              uVar11 = local_194;
LAB_01ae4ee8:
              bVar30 = false;
            }
          }
          if (uVar11 < uVar5) goto LAB_01ae4dac;
          bVar30 = !bVar30;
          if (!bVar30) {
            uVar28 = uVar11 >> 1;
            bVar30 = uVar28 == 0;
          }
          if (!bVar30) {
            uVar12 = 0;
            iVar27 = param_1 + -0x28 + uVar11 * 0x28 + uVar14 * 0x28;
            do {
              iVar29 = 0;
              do {
                iVar10 = piVar17[-iVar29];
                piVar17[-iVar29] = *(int *)(iVar27 + iVar29 * -4);
                *(int *)(iVar27 + iVar29 * -4) = iVar10;
                bVar30 = iVar29 != -9;
                iVar29 = iVar29 + -1;
              } while (bVar30);
              uVar12 = uVar12 + 1;
              piVar17 = piVar17 + 10;
              iVar27 = iVar27 + -0x28;
            } while (uVar12 != uVar28);
          }
        }
LAB_01ae4f90:
        local_194 = uVar11 << 1 | 1;
      }
      uVar11 = uVar14 - (uVar22 >> 1);
      uVar12 = uVar14 + (local_194 >> 1);
      uVar13 = uVar12 + uVar14;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar13;
      uVar28 = (uint)lVar1;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar11,uVar14),uVar11 + uVar14);
      uVar12 = (uint)CARRY4(uVar12,uVar14) * (int)uVar2 +
               uVar13 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar11 = LZCOUNT(uVar28 ^ (uint)lVar3) + 0x20;
      if (uVar12 != 0) {
        uVar11 = LZCOUNT(uVar12);
      }
    }
    if (1 < uVar16) {
      puVar6 = (uint *)(param_1 + uVar14 * 0x28);
      do {
        uVar12 = uVar16 - 1;
        if (abStack_67[uVar16] < uVar11) goto LAB_01ae5348;
        uVar18 = local_170[uVar12];
        uVar16 = uVar18 >> 1;
        uVar13 = uVar16 + (uVar22 >> 1);
        if ((param_4 < uVar13) || (((uVar18 | uVar22) & 1) != 0)) {
          puVar19 = (uint *)(param_1 + (uVar14 - uVar13) * 0x28);
          if ((uVar18 & 1) == 0) {
            FUN_01ae56b4(puVar19,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0,param_6);
            uVar28 = extraout_r12_03;
          }
          uVar20 = uVar22 >> 1;
          if ((uVar22 & 1) == 0) {
            FUN_01ae56b4(puVar19 + uVar16 * 10,uVar20,param_3,param_4,
                         LZCOUNT(uVar20 | 1) << 1 ^ 0x3e,0,param_6);
            uVar28 = extraout_r12_04;
          }
          if (1 < uVar18 && 1 < uVar22) {
            uVar22 = uVar16;
            if (uVar20 < uVar16) {
              uVar22 = uVar20;
            }
            if (uVar22 <= param_4) {
              puVar7 = (undefined4 *)*param_6;
              puVar15 = puVar19 + uVar16 * 10;
              puVar21 = puVar19;
              if (uVar20 < uVar16) {
                puVar21 = puVar15;
              }
              puVar8 = (uint *)FUN_01bed4e2(param_3,puVar21,uVar22 * 0x28);
              puVar25 = param_3 + uVar22 * 10;
              puVar24 = param_3;
              if (uVar20 < uVar16) {
                puVar15 = (uint *)(param_1 + -0x28 + uVar14 * 0x28);
                do {
                  puVar23 = puVar21 + -10;
                  uVar22 = 0;
                  puVar26 = puVar25 + -10;
                  puVar8 = puVar26;
                  if (*puVar26 == 0) {
                    if ((*puVar23 & 1) == 0) {
                      puVar9 = *(undefined4 **)*puVar7;
                      uVar28 = (**(code **)(puVar9[1] + 0x10))(*puVar9,puVar25 + -8,puVar21 + -8);
                      uVar28 = ~uVar28 & 0xff;
                      goto LAB_01ae51f0;
                    }
                  }
                  else {
                    uVar28 = *puVar23 & 1;
LAB_01ae51f0:
                    if (uVar28 == 0) {
                      uVar22 = 1;
                      puVar8 = puVar23;
                    }
                  }
                  uVar28 = puVar8[1];
                  uVar16 = puVar8[2];
                  uVar18 = puVar8[3];
                  uVar20 = puVar8[4];
                  *puVar15 = *puVar8;
                  puVar15[1] = uVar28;
                  puVar15[2] = uVar16;
                  puVar15[3] = uVar18;
                  puVar15[4] = uVar20;
                  uVar28 = puVar8[6];
                  uVar16 = puVar8[7];
                  uVar18 = puVar8[8];
                  uVar20 = puVar8[9];
                  puVar25 = puVar26 + (uVar22 | uVar22 << 2) * 2;
                  puVar15[5] = puVar8[5];
                  puVar15[6] = uVar28;
                  puVar15[7] = uVar16;
                  puVar15[8] = uVar18;
                  puVar15[9] = uVar20;
                  puVar21 = puVar23 + (uVar22 ^ 1 | (uVar22 ^ 1) << 2) * 2;
                } while ((puVar21 != puVar19) && (puVar15 = puVar15 + -10, puVar25 != param_3));
              }
              else {
                if (uVar22 != 0) {
                  puVar8 = puVar6;
                }
                if (!(uVar22 == 0 || puVar15 == puVar8)) {
                  puVar19 = puVar21;
                  do {
                    puVar8 = puVar24;
                    if (*puVar15 == 0) {
                      iVar27 = 1;
                      if (*puVar24 != 0) goto LAB_01ae52b8;
                      puVar9 = *(undefined4 **)*puVar7;
                      cVar4 = (**(code **)(puVar9[1] + 0x10))(*puVar9,puVar15 + 2,puVar24 + 2);
                      iVar29 = 0;
                      if (cVar4 == -1) goto LAB_01ae52f4;
                    }
                    else if (*puVar24 == 0) {
LAB_01ae52f4:
                      iVar29 = 1;
                      iVar27 = 0;
                      puVar8 = puVar15;
                    }
                    else {
LAB_01ae52b8:
                      iVar29 = 0;
                      iVar27 = 1;
                    }
                    uVar22 = puVar8[1];
                    uVar28 = puVar8[2];
                    uVar16 = puVar8[3];
                    uVar18 = puVar8[4];
                    puVar21 = puVar19 + 10;
                    *puVar19 = *puVar8;
                    puVar19[1] = uVar22;
                    puVar19[2] = uVar28;
                    puVar19[3] = uVar16;
                    puVar19[4] = uVar18;
                    uVar22 = puVar8[6];
                    uVar28 = puVar8[7];
                    uVar16 = puVar8[8];
                    uVar18 = puVar8[9];
                    puVar24 = puVar24 + iVar27 * 10;
                    puVar19[5] = puVar8[5];
                    puVar19[6] = uVar22;
                    puVar19[7] = uVar28;
                    puVar19[8] = uVar16;
                    puVar19[9] = uVar18;
                    if (puVar24 == puVar25) break;
                    puVar15 = puVar15 + iVar29 * 10;
                    puVar19 = puVar21;
                  } while (puVar15 != puVar6);
                }
              }
              FUN_01bed4e2(puVar21,puVar24,(int)puVar25 - (int)puVar24);
              uVar28 = extraout_r12_05;
            }
          }
          uVar22 = uVar13 * 2 | 1;
        }
        else {
          uVar22 = uVar13 * 2;
        }
        uVar16 = uVar12;
      } while (1 < uVar12);
      uVar16 = 1;
    }
LAB_01ae5348:
    abStack_67[uVar16 + 1] = (byte)uVar11;
    local_170[uVar16] = uVar22;
    if (param_2 <= uVar14) {
      if ((uVar22 & 1) == 0) {
        FUN_01ae56b4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0,param_6);
      }
      return;
    }
    uVar16 = uVar16 + 1;
    uVar14 = uVar14 + (local_194 >> 1);
    uVar22 = local_194;
  } while( true );
}

