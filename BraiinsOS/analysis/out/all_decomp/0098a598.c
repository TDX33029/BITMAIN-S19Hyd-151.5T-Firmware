// FUN_0098a598 @ 0098a598 size=124 calls_out=4 calls_in=2
// strings: 

void FUN_0098a598(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if (*(char *)(param_1 + 0x23e) != '\0') {
    if (*(char *)(param_1 + 0x23e) == '\x03') {
      FUN_0096d46c(param_1);
      *(undefined2 *)(param_1 + 0x23c) = 0;
      return;
    }
    return;
  }
  FUN_0096d314(param_1 + 0x120);
  puVar4 = (undefined4 *)(param_1 + 0x238);
  FUN_01663cc4(*puVar4);
  piVar2 = (int *)*puVar4;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar4);
    return;
  }
  return;
}

