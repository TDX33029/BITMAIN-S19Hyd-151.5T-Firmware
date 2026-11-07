// FUN_012901dc @ 012901dc size=1168 calls_out=2 calls_in=1
// strings: 

int FUN_012901dc(byte *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  
  if ((param_3 == 0) && ((*param_1 & 1) != 0)) {
    iVar7 = param_2[2];
    iVar5 = iVar7;
    if (*param_2 == iVar7) {
      FUN_006520b4(param_2,iVar7,1,1,1);
      iVar5 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar5) = 0x5a;
    param_2[2] = iVar7 + 1;
    return 0;
  }
  uVar8 = (uint)param_1[3];
  uVar9 = 0x2b;
  if ((int)param_3 < 0) {
    param_3 = -param_3;
    uVar9 = 0x2d;
  }
  bVar3 = false;
  if ((1 << uVar8 & 0x34U) == 0) {
    if ((1 << uVar8 & 10U) != 0) {
      param_3 = param_3 + 0x1e;
      iVar5 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x77777777 >> 0x20);
      uVar11 = (iVar5 >> 5) - (iVar5 >> 0x1f);
      iVar5 = (int)(((ulonglong)uVar11 << 0x20) + (longlong)(int)uVar11 * -0x77777777 >> 0x20);
      uVar11 = uVar11 + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * -0x3c;
      uVar8 = uVar8 ^ 3 | uVar11;
      goto LAB_012902e4;
    }
    uVar11 = uVar8;
    uVar6 = uVar8;
  }
  else {
    iVar5 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x77777777 >> 0x20);
    uVar6 = (iVar5 >> 5) - (iVar5 >> 0x1f);
    iVar5 = (int)(((ulonglong)uVar6 << 0x20) + (longlong)(int)uVar6 * -0x77777777 >> 0x20);
    uVar11 = uVar6 + ((iVar5 >> 5) - (iVar5 >> 0x1f)) * -0x3c;
    uVar6 = param_3 + uVar6 * -0x3c;
    if ((uVar6 == 0) && (uVar8 != 2)) {
      uVar8 = uVar11 | uVar8 ^ 5;
LAB_012902e4:
      if (uVar8 == 0) {
        uVar11 = 0;
      }
      uVar8 = (uint)(uVar8 != 0);
      uVar6 = 0;
    }
    else {
      uVar8 = 2;
      bVar3 = true;
    }
  }
  bVar1 = param_1[1];
  iVar5 = (int)(((ulonglong)param_3 << 0x20) + (longlong)(int)param_3 * -0x6e5d4c3b >> 0x20);
  uVar12 = (iVar5 >> 0xb) - (iVar5 >> 0x1f);
  if ((uVar12 & 0xff) < 10) {
    bVar2 = param_1[2];
    iVar5 = *param_2;
    iVar7 = param_2[2];
    if (bVar2 == 2) {
      iVar10 = iVar7;
      if (iVar5 == iVar7) {
        FUN_006520b4(param_2,iVar7,1,1,1);
        iVar5 = *param_2;
        iVar10 = param_2[2];
      }
      iVar7 = iVar7 + 1;
      param_2[2] = iVar7;
      *(undefined1 *)(param_2[1] + iVar10) = 0x20;
    }
    if (iVar5 == iVar7) {
      FUN_006520b4(param_2,iVar5,1,1,1);
      iVar5 = *param_2;
      iVar10 = param_2[2];
    }
    else {
      iVar10 = iVar7;
    }
    iVar4 = param_2[1];
    *(undefined1 *)(iVar4 + iVar10) = uVar9;
    iVar10 = iVar7 + 1;
    param_2[2] = iVar10;
    if (bVar2 == 1) {
      if (iVar5 == iVar10) {
        FUN_006520b4(param_2,iVar5,1,1,1);
        iVar5 = *param_2;
        iVar4 = param_2[1];
        iVar10 = param_2[2];
      }
      *(undefined1 *)(iVar4 + iVar10) = 0x30;
      iVar10 = iVar7 + 2;
      param_2[2] = iVar10;
    }
    iVar7 = iVar10;
    if (iVar5 == iVar10) {
      FUN_006520b4(param_2,iVar5,1,1,1);
      iVar4 = param_2[1];
      iVar7 = param_2[2];
    }
    *(byte *)(iVar4 + iVar7) = (byte)uVar12 | 0x30;
    param_2[2] = iVar10 + 1;
  }
  else {
    iVar7 = param_2[2];
    iVar5 = iVar7;
    if (*param_2 == iVar7) {
      FUN_006520b4(param_2,iVar7,1,1,1);
      iVar5 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar5) = uVar9;
    param_2[2] = iVar7 + 1;
    iVar5 = FUN_01288548(param_2,uVar12);
    if (iVar5 != 0) {
      return 1;
    }
  }
  if (uVar8 - 1 < 2) {
    if (bVar1 != 1) {
      iVar5 = FUN_01288548(param_2,uVar11);
      if (iVar5 != 0 || !bVar3) {
        return iVar5;
      }
      goto LAB_012904dc;
    }
    iVar7 = param_2[2];
    iVar5 = iVar7;
    if (*param_2 == iVar7) {
      FUN_006520b4(param_2,iVar7,1,1,1);
      iVar5 = param_2[2];
    }
    *(undefined1 *)(param_2[1] + iVar5) = 0x3a;
    param_2[2] = iVar7 + 1;
    iVar5 = FUN_01288548(param_2,uVar11);
    if (iVar5 != 0 || !bVar3) {
      return iVar5;
    }
  }
  else {
    if (!bVar3) {
      return 0;
    }
    if (bVar1 != 1) goto LAB_012904dc;
  }
  iVar7 = param_2[2];
  iVar5 = iVar7;
  if (*param_2 == iVar7) {
    FUN_006520b4(param_2,iVar7,1,1,1);
    iVar5 = param_2[2];
  }
  *(undefined1 *)(param_2[1] + iVar5) = 0x3a;
  param_2[2] = iVar7 + 1;
LAB_012904dc:
  iVar5 = FUN_01288548(param_2,uVar6);
  return iVar5;
}

