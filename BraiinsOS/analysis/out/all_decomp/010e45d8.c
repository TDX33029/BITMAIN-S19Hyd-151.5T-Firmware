// FUN_010e45d8 @ 010e45d8 size=864 calls_out=2 calls_in=5
// strings: 

void FUN_010e45d8(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  
  uVar5 = param_2[1];
  if (uVar5 == 0) {
LAB_010e47bc:
    uVar2 = FUN_010e98c8(&DAT_00388d28,0xe);
    *param_1 = 1;
    param_1[1] = uVar2;
    return;
  }
  pbVar7 = (byte *)*param_2;
  iVar8 = (int)(char)*pbVar7;
  if (-1 < iVar8) {
    *param_2 = (int)(pbVar7 + 1);
    param_2[1] = uVar5 - 1;
    *param_1 = 0;
    param_1[2] = iVar8;
    param_1[3] = iVar8 >> 0x1f;
    return;
  }
  if ((uVar5 < 0xb) && ((char)pbVar7[uVar5 - 1] < '\0')) {
    uVar9 = param_2[1];
    uVar5 = uVar9;
    if (9 < uVar9) {
      uVar5 = 10;
    }
    if (uVar9 != 0) {
      iVar8 = *param_2;
      uVar15 = 0;
      uVar10 = 0;
      uVar13 = 0;
      uVar6 = 0;
      uVar17 = uVar9;
      uVar12 = uVar9;
      do {
        uVar12 = uVar12 - 1;
        if (uVar12 == 0xffffffff) {
          *param_2 = iVar8 + uVar9;
          param_2[1] = uVar17;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&DAT_0056a308);
        }
        bVar1 = *(byte *)(iVar8 + uVar6);
        uVar3 = uVar15 - 0x20;
        uVar16 = (int)(char)bVar1 & 0x7f;
        uVar4 = uVar16 >> (0x20 - uVar15 & 0xff);
        if (-1 < (int)uVar3) {
          uVar4 = uVar16 << (uVar3 & 0xff);
        }
        uVar16 = uVar16 << (uVar15 & 0xff);
        if (-1 < (int)uVar3) {
          uVar16 = 0;
        }
        uVar13 = uVar4 | uVar13;
        uVar10 = uVar16 | uVar10;
        if ((uint)(int)(char)bVar1 < 0x80000000) {
          *param_2 = (int)((byte *)(iVar8 + uVar6) + 1);
          param_2[1] = uVar12;
          if ((uVar6 != 9) || (bVar1 < 2)) {
            param_1[2] = uVar10;
            param_1[3] = uVar13;
            *param_1 = 0;
            return;
          }
          goto LAB_010e9758;
        }
        uVar6 = uVar6 + 1;
        uVar17 = uVar17 - 1;
        uVar15 = uVar15 + 7;
      } while (uVar5 != uVar6);
      *param_2 = iVar8 + uVar5;
      param_2[1] = uVar9 - uVar5;
    }
LAB_010e9758:
    uVar2 = FUN_010e98c8(&DAT_00388d28,0xe);
    param_1[1] = uVar2;
    *param_1 = 1;
    return;
  }
  iVar8 = (uint)*pbVar7 + (uint)pbVar7[1] * 0x80 + -0x80;
  if ((char)pbVar7[1] < '\0') {
    iVar8 = iVar8 + (uint)pbVar7[2] * 0x4000 + -0x4000;
    if ((char)pbVar7[2] < '\0') {
      iVar14 = iVar8 + (uint)pbVar7[3] * 0x200000;
      iVar8 = iVar14 + -0x200000;
      if ((char)pbVar7[3] < '\0') {
        uVar12 = (uint)pbVar7[4];
        uVar17 = iVar14 + 0xefe00000;
        uVar9 = (uint)(char)pbVar7[4];
        if ((int)uVar9 < 0) {
          uVar9 = (uVar12 + (uint)pbVar7[5] * 0x80) - 0x80;
          if ((char)pbVar7[5] < '\0') {
            uVar9 = (uVar9 + (uint)pbVar7[6] * 0x4000) - 0x4000;
            if ((char)pbVar7[6] < '\0') {
              iVar14 = uVar9 + (uint)pbVar7[7] * 0x200000;
              if ((char)pbVar7[7] < '\0') {
                bVar1 = pbVar7[8];
                iVar8 = uVar17 + uVar12 * 0x10000000;
                iVar14 = (iVar14 + 0xefe00000U >> 4) + (uint)CARRY4(uVar17,uVar12 * 0x10000000);
                if ((char)bVar1 < '\0') {
                  if (1 < pbVar7[9]) goto LAB_010e47bc;
                  iVar11 = 10;
                  iVar14 = iVar14 + (bVar1 & 0x7f | (uint)pbVar7[9] << 7) * 0x1000000;
                }
                else {
                  iVar14 = iVar14 + (uint)bVar1 * 0x1000000;
                  iVar11 = 9;
                }
              }
              else {
                iVar8 = uVar17 + uVar12 * 0x10000000;
                iVar14 = (iVar14 - 0x200000U >> 4) + (uint)CARRY4(uVar17,uVar12 * 0x10000000);
                iVar11 = 8;
              }
            }
            else {
              iVar8 = uVar17 + uVar12 * 0x10000000;
              iVar14 = (uVar9 >> 4) + (uint)CARRY4(uVar17,uVar12 * 0x10000000);
              iVar11 = 7;
            }
          }
          else {
            iVar8 = uVar17 + uVar12 * 0x10000000;
            iVar14 = (uVar9 >> 4) + (uint)CARRY4(uVar17,uVar12 * 0x10000000);
            iVar11 = 6;
          }
        }
        else {
          iVar11 = 5;
          iVar8 = uVar17 + uVar9 * 0x10000000;
          iVar14 = (((int)uVar9 >> 0x1f) << 0x1c | uVar9 >> 4) +
                   (uint)CARRY4(uVar17,uVar9 * 0x10000000);
        }
      }
      else {
        iVar14 = 0;
        iVar11 = 4;
      }
    }
    else {
      iVar14 = 0;
      iVar11 = 3;
    }
  }
  else {
    iVar14 = 0;
    iVar11 = 2;
  }
  param_1[2] = iVar8;
  *param_2 = (int)(pbVar7 + iVar11);
  param_2[1] = uVar5 - iVar11;
  *param_1 = 0;
  param_1[3] = iVar14;
  return;
}

