// FUN_00f53994 @ 00f53994 size=1672 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_00f53994(byte *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  
  if ((param_3 == 0) && ((*param_1 & 1) != 0)) {
    iVar7 = param_2[2];
    iVar6 = iVar7;
    if (*param_2 == iVar7) {
      FUN_00f58340(param_2,iVar7,1);
      iVar6 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar6) = 0x5a;
    iVar7 = iVar7 + 1;
    goto LAB_00f539d4;
  }
  uVar9 = (uint)param_1[3];
  uVar10 = 0x2b;
  if ((int)param_3 < 0) {
    param_3 = -param_3;
    uVar10 = 0x2d;
  }
  bVar4 = false;
  if ((1 << uVar9 & 0x34U) == 0) {
    if ((1 << uVar9 & 10U) != 0) {
      param_3 = param_3 + 0x1e;
      iVar7 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x77777777 >> 0x20);
      uVar14 = (iVar7 >> 5) - (iVar7 >> 0x1f);
      iVar7 = (int)(((ulonglong)uVar14 << 0x20) + (longlong)(int)uVar14 * -0x77777777 >> 0x20);
      uVar14 = uVar14 + ((iVar7 >> 5) - (iVar7 >> 0x1f)) * -0x3c;
      uVar9 = uVar9 ^ 3 | uVar14;
      goto LAB_00f53a98;
    }
    uVar14 = uVar9;
    uVar11 = uVar9;
  }
  else {
    iVar7 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x77777777 >> 0x20);
    uVar11 = (iVar7 >> 5) - (iVar7 >> 0x1f);
    iVar7 = (int)(((ulonglong)uVar11 << 0x20) + (longlong)(int)uVar11 * -0x77777777 >> 0x20);
    uVar14 = uVar11 + ((iVar7 >> 5) - (iVar7 >> 0x1f)) * -0x3c;
    uVar11 = param_3 + uVar11 * -0x3c;
    if ((uVar11 == 0) && (uVar9 != 2)) {
      uVar9 = uVar14 | uVar9 ^ 5;
LAB_00f53a98:
      if (uVar9 == 0) {
        uVar14 = 0;
      }
      uVar9 = (uint)(uVar9 != 0);
      uVar11 = 0;
    }
    else {
      uVar9 = 2;
      bVar4 = true;
    }
  }
  bVar1 = param_1[1];
  iVar7 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x6e5d4c3b >> 0x20);
  uVar13 = (iVar7 >> 0xb) - (iVar7 >> 0x1f);
  uVar12 = uVar13 & 0xff;
  bVar3 = (byte)uVar13;
  if (uVar12 < 10) {
    bVar2 = param_1[2];
    iVar6 = *param_2;
    iVar8 = param_2[2];
    if (bVar2 == 2) {
      iVar7 = iVar8;
      if (iVar6 == iVar8) {
        FUN_00f58340(param_2,iVar8,1);
        iVar6 = *param_2;
        iVar7 = param_2[2];
      }
      iVar8 = iVar8 + 1;
      *(undefined1 *)(param_2[1] + iVar7) = 0x20;
      param_2[2] = iVar8;
    }
    if (iVar6 == iVar8) {
      FUN_00f58340(param_2,iVar6,1);
      iVar6 = *param_2;
      iVar7 = param_2[2];
    }
    else {
      iVar7 = iVar8;
    }
    iVar5 = param_2[1];
    *(undefined1 *)(iVar5 + iVar7) = uVar10;
    iVar7 = iVar8 + 1;
    param_2[2] = iVar7;
    if (bVar2 == 1) {
      if (iVar6 == iVar7) {
        FUN_00f58340(param_2,iVar6,1);
        iVar6 = *param_2;
        iVar5 = param_2[1];
        iVar7 = param_2[2];
      }
      *(undefined1 *)(iVar5 + iVar7) = 0x30;
      iVar7 = iVar8 + 2;
      param_2[2] = iVar7;
    }
    iVar8 = iVar7;
    if (iVar6 == iVar7) {
      FUN_00f58340(param_2,iVar6,1);
      iVar5 = param_2[1];
      iVar8 = param_2[2];
    }
    *(byte *)(iVar5 + iVar8) = bVar3 | 0x30;
    iVar7 = iVar7 + 1;
    param_2[2] = iVar7;
  }
  else {
    iVar7 = param_2[2];
    iVar6 = iVar7;
    if (*param_2 == iVar7) {
      FUN_00f58340(param_2,iVar7,1);
      iVar6 = param_2[2];
    }
    iVar5 = param_2[1];
    iVar8 = iVar7 + 1;
    *(undefined1 *)(iVar5 + iVar6) = uVar10;
    param_2[2] = iVar8;
    if (99 < uVar12) {
      return 1;
    }
    iVar6 = *param_2;
    uVar12 = (short)uVar12 * 0xcd;
    if (iVar6 == iVar8) {
      FUN_00f58340(param_2,iVar8,1);
      iVar8 = param_2[2];
      iVar6 = *param_2;
      iVar5 = param_2[1];
    }
    *(byte *)(iVar5 + iVar8) = (byte)(uVar12 >> 0xb) | 0x30;
    iVar8 = iVar7 + 2;
    param_2[2] = iVar8;
    if (iVar6 == iVar8) {
      FUN_00f58340(param_2,iVar6,1);
      iVar8 = param_2[2];
      iVar5 = param_2[1];
    }
    iVar7 = iVar7 + 3;
    *(byte *)(iVar5 + iVar8) = bVar3 + (char)(uVar12 >> 0xb) * -10 | 0x30;
    param_2[2] = iVar7;
  }
  if (uVar9 - 1 < 2) {
    if (bVar1 == 1) {
      iVar6 = iVar7;
      if (*param_2 == iVar7) {
        FUN_00f58340(param_2,iVar7,1);
        iVar6 = param_2[2];
      }
      iVar7 = iVar7 + 1;
      *(undefined1 *)(param_2[1] + iVar6) = 0x3a;
      param_2[2] = iVar7;
    }
    if (99 < (uVar14 & 0xff)) {
      return 1;
    }
    uVar9 = (short)(uVar14 & 0xff) * 0xcd;
    iVar8 = *param_2;
    iVar6 = iVar7;
    if (iVar8 == iVar7) {
      FUN_00f58340(param_2,iVar7,1);
      iVar8 = *param_2;
      iVar6 = param_2[2];
    }
    iVar5 = param_2[1];
    *(byte *)(iVar5 + iVar6) = (byte)(uVar9 >> 0xb) | 0x30;
    iVar6 = iVar7 + 1;
    param_2[2] = iVar6;
    if (iVar8 == iVar6) {
      FUN_00f58340(param_2,iVar8,1);
      iVar5 = param_2[1];
      iVar6 = param_2[2];
    }
    iVar7 = iVar7 + 2;
    *(byte *)(iVar5 + iVar6) = (char)uVar14 + (char)(uVar9 >> 0xb) * -10 | 0x30;
    param_2[2] = iVar7;
  }
  if (!bVar4) {
    return 0;
  }
  if (bVar1 == 1) {
    iVar6 = iVar7;
    if (*param_2 == iVar7) {
      FUN_00f58340(param_2,iVar7,1);
      iVar6 = param_2[2];
    }
    iVar7 = iVar7 + 1;
    *(undefined1 *)(param_2[1] + iVar6) = 0x3a;
    param_2[2] = iVar7;
  }
  if (99 < (uVar11 & 0xff)) {
    return 1;
  }
  uVar9 = (short)(uVar11 & 0xff) * 0xcd;
  iVar8 = *param_2;
  iVar6 = iVar7;
  if (iVar8 == iVar7) {
    FUN_00f58340(param_2,iVar7,1);
    iVar8 = *param_2;
    iVar6 = param_2[2];
  }
  iVar5 = param_2[1];
  *(byte *)(iVar5 + iVar6) = (byte)(uVar9 >> 0xb) | 0x30;
  iVar6 = iVar7 + 1;
  param_2[2] = iVar6;
  if (iVar8 == iVar6) {
    FUN_00f58340(param_2,iVar8,1);
    iVar5 = param_2[1];
    iVar6 = param_2[2];
  }
  *(byte *)(iVar5 + iVar6) = (char)uVar11 + (char)(uVar9 >> 0xb) * -10 | 0x30;
  iVar7 = iVar7 + 2;
LAB_00f539d4:
  param_2[2] = iVar7;
  return 0;
}

