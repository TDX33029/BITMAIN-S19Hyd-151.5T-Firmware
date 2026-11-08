// FUN_0102a328 @ 0102a328 size=160 calls_out=1 calls_in=1
// strings: 

void FUN_0102a328(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  
  uVar5 = param_1[3];
  if (uVar5 != 0) {
    uVar3 = *param_1;
    uVar7 = param_1[1];
    uVar4 = param_1[2];
    param_1[3] = 0;
    uVar1 = uVar3;
    if (uVar4 < uVar3) {
      uVar1 = 0;
    }
    uVar3 = uVar3 + (uVar1 - uVar4);
    if (uVar5 <= uVar3) {
      uVar3 = uVar5;
    }
    iVar6 = uVar3 + 1;
    iVar2 = uVar7 + uVar4 * 0x30 + uVar1 * -0x30 + 8;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_014f073c(iVar2);
      iVar2 = iVar2 + 0x30;
    }
    iVar6 = (uVar5 - uVar3) + 1;
    iVar2 = uVar7 + 8;
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_014f073c(iVar2);
      iVar2 = iVar2 + 0x30;
    }
  }
  return;
}

