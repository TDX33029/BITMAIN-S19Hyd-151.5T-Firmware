// FUN_0155ebac @ 0155ebac size=188 calls_out=2 calls_in=3
// strings: 

void FUN_0155ebac(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  
  uVar3 = param_1[3];
  iVar8 = 0;
  if (uVar3 == 0) {
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar6 = param_1[2];
    uVar1 = uVar6 - uVar2;
    if (uVar6 < uVar2) {
      uVar1 = uVar6;
    }
    if (uVar2 - uVar1 < uVar3) {
      iVar8 = uVar3 - (uVar2 - uVar1);
    }
    else {
      uVar2 = uVar1 + uVar3;
    }
  }
  uVar3 = param_1[1];
  iVar4 = uVar1 * 0x48;
  for (iVar5 = uVar2 - uVar1; iVar5 != 0; iVar5 = iVar5 + -1) {
    iVar7 = uVar3 + iVar4;
    FUN_0155e9e8(iVar7);
    if (*(int *)(iVar7 + 0x3c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar7 + 0x40));
    }
    iVar4 = iVar4 + 0x48;
  }
  for (; iVar8 != 0; iVar8 = iVar8 + -1) {
    FUN_0155e9e8(uVar3);
    if (*(int *)(uVar3 + 0x3c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(uVar3 + 0x40));
    }
    uVar3 = uVar3 + 0x48;
  }
  return;
}

