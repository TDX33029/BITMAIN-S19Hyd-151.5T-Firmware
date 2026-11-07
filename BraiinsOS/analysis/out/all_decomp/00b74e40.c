// FUN_00b74e40 @ 00b74e40 size=1688 calls_out=3 calls_in=2
// strings: 

void FUN_00b74e40(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  undefined4 *puVar13;
  uint *puVar14;
  undefined4 *puVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  bool bVar28;
  ulonglong uVar29;
  uint local_184;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar29 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar29 & 0xffffffff);
  uVar4 = uVar29 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar29 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar29;
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
  uVar25 = 1;
  uVar26 = 0;
  uVar21 = 0;
  do {
    uVar10 = 0;
    bVar9 = 0;
    local_184 = 1;
    if (uVar26 < param_2) {
      local_184 = param_2 - uVar26;
      puVar23 = (uint *)(param_1 + uVar26 * 0xc);
      if (local_184 < uVar5) {
LAB_00b74f6c:
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
          FUN_00b754d8(puVar23,local_184,param_3,param_4,0,0);
          local_184 = local_184 << 1 | 1;
        }
      }
      else {
        if (local_184 < 2) {
          uVar17 = local_184;
        }
        else {
          uVar10 = puVar23[3];
          uVar22 = puVar23[4];
          bVar28 = *puVar23 <= uVar10;
          if (uVar10 == *puVar23) {
            bVar28 = puVar23[1] <= uVar22;
          }
          if (bVar28) {
            uVar17 = 2;
            if (local_184 != 2) {
              puVar14 = (uint *)(param_1 + 0x1c + uVar26 * 0xc);
              uVar17 = 2;
              do {
                uVar16 = *puVar14;
                uVar20 = puVar14[-1];
                bVar27 = uVar10 <= uVar20;
                if (uVar20 == uVar10) {
                  bVar27 = uVar22 <= uVar16;
                }
                if (!bVar27) goto LAB_00b750d0;
                uVar17 = uVar17 + 1;
                puVar14 = puVar14 + 3;
                uVar10 = uVar20;
                uVar22 = uVar16;
              } while (local_184 != uVar17);
              goto LAB_00b750cc;
            }
          }
          else if (local_184 == 2) {
            uVar17 = 2;
            uVar10 = 1;
LAB_00b75104:
            puVar13 = (undefined4 *)(param_1 + 8 + uVar26 * 0xc);
            puVar15 = (undefined4 *)(param_1 + -4 + uVar17 * 0xc + uVar26 * 0xc);
            do {
              uVar18 = puVar13[-2];
              uVar10 = uVar10 - 1;
              puVar13[-2] = puVar15[-2];
              puVar15[-2] = uVar18;
              uVar18 = puVar15[-1];
              puVar15[-1] = puVar13[-1];
              puVar13[-1] = uVar18;
              uVar18 = *puVar13;
              *puVar13 = *puVar15;
              *puVar15 = uVar18;
              puVar13 = puVar13 + 3;
              puVar15 = puVar15 + -3;
            } while (uVar10 != 0);
          }
          else {
            puVar14 = (uint *)(param_1 + 0x1c + uVar26 * 0xc);
            uVar17 = 2;
            do {
              uVar16 = *puVar14;
              uVar20 = puVar14[-1];
              bVar27 = uVar10 <= uVar20;
              if (uVar20 == uVar10) {
                bVar27 = uVar22 <= uVar16;
              }
              if (bVar27) goto LAB_00b750d0;
              uVar17 = uVar17 + 1;
              puVar14 = puVar14 + 3;
              uVar10 = uVar20;
              uVar22 = uVar16;
            } while (local_184 != uVar17);
LAB_00b750cc:
            uVar17 = local_184;
LAB_00b750d0:
            if (uVar17 < uVar5) goto LAB_00b74f6c;
            if (!bVar28) {
              uVar10 = uVar17 >> 1;
              if (uVar10 != 0) goto LAB_00b75104;
              uVar17 = 1;
            }
          }
        }
        local_184 = uVar17 << 1 | 1;
      }
      uVar22 = uVar26 - (uVar25 >> 1);
      uVar17 = uVar22 + uVar26;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar17;
      uVar16 = (local_184 >> 1) + uVar26 * 2;
      lVar2 = (ulonglong)uVar16 * (uVar4 & 0xffffffff);
      uVar10 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar22 = iVar3 * uVar16 + (int)((ulonglong)lVar2 >> 0x20) ^
               (uint)CARRY4(uVar22,uVar26) * (int)uVar4 +
               uVar17 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar22 != 0) {
        uVar10 = LZCOUNT(uVar22);
      }
      bVar9 = (byte)uVar10;
      if (uVar21 < 2) goto LAB_00b74f40;
