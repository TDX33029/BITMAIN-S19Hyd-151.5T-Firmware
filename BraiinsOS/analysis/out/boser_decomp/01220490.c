// FUN_01220490 @ 01220490 size=552 calls_out=2 calls_in=0
// strings: 

uint FUN_01220490(int *param_1,uint param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  code *pcVar6;
  int *piVar7;
  int iVar8;
  ulonglong uVar9;
  
  if (param_1[7] != 2) {
    iVar5 = param_1[9];
    if (iVar5 != 0) {
      uVar4 = ((uint)(param_1[10] - iVar5) >> 4) * -0x55555555;
      uVar3 = uVar4;
      if (param_2 < uVar4) {
        uVar3 = param_2;
      }
      param_1[9] = iVar5 + uVar3 * 0x30;
      if (param_2 <= uVar4) {
        return 0;
      }
      param_2 = param_2 - uVar3;
    }
    param_1[9] = 0;
    if ((param_1[7] & 1U) != 0) {
      iVar5 = param_1[8];
      while (iVar5 != 0) {
        iVar8 = *(int *)(iVar5 + 4);
        uVar4 = *(uint *)(iVar5 + 8);
        uVar3 = uVar4;
        if (param_2 < uVar4) {
          uVar3 = param_2;
        }
        param_1[9] = iVar8 + uVar3 * 0x30;
        param_1[10] = iVar8 + uVar4 * 0x30;
        iVar5 = 0;
        bVar1 = param_2 <= uVar4;
        param_2 = param_2 - uVar3;
        if (bVar1) {
          param_1[8] = 0;
          return 0;
        }
      }
      param_1[8] = 0;
    }
    iVar5 = param_1[0xb];
    param_1[9] = 0;
    if (iVar5 != 0) {
      uVar4 = ((uint)(param_1[0xc] - iVar5) >> 4) * -0x55555555;
      uVar3 = uVar4;
      if (param_2 < uVar4) {
        uVar3 = param_2;
      }
      param_1[0xb] = iVar5 + uVar3 * 0x30;
      if (param_2 <= uVar4) {
        return 0;
      }
      param_2 = param_2 - uVar3;
    }
    param_1[0xb] = 0;
    if (param_2 == 0) {
      return 0;
    }
    param_1[7] = 2;
  }
  if (*param_1 != 0) {
    piVar7 = param_1 + 3;
    iVar5 = *piVar7;
    if (iVar5 == 0) {
      iVar8 = param_1[4];
    }
    else {
      if (param_2 == 0) {
        return 0;
      }
      iVar8 = param_1[4];
      pcVar6 = *(code **)(iVar8 + 0xc);
      while (iVar2 = (*pcVar6)(iVar5), iVar2 != 0) {
        param_2 = param_2 - 1;
        if (param_2 == 0) {
          return 0;
        }
      }
    }
    FUN_012d40d0(iVar5,iVar8);
    iVar5 = 0;
    *piVar7 = 0;
    if (param_1[1] != 0) {
      uVar9 = FUN_012217e8(param_1 + 1,param_2,piVar7);
      param_2 = (uint)(uVar9 >> 0x20);
      if ((uVar9 & 1) != 0) {
        return 0;
      }
      iVar5 = param_1[3];
      iVar8 = param_1[4];
    }
    FUN_012d40d0(iVar5,iVar8);
    iVar5 = param_1[5];
    param_1[3] = 0;
    if (iVar5 == 0) {
      iVar8 = param_1[6];
    }
    else {
      if (param_2 == 0) {
        return 0;
      }
      iVar8 = param_1[6];
      pcVar6 = *(code **)(iVar8 + 0xc);
      while (iVar2 = (*pcVar6)(iVar5), iVar2 != 0) {
        param_2 = param_2 - 1;
        if (param_2 == 0) {
          return 0;
        }
      }
    }
    FUN_012d40d0(iVar5,iVar8);
    param_1[5] = 0;
  }
  return param_2;
}

