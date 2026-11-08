// FUN_0060d29c @ 0060d29c size=1772 calls_out=3 calls_in=2
// strings: 

void FUN_0060d29c(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint *puVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  undefined4 uVar25;
  undefined4 *puVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  undefined4 uVar31;
  uint *puVar32;
  uint uVar33;
  uint *puVar34;
  undefined4 uVar35;
  uint *puVar36;
  undefined4 uVar37;
  bool bVar38;
  ulonglong uVar39;
  uint local_190;
  uint local_170 [66];
  byte abStack_67 [67];
  
  uVar39 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar39 & 0xffffffff);
  uVar4 = uVar39 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar39 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar4 = uVar39;
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
    iVar17 = (uVar5 & 1) + (uVar5 >> 1);
    uVar5 = (1 << iVar17) + (param_2 >> iVar17) >> 1;
  }
  uVar33 = 1;
  uVar20 = 0;
  uVar27 = 0;
  do {
    uVar19 = 0;
    bVar18 = 0;
    local_190 = 1;
    if (uVar20 < param_2) {
      local_190 = param_2 - uVar20;
      puVar6 = (uint *)(param_1 + uVar20 * 0x18);
      if (local_190 < uVar5) {
LAB_0060d3b4:
        if (param_5 == 0) {
          if (uVar5 <= local_190) {
            local_190 = uVar5;
          }
          local_190 = local_190 << 1;
        }
        else {
          if (0x1f < local_190) {
            local_190 = 0x20;
          }
          FUN_0060e59c(puVar6,local_190,param_3,param_4,0,0);
          local_190 = local_190 << 1 | 1;
        }
      }
      else {
        uVar19 = local_190;
        if (1 < local_190) {
          uVar8 = puVar6[10];
          if (uVar8 < puVar6[4]) {
LAB_0060d6e8:
            uVar19 = 2;
            bVar38 = true;
            if (local_190 != 2) {
              puVar21 = (uint *)(param_1 + 0x40 + uVar20 * 0x18);
              do {
                uVar9 = *puVar21;
                if ((uVar8 <= uVar9) &&
                   ((uVar8 < uVar9 ||
                    (puVar21[-9] < puVar21[-3] ||
                     puVar21[-3] - puVar21[-9] < (uint)(puVar21[-10] <= puVar21[-4])))))
                goto LAB_0060d7e4;
                uVar19 = uVar19 + 1;
                puVar21 = puVar21 + 6;
                uVar8 = uVar9;
              } while (local_190 != uVar19);
LAB_0060d7e0:
              uVar19 = local_190;
            }
          }
          else {
            uVar9 = puVar6[7];
            if ((uVar8 <= puVar6[4]) &&
               (uVar9 <= puVar6[1] && (uint)(*puVar6 <= puVar6[6]) <= uVar9 - puVar6[1]))
            goto LAB_0060d6e8;
            uVar19 = 2;
            bVar38 = false;
            if (local_190 != 2) {
              puVar21 = (uint *)(param_1 + 0x40 + uVar20 * 0x18);
              uVar15 = puVar6[6];
              do {
                puVar10 = puVar21 + -4;
                uVar23 = *puVar21;
                if (uVar23 < uVar8) goto LAB_0060d7e4;
                uVar24 = puVar21[-3];
                if ((uVar23 <= uVar8) &&
                   (uVar24 <= uVar9 && (uint)(uVar15 <= *puVar10) <= uVar24 - uVar9))
                goto LAB_0060d7e4;
                uVar19 = uVar19 + 1;
                puVar21 = puVar21 + 6;
                uVar8 = uVar23;
                uVar15 = *puVar10;
                uVar9 = uVar24;
              } while (local_190 != uVar19);
              goto LAB_0060d7e0;
            }
          }
LAB_0060d7e4:
          if (uVar19 < uVar5) goto LAB_0060d3b4;
          if (bVar38) {
            uVar8 = uVar19 >> 1;
            if (uVar8 == 0) {
              uVar19 = 1;
            }
            else {
              iVar17 = param_1;
              iVar22 = param_1 + -0xc + uVar19 * 0x18;
              do {
                uVar8 = uVar8 - 1;
                puVar14 = (undefined4 *)(iVar22 + uVar20 * 0x18);
                uVar25 = *puVar14;
                puVar26 = (undefined4 *)(iVar17 + uVar20 * 0x18);
                uVar11 = *puVar26;
                iVar17 = iVar17 + 0x18;
                uVar12 = puVar14[-1];
                uVar13 = puVar14[1];
                *puVar26 = puVar14[-3];
                uVar31 = puVar26[1];
                uVar35 = puVar26[2];
                uVar37 = puVar26[3];
                puVar26[2] = uVar12;
                puVar14[-3] = uVar11;
                puVar26[3] = uVar25;
                uVar25 = puVar14[-2];
                uVar12 = puVar26[4];
                puVar14[-1] = uVar35;
                puVar26[4] = uVar13;
                uVar13 = puVar26[5];
                uVar11 = puVar14[2];
                puVar26[1] = uVar25;
                puVar14[-2] = uVar31;
                *puVar14 = uVar37;
                puVar14[1] = uVar12;
                puVar26[5] = uVar11;
                puVar14[2] = uVar13;
                iVar22 = iVar22 + -0x18;
              } while (uVar8 != 0);
            }
          }
        }
        local_190 = uVar19 << 1 | 1;
      }
      uVar8 = uVar20 - (uVar33 >> 1);
      uVar9 = uVar8 + uVar20;
      lVar1 = (uVar4 & 0xffffffff) * (ulonglong)uVar9;
      uVar15 = (local_190 >> 1) + uVar20 * 2;
      lVar2 = (ulonglong)uVar15 * (uVar4 & 0xffffffff);
      uVar19 = LZCOUNT((uint)lVar2 ^ (uint)lVar1) + 0x20;
      uVar8 = iVar3 * uVar15 + (int)((ulonglong)lVar2 >> 0x20) ^
              (uint)CARRY4(uVar8,uVar20) * (int)uVar4 +
              uVar9 * iVar3 + (int)((ulonglong)lVar1 >> 0x20);
      if (uVar8 != 0) {
        uVar19 = LZCOUNT(uVar8);
      }
      bVar18 = (byte)uVar19;
      if (1 < uVar27) goto LAB_0060d3fc;
LAB_0060d928:
      abStack_67[uVar27 + 1] = bVar18;
      local_170[uVar27] = uVar33;
      uVar19 = uVar33;
      uVar33 = local_190;
    }
    else {
      if (uVar27 < 2) goto LAB_0060d928;
LAB_0060d3fc:
      do {
        while( true ) {
          uVar8 = uVar27 - 1;
          if (abStack_67[uVar27] < uVar19) goto LAB_0060d750;
          uVar23 = local_170[uVar8];
          uVar9 = uVar23 >> 1;
          uVar15 = uVar9 + (uVar33 >> 1);
          uVar27 = uVar8;
          if ((uVar15 <= param_4) && (((uVar23 | uVar33) & 1) == 0)) break;
          puVar6 = (uint *)(param_1 + (uVar20 - uVar15) * 0x18);
          if ((uVar23 & 1) == 0) {
            FUN_0060e59c(puVar6,uVar9,param_3,param_4,LZCOUNT(uVar9 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar33 & 1) == 0) {
            FUN_0060e59c(puVar6 + uVar9 * 6,uVar33 >> 1,param_3,param_4,
                         LZCOUNT(uVar33 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar24 = uVar33 >> 1;
          if (1 < uVar23 && 1 < uVar33) {
            uVar33 = uVar9;
            if (uVar24 < uVar9) {
              uVar33 = uVar24;
            }
            if (uVar33 <= param_4) {
              puVar21 = puVar6 + uVar9 * 6;
              puVar10 = puVar6;
              if (uVar24 < uVar9) {
                puVar10 = puVar21;
              }
              FUN_016dd1aa(param_3,puVar10,uVar33 * 0x18);
              puVar34 = param_3 + uVar33 * 6;
              puVar10 = param_3;
              if (uVar24 < uVar9) {
                puVar16 = (uint *)(param_1 + -0x18 + uVar20 * 0x18);
                do {
                  puVar32 = puVar21 + -6;
                  puVar36 = puVar34 + -6;
                  uVar33 = 1;
                  puVar7 = puVar32;
                  if (puVar21[-2] <= puVar34[-2]) {
                    uVar33 = (uint)(puVar34[-2] <= puVar21[-2] &&
                                   (puVar34[-5] <= puVar21[-5] &&
                                   (uint)(*puVar32 <= *puVar36) <= puVar34[-5] - puVar21[-5]));
                    puVar7 = puVar36;
                    if (uVar33 != 0) {
                      puVar7 = puVar32;
                    }
                  }
                  uVar9 = puVar7[1];
                  uVar23 = puVar7[2];
                  uVar24 = puVar7[3];
                  uVar28 = puVar7[4];
                  uVar30 = puVar7[5];
                  *puVar16 = *puVar7;
                  puVar16[1] = uVar9;
                  puVar16[2] = uVar23;
                  puVar16[3] = uVar24;
                  puVar16[4] = uVar28;
                  puVar16[5] = uVar30;
                  puVar34 = puVar36 + (uVar33 | uVar33 << 1) * 2;
                  puVar21 = puVar32 + (uVar33 ^ 1 | (uVar33 ^ 1) << 1) * 2;
                } while ((puVar21 != puVar6) && (puVar16 = puVar16 + -6, puVar34 != param_3));
                puVar7 = puVar21;
              }
              else {
                do {
                  if (puVar21[4] < puVar10[4]) {
                    uVar9 = 1;
                    uVar33 = 0;
                    puVar16 = puVar21;
                  }
                  else {
                    uVar9 = (uint)(puVar21[4] <= puVar10[4] &&
                                  (puVar21[1] <= puVar10[1] &&
                                  (uint)(*puVar10 <= *puVar21) <= puVar21[1] - puVar10[1]));
                    uVar33 = uVar9 ^ 1;
                    puVar16 = puVar10;
                    if (uVar9 != 0) {
                      puVar16 = puVar21;
                    }
                  }
                  uVar23 = puVar16[1];
                  uVar24 = puVar16[2];
                  uVar28 = puVar16[3];
                  uVar30 = puVar16[4];
                  uVar29 = puVar16[5];
                  puVar7 = puVar6 + 6;
                  *puVar6 = *puVar16;
                  puVar6[1] = uVar23;
                  puVar6[2] = uVar24;
                  puVar6[3] = uVar28;
                  puVar6[4] = uVar30;
                  puVar6[5] = uVar29;
                  puVar10 = puVar10 + uVar33 * 6;
                  bVar38 = puVar10 != puVar34;
                  if (bVar38) {
                    uVar33 = uVar9;
                  }
                  puVar16 = (uint *)(uVar33 * 3);
                  if (bVar38) {
                    puVar21 = puVar21 + uVar33 * 6;
                    puVar16 = (uint *)(param_1 + uVar20 * 0x18);
                  }
                  puVar6 = puVar7;
                } while (bVar38 && puVar21 != puVar16);
              }
              FUN_016dd1aa(puVar7,puVar10,(int)puVar34 - (int)puVar10);
            }
          }
          uVar33 = uVar15 * 2 | 1;
          if (uVar8 < 2) goto LAB_0060d74c;
        }
        uVar33 = uVar15 * 2;
      } while (1 < uVar8);
LAB_0060d74c:
      uVar27 = 1;
LAB_0060d750:
      abStack_67[uVar27 + 1] = (byte)uVar19;
      local_170[uVar27] = uVar33;
      uVar19 = uVar33;
      uVar33 = local_190;
    }
    if (param_2 <= uVar20) {
      if ((uVar19 & 1) == 0) {
        FUN_0060e59c(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar27 = uVar27 + 1;
    uVar20 = uVar20 + (uVar33 >> 1);
  } while( true );
}

