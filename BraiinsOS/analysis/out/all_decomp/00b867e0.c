// FUN_00b867e0 @ 00b867e0 size=2116 calls_out=3 calls_in=2
// strings: 

void FUN_00b867e0(int param_1,uint param_2,uint *param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 uVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 *puVar20;
  uint uVar21;
  uint uVar22;
  uint *puVar23;
  uint uVar24;
  uint uVar25;
  int iVar26;
  bool bVar27;
  ulonglong uVar28;
  uint local_18c;
  uint local_170 [66];
  byte abStack_67 [67];
  
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
    iVar15 = (uVar4 & 1) + (uVar4 >> 1);
    uVar4 = (1 << iVar15) + (param_2 >> iVar15) >> 1;
  }
  uVar18 = 1;
  uVar24 = 0;
  uVar14 = 0;
  do {
    uVar12 = 0;
    bVar11 = 0;
    puVar5 = (uint *)(uVar24 * 0xa8 + param_1);
    local_18c = 1;
    if (uVar24 < param_2) {
      local_18c = param_2 - uVar24;
      if (local_18c < uVar4) {
LAB_00b86904:
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
          FUN_00b87024(puVar5,local_18c,param_3,param_4,0,0);
          local_18c = local_18c << 1 | 1;
        }
      }
      else {
        if (local_18c < 2) {
          uVar25 = local_18c;
        }
        else {
          uVar12 = puVar5[0x2a];
          if (uVar12 < *puVar5) {
            if (local_18c == 2) {
              uVar25 = 2;
              uVar12 = 1;
LAB_00b86a14:
              iVar9 = uVar25 * 0xa8 + param_1 + -0x54;
              iVar26 = uVar24 * 0xa8;
              iVar15 = param_1;
              do {
                iVar13 = iVar9 + iVar26;
                puVar20 = (undefined4 *)(iVar15 + iVar26);
                uVar6 = *puVar20;
                iVar15 = iVar15 + 0xa8;
                uVar12 = uVar12 - 1;
                *puVar20 = *(undefined4 *)(iVar13 + -0x54);
                *(undefined4 *)(iVar13 + -0x54) = uVar6;
                uVar6 = puVar20[1];
                puVar20[1] = *(undefined4 *)(iVar13 + -0x50);
                *(undefined4 *)(iVar13 + -0x50) = uVar6;
                uVar6 = puVar20[2];
                puVar20[2] = *(undefined4 *)(iVar13 + -0x4c);
                *(undefined4 *)(iVar13 + -0x4c) = uVar6;
                uVar6 = puVar20[3];
                puVar20[3] = *(undefined4 *)(iVar13 + -0x48);
                *(undefined4 *)(iVar13 + -0x48) = uVar6;
                uVar6 = puVar20[4];
                puVar20[4] = *(undefined4 *)(iVar13 + -0x44);
                *(undefined4 *)(iVar13 + -0x44) = uVar6;
                uVar6 = puVar20[5];
                puVar20[5] = *(undefined4 *)(iVar13 + -0x40);
                *(undefined4 *)(iVar13 + -0x40) = uVar6;
                uVar6 = puVar20[6];
                puVar20[6] = *(undefined4 *)(iVar13 + -0x3c);
                *(undefined4 *)(iVar13 + -0x3c) = uVar6;
                uVar6 = puVar20[7];
                puVar20[7] = *(undefined4 *)(iVar13 + -0x38);
                *(undefined4 *)(iVar13 + -0x38) = uVar6;
                uVar6 = puVar20[8];
                puVar20[8] = *(undefined4 *)(iVar13 + -0x34);
                *(undefined4 *)(iVar13 + -0x34) = uVar6;
                uVar6 = puVar20[9];
                puVar20[9] = *(undefined4 *)(iVar13 + -0x30);
                *(undefined4 *)(iVar13 + -0x30) = uVar6;
                uVar6 = puVar20[10];
                puVar20[10] = *(undefined4 *)(iVar13 + -0x2c);
                *(undefined4 *)(iVar13 + -0x2c) = uVar6;
                uVar6 = puVar20[0xb];
                puVar20[0xb] = *(undefined4 *)(iVar13 + -0x28);
                *(undefined4 *)(iVar13 + -0x28) = uVar6;
                uVar6 = puVar20[0xc];
                puVar20[0xc] = *(undefined4 *)(iVar13 + -0x24);
                *(undefined4 *)(iVar13 + -0x24) = uVar6;
                uVar6 = puVar20[0xd];
                puVar20[0xd] = *(undefined4 *)(iVar13 + -0x20);
                *(undefined4 *)(iVar13 + -0x20) = uVar6;
                uVar6 = puVar20[0xe];
                puVar20[0xe] = *(undefined4 *)(iVar13 + -0x1c);
                *(undefined4 *)(iVar13 + -0x1c) = uVar6;
                uVar6 = puVar20[0xf];
                puVar20[0xf] = *(undefined4 *)(iVar13 + -0x18);
                *(undefined4 *)(iVar13 + -0x18) = uVar6;
                uVar6 = puVar20[0x10];
                puVar20[0x10] = *(undefined4 *)(iVar13 + -0x14);
                *(undefined4 *)(iVar13 + -0x14) = uVar6;
                uVar6 = puVar20[0x11];
                puVar20[0x11] = *(undefined4 *)(iVar13 + -0x10);
                *(undefined4 *)(iVar13 + -0x10) = uVar6;
                uVar6 = puVar20[0x12];
                puVar20[0x12] = *(undefined4 *)(iVar13 + -0xc);
                *(undefined4 *)(iVar13 + -0xc) = uVar6;
                uVar6 = puVar20[0x13];
                puVar20[0x13] = *(undefined4 *)(iVar13 + -8);
                *(undefined4 *)(iVar13 + -8) = uVar6;
                uVar6 = puVar20[0x14];
                puVar20[0x14] = *(undefined4 *)(iVar13 + -4);
                *(undefined4 *)(iVar13 + -4) = uVar6;
                uVar6 = *(undefined4 *)(iVar9 + iVar26);
                *(undefined4 *)(iVar9 + iVar26) = puVar20[0x15];
                iVar9 = iVar9 + -0xa8;
                puVar20[0x15] = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 4);
                *(undefined4 *)(iVar13 + 4) = puVar20[0x16];
                puVar20[0x16] = uVar6;
                uVar6 = puVar20[0x17];
                puVar20[0x17] = *(undefined4 *)(iVar13 + 8);
                *(undefined4 *)(iVar13 + 8) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0xc);
                *(undefined4 *)(iVar13 + 0xc) = puVar20[0x18];
                puVar20[0x18] = uVar6;
                uVar6 = puVar20[0x19];
                puVar20[0x19] = *(undefined4 *)(iVar13 + 0x10);
                *(undefined4 *)(iVar13 + 0x10) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0x14);
                *(undefined4 *)(iVar13 + 0x14) = puVar20[0x1a];
                puVar20[0x1a] = uVar6;
                uVar6 = puVar20[0x1b];
                puVar20[0x1b] = *(undefined4 *)(iVar13 + 0x18);
                *(undefined4 *)(iVar13 + 0x18) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0x1c);
                *(undefined4 *)(iVar13 + 0x1c) = puVar20[0x1c];
                puVar20[0x1c] = uVar6;
                uVar6 = puVar20[0x1d];
                puVar20[0x1d] = *(undefined4 *)(iVar13 + 0x20);
                *(undefined4 *)(iVar13 + 0x20) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0x24);
                *(undefined4 *)(iVar13 + 0x24) = puVar20[0x1e];
                puVar20[0x1e] = uVar6;
                uVar6 = puVar20[0x1f];
                puVar20[0x1f] = *(undefined4 *)(iVar13 + 0x28);
                *(undefined4 *)(iVar13 + 0x28) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0x2c);
                *(undefined4 *)(iVar13 + 0x2c) = puVar20[0x20];
                puVar20[0x20] = uVar6;
                uVar6 = puVar20[0x21];
                puVar20[0x21] = *(undefined4 *)(iVar13 + 0x30);
                *(undefined4 *)(iVar13 + 0x30) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0x34);
                *(undefined4 *)(iVar13 + 0x34) = puVar20[0x22];
                puVar20[0x22] = uVar6;
                uVar6 = puVar20[0x23];
                puVar20[0x23] = *(undefined4 *)(iVar13 + 0x38);
                *(undefined4 *)(iVar13 + 0x38) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0x3c);
                *(undefined4 *)(iVar13 + 0x3c) = puVar20[0x24];
                puVar20[0x24] = uVar6;
                uVar6 = puVar20[0x25];
                puVar20[0x25] = *(undefined4 *)(iVar13 + 0x40);
                *(undefined4 *)(iVar13 + 0x40) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0x44);
                *(undefined4 *)(iVar13 + 0x44) = puVar20[0x26];
                puVar20[0x26] = uVar6;
                uVar6 = puVar20[0x27];
                puVar20[0x27] = *(undefined4 *)(iVar13 + 0x48);
                *(undefined4 *)(iVar13 + 0x48) = uVar6;
                uVar6 = *(undefined4 *)(iVar13 + 0x4c);
                *(undefined4 *)(iVar13 + 0x4c) = puVar20[0x28];
                puVar20[0x28] = uVar6;
                uVar6 = puVar20[0x29];
                puVar20[0x29] = *(undefined4 *)(iVar13 + 0x50);
                *(undefined4 *)(iVar13 + 0x50) = uVar6;
              } while (uVar12 != 0);
            }
            else {
              uVar25 = 2;
              uVar10 = uVar12;
              puVar23 = (uint *)(uVar24 * 0xa8 + param_1 + 0x150);
              do {
                if (uVar10 <= *puVar23) goto LAB_00b869f8;
                uVar25 = uVar25 + 1;
                uVar10 = *puVar23;
                puVar23 = puVar23 + 0x2a;
              } while (local_18c != uVar25);
LAB_00b869f4:
              uVar25 = local_18c;
LAB_00b869f8:
              if (uVar25 < uVar4) goto LAB_00b86904;
              if (uVar12 < *puVar5) {
                uVar12 = uVar25 >> 1;
                if (uVar12 != 0) goto LAB_00b86a14;
                uVar25 = 1;
              }
            }
          }
          else {
            uVar25 = 2;
            if (local_18c != 2) {
              puVar23 = (uint *)(uVar24 * 0xa8 + param_1 + 0x150);
              uVar10 = uVar12;
              do {
                uVar17 = *puVar23;
                if (uVar17 < uVar10) goto LAB_00b869f8;
                uVar25 = uVar25 + 1;
                puVar23 = puVar23 + 0x2a;
                uVar10 = uVar17;
              } while (local_18c != uVar25);
              goto LAB_00b869f4;
            }
          }
        }
        local_18c = uVar25 << 1 | 1;
      }
      uVar12 = uVar24 - (uVar18 >> 1);
      uVar25 = uVar24 + (local_18c >> 1);
      uVar10 = uVar25 + uVar24;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar10;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar12,uVar24),uVar12 + uVar24);
      uVar25 = (uint)CARRY4(uVar25,uVar24) * (int)uVar2 +
               uVar10 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar12 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar25 != 0) {
        uVar12 = LZCOUNT(uVar25);
      }
      bVar11 = (byte)uVar12;
      if (uVar14 < 2) goto LAB_00b868dc;
