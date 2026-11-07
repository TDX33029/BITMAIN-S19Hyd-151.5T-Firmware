// FUN_01652be4 @ 01652be4 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_01652be4(int param_1)

{
  bool bVar1;
  
  do {
    bVar1 = (bool)hasExclusiveAccess(0x1d519e0);
  } while (!bVar1);
  DAT_01d519e0 = DAT_01d519e0 + -1;
  FUN_0134c054(*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20),4,4);
  if (*(int *)(param_1 + 0x14) == 3) {
    return;
  }
  FUN_01651cc8(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18));
  return;
}

