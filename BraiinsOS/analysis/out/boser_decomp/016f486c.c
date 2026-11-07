// FUN_016f486c @ 016f486c size=156 calls_out=1 calls_in=5
// strings: 

undefined4 FUN_016f486c(int param_1,uint param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar4 = 0;
  do {
    iVar6 = iVar4 + (param_2 >> 1);
    puVar2 = (undefined4 *)(param_1 + iVar6 * 0x10);
    uVar5 = puVar2[1];
    uVar3 = param_4;
    if (uVar5 < param_4) {
      uVar3 = uVar5;
    }
    iVar1 = FUN_01bed842(*puVar2,param_3,uVar3);
    param_2 = param_2 - (param_2 >> 1);
    if (iVar1 == 0) {
      iVar1 = uVar5 - param_4;
    }
    if (iVar1 < 1) {
      iVar4 = iVar6;
    }
  } while (1 < param_2);
  puVar2 = (undefined4 *)(param_1 + iVar4 * 0x10);
  uVar5 = puVar2[1];
  uVar3 = param_4;
  if (uVar5 < param_4) {
    uVar3 = uVar5;
  }
  iVar6 = FUN_01bed842(*puVar2,param_3,uVar3);
  if (iVar6 == 0) {
    iVar6 = uVar5 - param_4;
  }
  if (iVar6 == 0) {
    return *(undefined4 *)(param_1 + iVar4 * 0x10 + 8);
  }
  return 0;
}

