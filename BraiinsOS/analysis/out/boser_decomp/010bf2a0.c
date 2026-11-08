// FUN_010bf2a0 @ 010bf2a0 size=56 calls_out=3 calls_in=3
// strings: 

void FUN_010bf2a0(int param_1)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  
  FUN_0142e6dc();
  uVar1 = *(uint *)(param_1 + 0x40);
  uVar2 = *(int *)(param_1 + 0x44) - (uint)(uVar1 < 3);
  bVar3 = 1 < uVar1 - 3;
  if (uVar2 != 0 || uVar2 < bVar3) {
    FUN_010bf310((uint *)(param_1 + 0x40),uVar2 - !bVar3);
  }
  FUN_0178e884(*(undefined4 *)(param_1 + 0x78));
  return;
}

