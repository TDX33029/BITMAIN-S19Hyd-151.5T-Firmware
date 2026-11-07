// FUN_01663550 @ 01663550 size=824 calls_out=3 calls_in=3
// strings: ./0123456789ABCDEFGHIJKLMNOPQRST

void FUN_01663550(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar8 = param_3 / 3;
  uVar3 = param_3 % 3;
  if (uVar3 != 0) {
    uVar8 = param_3 / 3 + 1;
  }
  iVar5 = uVar8 << 2;
  iVar4 = FUN_01298504(iVar5,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,iVar5);
  }
  iVar10 = 0;
  uVar9 = 0;
  local_28 = 0;
  local_30 = iVar5;
  local_2c = iVar4;
  do {
    iVar5 = 0;
    uVar12 = 0;
    do {
      uVar7 = 0;
      if ((uint)(iVar10 + iVar5) < param_3) {
        uVar7 = (uint)*(byte *)(param_2 + iVar5) << 0x10;
      }
      iVar5 = iVar5 + 1;
      uVar12 = uVar7 | uVar12 >> 8;
    } while (iVar5 != 3);
    iVar5 = 4;
    uVar9 = uVar9 + 1;
    do {
      iVar2 = local_28;
      uVar7 = 2;
      bVar11 = "./0123456789ABCDEFGHIJKLMNOPQRST"[uVar12 & 0x3f];
      if ((uint)(int)(char)bVar11 < 0x80000000) {
        uVar7 = 1;
      }
      if ((uint)(local_30 - local_28) < uVar7) {
        FUN_006520b4(&local_30,local_28,uVar7,1,1);
        iVar4 = local_2c;
      }
      pbVar6 = (byte *)(iVar4 + local_28);
      if (0x7fffffff < (uint)(int)(char)bVar11) {
        pbVar6[1] = bVar11 & 0xbf;
        bVar11 = bVar11 >> 6 | 0xc0;
      }
      local_28 = uVar7 + iVar2;
      iVar5 = iVar5 + -1;
      uVar12 = uVar12 >> 6;
      *pbVar6 = bVar11;
    } while (iVar5 != 0);
    iVar10 = iVar10 + 3;
    param_2 = param_2 + 3;
  } while (uVar9 != uVar8);
  if (uVar3 == 1) {
    iVar5 = -1;
    iVar4 = local_2c + local_28;
    if (*(char *)(iVar4 + -1) < '\0') {
      bVar11 = *(byte *)(iVar4 + -2);
      if ((char)bVar11 < -0x40) {
        bVar1 = *(byte *)(iVar4 + -3);
        if ((char)bVar1 < -0x40) {
          uVar8 = (int)(char)bVar1 & 0x3fU | (*(byte *)(iVar4 + -4) & 7) << 6;
        }
        else {
          uVar8 = bVar1 & 0xf;
        }
        uVar8 = (int)(char)bVar11 & 0x3fU | uVar8 << 6;
      }
      else {
        uVar8 = bVar11 & 0x1f;
      }
      if (1 < uVar8) {
        iVar5 = -2;
      }
      if ((0x1f < uVar8) && (iVar5 = -4, uVar8 < 0x400)) {
        iVar5 = -3;
      }
    }
    local_28 = iVar5 + local_28;
    if (local_28 != 0) {
      iVar4 = local_2c + local_28;
      iVar5 = -1;
      if (0x7fffffff < (uint)(int)*(char *)(iVar4 + -1)) {
        bVar11 = *(byte *)(iVar4 + -2);
        if ((char)bVar11 < -0x40) {
          bVar1 = *(byte *)(iVar4 + -3);
          if ((char)bVar1 < -0x40) {
            uVar8 = (int)(char)bVar1 & 0x3fU | (*(byte *)(iVar4 + -4) & 7) << 6;
          }
          else {
            uVar8 = bVar1 & 0xf;
          }
          uVar8 = (int)(char)bVar11 & 0x3fU | uVar8 << 6;
        }
        else {
          uVar8 = bVar11 & 0x1f;
        }
        if (1 < uVar8) {
          iVar5 = -2;
        }
        if ((0x1f < uVar8) && (iVar5 = -4, uVar8 < 0x400)) {
          iVar5 = -3;
        }
      }
      local_28 = iVar5 + local_28;
    }
  }
  else if (uVar3 == 2) {
    iVar4 = local_2c + local_28;
    iVar5 = -1;
    if (0x7fffffff < (uint)(int)*(char *)(iVar4 + -1)) {
      bVar11 = *(byte *)(iVar4 + -2);
      if ((char)bVar11 < -0x40) {
        bVar1 = *(byte *)(iVar4 + -3);
        if ((char)bVar1 < -0x40) {
          uVar8 = (int)(char)bVar1 & 0x3fU | (*(byte *)(iVar4 + -4) & 7) << 6;
        }
        else {
          uVar8 = bVar1 & 0xf;
        }
        uVar8 = (int)(char)bVar11 & 0x3fU | uVar8 << 6;
      }
      else {
        uVar8 = bVar11 & 0x1f;
      }
      if (1 < uVar8) {
        iVar5 = -2;
      }
      if ((0x1f < uVar8) && (iVar5 = -4, uVar8 < 0x400)) {
        iVar5 = -3;
      }
    }
    local_28 = iVar5 + local_28;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

