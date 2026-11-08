// FUN_00b78fb0 @ 00b78fb0 size=1332 calls_out=3 calls_in=2
// strings: 

void FUN_00b78fb0(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  uint *puVar11;
  uint *puVar12;
  uint uVar13;
  byte bVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  uint uVar18;
  undefined4 uVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  bool bVar26;
  ulonglong uVar27;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar27 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar27 & 0xffffffff);
  uVar2 = uVar27 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar27 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar27;
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
  uVar22 = 1;
  uVar18 = 0;
  uVar13 = 0;
  do {
    uVar15 = 0;
    bVar14 = 0;
    puVar6 = (undefined4 *)(param_1 + uVar18 * 4);
    local_18c = 1;
    if (uVar18 < param_2) {
      local_18c = param_2 - uVar18;
      if (local_18c < uVar4) {
LAB_00b790c0:
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
          FUN_00b794e4(puVar6,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar15 = local_18c;
        }
        else {
          uVar24 = *(uint *)puVar6[1];
          uVar15 = 2;
          if (uVar24 < *(uint *)*puVar6) {
            if (local_18c != 2) {
              uVar10 = uVar24;
              do {
                puVar17 = puVar6 + uVar15;
                if (uVar10 <= *(uint *)*puVar17) goto LAB_00b791b0;
                uVar15 = uVar15 + 1;
                uVar10 = *(uint *)*puVar17;
              } while (local_18c != uVar15);
              goto LAB_00b791ac;
            }
            uVar24 = 1;
LAB_00b791d0:
            puVar17 = (undefined4 *)(param_1 + -4 + uVar15 * 4 + uVar18 * 4);
            puVar8 = puVar6;
            do {
              uVar19 = *puVar17;
              uVar24 = uVar24 - 1;
              *puVar17 = *puVar8;
              *puVar8 = uVar19;
              puVar17 = puVar17 + -1;
              puVar8 = puVar8 + 1;
            } while (uVar24 != 0);
          }
          else if (local_18c != 2) {
            uVar10 = uVar24;
            do {
              puVar17 = puVar6 + uVar15;
              if (*(uint *)*puVar17 < uVar10) goto LAB_00b791b0;
              uVar15 = uVar15 + 1;
              uVar10 = *(uint *)*puVar17;
            } while (local_18c != uVar15);
LAB_00b791ac:
            uVar15 = local_18c;
LAB_00b791b0:
            if (uVar15 < uVar4) goto LAB_00b790c0;
            if (uVar24 < *(uint *)*puVar6) {
              uVar24 = uVar15 >> 1;
              if (uVar24 != 0) goto LAB_00b791d0;
              uVar15 = 1;
            }
          }
        }
        local_18c = uVar15 << 1 | 1;
      }
      uVar15 = uVar18 - (uVar22 >> 1);
      uVar24 = uVar18 + (local_18c >> 1);
      uVar10 = uVar24 + uVar18;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar10;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar15,uVar18),uVar15 + uVar18);
      uVar24 = (uint)CARRY4(uVar24,uVar18) * (int)uVar2 +
               uVar10 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar15 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar24 != 0) {
        uVar15 = LZCOUNT(uVar24);
      }
      bVar14 = (byte)uVar15;
      if (1 < uVar13) goto LAB_00b79274;
LAB_00b7909c:
      abStack_67[uVar13 + 1] = bVar14;
      local_170[uVar13] = uVar22;
      uVar15 = uVar22;
      uVar22 = local_18c;
    }
    else {
      if (uVar13 < 2) goto LAB_00b7909c;
LAB_00b79274:
      do {
        while( true ) {
          uVar24 = uVar13 - 1;
          if (abStack_67[uVar13] < uVar15) goto LAB_00b79480;
          uVar21 = local_170[uVar24];
          uVar10 = uVar21 >> 1;
          uVar25 = uVar10 + (uVar22 >> 1);
          uVar13 = uVar24;
          if ((param_4 < uVar25) || (((uVar21 | uVar22) & 1) != 0)) break;
          uVar22 = uVar25 * 2;
          if (uVar24 < 2) goto LAB_00b7947c;
        }
        puVar17 = (undefined4 *)(param_1 + (uVar18 - uVar25) * 4);
        if ((uVar21 & 1) == 0) {
          FUN_00b794e4(puVar17,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar22 & 1) == 0) {
          FUN_00b794e4(puVar17 + uVar10,uVar22 >> 1,param_3,param_4,
                       LZCOUNT(uVar22 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar23 = uVar22 >> 1;
        if (1 < uVar21 && 1 < uVar22) {
          uVar22 = uVar10;
          if (uVar23 < uVar10) {
            uVar22 = uVar23;
          }
          if (uVar22 <= param_4) {
            puVar20 = puVar17 + uVar10;
            puVar8 = puVar17;
            if (uVar23 < uVar10) {
              puVar8 = puVar20;
            }
            FUN_016dd1aa(param_3,puVar8,uVar22 << 2);
            puVar7 = param_3 + uVar22;
            puVar8 = param_3;
            if (uVar23 < uVar10) {
              puVar9 = (undefined4 *)(param_1 + -4 + uVar18 * 4);
              puVar16 = puVar20;
              do {
                puVar11 = (uint *)puVar16[-1];
                puVar12 = (uint *)puVar7[-1];
                bVar26 = *puVar12 < *puVar11;
                if (bVar26) {
                  puVar12 = puVar11;
                }
                *puVar9 = puVar12;
                puVar7 = puVar7 + -1 + bVar26;
                puVar16 = puVar16 + -1 + !bVar26;
                puVar9 = puVar9 + -1;
              } while (puVar16 != puVar17 && puVar7 != param_3);
            }
            else {
              do {
                puVar12 = (uint *)*puVar20;
                bVar26 = *(uint *)*puVar8 <= *puVar12;
                if (bVar26) {
                  puVar12 = (uint *)*puVar8;
                }
                puVar16 = puVar17 + 1;
                *puVar17 = puVar12;
                puVar8 = puVar8 + bVar26;
                if (puVar8 == puVar7) break;
                puVar20 = puVar20 + !bVar26;
                puVar17 = puVar16;
              } while (puVar20 != puVar6);
            }
            FUN_016dd1aa(puVar16,puVar8,(int)puVar7 - (int)puVar8);
          }
        }
        uVar22 = uVar25 * 2 | 1;
      } while (1 < uVar24);
LAB_00b7947c:
      uVar13 = 1;
LAB_00b79480:
      abStack_67[uVar13 + 1] = (byte)uVar15;
      local_170[uVar13] = uVar22;
      uVar15 = uVar22;
      uVar22 = local_18c;
    }
    if (param_2 <= uVar18) {
      if ((uVar15 & 1) == 0) {
        FUN_00b794e4(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar13 = uVar13 + 1;
    uVar18 = uVar18 + (uVar22 >> 1);
  } while( true );
}

