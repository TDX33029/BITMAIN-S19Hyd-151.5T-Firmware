// FUN_00b77eec @ 00b77eec size=1620 calls_out=3 calls_in=2
// strings: 

void FUN_00b77eec(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint *puVar25;
  uint uVar26;
  bool bVar27;
  ulonglong uVar28;
  uint local_184;
  uint local_17c [68];
  byte abStack_69 [69];
  
  uVar28 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar28 & 0xffffffff);
  uVar2 = uVar28 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar28 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar28;
  }
  if (param_2 < 0x1001) {
    uVar4 = param_2 - (param_2 >> 1);
    if (0x3f < uVar4) {
      uVar4 = 0x40;
    }
  }
  else {
    uVar4 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar5 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar5) + (param_2 >> iVar5) >> 1;
  }
  uVar13 = 0;
  uVar17 = 0;
  uVar12 = 1;
  do {
    uVar7 = 0;
    local_184 = 1;
    if (uVar13 < param_2) {
      local_184 = param_2 - uVar13;
      puVar6 = (uint *)(param_1 + uVar13 * 0x18);
      if (local_184 < uVar4) {
LAB_00b77fec:
        if (param_5 == 0) {
          if (uVar4 <= local_184) {
            local_184 = uVar4;
          }
          local_184 = local_184 << 1;
        }
        else {
          if (0x1f < local_184) {
            local_184 = 0x20;
          }
          FUN_00b78540(puVar6,local_184,param_3,param_4,0,0);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar10 = local_184;
        }
        else {
          uVar7 = puVar6[6];
          if (uVar7 < *puVar6) {
            if (local_184 != 2) {
              uVar9 = 2;
              uVar11 = uVar7;
              puVar14 = (uint *)(param_1 + 0x30 + uVar13 * 0x18);
              do {
                uVar10 = uVar9;
                if (uVar11 <= *puVar14) break;
                uVar9 = uVar9 + 1;
                uVar11 = *puVar14;
                puVar14 = puVar14 + 6;
                uVar10 = local_184;
              } while (local_184 != uVar9);
              goto joined_r0x00b783a4;
            }
            uVar10 = 2;
            uVar7 = 1;
LAB_00b783bc:
            puVar14 = (uint *)(param_1 + -0x18 + uVar10 * 0x18 + uVar13 * 0x18);
            do {
              uVar11 = *puVar6;
              uVar7 = uVar7 - 1;
              uVar9 = puVar6[2];
              uVar16 = puVar6[4];
              uVar15 = puVar6[5];
              uVar22 = puVar6[3];
              uVar18 = puVar14[1];
              uVar19 = puVar14[2];
              uVar21 = puVar14[3];
              uVar24 = puVar14[4];
              uVar26 = puVar14[5];
              *puVar6 = *puVar14;
              puVar6[1] = uVar18;
              puVar6[2] = uVar19;
              puVar6[3] = uVar21;
              puVar6[4] = uVar24;
              puVar6[5] = uVar26;
              puVar14[2] = uVar9;
              puVar14[4] = uVar16;
              puVar14[5] = uVar15;
              puVar14[3] = uVar22;
              *puVar14 = uVar11;
              puVar6 = puVar6 + 6;
              puVar14 = puVar14 + -6;
            } while (uVar7 != 0);
          }
          else {
            uVar10 = 2;
            if (local_184 != 2) {
              uVar9 = 2;
              uVar11 = uVar7;
              puVar14 = (uint *)(param_1 + 0x30 + uVar13 * 0x18);
              do {
                uVar10 = uVar9;
                if (*puVar14 < uVar11) break;
                uVar9 = uVar9 + 1;
                uVar11 = *puVar14;
                puVar14 = puVar14 + 6;
                uVar10 = local_184;
              } while (local_184 != uVar9);
joined_r0x00b783a4:
              if (uVar10 < uVar4) goto LAB_00b77fec;
              if (uVar7 < *puVar6) {
                uVar7 = uVar10 >> 1;
                if (uVar7 != 0) goto LAB_00b783bc;
                uVar10 = 1;
              }
            }
          }
        }
        local_184 = uVar10 << 1 | 1;
      }
      uVar7 = uVar13 - (uVar12 >> 1);
      uVar10 = uVar13 + (local_184 >> 1);
      uVar11 = uVar10 + uVar13;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar11;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar7,uVar13),uVar7 + uVar13);
      uVar10 = (uint)CARRY4(uVar10,uVar13) * (int)uVar2 +
               uVar11 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar7 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar10 != 0) {
        uVar7 = LZCOUNT(uVar10);
      }
    }
    if (uVar17 < 2) {
      abStack_69[uVar17 + 3] = (byte)uVar7;
      local_17c[uVar17 + 3] = uVar12;
    }
    else {
      do {
        while( true ) {
          uVar10 = uVar17 - 1;
          if (abStack_69[uVar17 + 2] < uVar7) goto LAB_00b782b4;
          uVar16 = local_17c[uVar17 + 2];
          uVar11 = uVar16 >> 1;
          uVar9 = uVar11 + (uVar12 >> 1);
          uVar17 = uVar10;
          if ((uVar9 <= param_4) && (((uVar16 | uVar12) & 1) == 0)) break;
          puVar6 = (uint *)(param_1 + (uVar13 - uVar9) * 0x18);
          if ((uVar16 & 1) == 0) {
            FUN_00b78540(puVar6,uVar11,param_3,param_4,LZCOUNT(uVar11 | 1) << 1 ^ 0x3e,0);
          }
          uVar15 = uVar12 >> 1;
          if ((uVar12 & 1) == 0) {
            FUN_00b78540(puVar6 + uVar11 * 6,uVar15,param_3,param_4,LZCOUNT(uVar15 | 1) << 1 ^ 0x3e,
                         0);
          }
          if (1 < uVar16 && 1 < uVar12) {
            uVar12 = uVar11;
            if (uVar15 < uVar11) {
              uVar12 = uVar15;
            }
            if (uVar12 <= param_4) {
              puVar14 = puVar6 + uVar11 * 6;
              puVar8 = puVar6;
              if (uVar15 < uVar11) {
                puVar8 = puVar14;
              }
              FUN_016dd1aa(param_3,puVar8,uVar12 * 0x18);
              puVar25 = param_3 + uVar12 * 6;
              puVar8 = param_3;
              if (uVar15 < uVar11) {
                puVar23 = (uint *)(param_1 + -0x18 + uVar13 * 0x18);
                do {
                  puVar25 = puVar25 + -6;
                  puVar14 = puVar14 + -6;
                  bVar27 = *puVar25 < *puVar14;
                  puVar20 = puVar25;
                  if (bVar27) {
                    puVar20 = puVar14;
                  }
                  uVar12 = puVar20[1];
                  uVar11 = puVar20[2];
                  uVar16 = puVar20[3];
                  uVar15 = puVar20[4];
                  uVar18 = puVar20[5];
                  *puVar23 = *puVar20;
                  puVar23[1] = uVar12;
                  puVar23[2] = uVar11;
                  puVar23[3] = uVar16;
                  puVar23[4] = uVar15;
                  puVar23[5] = uVar18;
                  puVar25 = puVar25 + ((uint)bVar27 | (uint)bVar27 << 1) * 2;
                  puVar14 = puVar14 + ((uint)!bVar27 | (uint)!bVar27 << 1) * 2;
                } while ((puVar14 != puVar6) && (puVar23 = puVar23 + -6, puVar25 != param_3));
                puVar20 = puVar14;
              }
              else {
                do {
                  bVar27 = *puVar8 <= *puVar14;
                  puVar23 = puVar8;
                  if (!bVar27) {
                    puVar23 = puVar14;
                  }
                  puVar20 = puVar6 + 6;
                  uVar12 = puVar23[1];
                  uVar11 = puVar23[2];
                  uVar16 = puVar23[3];
                  uVar15 = puVar23[4];
                  uVar18 = puVar23[5];
                  *puVar6 = *puVar23;
                  puVar6[1] = uVar12;
                  puVar6[2] = uVar11;
                  puVar6[3] = uVar16;
                  puVar6[4] = uVar15;
                  puVar6[5] = uVar18;
                  puVar8 = puVar8 + ((uint)bVar27 | (uint)bVar27 << 1) * 2;
                  if (puVar8 != puVar25) {
                    puVar14 = puVar14 + ((uint)!bVar27 | (uint)!bVar27 << 1) * 2;
                  }
                  puVar6 = puVar20;
                } while (puVar8 != puVar25 && puVar14 != (uint *)(param_1 + uVar13 * 0x18));
              }
              FUN_016dd1aa(puVar20,puVar8,(int)puVar25 - (int)puVar8);
            }
          }
          uVar12 = uVar9 * 2 | 1;
          if (uVar10 < 2) goto LAB_00b782b0;
        }
        uVar12 = uVar9 * 2;
      } while (1 < uVar10);
LAB_00b782b0:
      uVar17 = 1;
LAB_00b782b4:
      abStack_69[uVar17 + 3] = (byte)uVar7;
      local_17c[uVar17 + 3] = uVar12;
    }
    if (param_2 <= uVar13) {
      if ((uVar12 & 1) == 0) {
        FUN_00b78540(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + 1;
    uVar13 = uVar13 + (local_184 >> 1);
    uVar12 = local_184;
  } while( true );
}

