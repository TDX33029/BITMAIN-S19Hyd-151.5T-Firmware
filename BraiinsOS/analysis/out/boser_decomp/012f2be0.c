// FUN_012f2be0 @ 012f2be0 size=504 calls_out=0 calls_in=1
// strings: 

void FUN_012f2be0(uint *param_1,uint *param_2)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  short sVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar3 = param_2[3];
  if ((int3)uVar3 == 0) {
    uVar7 = param_2[1];
    uVar3 = param_2[2];
    param_1[2] = *param_2;
    param_1[3] = uVar7;
    *(ushort *)(param_1 + 1) = (ushort)uVar3 & 0x1ff;
    *param_1 = (int)uVar3 >> 10;
    return;
  }
  uVar7 = param_2[1];
  uVar8 = *param_2;
  uVar9 = (uVar7 & 0x3f) - (int)(char)uVar3;
  if ((int)uVar9 < 0) {
    uVar9 = uVar9 + 0x3c;
    iVar4 = -1;
  }
  else if (uVar9 < 0x3c) {
    iVar4 = 0;
  }
  else if (uVar9 < 0x78) {
    uVar9 = uVar9 - 0x3c;
    iVar4 = 1;
  }
  else {
    uVar9 = uVar9 - 0x78;
    iVar4 = 2;
  }
  uVar3 = (((uVar7 & 0x3fff) >> 8) - (int)(char)(uVar3 >> 8)) + iVar4;
  if ((int)uVar3 < 0) {
    uVar3 = uVar3 + 0x3c;
    iVar4 = 0xff;
  }
  else if (uVar3 < 0x3c) {
    iVar4 = 0;
  }
  else if (uVar3 < 0x78) {
    uVar3 = uVar3 - 0x3c;
    iVar4 = 1;
  }
  else {
    uVar3 = uVar3 - 0x78;
    iVar4 = 2;
  }
  uVar7 = ((uVar7 >> 0x10) - (uint)*(byte *)((int)param_2 + 0xe)) + iVar4;
  uVar5 = uVar7 & 0xff;
  if ((char)uVar7 < '\0') {
    sVar6 = -2;
    if (uVar5 < 0xe8) {
      uVar7 = uVar7 + 0x30;
    }
    else {
      sVar6 = -1;
      uVar7 = uVar7 + 0x18;
    }
  }
  else {
    sVar6 = 0;
    if (0x17 < uVar5) {
      if (uVar5 < 0x30) {
        uVar7 = uVar7 - 0x18;
        sVar6 = 1;
      }
      else {
        uVar7 = uVar7 - 0x30;
        sVar6 = 2;
      }
    }
  }
  uVar5 = (int)param_2[2] >> 10;
  uVar2 = 3;
  if ((uVar5 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar5 * 0x40000000) < 0x28f5c29) {
    uVar2 = 0xf;
  }
  sVar1 = 0x16d;
  sVar6 = ((ushort)param_2[2] & 0x1ff) + sVar6;
  if ((uVar2 & uVar5) == 0) {
    sVar1 = 0x16e;
  }
  if (sVar1 < sVar6) {
    sVar6 = sVar6 - sVar1;
    uVar5 = uVar5 + 1;
  }
  else if (sVar6 < 1) {
    uVar5 = uVar5 - 1;
    uVar2 = 3;
    if ((uVar5 * -0x3d70a3d7 + 0x51eb850 >> 2 | uVar5 * 0x40000000) < 0x28f5c29) {
      uVar2 = 0xf;
    }
    sVar1 = 0x16d;
    if ((uVar2 & uVar5) == 0) {
      sVar1 = 0x16e;
    }
    sVar6 = sVar1 + sVar6;
  }
  *param_1 = uVar5;
  param_1[2] = uVar8 & 0x3fffffff;
  *(short *)(param_1 + 1) = sVar6;
  param_1[3] = (uVar7 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar9 & 0xff;
  return;
}

