// FUN_009d4320 @ 009d4320 size=144 calls_out=1 calls_in=1
// strings: 

void FUN_009d4320(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  
  uVar3 = param_1[3];
  iVar4 = 0;
  if (uVar3 == 0) {
    uVar1 = 0;
    uVar2 = 0;
  }
  else {
    uVar2 = *param_1;
    uVar6 = param_1[2];
    uVar1 = uVar6 - uVar2;
    if (uVar6 < uVar2) {
      uVar1 = uVar6;
    }
    if (uVar2 - uVar1 < uVar3) {
      iVar4 = uVar3 - (uVar2 - uVar1);
    }
    else {
      uVar2 = uVar1 + uVar3;
    }
  }
  uVar3 = param_1[1];
  puVar7 = (undefined4 *)(uVar3 + uVar1 * 0x10 + 4);
  for (iVar5 = uVar2 - uVar1; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_019bb7e0(puVar7[-1],*puVar7);
    puVar7 = puVar7 + 4;
  }
  puVar7 = (undefined4 *)(uVar3 + 4);
  for (; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_019bb7e0(puVar7[-1],*puVar7);
    puVar7 = puVar7 + 4;
  }
  return;
}

