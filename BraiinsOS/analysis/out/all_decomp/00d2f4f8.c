// FUN_00d2f4f8 @ 00d2f4f8 size=164 calls_out=3 calls_in=1
// strings: 

void FUN_00d2f4f8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  int *piVar4;
  int *local_1c;
  int *local_18;
  uint *local_14;
  
  piVar4 = (int *)*param_1;
  puVar3 = (uint *)(piVar4 + 0x20);
  if ((char)piVar4[0x1f] == '\0') {
    *(undefined1 *)(piVar4 + 0x1f) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = *puVar3 | 1;
  FUN_0163b708(piVar4 + 0x18);
  local_18 = piVar4 + 8;
  local_1c = piVar4 + 0x1c;
  local_14 = puVar3;
  FUN_00d2f79c(&local_1c);
  FUN_00d2f79c(&local_1c);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00d04c88(*param_1);
    return;
  }
  return;
}

