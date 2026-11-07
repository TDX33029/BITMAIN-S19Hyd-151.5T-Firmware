// FUN_0166306c @ 0166306c size=876 calls_out=3 calls_in=3
// strings: 

void FUN_0166306c(int *param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  byte bVar11;
  uint uVar12;
  uint uVar13;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar7 = 0;
  uVar13 = param_3 / 3;
  uVar9 = param_3 % 3;
  if (uVar9 != 0) {
    uVar13 = param_3 / 3 + 1;
  }
  iVar4 = uVar13 << 2;
  if (iVar4 < 0) {
LAB_016630ac:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,iVar4);
  }
  if (uVar13 == 0) {
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
  }
  else {
    uVar7 = 1;
    iVar3 = FUN_01298504(iVar4,1);
    if (iVar3 == 0) goto LAB_016630ac;
    iVar8 = 0;
    uVar12 = 0;
    local_28 = 0;
    local_30 = iVar4;
    local_2c = iVar3;
    do {
      iVar4 = 0;
      uVar10 = 0;
      do {
        uVar6 = 0;
        if ((uint)(iVar8 + iVar4) < param_3) {
          uVar6 = (uint)*(byte *)(param_2 + iVar4);
        }
        iVar4 = iVar4 + 1;
        uVar10 = uVar6 | uVar10 << 8;
      } while (iVar4 != 3);
      iVar4 = 4;
      uVar12 = uVar12 + 1;
      do {
        iVar2 = local_28;
        uVar6 = 2;
        bVar11 = *(byte *)(param_4 + ((uVar10 & 0xffffff) >> 0x12));
        if ((uint)(int)(char)bVar11 < 0x80000000) {
          uVar6 = 1;
        }
        if ((uint)(local_30 - local_28) < uVar6) {
          FUN_006520b4(&local_30,local_28,uVar6,1,1);
          iVar3 = local_2c;
        }
        pbVar5 = (byte *)(iVar3 + local_28);
        if (0x7fffffff < (uint)(int)(char)bVar11) {
          pbVar5[1] = bVar11 & 0xbf;
          bVar11 = bVar11 >> 6 | 0xc0;
        }
        local_28 = uVar6 + iVar2;
        iVar4 = iVar4 + -1;
        uVar10 = uVar10 << 6;
        *pbVar5 = bVar11;
      } while (iVar4 != 0);
      iVar8 = iVar8 + 3;
      param_2 = param_2 + 3;
    } while (uVar12 != uVar13);
  }
  if (uVar9 == 1) {
    if (local_28 != 0) {
      iVar4 = -1;
      iVar3 = local_2c + local_28;
      if (0x7fffffff < (uint)(int)*(char *)(iVar3 + -1)) {
        bVar11 = *(byte *)(iVar3 + -2);
        if ((char)bVar11 < -0x40) {
          bVar1 = *(byte *)(iVar3 + -3);
          if ((char)bVar1 < -0x40) {
            uVar13 = (int)(char)bVar1 & 0x3fU | (*(byte *)(iVar3 + -4) & 7) << 6;
          }
          else {
            uVar13 = bVar1 & 0xf;
          }
          uVar13 = (int)(char)bVar11 & 0x3fU | uVar13 << 6;
        }
        else {
          uVar13 = bVar11 & 0x1f;
        }
        if (1 < uVar13) {
          iVar4 = -2;
        }
        if ((0x1f < uVar13) && (iVar4 = -4, uVar13 < 0x400)) {
          iVar4 = -3;
        }
      }
      local_28 = iVar4 + local_28;
      if (local_28 != 0) {
        iVar3 = local_2c + local_28;
        iVar4 = -1;
        if (0x7fffffff < (uint)(int)*(char *)(iVar3 + -1)) {
          bVar11 = *(byte *)(iVar3 + -2);
          if ((char)bVar11 < -0x40) {
            bVar1 = *(byte *)(iVar3 + -3);
            if ((char)bVar1 < -0x40) {
              uVar13 = (int)(char)bVar1 & 0x3fU | (*(byte *)(iVar3 + -4) & 7) << 6;
            }
            else {
              uVar13 = bVar1 & 0xf;
            }
            uVar13 = (int)(char)bVar11 & 0x3fU | uVar13 << 6;
          }
          else {
            uVar13 = bVar11 & 0x1f;
          }
          if (1 < uVar13) {
            iVar4 = -2;
          }
          if ((0x1f < uVar13) && (iVar4 = -4, uVar13 < 0x400)) {
            iVar4 = -3;
          }
        }
        local_28 = iVar4 + local_28;
      }
    }
  }
  else if ((uVar9 == 2) && (local_28 != 0)) {
    iVar3 = local_2c + local_28;
    iVar4 = -1;
    if (0x7fffffff < (uint)(int)*(char *)(iVar3 + -1)) {
      bVar11 = *(byte *)(iVar3 + -2);
      if ((char)bVar11 < -0x40) {
        bVar1 = *(byte *)(iVar3 + -3);
        if ((char)bVar1 < -0x40) {
          uVar13 = (int)(char)bVar1 & 0x3fU | (*(byte *)(iVar3 + -4) & 7) << 6;
        }
        else {
          uVar13 = bVar1 & 0xf;
        }
        uVar13 = (int)(char)bVar11 & 0x3fU | uVar13 << 6;
      }
      else {
        uVar13 = bVar11 & 0x1f;
      }
      if (1 < uVar13) {
        iVar4 = -2;
      }
      if ((0x1f < uVar13) && (iVar4 = -4, uVar13 < 0x400)) {
        iVar4 = -3;
      }
    }
    local_28 = iVar4 + local_28;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

