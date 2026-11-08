// FUN_01743208 @ 01743208 size=108 calls_out=2 calls_in=1
// strings: 

void FUN_01743208(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int local_1c;
  int local_18;
  uint *local_14;
  
  puVar2 = (uint *)(param_1 + 0x80);
  if (*(char *)(param_1 + 0x7c) == '\0') {
    *(undefined1 *)(param_1 + 0x7c) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = *puVar2 | 1;
  FUN_019e03e8(param_1 + 0x60);
  local_18 = param_1 + 0x20;
  local_1c = param_1 + 0x70;
  local_14 = puVar2;
  FUN_0174328c(&local_1c);
  FUN_0174328c(&local_1c);
  return;
}

