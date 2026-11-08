// FUN_00ef78d0 @ 00ef78d0 size=932 calls_out=6 calls_in=21
// strings: invalid varint | assertion failed: cnt <= self.lenAbsentUnhealthyNotEnoughSpacefree_bytesrequired_bytesPreparationApply | invalid varint

void FUN_00ef78d0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint local_38;
  uint local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  local_30 = (undefined1 *)&local_38;
  puVar2 = (undefined4 *)*param_2;
  uVar14 = param_2[1];
  local_34 = puVar2[1];
  uVar11 = uVar14;
  if (local_34 < uVar14) {
    uVar11 = local_34;
  }
  if (uVar11 == 0) {
LAB_00ef7ae0:
    uVar4 = FUN_01aa0da0("invalid varint",0xe);
    *param_1 = 1;
    param_1[1] = uVar4;
  }
  else {
    pbVar7 = (byte *)*puVar2;
    iVar9 = (int)(char)*pbVar7;
    if (iVar9 < 0) {
      if ((uVar11 < 0xb) && ((char)pbVar7[uVar11 - 1] < '\0')) {
        uVar10 = param_2[1];
        uVar16 = 0;
        uVar12 = 0;
        uVar11 = uVar10;
        uVar14 = 0;
        local_28 = param_1;
        if (9 < uVar10) {
          uVar11 = 10;
        }
        do {
          uVar15 = uVar14;
          if (uVar15 == uVar11) goto LAB_010a1a04;
          if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_01284540(&DAT_00570850);
          }
          puVar2 = (undefined4 *)*param_2;
          if (puVar2[1] == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(0,0,&DAT_01c183fc);
          }
          bVar1 = *(byte *)*puVar2;
          FUN_01283ef4(puVar2,1);
          uVar6 = (int)(char)bVar1 & 0x7f;
          uVar5 = uVar15 * 7 & 0x3f;
          uVar10 = uVar10 - 1;
          uVar8 = uVar5 - 0x20;
          param_2[1] = uVar10;
          uVar14 = uVar6 << uVar5;
          if (-1 < (int)uVar8) {
            uVar14 = 0;
          }
          uVar16 = uVar14 | uVar16;
          uVar14 = uVar6 >> (0x20 - uVar5 & 0xff);
          if (-1 < (int)uVar8) {
            uVar14 = uVar6 << (uVar8 & 0xff);
          }
          uVar12 = uVar14 | uVar12;
          uVar14 = uVar15 + 1;
        } while ((char)bVar1 < 0);
        if ((uVar15 == 9) && (1 < bVar1)) {
LAB_010a1a04:
          uVar4 = FUN_01aa0da0("invalid varint",0xe);
          local_28[1] = uVar4;
          uVar4 = 1;
        }
        else {
          uVar4 = 0;
          local_28[2] = uVar16;
          local_28[3] = uVar12;
        }
        *local_28 = uVar4;
        return;
      }
      iVar9 = (uint)*pbVar7 + (uint)pbVar7[1] * 0x80 + -0x80;
      if ((char)pbVar7[1] < '\0') {
        iVar9 = iVar9 + (uint)pbVar7[2] * 0x4000 + -0x4000;
        if ((char)pbVar7[2] < '\0') {
          iVar13 = iVar9 + (uint)pbVar7[3] * 0x200000;
          iVar9 = iVar13 + -0x200000;
          if ((char)pbVar7[3] < '\0') {
            uVar10 = (uint)pbVar7[4];
            uVar16 = iVar13 + 0xefe00000;
            uVar11 = (uint)(char)pbVar7[4];
            if ((int)uVar11 < 0) {
              uVar11 = (uVar10 + (uint)pbVar7[5] * 0x80) - 0x80;
              if ((char)pbVar7[5] < '\0') {
                uVar11 = (uVar11 + (uint)pbVar7[6] * 0x4000) - 0x4000;
                if ((char)pbVar7[6] < '\0') {
                  iVar13 = uVar11 + (uint)pbVar7[7] * 0x200000;
                  if ((char)pbVar7[7] < '\0') {
                    bVar1 = pbVar7[8];
                    iVar9 = uVar16 + uVar10 * 0x10000000;
                    iVar13 = (iVar13 + 0xefe00000U >> 4) + (uint)CARRY4(uVar16,uVar10 * 0x10000000);
                    if ((char)bVar1 < '\0') {
                      if (1 < pbVar7[9]) goto LAB_00ef7ae0;
                      uVar10 = 10;
                      iVar13 = iVar13 + (bVar1 & 0x7f | (uint)pbVar7[9] << 7) * 0x1000000;
                    }
                    else {
                      iVar13 = iVar13 + (uint)bVar1 * 0x1000000;
                      uVar10 = 9;
                    }
                  }
                  else {
                    iVar9 = uVar16 + uVar10 * 0x10000000;
                    iVar13 = (iVar13 - 0x200000U >> 4) + (uint)CARRY4(uVar16,uVar10 * 0x10000000);
                    uVar10 = 8;
                  }
                }
                else {
                  iVar9 = uVar16 + uVar10 * 0x10000000;
                  iVar13 = (uVar11 >> 4) + (uint)CARRY4(uVar16,uVar10 * 0x10000000);
                  uVar10 = 7;
                }
              }
              else {
                iVar9 = uVar16 + uVar10 * 0x10000000;
                iVar13 = (uVar11 >> 4) + (uint)CARRY4(uVar16,uVar10 * 0x10000000);
                uVar10 = 6;
              }
            }
            else {
              iVar9 = uVar16 + uVar11 * 0x10000000;
              uVar10 = 5;
              iVar13 = (((int)uVar11 >> 0x1f) << 0x1c | uVar11 >> 4) +
                       (uint)CARRY4(uVar16,uVar11 * 0x10000000);
            }
          }
          else {
            iVar13 = 0;
            uVar10 = 4;
          }
        }
        else {
          iVar13 = 0;
          uVar10 = 3;
        }
      }
      else {
        iVar13 = 0;
        uVar10 = 2;
      }
      if (uVar14 < uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: cnt <= self.lenAbsentUnhealthyNotEnoughSpacefree_bytesrequired_bytesPreparationApply"
                     ,0x21,&DAT_01c18f74);
      }
      local_38 = uVar10;
      if (local_34 < uVar10) {
        local_28 = &local_34;
        local_24 = &LAB_01a6a304;
        local_2c = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ac267,&local_30,&DAT_01d2bbe0);
      }
      FUN_01283ef4(puVar2,uVar10);
      iVar3 = uVar14 - uVar10;
      param_1[2] = iVar9;
      param_1[3] = iVar13;
    }
    else {
      FUN_01283ef4(puVar2,1);
      iVar3 = uVar14 - 1;
      param_1[2] = iVar9;
      param_1[3] = iVar9 >> 0x1f;
    }
    param_2[1] = iVar3;
    *param_1 = 0;
  }
  return;
}

