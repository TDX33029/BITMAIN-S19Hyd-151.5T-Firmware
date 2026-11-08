// FUN_01798aac @ 01798aac size=700 calls_out=3 calls_in=1
// strings: 

int FUN_01798aac(uint *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                uint param_7,uint param_8,uint param_9,uint param_10)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar6 = *param_1;
  uVar5 = 1 << (uVar6 - 0x20 & 0xff) | 1U >> (0x20 - uVar6 & 0xff);
  uVar10 = 1 << (uVar6 & 0xff);
  uVar9 = param_8;
  uVar4 = param_7;
  if (uVar5 < param_8 || param_8 - uVar5 < (uint)(uVar10 <= param_7)) {
    uVar9 = uVar5;
    uVar4 = uVar10;
  }
  if (uVar4 == 0 && uVar9 == 0) {
    param_7 = 1;
  }
  else if (uVar5 <= param_8 && (uint)(param_7 <= uVar10) <= uVar5 - param_8) {
    param_7 = uVar10;
  }
  if (param_10 == 0) {
    param_10 = 0x20000;
  }
  uVar10 = param_1[4];
  if (param_10 <= param_7) {
    param_7 = param_10;
  }
  uVar4 = param_9 & 1;
  if (uVar10 == 3) {
    uVar4 = 1;
  }
  iVar1 = FUN_018462e8(param_7,4 - uVar4);
  uVar9 = param_1[2];
  uVar4 = param_1[6];
  iVar2 = 1 << (uVar9 & 0xff);
  if (uVar4 == 1) {
    if (uVar10 != 3) {
      iVar7 = 0;
      uVar10 = 0;
      iVar8 = 4 << (uVar9 & 0xff);
      goto LAB_01798bec;
    }
    if (uVar6 == 0) {
      iVar8 = 4 << (uVar9 & 0xff);
      iVar7 = 0;
      uVar10 = 0;
      goto LAB_01798bec;
    }
    if (0x10 < uVar6) {
      uVar6 = 0x11;
    }
    iVar8 = (iVar2 + (1 << (uVar6 & 0xff))) * 4;
  }
  else {
    uVar5 = uVar4 - 3;
    bVar11 = uVar5 == 2;
    if (uVar5 < 3) {
      bVar11 = param_4 == 1;
    }
    if (bVar11) {
      if ((uVar10 == 3) && (uVar6 != 0)) {
        if (0x10 < uVar6) {
          uVar6 = 0x11;
        }
        iVar8 = (iVar2 + (1 << (uVar6 & 0xff))) * 4;
      }
      else {
        iVar8 = 4 << (uVar9 & 0xff);
      }
LAB_01798d10:
      iVar7 = 0;
      uVar10 = iVar2 + 0x3fU & 0xffffffc0;
      goto LAB_01798bec;
    }
    if ((uVar10 == 3) && (uVar6 != 0)) {
      if (0x10 < uVar6) {
        uVar6 = 0x11;
      }
      iVar8 = iVar2 + (1 << (uVar6 & 0xff));
    }
    else {
      iVar8 = iVar2;
    }
    iVar8 = ((1 << (param_1[1] & 0xff)) + iVar8) * 4;
    if (uVar5 < 3) {
      if (param_4 == 1) goto LAB_01798d10;
    }
    else if (6 < uVar4) {
      iVar7 = 0x24700;
      uVar10 = 0;
      goto LAB_01798bec;
    }
  }
  uVar10 = 0;
  iVar7 = 0;
LAB_01798bec:
  iVar2 = FUN_01802c74(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5]);
  iVar3 = FUN_01802cd4(*param_2,param_2[1],param_2[2],param_2[3],param_2[4],param_2[5],param_7);
  if (*param_2 == 1) {
    uVar4 = iVar3 * 0xc + 0x3fU & 0xffffffc0;
  }
  else {
    uVar4 = 0;
  }
  if (param_3 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = 0xed0;
  }
  bVar11 = param_9 == 0;
  if (bVar11) {
    uVar9 = 0;
  }
  else {
    uVar9 = param_7 / 3;
  }
  if (!bVar11) {
    uVar9 = uVar9 + (param_7 >> 10);
  }
  if (!bVar11) {
    uVar9 = uVar9 << 4;
  }
  if (!bVar11) {
    uVar9 = uVar9 + 0x5f;
  }
  if (!bVar11) {
    uVar9 = uVar9 & 0xffffffc0;
  }
  return param_6 + 0x4760 + param_5 + param_7 + iVar1 * 3 + (iVar1 * 8 + 0x3fU & 0xffffffc0) +
         uVar10 + iVar7 + iVar8 + iVar2 + uVar4 + iVar3 + uVar9;
}

