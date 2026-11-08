// FUN_01a8c36c @ 01a8c36c size=76 calls_out=2 calls_in=4
// strings: 

void FUN_01a8c36c(int param_1)

{
  uint uVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x25d) != '\x03') {
    return;
  }
  FUN_01a6bb88(param_1 + 0x150);
  uVar1 = (uint)*(ushort *)(param_1 + 0x120);
  bVar2 = uVar1 != 3;
  if (bVar2) {
    uVar1 = *(uint *)(param_1 + 0x148);
  }
  if (bVar2 && uVar1 != 0) {
    FUN_01443048(uVar1,*(undefined4 *)(param_1 + 0x14c));
  }
  *(undefined1 *)(param_1 + 0x25c) = 0;
  return;
}

