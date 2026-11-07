// FUN_01a8d230 @ 01a8d230 size=304 calls_out=6 calls_in=1
// strings: 

void FUN_01a8d230(int *param_1)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 != 3 || param_1[1] != 0) {
    FUN_005f6588(param_1);
    return;
  }
  FUN_019bb7e0(param_1[2],param_1[3]);
  if (param_1[5] != -0x80000000) {
    FUN_019bb7e0(param_1[5],param_1[6]);
    FUN_01a8d1e8(param_1 + 8);
  }
  puVar1 = (undefined1 *)param_1[0xc];
  if (puVar1 == &DAT_80000004) {
    return;
  }
  uVar2 = 1;
  if ((int)puVar1 < 0) {
    uVar2 = (uint)puVar1 ^ 0x80000000;
  }
  if (uVar2 == 0) {
    iVar4 = param_1[0xe];
    puVar3 = (undefined4 *)(iVar4 + 4);
    for (iVar5 = param_1[0xf]; iVar5 != 0; iVar5 = iVar5 + -1) {
      FUN_019bb7e0(puVar3[-1],*puVar3);
      puVar3 = puVar3 + 3;
    }
    FUN_0134c054(param_1[0xd],iVar4,4,0xc);
    return;
  }
  if (uVar2 == 1) {
    FUN_019bb7e0(puVar1,param_1[0xd]);
    FUN_0134aee0(param_1[0xf],param_1[0x10],4,4);
    return;
  }
  if (uVar2 != 2) {
    FUN_019bb7e0(param_1[0xd],param_1[0xe]);
    return;
  }
  iVar4 = param_1[0xe];
  puVar3 = (undefined4 *)(iVar4 + 4);
  for (iVar5 = param_1[0xf]; iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_019bb7e0(puVar3[-1],*puVar3);
    puVar3 = puVar3 + 3;
  }
  FUN_0132b958(param_1[0xd],iVar4,4,0xc);
  return;
}

