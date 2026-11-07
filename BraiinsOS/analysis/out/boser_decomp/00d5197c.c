// FUN_00d5197c @ 00d5197c size=52 calls_out=2 calls_in=0
// strings: 

int FUN_00d5197c(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;
  
  FUN_0071227c();
  uVar1 = *(uint *)(param_1 + 0x48);
  uVar3 = *(int *)(param_1 + 0x4c) - (uint)(uVar1 < 3);
  bVar4 = 1 < uVar1 - 3;
  if (uVar3 == 0 && bVar4 <= uVar3) {
    return uVar3 - !bVar4;
  }
  iVar2 = FUN_005f6588((uint *)(param_1 + 0x48));
  return iVar2;
}

