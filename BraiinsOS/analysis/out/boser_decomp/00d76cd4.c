// FUN_00d76cd4 @ 00d76cd4 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_00d76cd4(undefined4 *param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  puVar1 = (undefined1 *)*param_1;
  if (puVar1 == &DAT_80000004) {
    return;
  }
  uVar3 = 1;
  if ((int)puVar1 < 0) {
    uVar3 = (uint)puVar1 ^ 0x80000000;
  }
  if (uVar3 == 0) {
    iVar6 = param_1[2];
    puVar5 = (undefined4 *)(iVar6 + 4);
    for (iVar7 = param_1[3]; iVar7 != 0; iVar7 = iVar7 + -1) {
      FUN_0134bd64(puVar5[-1],*puVar5);
      puVar5 = puVar5 + 3;
    }
    uVar2 = param_1[1];
    uVar4 = 0xc;
  }
  else {
    if (uVar3 != 1) {
      if (uVar3 != 2) {
        FUN_019bb7e0(param_1[1],param_1[2]);
        return;
      }
      iVar6 = param_1[2];
      puVar5 = (undefined4 *)(iVar6 + 4);
      for (iVar7 = param_1[3]; iVar7 != 0; iVar7 = iVar7 + -1) {
        FUN_019bb7e0(puVar5[-1],*puVar5);
        puVar5 = puVar5 + 3;
      }
      FUN_0132b958(param_1[1],iVar6,4,0xc);
      return;
    }
    FUN_019bb7e0(puVar1,param_1[1]);
    uVar2 = param_1[3];
    iVar6 = param_1[4];
    uVar4 = 4;
  }
  FUN_0134aee0(uVar2,iVar6,4,uVar4);
  return;
}

