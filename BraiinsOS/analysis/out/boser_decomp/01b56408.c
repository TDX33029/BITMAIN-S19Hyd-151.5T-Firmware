// FUN_01b56408 @ 01b56408 size=220 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_01b56408(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfe;
  FUN_01b323f0(*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_01b323f0(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_01b323f0(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_01b1f904(*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_01b1f904(*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_01b1f904(*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_01b1f904(*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  while( true ) {
    if (*(uint *)(param_1 + 0x70) <= uVar2) break;
    iVar1 = uVar2 * 4;
    uVar2 = uVar2 + 1;
    FUN_01b54fcc(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar1));
  }
  FUN_01b6b1c4();
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_01b6b1c4(*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return 0;
}

