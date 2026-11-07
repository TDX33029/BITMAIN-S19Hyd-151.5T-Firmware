// FUN_0193ebd8 @ 0193ebd8 size=80 calls_out=3 calls_in=0
// strings: 

void FUN_0193ebd8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019da4fc(*(undefined4 *)(param_1 + 0x18));
  }
  FUN_0193f3b4(param_1 + 0x28);
  FUN_014b1410(param_1 + 0x568);
  return;
}

