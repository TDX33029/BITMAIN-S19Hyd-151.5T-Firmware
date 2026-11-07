// FUN_00b894a0 @ 00b894a0 size=1428 calls_out=3 calls_in=2
// strings: 

void FUN_00b894a0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  uint *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint *puVar19;
  byte bVar20;
  uint uVar21;
  undefined4 *puVar22;
  int iVar23;
  uint uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  uint uVar29;
  undefined4 uVar30;
  uint uVar31;
  undefined4 uVar32;
  bool bVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar35 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar35 & 0xffffffff);
  uVar2 = uVar35 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar35 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar35;
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
  uVar25 = 1;
  uVar17 = 0;
  uVar15 = 0;
  do {
    uVar21 = 0;
    bVar20 = 0;
    puVar6 = (uint *)(param_1 + uVar17 * 0x10);
    local_18c = 1;
    if (uVar17 < param_2) {
      local_18c = param_2 - uVar17;
      if (local_18c < uVar4) {
LAB_00b895b8:
        if (param_5 == 0) {
          if (uVar4 <= local_18c) {
            local_18c = uVar4;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_00b89a34(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar21 = local_18c;
        }
        else {
          uVar21 = 2;
          uVar29 = puVar6[4];
          if (uVar29 < *puVar6) {
            if (local_18c != 2) {
              uVar16 = uVar29;
              do {
                iVar5 = uVar21 * 4;
                if (uVar16 <= puVar6[iVar5]) goto LAB_00b8969c;
                uVar21 = uVar21 + 1;
                uVar16 = puVar6[iVar5];
              } while (local_18c != uVar21);
              goto LAB_00b89698;
            }
            uVar29 = 1;
LAB_00b896b8:
            iVar5 = uVar17 * 0x10;
            iVar18 = param_1 + -0x10 + uVar21 * 0x10;
            iVar14 = param_1 + -8 + uVar21 * 0x10;
            iVar23 = param_1;
            do {
              puVar11 = (undefined4 *)(iVar18 + iVar5);
              uVar28 = *puVar11;
              iVar18 = iVar18 + -0x10;
              puVar22 = (undefined4 *)(iVar23 + iVar5);
              uVar26 = *puVar22;
              iVar23 = iVar23 + 0x10;
              uVar30 = puVar11[2];
              uVar32 = puVar11[3];
              uVar29 = uVar29 - 1;
              uVar34 = *(undefined8 *)(puVar22 + 2);
              puVar22[1] = puVar11[1];
              puVar22[2] = uVar30;
              puVar22[3] = uVar32;
              puVar7 = (undefined8 *)(iVar14 + iVar5);
              iVar14 = iVar14 + -0x10;
              *puVar22 = uVar28;
              *puVar11 = uVar26;
              *puVar7 = uVar34;
            } while (uVar29 != 0);
          }
          else if (local_18c != 2) {
            uVar16 = uVar29;
            do {
              iVar5 = uVar21 * 4;
              if (puVar6[iVar5] < uVar16) goto LAB_00b8969c;
              uVar21 = uVar21 + 1;
              uVar16 = puVar6[iVar5];
            } while (local_18c != uVar21);
LAB_00b89698:
            uVar21 = local_18c;
LAB_00b8969c:
            if (uVar21 < uVar4) goto LAB_00b895b8;
            if (uVar29 < *puVar6) {
              uVar29 = uVar21 >> 1;
              if (uVar29 != 0) goto LAB_00b896b8;
              uVar21 = 1;
            }
          }
        }
        local_18c = uVar21 << 1 | 1;
      }
      uVar21 = uVar17 - (uVar25 >> 1);
      uVar29 = uVar17 + (local_18c >> 1);
      uVar16 = uVar29 + uVar17;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar16;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar21,uVar17),uVar21 + uVar17);
      uVar29 = (uint)CARRY4(uVar29,uVar17) * (int)uVar2 +
               uVar16 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar21 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar29 != 0) {
        uVar21 = LZCOUNT(uVar29);
      }
      bVar20 = (byte)uVar21;
      if (uVar15 < 2) goto LAB_00b89594;
LAB_00b8979c:
      do {
        while( true ) {
          uVar29 = uVar15 - 1;
          if (abStack_67[uVar15] < uVar21) goto LAB_00b899d0;
          uVar24 = local_170[uVar29];
          uVar16 = uVar24 >> 1;
          uVar31 = uVar16 + (uVar25 >> 1);
          uVar15 = uVar29;
          if ((param_4 < uVar31) || (((uVar24 | uVar25) & 1) != 0)) break;
          uVar25 = uVar31 * 2;
          if (uVar29 < 2) goto LAB_00b899cc;
        }
        puVar19 = (uint *)(param_1 + (uVar17 - uVar31) * 0x10);
        if ((uVar24 & 1) == 0) {
          FUN_00b89a34(puVar19,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar25 & 1) == 0) {
          FUN_00b89a34(puVar19 + uVar16 * 4,uVar25 >> 1,param_3,param_4,
                       LZCOUNT(uVar25 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar27 = uVar25 >> 1;
        if (1 < uVar24 && 1 < uVar25) {
          uVar25 = uVar16;
          if (uVar27 < uVar16) {
            uVar25 = uVar27;
          }
          if (uVar25 <= param_4) {
            puVar12 = puVar19 + uVar16 * 4;
            puVar9 = puVar19;
            if (uVar27 < uVar16) {
              puVar9 = puVar12;
            }
            FUN_016dd1aa(param_3,puVar9,uVar25 << 4);
            puVar8 = param_3 + uVar25 * 4;
            puVar9 = param_3;
            if (uVar27 < uVar16) {
              puVar10 = (uint *)(param_1 + -0x10 + uVar17 * 0x10);
              puVar13 = puVar12;
              do {
                puVar13 = puVar13 + -4;
                puVar8 = puVar8 + -4;
                bVar33 = *puVar8 < *puVar13;
                puVar12 = puVar8;
                if (bVar33) {
                  puVar12 = puVar13;
                }
                uVar25 = *puVar12;
                uVar24 = puVar12[1];
                uVar16 = puVar12[2];
                puVar10[3] = puVar12[3];
                *puVar10 = uVar25;
                puVar10[1] = uVar24;
                puVar8 = puVar8 + (uint)bVar33 * 4;
                puVar10[2] = uVar16;
                puVar13 = puVar13 + (uint)!bVar33 * 4;
                if (puVar13 != puVar19) {
                  puVar10 = puVar10 + -4;
                }
              } while (puVar13 != puVar19 && puVar8 != param_3);
            }
            else {
              do {
                bVar33 = *puVar9 <= *puVar12;
                puVar13 = puVar9;
                if (!bVar33) {
                  puVar13 = puVar12;
                }
                uVar24 = puVar13[1];
                uVar16 = puVar13[2];
                uVar25 = puVar13[3];
                *puVar19 = *puVar13;
                puVar19[1] = uVar24;
                puVar19[3] = uVar25;
                puVar19[2] = uVar16;
                puVar9 = puVar9 + (uint)bVar33 * 4;
                puVar13 = puVar19 + 4;
                if (puVar9 == puVar8) break;
                puVar12 = puVar12 + (uint)!bVar33 * 4;
                puVar19 = puVar13;
              } while (puVar12 != puVar6);
            }
            FUN_016dd1aa(puVar13,puVar9,(int)puVar8 - (int)puVar9);
          }
        }
        uVar25 = uVar31 * 2 | 1;
      } while (1 < uVar29);
LAB_00b899cc:
      uVar15 = 1;
LAB_00b899d0:
      abStack_67[uVar15 + 1] = (byte)uVar21;
      local_170[uVar15] = uVar25;
      uVar21 = uVar25;
      uVar25 = local_18c;
    }
    else {
      if (1 < uVar15) goto LAB_00b8979c;
LAB_00b89594:
      abStack_67[uVar15 + 1] = bVar20;
      local_170[uVar15] = uVar25;
      uVar21 = uVar25;
      uVar25 = local_18c;
    }
    if (param_2 <= uVar17) {
      if ((uVar21 & 1) == 0) {
        FUN_00b89a34(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar15 = uVar15 + 1;
    uVar17 = uVar17 + (uVar25 >> 1);
  } while( true );
}

