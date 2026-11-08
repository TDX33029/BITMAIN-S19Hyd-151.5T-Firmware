// FUN_006f55bc @ 006f55bc size=152 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_006f55bc(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  
  if ((*param_1 == 1) && ((uint)param_1[2] <= (uint)param_1[1])) {
    return 1;
  }
  if (*param_1 != 0) {
    param_1[1] = param_1[1] + 1;
  }
  uVar6 = param_1[5];
  iVar3 = param_1[0x20];
  iVar4 = param_1[0x21];
  iVar5 = param_1[0x22];
  uVar7 = FUN_006f5184(param_1);
  uVar1 = (undefined4)(uVar7 >> 0x20);
  if ((uVar7 & 1) == 0) {
    uVar7 = FUN_006f30d4(uVar1);
  }
  else {
    uVar7 = CONCAT44(uVar1,1);
  }
  iVar2 = (int)(uVar7 >> 0x20);
  uVar1 = (undefined4)uVar7;
  if ((uVar7 & 1) != 0) {
    *(int *)(iVar2 + 0x80) = iVar3;
    *(int *)(iVar2 + 0x84) = iVar4;
    *(int *)(iVar2 + 0x88) = iVar5;
    uVar1 = 1;
    if (uVar6 <= *(uint *)(iVar2 + 0x14)) {
      *(uint *)(iVar2 + 0x14) = uVar6;
    }
  }
  return uVar1;
}

