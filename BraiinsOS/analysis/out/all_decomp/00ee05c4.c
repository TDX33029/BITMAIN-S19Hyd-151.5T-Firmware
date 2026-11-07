// FUN_00ee05c4 @ 00ee05c4 size=1776 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00ee05c4(byte *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined1 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  
  if ((param_3 == 0) && ((*param_1 & 1) != 0)) {
    iVar7 = param_2[2];
    iVar5 = iVar7;
    if (*param_2 == iVar7) {
      FUN_00edff4c(param_2,iVar7,1,1,1);
      iVar5 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar5) = 0x5a;
    iVar7 = iVar7 + 1;
    goto LAB_00ee0604;
  }
  uVar9 = (uint)param_1[3];
  uVar8 = 0x2b;
  if ((int)param_3 < 0) {
    param_3 = -param_3;
    uVar8 = 0x2d;
  }
  bVar4 = false;
  if ((1 << uVar9 & 0x34U) == 0) {
    if ((1 << uVar9 & 10U) != 0) {
      param_3 = param_3 + 0x1e;
      iVar7 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x77777777 >> 0x20);
      uVar13 = (iVar7 >> 5) - (iVar7 >> 0x1f);
      iVar7 = (int)(((ulonglong)uVar13 << 0x20) + (longlong)(int)uVar13 * -0x77777777 >> 0x20);
      uVar13 = uVar13 + ((iVar7 >> 5) - (iVar7 >> 0x1f)) * -0x3c;
      uVar9 = uVar9 ^ 3 | uVar13;
      goto LAB_00ee06c8;
    }
    uVar13 = uVar9;
    uVar10 = uVar9;
  }
  else {
    iVar7 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x77777777 >> 0x20);
    uVar10 = (iVar7 >> 5) - (iVar7 >> 0x1f);
    iVar7 = (int)(((ulonglong)uVar10 << 0x20) + (longlong)(int)uVar10 * -0x77777777 >> 0x20);
    uVar13 = uVar10 + ((iVar7 >> 5) - (iVar7 >> 0x1f)) * -0x3c;
    uVar10 = param_3 + uVar10 * -0x3c;
    if ((uVar10 == 0) && (uVar9 != 2)) {
      uVar9 = uVar13 | uVar9 ^ 5;
LAB_00ee06c8:
      if (uVar9 == 0) {
        uVar13 = 0;
      }
      uVar9 = (uint)(uVar9 != 0);
      uVar10 = 0;
    }
    else {
      uVar9 = 2;
      bVar4 = true;
    }
  }
  bVar1 = param_1[1];
  iVar7 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x6e5d4c3b >> 0x20);
  uVar12 = (iVar7 >> 0xb) - (iVar7 >> 0x1f);
  uVar11 = uVar12 & 0xff;
  bVar3 = (byte)uVar12;
  if (uVar11 < 10) {
    bVar2 = param_1[2];
    iVar5 = param_2[2];
    if (bVar2 == 2) {
      iVar7 = iVar5;
      if (*param_2 == iVar5) {
        FUN_00edff4c(param_2,iVar5,1,1,1);
        iVar7 = param_2[2];
      }
      iVar5 = iVar5 + 1;
      *(undefined1 *)(param_2[1] + iVar7) = 0x20;
      param_2[2] = iVar5;
    }
    iVar7 = iVar5;
    if (*param_2 == iVar5) {
      FUN_00edff4c(param_2,iVar5,1,1,1);
      iVar7 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar7) = uVar8;
    iVar7 = iVar5 + 1;
    param_2[2] = iVar7;
    if (bVar2 == 1) {
      if (*param_2 == iVar7) {
        FUN_00edff4c(param_2,iVar7,1,1,1);
        iVar7 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + iVar7) = 0x30;
      iVar7 = iVar5 + 2;
      param_2[2] = iVar7;
    }
    iVar5 = iVar7;
    if (*param_2 == iVar7) {
      FUN_00edff4c(param_2,iVar7,1,1,1);
      iVar5 = param_2[2];
    }
    iVar7 = iVar7 + 1;
    *(byte *)(param_2[1] + iVar5) = bVar3 | 0x30;
    param_2[2] = iVar7;
  }
  else {
    iVar7 = param_2[2];
    iVar5 = iVar7;
    if (*param_2 == iVar7) {
      FUN_00edff4c(param_2,iVar7,1,1,1);
      iVar5 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar5) = uVar8;
    iVar5 = iVar7 + 1;
    param_2[2] = iVar5;
    if (99 < uVar11) {
      return 1;
    }
    iVar6 = *param_2;
    uVar11 = (short)uVar11 * 0xcd;
    if (iVar6 == iVar5) {
      FUN_00edff4c(param_2,iVar5,1,1,1);
      iVar6 = *param_2;
      iVar5 = param_2[2];
    }
    *(byte *)(param_2[1] + iVar5) = (byte)(uVar11 >> 0xb) | 0x30;
    iVar5 = iVar7 + 2;
    param_2[2] = iVar5;
    if (iVar6 == iVar5) {
      FUN_00edff4c(param_2,iVar6,1,1,1);
      iVar5 = param_2[2];
    }
    iVar7 = iVar7 + 3;
    *(byte *)(param_2[1] + iVar5) = bVar3 + (char)(uVar11 >> 0xb) * -10 | 0x30;
    param_2[2] = iVar7;
  }
  if (uVar9 - 1 < 2) {
    if (bVar1 == 1) {
      iVar5 = iVar7;
      if (*param_2 == iVar7) {
        FUN_00edff4c(param_2,iVar7,1,1,1);
        iVar5 = param_2[2];
      }
      iVar7 = iVar7 + 1;
      *(undefined1 *)(param_2[1] + iVar5) = 0x3a;
      param_2[2] = iVar7;
    }
    if (99 < (uVar13 & 0xff)) {
      return 1;
    }
    uVar9 = (short)(uVar13 & 0xff) * 0xcd;
    iVar6 = *param_2;
    iVar5 = iVar7;
    if (iVar6 == iVar7) {
      FUN_00edff4c(param_2,iVar7,1,1,1);
      iVar6 = *param_2;
      iVar5 = param_2[2];
    }
    *(byte *)(param_2[1] + iVar5) = (byte)(uVar9 >> 0xb) | 0x30;
    iVar5 = iVar7 + 1;
    param_2[2] = iVar5;
    if (iVar6 == iVar5) {
      FUN_00edff4c(param_2,iVar6,1,1,1);
      iVar5 = param_2[2];
    }
    iVar7 = iVar7 + 2;
    param_2[2] = iVar7;
    *(byte *)(param_2[1] + iVar5) = (char)uVar13 + (char)(uVar9 >> 0xb) * -10 | 0x30;
  }
  if (!bVar4) {
    return 0;
  }
  if (bVar1 == 1) {
    iVar5 = iVar7;
    if (*param_2 == iVar7) {
      FUN_00edff4c(param_2,iVar7,1,1,1);
      iVar5 = param_2[2];
    }
    iVar7 = iVar7 + 1;
    *(undefined1 *)(param_2[1] + iVar5) = 0x3a;
    param_2[2] = iVar7;
  }
  if (99 < (uVar10 & 0xff)) {
    return 1;
  }
  uVar9 = (short)(uVar10 & 0xff) * 0xcd;
  iVar6 = *param_2;
  iVar5 = iVar7;
  if (iVar6 == iVar7) {
    FUN_00edff4c(param_2,iVar7,1,1,1);
    iVar6 = *param_2;
    iVar5 = param_2[2];
  }
  *(byte *)(param_2[1] + iVar5) = (byte)(uVar9 >> 0xb) | 0x30;
  iVar5 = iVar7 + 1;
  param_2[2] = iVar5;
  if (iVar6 == iVar5) {
    FUN_00edff4c(param_2,iVar6,1,1,1);
    iVar5 = param_2[2];
  }
  *(byte *)(param_2[1] + iVar5) = (char)uVar10 + (char)(uVar9 >> 0xb) * -10 | 0x30;
  iVar7 = iVar7 + 2;
LAB_00ee0604:
  param_2[2] = iVar7;
  return 0;
}

