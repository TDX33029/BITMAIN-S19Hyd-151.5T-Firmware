// FUN_00dec4dc @ 00dec4dc size=128 calls_out=4 calls_in=0
// strings: 

void FUN_00dec4dc(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar1 = param_1[4];
  if (iVar1 != 0) {
    iVar2 = param_1[5];
    for (uVar3 = (uint)(param_1[7] - iVar2) >> 5; uVar3 != 0; uVar3 = uVar3 - 1) {
      FUN_00dec55c(iVar2);
      iVar2 = iVar2 + 0x20;
    }
    FUN_0134aee0(param_1[6],iVar1,4,0x20);
  }
  if (*param_1 != 2) {
    FUN_00dec580(param_1);
  }
  if (param_1[9] == -0x80000000) {
    return;
  }
  FUN_019bb7e0(param_1[9],param_1[10]);
  return;
}

