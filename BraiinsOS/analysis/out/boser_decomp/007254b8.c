// FUN_007254b8 @ 007254b8 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_007254b8(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = param_1[1];
  puVar1 = (undefined4 *)(iVar2 + 4);
  for (iVar4 = param_1[2]; iVar4 != 0; iVar4 = iVar4 + -1) {
    FUN_019bb7e0(puVar1[-1],*puVar1);
    puVar1 = puVar1 + 3;
  }
  FUN_0134c054(*param_1,iVar2,4,0xc);
  iVar4 = param_1[4];
  iVar3 = param_1[5];
  for (iVar2 = 0; iVar3 != iVar2; iVar2 = iVar2 + 1) {
    puVar1 = (undefined4 *)(iVar4 + iVar2 * 8);
    FUN_01be6d98(*puVar1,puVar1[1]);
  }
  FUN_0134c054(param_1[3],iVar4,4,8);
  return;
}

