// FUN_014019e8 @ 014019e8 size=1320 calls_out=3 calls_in=0
// strings: 

void FUN_014019e8(undefined1 *param_1,int *param_2)

{
  byte bVar1;
  int iVar2;
  byte bVar3;
  int iVar4;
  byte *pbVar5;
  byte bVar6;
  byte bVar7;
  uint *puVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte *pbVar12;
  uint *puVar13;
  uint uVar14;
  byte bVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  undefined1 uVar20;
  uint uVar21;
  byte bVar22;
  byte local_32 [2];
  undefined1 local_30 [2];
  undefined1 local_2e [2];
  uint local_2c;
  uint local_28;
  
  iVar4 = param_2[2];
  if (iVar4 == 0) {
LAB_01401c80:
    *param_1 = 4;
    return;
  }
  iVar2 = param_2[1];
LAB_01401a18:
  param_2[2] = iVar4 + -1;
  puVar8 = (uint *)(iVar2 + (iVar4 + -1) * 8);
  uVar14 = *puVar8;
  iVar18 = iVar4 * 8 + -4;
  iVar19 = iVar4;
  uVar21 = puVar8[1];
  do {
    iVar4 = iVar19 + -1;
    if ((uVar14 >> 0xd < 7) && (0x1a < uVar21 >> 0xb)) {
      if (iVar4 == *param_2) {
        FUN_01401514(param_2);
      }
      iVar2 = param_2[1];
      param_2[2] = iVar19;
      *(uint *)(iVar2 + iVar18) = uVar21;
      uVar16 = 0xd7ff;
      ((uint *)(iVar2 + iVar18))[-1] = 0xe000;
    }
    else {
      if (uVar21 < uVar14) break;
      if ((((uVar14 < 0x80) && (uVar16 = 0x7f, 0x7f < uVar21)) ||
          ((uVar14 >> 0xb == 0 && (uVar16 = 0x7ff, uVar21 >> 0xb != 0)))) ||
         ((uVar14 >> 0x10 == 0 && (uVar16 = 0xffff, uVar21 >> 0x10 != 0)))) {
        if (iVar4 == *param_2) {
          FUN_01401514(param_2);
        }
        iVar2 = param_2[1];
        param_2[2] = iVar19;
        *(uint *)(iVar2 + iVar18) = uVar21;
        ((uint *)(iVar2 + iVar18))[-1] = uVar16 + 1;
      }
      else {
        if (uVar21 < 0x80) {
          param_1[2] = (byte)uVar21;
          param_1[1] = (byte)uVar14;
          *param_1 = 0;
          return;
        }
        uVar17 = uVar21 & 0xffffffc0;
        if ((uVar14 & 0xffffffc0) == uVar17) {
LAB_01401b54:
          uVar17 = uVar21 & 0xfffff000;
          if ((uVar14 & 0xfffff000) != uVar17) {
            uVar16 = 0xfff;
            if ((uVar14 & 0xfff) != 0) goto LAB_01401bf0;
            if ((~uVar21 & 0xfff) != 0) goto LAB_01401c30;
          }
          uVar17 = uVar21 & 0xfffc0000;
          if ((uVar14 & 0xfffc0000) == uVar17) {
LAB_01401cb0:
            if ((uVar14 ^ 0xd800) - 0x110000 < 0xffef0800) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018a3668);
            }
            if ((uVar21 ^ 0xd800) - 0x110000 < 0xffef0800) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018a3658);
            }
            bVar1 = 0;
            if (uVar14 < 0x80) {
              local_2c = 1;
              bVar22 = 0;
              bVar6 = 0;
            }
            else {
              bVar15 = (byte)uVar14 & 0x3f | 0x80;
              if (uVar14 >> 0xb == 0) {
                uVar14 = uVar14 >> 6 | 0xffffffc0;
                local_2c = 2;
                bVar22 = 0;
                bVar6 = bVar15;
              }
              else {
                bVar3 = (byte)(uVar14 >> 6) & 0x3f | 0x80;
                if (uVar14 >> 0x10 == 0) {
                  uVar14 = uVar14 >> 0xc | 0xffffffe0;
                  local_2c = 3;
                  bVar22 = bVar15;
                  bVar6 = bVar3;
                }
                else {
                  bVar6 = (byte)(uVar14 >> 0xc) & 0x3f | 0x80;
                  uVar14 = uVar14 >> 0x12 | 0xfffffff0;
                  local_2c = 4;
                  bVar1 = bVar15;
                  bVar22 = bVar3;
                }
              }
            }
            bVar3 = (byte)uVar14;
            bVar9 = (byte)uVar21 & 0x3f | 0x80;
            bVar15 = (byte)(uVar21 >> 6);
            if (uVar21 >> 0xb == 0) {
              bVar15 = bVar15 | 0xc0;
              local_28 = 2;
              bVar10 = 0;
              bVar11 = bVar9;
              bVar9 = 0;
            }
            else {
              bVar7 = bVar15 & 0x3f | 0x80;
              bVar15 = (byte)(uVar21 >> 0xc);
              if (uVar21 >> 0x10 == 0) {
                bVar15 = bVar15 | 0xe0;
                local_28 = 3;
                bVar10 = bVar9;
                bVar11 = bVar7;
                bVar9 = 0;
              }
              else {
                bVar11 = bVar15 & 0x3f | 0x80;
                bVar15 = (byte)(uVar21 >> 0x12) | 0xf0;
                local_28 = 4;
                bVar10 = bVar7;
              }
            }
            if (local_2c != local_28) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb3aac(0,&local_2c,&local_28,0);
            }
            if (local_2c == 2) {
              uVar20 = 1;
              pbVar5 = local_32 + 4;
              pbVar12 = local_32 + 5;
              puVar8 = &local_2c;
              puVar13 = &local_28;
              local_2c._0_1_ = 2;
              bVar1 = bVar6;
              bVar10 = bVar11;
            }
            else {
              local_2c._0_1_ = bVar15;
              if (local_2c == 3) {
                local_28 = uVar14 & 0xff;
                uVar20 = 2;
                pbVar5 = local_32 + 2;
                pbVar12 = local_32 + 3;
                puVar8 = (uint *)(local_32 + 4);
                puVar13 = (uint *)(local_32 + 5);
                bVar1 = bVar22;
                bVar3 = bVar6;
                bVar15 = bVar11;
              }
              else {
                pbVar5 = local_32;
                pbVar12 = local_32 + 1;
                puVar8 = (uint *)(local_32 + 2);
                puVar13 = (uint *)(local_32 + 3);
                uVar20 = 3;
                local_28 = uVar14 & 0xff;
                bVar3 = bVar22;
                bVar15 = bVar10;
                bVar10 = bVar9;
                local_2e[0] = bVar11;
                local_2e[1] = bVar6;
              }
            }
            *pbVar12 = bVar1;
            *(byte *)puVar13 = bVar3;
            *(byte *)puVar8 = bVar15;
            *pbVar5 = bVar10;
            param_1[1] = (undefined1)local_28;
            *param_1 = uVar20;
            param_1[2] = (byte)local_2c;
            param_1[3] = local_2e[1];
            param_1[4] = local_2e[0];
            param_1[5] = local_30[1];
            param_1[6] = local_30[0];
            param_1[7] = local_32[1];
            param_1[8] = local_32[0];
            return;
          }
          uVar16 = 0x3ffff;
          if ((uVar14 & 0x3ffff) != 0) goto LAB_01401bf0;
          if ((~uVar21 & 0x3ffff) == 0) goto LAB_01401cb0;
        }
        else {
          uVar16 = 0x3f;
          if ((uVar14 & 0x3f) != 0) {
LAB_01401bf0:
            if (iVar4 == *param_2) {
              FUN_01401514(param_2);
              iVar2 = param_2[1];
            }
            uVar16 = uVar14 | uVar16;
            param_2[2] = iVar19;
            *(uint *)(iVar2 + iVar18) = uVar21;
            ((uint *)(iVar2 + iVar18))[-1] = uVar16 + 1;
            goto LAB_01401aa4;
          }
          if ((~uVar21 & 0x3f) == 0) goto LAB_01401b54;
        }
LAB_01401c30:
        if (iVar4 == *param_2) {
          FUN_01401514(param_2);
        }
        iVar2 = param_2[1];
        param_2[2] = iVar19;
        *(uint *)(iVar2 + iVar18) = uVar21;
        uVar16 = uVar17 - 1;
        ((uint *)(iVar2 + iVar18))[-1] = uVar17;
      }
    }
LAB_01401aa4:
    iVar18 = iVar18 + 8;
    iVar19 = iVar19 + 1;
    uVar21 = uVar16;
  } while( true );
  if (iVar4 == 0) goto LAB_01401c80;
  goto LAB_01401a18;
}

