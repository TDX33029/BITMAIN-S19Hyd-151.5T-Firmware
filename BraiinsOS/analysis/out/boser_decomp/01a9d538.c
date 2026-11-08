// FUN_01a9d538 @ 01a9d538 size=520 calls_out=2 calls_in=9
// strings: invalid varint

void FUN_01a9d538(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  byte *pbVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  
  uVar2 = param_2[1];
  if (uVar2 == 0) {
LAB_01a9d714:
    uVar3 = FUN_01aa0da0("invalid varint",0xe);
    *param_1 = 1;
    param_1[1] = uVar3;
    return;
  }
  pbVar4 = (byte *)*param_2;
  iVar6 = (int)(char)*pbVar4;
  if (iVar6 < 0) {
    if ((uVar2 < 0xb) && ((char)pbVar4[uVar2 - 1] < '\0')) {
      FUN_01a9df74(param_1);
      return;
    }
    iVar6 = (uint)*pbVar4 + (uint)pbVar4[1] * 0x80 + -0x80;
    if ((char)pbVar4[1] < '\0') {
      iVar6 = iVar6 + (uint)pbVar4[2] * 0x4000 + -0x4000;
      if ((char)pbVar4[2] < '\0') {
        iVar8 = iVar6 + (uint)pbVar4[3] * 0x200000;
        iVar6 = iVar8 + -0x200000;
        if ((char)pbVar4[3] < '\0') {
          uVar9 = (uint)pbVar4[4];
          uVar10 = iVar8 + 0xefe00000;
          uVar7 = (uint)(char)pbVar4[4];
          if ((int)uVar7 < 0) {
            uVar7 = (uVar9 + (uint)pbVar4[5] * 0x80) - 0x80;
            if ((char)pbVar4[5] < '\0') {
              uVar7 = (uVar7 + (uint)pbVar4[6] * 0x4000) - 0x4000;
              if ((char)pbVar4[6] < '\0') {
                iVar8 = uVar7 + (uint)pbVar4[7] * 0x200000;
                if ((char)pbVar4[7] < '\0') {
                  bVar1 = pbVar4[8];
                  iVar6 = uVar10 + uVar9 * 0x10000000;
                  iVar8 = (iVar8 + 0xefe00000U >> 4) + (uint)CARRY4(uVar10,uVar9 * 0x10000000);
                  if ((char)bVar1 < '\0') {
                    if (1 < pbVar4[9]) goto LAB_01a9d714;
                    iVar8 = iVar8 + (bVar1 & 0x7f | (uint)pbVar4[9] << 7) * 0x1000000;
                    iVar5 = 10;
                  }
                  else {
                    iVar8 = iVar8 + (uint)bVar1 * 0x1000000;
                    iVar5 = 9;
                  }
                }
                else {
                  iVar6 = uVar10 + uVar9 * 0x10000000;
                  iVar8 = (iVar8 - 0x200000U >> 4) + (uint)CARRY4(uVar10,uVar9 * 0x10000000);
                  iVar5 = 8;
                }
              }
              else {
                iVar6 = uVar10 + uVar9 * 0x10000000;
                iVar8 = (uVar7 >> 4) + (uint)CARRY4(uVar10,uVar9 * 0x10000000);
                iVar5 = 7;
              }
            }
            else {
              iVar6 = uVar10 + uVar9 * 0x10000000;
              iVar8 = (uVar7 >> 4) + (uint)CARRY4(uVar10,uVar9 * 0x10000000);
              iVar5 = 6;
            }
          }
          else {
            iVar6 = uVar10 + uVar7 * 0x10000000;
            iVar8 = (((int)uVar7 >> 0x1f) << 0x1c | uVar7 >> 4) +
                    (uint)CARRY4(uVar10,uVar7 * 0x10000000);
            iVar5 = 5;
          }
        }
        else {
          iVar8 = 0;
          iVar5 = 4;
        }
      }
      else {
        iVar8 = 0;
        iVar5 = 3;
      }
    }
    else {
      iVar8 = 0;
      iVar5 = 2;
    }
    *param_2 = pbVar4 + iVar5;
    param_2[1] = uVar2 - iVar5;
  }
  else {
    iVar8 = iVar6 >> 0x1f;
    *param_2 = pbVar4 + 1;
    param_2[1] = uVar2 - 1;
  }
  *param_1 = 0;
  param_1[2] = iVar6;
  param_1[3] = iVar8;
  return;
}