LAB_00b751c8:
      do {
        while( true ) {
          uVar22 = uVar21 - 1;
          if (abStack_67[uVar21] < uVar10) goto LAB_00b75474;
          uVar20 = local_170[uVar22];
          uVar17 = uVar20 >> 1;
          uVar16 = uVar17 + (uVar25 >> 1);
          uVar21 = uVar22;
          if ((param_4 < uVar16) || (((uVar20 | uVar25) & 1) != 0)) break;
          uVar25 = uVar16 * 2;
          if (uVar22 < 2) goto LAB_00b75470;
        }
        puVar23 = (uint *)(param_1 + (uVar26 - uVar16) * 0xc);
        if ((uVar20 & 1) == 0) {
          FUN_00b754d8(puVar23,uVar17,param_3,param_4,LZCOUNT(uVar17 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar25 & 1) == 0) {
          FUN_00b754d8(puVar23 + uVar17 * 3,uVar25 >> 1,param_3,param_4,
                       LZCOUNT(uVar25 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar24 = uVar25 >> 1;
        if (1 < uVar20 && 1 < uVar25) {
          uVar25 = uVar17;
          if (uVar24 < uVar17) {
            uVar25 = uVar24;
          }
          if (uVar25 <= param_4) {
            puVar14 = puVar23 + uVar17 * 3;
            puVar12 = puVar23;
            if (uVar24 < uVar17) {
              puVar12 = puVar14;
            }
            FUN_016dd1aa(param_3,puVar12,uVar25 * 0xc);
            puVar7 = param_3 + uVar25 * 3;
            puVar12 = param_3;
            if (uVar24 < uVar17) {
              puVar11 = (uint *)(param_1 + -0xc + uVar26 * 0xc);
              do {
                puVar19 = puVar14 + -3;
                puVar8 = puVar7 + -3;
                bVar28 = *puVar19 <= *puVar8;
                if (*puVar8 == *puVar19) {
                  bVar28 = puVar14[-2] <= puVar7[-2];
                }
                uVar25 = (uint)!bVar28;
                puVar14 = puVar8;
                if (uVar25 != 0) {
                  puVar14 = puVar19;
                }
                uVar20 = *puVar14;
                uVar17 = puVar14[1];
                puVar11[2] = puVar14[2];
                *puVar11 = uVar20;
                puVar7 = puVar8 + (uVar25 | uVar25 << 1);
                puVar11[1] = uVar17;
                puVar14 = puVar19 + (uVar25 ^ 1 | (uVar25 ^ 1) << 1);
              } while ((puVar14 != puVar23) && (puVar11 = puVar11 + -3, puVar7 != param_3));
              puVar23 = puVar14;
            }
            else {
              do {
                bVar28 = *puVar12 <= *puVar14;
                if (*puVar14 == *puVar12) {
                  bVar28 = puVar12[1] <= puVar14[1];
                }
                uVar25 = (uint)!bVar28;
                puVar11 = puVar12;
                if (uVar25 != 0) {
                  puVar11 = puVar14;
                }
                uVar20 = *puVar11;
                uVar17 = puVar11[1];
                puVar23[2] = puVar11[2];
                *puVar23 = uVar20;
                puVar23[1] = uVar17;
                puVar23 = puVar23 + 3;
                puVar12 = puVar12 + (uVar25 ^ 1 | (uVar25 ^ 1) << 1);
                if (puVar12 != puVar7) {
                  puVar14 = puVar14 + (uVar25 | uVar25 << 1);
                }
              } while (puVar12 != puVar7 && puVar14 != (uint *)(param_1 + uVar26 * 0xc));
            }
            FUN_016dd1aa(puVar23,puVar12,(int)puVar7 - (int)puVar12);
          }
        }
        uVar25 = uVar16 * 2 | 1;
      } while (1 < uVar22);
LAB_00b75470:
      uVar21 = 1;
LAB_00b75474:
      abStack_67[uVar21 + 1] = (byte)uVar10;
      local_170[uVar21] = uVar25;
      uVar10 = uVar25;
      uVar25 = local_184;
    }
    else {
      if (1 < uVar21) goto LAB_00b751c8;
LAB_00b74f40:
      abStack_67[uVar21 + 1] = bVar9;
      local_170[uVar21] = uVar25;
      uVar10 = uVar25;
      uVar25 = local_184;
    }
    if (param_2 <= uVar26) {
      if ((uVar10 & 1) == 0) {
        FUN_00b754d8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar21 = uVar21 + 1;
    uVar26 = uVar26 + (uVar25 >> 1);
  } while( true );
}

