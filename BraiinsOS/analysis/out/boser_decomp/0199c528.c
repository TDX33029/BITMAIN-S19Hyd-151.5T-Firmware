// FUN_0199c528 @ 0199c528 size=1612 calls_out=3 calls_in=2
// strings: 

void FUN_0199c528(int param_1,uint param_2,undefined4 *param_3,uint param_4,int param_5)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  ulonglong uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  uint *puVar19;
  uint uVar20;
  undefined4 *puVar21;
  uint uVar22;
  int iVar23;
  undefined4 uVar24;
  undefined4 *puVar25;
  undefined4 uVar26;
  uint uVar27;
  undefined4 uVar28;
  undefined4 *puVar29;
  undefined4 *puVar30;
  undefined4 uVar31;
  undefined4 uVar32;
  undefined4 *puVar33;
  undefined4 uVar34;
  ulonglong uVar35;
  uint local_18c;
  uint local_174 [66];
  byte abStack_6b [71];
  
  uVar35 = FUN_01bf0ff0(0,0x40000000,param_2,0);
  lVar2 = (ulonglong)param_2 * (uVar35 & 0xffffffff);
  uVar5 = uVar35 + 1;
  if ((int)lVar2 == 0 &&
      (int)(uVar35 >> 0x20) * param_2 + (int)((ulonglong)lVar2 >> 0x20) == 0x40000000) {
    uVar5 = uVar35;
  }
  iVar4 = (int)(uVar5 >> 0x20);
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar7 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar7) + (param_2 >> iVar7) >> 1;
  }
  uVar27 = 0;
  uVar17 = 0;
  uVar20 = 1;
  do {
    uVar15 = 0;
    puVar33 = (undefined4 *)(param_1 + uVar27 * 0x20);
    local_18c = 1;
    if (uVar27 < param_2) {
      local_18c = param_2 - uVar27;
      if (local_18c < uVar6) {
LAB_0199c630:
        if (param_5 == 0) {
          if (uVar6 <= local_18c) {
            local_18c = uVar6;
          }
          local_18c = local_18c << 1;
        }
        else {
          if (0x1f < local_18c) {
            local_18c = 0x20;
          }
          FUN_0199cb74(puVar33,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar14 = local_18c;
        }
        else {
          uVar10 = puVar33[10];
          uVar15 = puVar33[3];
          uVar9 = puVar33[0xb];
          if (uVar15 < uVar9 || uVar9 - uVar15 < (uint)((uint)puVar33[2] <= uVar10)) {
            uVar14 = 2;
            if (local_18c != 2) {
              uVar14 = 2;
              puVar19 = (uint *)(param_1 + 0x48 + uVar27 * 0x20);
              uVar16 = uVar9;
              uVar22 = uVar10;
              do {
                uVar8 = *puVar19;
                uVar11 = puVar19[1];
                if (uVar11 <= uVar16 && (uint)(uVar22 <= uVar8) <= uVar11 - uVar16)
                goto LAB_0199c75c;
                uVar14 = uVar14 + 1;
                puVar19 = puVar19 + 8;
                uVar16 = uVar11;
                uVar22 = uVar8;
              } while (local_18c != uVar14);
              goto LAB_0199c758;
            }
          }
          else if (local_18c == 2) {
            uVar14 = 2;
            uVar15 = 1;
LAB_0199c794:
            iVar7 = param_1;
            iVar23 = param_1 + -0x10 + uVar14 * 0x20;
            do {
              uVar15 = uVar15 - 1;
              puVar29 = (undefined4 *)(iVar23 + uVar27 * 0x20);
              uVar24 = *puVar29;
              puVar25 = (undefined4 *)(iVar7 + uVar27 * 0x20);
              uVar18 = *puVar25;
              uVar26 = puVar29[-3];
              uVar31 = puVar29[-2];
              *puVar25 = puVar29[-4];
              uVar34 = puVar25[2];
              puVar29[-3] = puVar25[1];
              puVar29[-4] = uVar18;
              uVar28 = puVar25[4];
              puVar25[1] = uVar26;
              puVar25[4] = uVar24;
              uVar18 = puVar25[5];
              puVar25[5] = puVar29[1];
              puVar29[1] = uVar18;
              uVar18 = puVar25[6];
              puVar25[6] = puVar29[2];
              puVar29[2] = uVar18;
              uVar26 = puVar29[-1];
              uVar32 = puVar25[3];
              uVar18 = puVar25[7];
              uVar24 = puVar29[3];
              puVar25[2] = uVar31;
              puVar29[-2] = uVar34;
              puVar25[3] = uVar26;
              puVar29[-1] = uVar32;
              *puVar29 = uVar28;
              puVar25[7] = uVar24;
              puVar29[3] = uVar18;
              iVar7 = iVar7 + 0x20;
              iVar23 = iVar23 + -0x20;
            } while (uVar15 != 0);
          }
          else {
            uVar14 = 2;
            puVar19 = (uint *)(param_1 + 0x48 + uVar27 * 0x20);
            uVar16 = uVar9;
            uVar22 = uVar10;
            do {
              uVar8 = *puVar19;
              uVar11 = puVar19[1];
              if (uVar16 < uVar11 || uVar11 - uVar16 < (uint)(uVar22 <= uVar8)) goto LAB_0199c75c;
              uVar14 = uVar14 + 1;
              puVar19 = puVar19 + 8;
              uVar16 = uVar11;
              uVar22 = uVar8;
            } while (local_18c != uVar14);
LAB_0199c758:
            uVar14 = local_18c;
LAB_0199c75c:
            if (uVar14 < uVar6) goto LAB_0199c630;
            if (uVar9 <= uVar15 && (uint)((uint)puVar33[2] <= uVar10) <= uVar9 - uVar15) {
              uVar15 = uVar14 >> 1;
              if (uVar15 != 0) goto LAB_0199c794;
              uVar14 = 1;
            }
          }
        }
        local_18c = uVar14 << 1 | 1;
      }
      uVar9 = uVar27 - (uVar20 >> 1);
      uVar10 = uVar9 + uVar27;
      lVar2 = (uVar5 & 0xffffffff) * (ulonglong)uVar10;
      uVar14 = (local_18c >> 1) + uVar27 * 2;
      lVar3 = (ulonglong)uVar14 * (uVar5 & 0xffffffff);
      uVar15 = LZCOUNT((uint)lVar3 ^ (uint)lVar2) + 0x20;
      uVar9 = iVar4 * uVar14 + (int)((ulonglong)lVar3 >> 0x20) ^
              (uint)CARRY4(uVar9,uVar27) * (int)uVar5 +
              uVar10 * iVar4 + (int)((ulonglong)lVar2 >> 0x20);
      if (uVar9 != 0) {
        uVar15 = LZCOUNT(uVar9);
      }
    }
    if (1 < uVar17) {
      do {
        uVar9 = uVar17 - 1;
        if (abStack_6b[uVar17] < uVar15) goto LAB_0199cb10;
        uVar14 = local_174[uVar9];
        uVar17 = uVar14 >> 1;
        uVar10 = uVar17 + (uVar20 >> 1);
        if ((param_4 < uVar10) || (((uVar14 | uVar20) & 1) != 0)) {
          puVar29 = (undefined4 *)(param_1 + (uVar27 - uVar10) * 0x20);
          if ((uVar14 & 1) == 0) {
            FUN_0199cb74(puVar29,uVar17,param_3,param_4,LZCOUNT(uVar17 | 1) << 1 ^ 0x3e,0);
          }
          uVar16 = uVar20 >> 1;
          if ((uVar20 & 1) == 0) {
            FUN_0199cb74(puVar29 + uVar17 * 8,uVar16,param_3,param_4,LZCOUNT(uVar16 | 1) << 1 ^ 0x3e
                         ,0);
          }
          if (1 < uVar14 && 1 < uVar20) {
            uVar20 = uVar17;
            if (uVar16 < uVar17) {
              uVar20 = uVar16;
            }
            if (uVar20 <= param_4) {
              puVar21 = puVar29 + uVar17 * 8;
              puVar25 = puVar29;
              if (uVar16 < uVar17) {
                puVar25 = puVar21;
              }
              FUN_01bed4e2(param_3,puVar25,uVar20 << 5);
              puVar25 = param_3 + uVar20 * 8;
              if (uVar16 < uVar17) {
                puVar12 = (undefined4 *)(param_1 + -0x20 + uVar27 * 0x20);
                puVar30 = puVar21;
                do {
                  uVar20 = puVar30[-5];
                  uVar14 = puVar25[-5];
                  bVar1 = (uint)((uint)puVar30[-6] <= (uint)puVar25[-6]) <= uVar14 - uVar20;
                  uVar17 = (uint)(uVar14 <= uVar20 && bVar1);
                  puVar21 = puVar25 + -8;
                  puVar25 = puVar21 + uVar17 * 8;
                  if (uVar17 != 0) {
                    puVar21 = puVar30 + -8;
                  }
                  uVar18 = puVar21[1];
                  uVar24 = puVar21[2];
                  uVar26 = puVar21[3];
                  puVar30 = puVar30 + -8 + (uint)(uVar14 > uVar20 || !bVar1) * 8;
                  *puVar12 = *puVar21;
                  puVar12[1] = uVar18;
                  puVar12[2] = uVar24;
                  puVar12[3] = uVar26;
                  uVar18 = puVar21[5];
                  uVar24 = puVar21[6];
                  uVar26 = puVar21[7];
                  puVar12[4] = puVar21[4];
                  puVar12[5] = uVar18;
                  puVar12[6] = uVar24;
                  puVar12[7] = uVar26;
                  puVar13 = param_3;
                } while ((puVar30 != puVar29) && (puVar12 = puVar12 + -8, puVar25 != param_3));
              }
              else {
                puVar12 = param_3;
                do {
                  uVar20 = puVar12[3];
                  uVar14 = puVar21[3];
                  bVar1 = (uint)((uint)puVar12[2] <= (uint)puVar21[2]) <= uVar14 - uVar20;
                  uVar17 = (uint)(uVar14 <= uVar20 && bVar1);
                  puVar13 = puVar12 + (uint)(uVar14 > uVar20 || !bVar1) * 8;
                  if (uVar17 != 0) {
                    puVar12 = puVar21;
                  }
                  uVar18 = puVar12[1];
                  uVar24 = puVar12[2];
                  uVar26 = puVar12[3];
                  puVar30 = puVar29 + 8;
                  *puVar29 = *puVar12;
                  puVar29[1] = uVar18;
                  puVar29[2] = uVar24;
                  puVar29[3] = uVar26;
                  uVar18 = puVar12[5];
                  uVar24 = puVar12[6];
                  uVar26 = puVar12[7];
                  puVar29[4] = puVar12[4];
                  puVar29[5] = uVar18;
                  puVar29[6] = uVar24;
                  puVar29[7] = uVar26;
                  if (puVar13 == puVar25) break;
                  puVar21 = puVar21 + uVar17 * 8;
                  puVar12 = puVar13;
                  puVar29 = puVar30;
                } while (puVar21 != puVar33);
              }
              FUN_01bed4e2(puVar30,puVar13,(int)puVar25 - (int)puVar13);
            }
          }
          uVar20 = uVar10 * 2 | 1;
        }
        else {
          uVar20 = uVar10 * 2;
        }
        uVar17 = uVar9;
      } while (1 < uVar9);
      uVar17 = 1;
    }
LAB_0199cb10:
    abStack_6b[uVar17 + 1] = (byte)uVar15;
    local_174[uVar17] = uVar20;
    if (param_2 <= uVar27) {
      if ((uVar20 & 1) == 0) {
        FUN_0199cb74(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + 1;
    uVar27 = uVar27 + (local_18c >> 1);
    uVar20 = local_18c;
  } while( true );
}