LAB_00b86d58:
      do {
        while( true ) {
          uVar25 = uVar14 - 1;
          if (abStack_67[uVar14] < uVar12) goto LAB_00b86fb8;
          uVar17 = local_170[uVar25];
          uVar10 = uVar17 >> 1;
          uVar21 = uVar10 + (uVar18 >> 1);
          uVar14 = uVar25;
          if ((param_4 < uVar21) || (((uVar17 | uVar18) & 1) != 0)) break;
          uVar18 = uVar21 * 2;
          if (uVar25 < 2) goto LAB_00b86fb4;
        }
        puVar23 = (uint *)((uVar24 - uVar21) * 0xa8 + param_1);
        if ((uVar17 & 1) == 0) {
          FUN_00b87024(puVar23,uVar10,param_3,param_4,LZCOUNT(uVar10 | 1) << 1 ^ 0x3e,0);
        }
        if ((uVar18 & 1) == 0) {
          FUN_00b87024(puVar23 + uVar10 * 0x2a,uVar18 >> 1,param_3,param_4,
                       LZCOUNT(uVar18 >> 1 | 1) << 1 ^ 0x3e,0);
        }
        uVar22 = uVar18 >> 1;
        if (1 < uVar17 && 1 < uVar18) {
          uVar18 = uVar10;
          if (uVar22 < uVar10) {
            uVar18 = uVar22;
          }
          if (uVar18 <= param_4) {
            puVar19 = puVar23 + uVar10 * 0x2a;
            puVar7 = puVar23;
            if (uVar22 < uVar10) {
              puVar7 = puVar19;
            }
            FUN_016dd1aa(param_3,puVar7,uVar18 * 0xa8);
            puVar7 = param_3 + uVar18 * 0x2a;
            if (uVar22 < uVar10) {
              iVar15 = uVar24 * 0xa8 + param_1 + -0xa8;
              do {
                puVar8 = puVar19 + -0x2a;
                puVar7 = puVar7 + -0x2a;
                bVar27 = *puVar8 <= *puVar7;
                puVar19 = puVar8 + (short)(ushort)bVar27 * 0x2a;
                if (bVar27) {
                  puVar8 = puVar7;
                }
                FUN_016dd1aa(iVar15,puVar8,0xa8);
                puVar7 = puVar7 + (short)(ushort)!bVar27 * 0x2a;
                puVar16 = param_3;
                if (puVar19 == puVar23) {
                  puVar23 = puVar19;
                  goto LAB_00b86ebc;
                }
                iVar15 = iVar15 + -0xa8;
              } while (puVar7 != param_3);
              puVar23 = puVar19;
            }
            else {
              puVar8 = param_3;
              do {
                bVar27 = *puVar8 <= *puVar19;
                puVar16 = puVar8 + (short)(ushort)bVar27 * 0x2a;
                if (!bVar27) {
                  puVar8 = puVar19;
                }
                FUN_016dd1aa(puVar23,puVar8,0xa8);
                puVar23 = puVar23 + 0x2a;
              } while ((puVar16 != puVar7) &&
                      (puVar19 = puVar19 + (short)(ushort)!bVar27 * 0x2a, puVar8 = puVar16,
                      puVar19 != puVar5));
            }
LAB_00b86ebc:
            FUN_016dd1aa(puVar23,puVar16,(int)puVar7 - (int)puVar16);
          }
        }
        uVar18 = uVar21 * 2 | 1;
      } while (1 < uVar25);
LAB_00b86fb4:
      uVar14 = 1;
LAB_00b86fb8:
      abStack_67[uVar14 + 1] = (byte)uVar12;
      local_170[uVar14] = uVar18;
      uVar12 = uVar18;
      uVar18 = local_18c;
    }
    else {
      if (1 < uVar14) goto LAB_00b86d58;
LAB_00b868dc:
      abStack_67[uVar14 + 1] = bVar11;
      local_170[uVar14] = uVar18;
      uVar12 = uVar18;
      uVar18 = local_18c;
    }
    if (param_2 <= uVar24) {
      if ((uVar12 & 1) == 0) {
        FUN_00b87024(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar14 = uVar14 + 1;
    uVar24 = uVar24 + (uVar18 >> 1);
  } while( true );
}

