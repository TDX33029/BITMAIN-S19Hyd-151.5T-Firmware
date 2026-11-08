// FUN_019a2ffc @ 019a2ffc size=116 calls_out=2 calls_in=47
// strings: 

void FUN_019a2ffc(int param_1)

{
  bool bVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  
  puVar2 = *(undefined1 **)(param_1 + 0x10);
  if ((puVar2 != (undefined1 *)0x0) && (iVar4 = *(int *)(param_1 + 0x14), *puVar2 = 0, iVar4 != 0))
  {
    thunk_FUN_01be4678(puVar2);
  }
  if (param_1 == -1) {
    return;
  }
  piVar3 = (int *)(param_1 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

