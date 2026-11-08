// FUN_00b7fe44 @ 00b7fe44 size=1800 calls_out=3 calls_in=2
// strings: 

void FUN_00b7fe44(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  undefined8 *puVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint *puVar13;
  undefined8 *puVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint uVar32;
  undefined4 uVar33;
  uint uVar34;
  uint uVar35;
  bool bVar36;
  bool bVar37;
  undefined8 uVar38;
  undefined8 uVar39;
  ulonglong uVar40;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar40 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar40 & 0xffffffff);
  uVar4 = uVar40 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar40 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar40;
  }
  iVar3 = (int)(uVar4 >> 0x20);
  if (param_2 < 0x1001) {
    uVar5 = param_2 - (param_2 >> 1);
    if (0x3f < uVar5) {
      uVar5 = 0x40;
    }
  }
  else {
    uVar5 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar6 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar6) + (param_2 >> iVar6) >> 1;
  }
  uVar29 = 0;
  uVar19 = 0;
  uVar23 = 1;
  do {
    uVar16 = 0;
    puVar7 = (uint *)(param_1 + uVar29 * 0x10);
    local_184 = 1;
    if (uVar29 < param_2) {
      local_184 = param_2 - uVar29;
      if (local_184 < uVar5) {
LAB_00b7ff48:
        if (param_5 == 0) {
          if (uVar5 <= local_184) {
            local_184 = uVar5;
          }
          local_184 = local_184 << 1;
        }
        else {
          if (0x1f < local_184) {
            local_184 = 0x20;
          }
          FUN_00b8054c(puVar7,local_184,param_3,param_4,0,0);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar35 = local_184;
        }
        else {
          uVar16 = puVar7[5];
          uVar10 = puVar7[1];
          uVar9 = puVar7[4];
          uVar24 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
          uVar10 = ((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar10 >> 0x1f) >> 1) ^ *puVar7;
          uVar34 = ((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f |
                   (uint)((int)uVar16 >> 0x1f) >> 1) ^ uVar9;
          uVar15 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
          if ((int)(uVar15 - (uVar24 + (uVar34 < uVar10))) < 0 ==
              (SBORROW4(uVar15,uVar24) != SBORROW4(uVar15 - uVar24,(uint)(uVar34 < uVar10)))) {
            uVar35 = 2;
            if (local_184 != 2) {
              puVar28 = (uint *)(param_1 + 0x20 + uVar29 * 0x10);
              do {
                uVar30 = *puVar28;
                uVar32 = puVar28[1];
                uVar17 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
                uVar20 = (uint)((int)uVar32 >> 0x1f) >> 1 ^ uVar32;
                bVar36 = (((uint)((byte)((int)uVar32 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar32 >> 0x1f) >> 1) ^ uVar30) <
                         (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f |
                          (uint)((int)uVar16 >> 0x1f) >> 1) ^ uVar9);
                if ((int)(uVar20 - (uVar17 + bVar36)) < 0 !=
                    (SBORROW4(uVar20,uVar17) != SBORROW4(uVar20 - uVar17,(uint)bVar36)))
                goto LAB_00b80104;
                uVar35 = uVar35 + 1;
                puVar28 = puVar28 + 4;
                uVar16 = uVar32;
                uVar9 = uVar30;
              } while (local_184 != uVar35);
              uVar35 = local_184;
              goto LAB_00b80104;
            }
          }
          else if (local_184 == 2) {
            uVar35 = 2;
            uVar16 = 1;
LAB_00b80144:
            iVar6 = uVar29 * 0x10;
            iVar21 = param_1 + -0x10 + uVar35 * 0x10;
            iVar18 = param_1 + -8 + uVar35 * 0x10;
            iVar22 = param_1;
            do {
              puVar8 = (undefined8 *)(iVar22 + iVar6);
              puVar14 = (undefined8 *)(iVar21 + iVar6);
              iVar21 = iVar21 + -0x10;
              uVar38 = *puVar8;
              uVar39 = puVar8[1];
              uVar16 = uVar16 - 1;
              uVar25 = *(undefined4 *)((int)puVar14 + 4);
              uVar31 = *(undefined4 *)(puVar14 + 1);
              uVar33 = *(undefined4 *)((int)puVar14 + 0xc);
              *(undefined4 *)(iVar22 + iVar6) = *(undefined4 *)puVar14;
              iVar22 = iVar22 + 0x10;
              *(undefined4 *)((int)puVar8 + 4) = uVar25;
              *(undefined4 *)(puVar8 + 1) = uVar31;
              *(undefined4 *)((int)puVar8 + 0xc) = uVar33;
              puVar8 = (undefined8 *)(iVar18 + iVar6);
              iVar18 = iVar18 + -0x10;
              *puVar14 = uVar38;
              *puVar8 = uVar39;
            } while (uVar16 != 0);
          }
          else {
            uVar35 = 2;
            puVar28 = (uint *)(param_1 + 0x20 + uVar29 * 0x10);
            do {
              uVar30 = *puVar28;
              uVar32 = puVar28[1];
              uVar17 = (uint)((int)uVar16 >> 0x1f) >> 1 ^ uVar16;
              uVar20 = (uint)((int)uVar32 >> 0x1f) >> 1 ^ uVar32;
              bVar36 = (((uint)((byte)((int)uVar32 >> 0x1f) & 1) << 0x1f |
                        (uint)((int)uVar32 >> 0x1f) >> 1) ^ uVar30) <
                       (((uint)((byte)((int)uVar16 >> 0x1f) & 1) << 0x1f |
                        (uint)((int)uVar16 >> 0x1f) >> 1) ^ uVar9);
              if ((int)(uVar20 - (uVar17 + bVar36)) < 0 ==
                  (SBORROW4(uVar20,uVar17) != SBORROW4(uVar20 - uVar17,(uint)bVar36)))
              goto LAB_00b80104;
              uVar35 = uVar35 + 1;
              puVar28 = puVar28 + 4;
              uVar16 = uVar32;
              uVar9 = uVar30;
            } while (local_184 != uVar35);
            uVar35 = local_184;
LAB_00b80104:
            if (uVar35 < uVar5) goto LAB_00b7ff48;
            if ((int)(uVar15 - (uVar24 + (uVar34 < uVar10))) < 0 !=
                (SBORROW4(uVar15,uVar24) != SBORROW4(uVar15 - uVar24,(uint)(uVar34 < uVar10)))) {
              uVar16 = uVar35 >> 1;
              if (uVar16 != 0) goto LAB_00b80144;
              uVar35 = 1;
            }
          }
        }
        local_184 = uVar35 << 1 | 1;
      }
      uVar9 = uVar29 - (uVar23 >> 1);
      uVar10 = uVar9 + uVar29;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar10;
      uVar15 = (local_184 >> 1) + uVar29 * 2;
      lVar2 = (ulonglong)uVar15 * (uVar4 & 0xffffffff);
      uVar16 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar9 = iVar3 * uVar15 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar29) * (int)uVar4 +
              uVar10 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar9 != 0) {
        uVar16 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar19) {
      do {
        while( true ) {
          uVar9 = uVar19 - 1;
          if (abStack_67[uVar19] < uVar16) goto LAB_00b804e8;
          uVar15 = local_170[uVar9];
          uVar10 = uVar15 >> 1;
          uVar34 = uVar10 + (uVar23 >> 1);
          uVar19 = uVar9;
          if ((uVar34 <= param_4) && (((uVar15 | uVar23) & 1) == 0)) break;
          puVar28 = (uint *)(param_1 + (uVar29 - uVar34) * 0x10);
          if ((uVar15 & 1) == 0) {
            FUN_00b8054c(puVar28,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar23 & 1) == 0) {
            FUN_00b8054c(puVar28 + uVar10 * 4,uVar23 >> 1,param_3,param_4,
                         LZCOUNT(uVar23 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar24 = uVar23 >> 1;
          if (1 < uVar15 && 1 < uVar23) {
            uVar23 = uVar10;
            if (uVar24 < uVar10) {
              uVar23 = uVar24;
            }
            if (uVar23 <= param_4) {
              puVar27 = puVar28 + uVar10 * 4;
              puVar12 = puVar28;
              if (uVar24 < uVar10) {
                puVar12 = puVar27;
              }
              FUN_016dd1aa(param_3,puVar12,uVar23 << 4);
              puVar12 = param_3 + uVar23 * 4;
              if (uVar24 < uVar10) {
                puVar13 = (uint *)(param_1 + -0x10 + uVar29 * 0x10);
                do {
                  puVar26 = puVar27 + -4;
                  puVar11 = puVar12 + -4;
                  uVar24 = puVar27[-3];
                  uVar10 = puVar12[-3];
                  uVar23 = (uint)((int)uVar24 >> 0x1f) >> 1 ^ uVar24;
                  uVar15 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
                  bVar36 = (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar10 >> 0x1f) >> 1) ^ *puVar11) <
                           (((uint)((byte)((int)uVar24 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar24 >> 0x1f) >> 1) ^ *puVar26);
                  bVar37 = SBORROW4(uVar15,uVar23) != SBORROW4(uVar15 - uVar23,(uint)bVar36);
                  bVar36 = (int)(uVar15 - (uVar23 + bVar36)) < 0;
                  uVar23 = (uint)(bVar36 != bVar37);
                  puVar12 = puVar11 + uVar23 * 4;
                  if (uVar23 != 0) {
                    puVar11 = puVar26;
                  }
                  puVar27 = puVar26 + (uint)(bVar36 == bVar37) * 4;
                  uVar15 = puVar11[1];
                  uVar10 = puVar11[2];
                  uVar23 = puVar11[3];
                  *puVar13 = *puVar11;
                  puVar13[1] = uVar15;
                  puVar13[2] = uVar10;
                  puVar13[3] = uVar23;
                } while ((puVar27 != puVar28) && (puVar13 = puVar13 + -4, puVar12 != param_3));
                puVar11 = param_3;
                puVar28 = puVar27;
              }
              else {
                puVar13 = param_3;
                do {
                  uVar10 = puVar13[1];
                  uVar23 = puVar27[1];
                  uVar15 = (uint)((int)uVar10 >> 0x1f) >> 1 ^ uVar10;
                  bVar36 = (((uint)((byte)((int)uVar23 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar23 >> 0x1f) >> 1) ^ *puVar27) <
                           (((uint)((byte)((int)uVar10 >> 0x1f) & 1) << 0x1f |
                            (uint)((int)uVar10 >> 0x1f) >> 1) ^ *puVar13);
                  uVar23 = (uint)((int)uVar23 >> 0x1f) >> 1 ^ uVar23;
                  bVar37 = SBORROW4(uVar23,uVar15) != SBORROW4(uVar23 - uVar15,(uint)bVar36);
                  bVar36 = (int)(uVar23 - (uVar15 + bVar36)) < 0;
                  uVar23 = (uint)(bVar36 != bVar37);
                  puVar11 = puVar13 + (uint)(bVar36 == bVar37) * 4;
                  if (uVar23 != 0) {
                    puVar13 = puVar27;
                  }
                  uVar24 = puVar13[1];
                  uVar15 = puVar13[2];
                  uVar10 = puVar13[3];
                  *puVar28 = *puVar13;
                  puVar28[1] = uVar24;
                  puVar28[2] = uVar15;
                  puVar28[3] = uVar10;
                  puVar28 = puVar28 + 4;
                  if (puVar11 == puVar12) break;
                  puVar27 = puVar27 + uVar23 * 4;
                  puVar13 = puVar11;
                } while (puVar27 != puVar7);
              }
              FUN_016dd1aa(puVar28,puVar11,(int)puVar12 - (int)puVar11);
            }
          }
          uVar23 = uVar34 * 2 | 1;
          if (uVar9 < 2) goto LAB_00b804dc;
        }
        uVar23 = uVar34 * 2;
      } while (1 < uVar9);
LAB_00b804dc:
      uVar19 = 1;
    }
LAB_00b804e8:
    abStack_67[uVar19 + 1] = (byte)uVar16;
    local_170[uVar19] = uVar23;
    if (param_2 <= uVar29) {
      if ((uVar23 & 1) == 0) {
        FUN_00b8054c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar19 = uVar19 + 1;
    uVar29 = uVar29 + (local_184 >> 1);
    uVar23 = local_184;
  } while( true );
}

