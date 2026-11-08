// FUN_016bd8cc @ 016bd8cc size=84 calls_out=2 calls_in=3
// strings: 

void FUN_016bd8cc(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = *param_1;
  if (iVar2 == -0x80000000) {
    return;
  }
  iVar4 = param_1[1];
  iVar5 = param_1[2];
  for (iVar3 = 0; iVar5 != iVar3; iVar3 = iVar3 + 1) {
    puVar1 = (undefined4 *)(iVar4 + iVar3 * 0x10);
    FUN_0134bd64(*puVar1,puVar1[1]);
  }
  FUN_0134aee0(iVar2,iVar4,4,0x10);
  return;
}

