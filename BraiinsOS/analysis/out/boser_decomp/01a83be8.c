// FUN_01a83be8 @ 01a83be8 size=136 calls_out=0 calls_in=2
// strings: 

byte FUN_01a83be8(int param_1)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_1 + 0x70);
  if (iVar3 - 3U < 2) {
    bVar1 = *(int *)(param_1 + 0xbc) == 0 && *(uint *)(param_1 + 0xb8) < *(uint *)(param_1 + 0xac);
  }
  else {
    if (iVar3 == 0) {
      uVar2 = *(uint *)(param_1 + 0x7c);
    }
    else {
      uVar2 = 0;
      if (iVar3 == 1) {
        uVar2 = *(uint *)(param_1 + 0x7c) - *(uint *)(param_1 + 0x80);
        if (*(uint *)(param_1 + 0x7c) < *(uint *)(param_1 + 0x80)) {
          uVar2 = 0;
        }
        if (*(int *)(param_1 + 0x84) != 0) {
          uVar2 = 0;
        }
      }
    }
    if (*(uint *)(param_1 + 0x88) < uVar2) {
      uVar2 = *(uint *)(param_1 + 0x88);
    }
    bVar1 = false;
    if (uVar2 != 0) {
      bVar1 = true;
    }
  }
  return bVar1 ^ 1;
}

