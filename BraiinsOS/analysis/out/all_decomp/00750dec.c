// FUN_00750dec @ 00750dec size=148 calls_out=1 calls_in=3
// strings: 

void FUN_00750dec(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar4 = param_1[3];
  iVar7 = 0;
  if (uVar4 == 0) {
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = *param_1;
    uVar6 = param_1[2];
    uVar2 = uVar6 - uVar3;
    if (uVar6 < uVar3) {
      uVar2 = uVar6;
    }
    if (uVar3 - uVar2 < uVar4) {
      iVar7 = uVar4 - (uVar3 - uVar2);
    }
    else {
      uVar3 = uVar2 + uVar4;
    }
  }
  uVar4 = param_1[1];
  iVar5 = (uVar3 - uVar2) + 1;
  iVar1 = uVar4 + uVar2 * 0x30 + 8;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    FUN_014f073c(iVar1);
    iVar1 = iVar1 + 0x30;
  }
  iVar7 = iVar7 + 1;
  iVar1 = uVar4 + 8;
  while (iVar7 = iVar7 + -1, iVar7 != 0) {
    FUN_014f073c(iVar1);
    iVar1 = iVar1 + 0x30;
  }
  return;
}

