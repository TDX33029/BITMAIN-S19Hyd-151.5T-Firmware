// FUN_0174fea4 @ 0174fea4 size=232 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_0174fea4(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(byte *)(param_1 + 0x88) = *(byte *)(param_1 + 0x88) & 0xfe;
  FUN_0171c904(*(undefined4 *)(param_1 + 0x54));
  *(undefined4 *)(param_1 + 0x54) = 0;
  FUN_0171c904(*(undefined4 *)(param_1 + 0x58));
  *(undefined4 *)(param_1 + 0x58) = 0;
  FUN_0171c904(*(undefined4 *)(param_1 + 0x5c));
  *(undefined4 *)(param_1 + 0x5c) = 0;
  FUN_017046e0(*(undefined4 *)(param_1 + 0x60));
  *(undefined4 *)(param_1 + 0x60) = 0;
  FUN_017046e0(*(undefined4 *)(param_1 + 100));
  *(undefined4 *)(param_1 + 100) = 0;
  FUN_017046e0(*(undefined4 *)(param_1 + 0x68));
  *(undefined4 *)(param_1 + 0x68) = 0;
  FUN_017046e0(*(undefined4 *)(param_1 + 0x6c));
  *(undefined4 *)(param_1 + 0x6c) = 0;
  if (*(int *)(param_1 + 0x70) != 0) {
    do {
      iVar1 = uVar2 * 4;
      uVar2 = uVar2 + 1;
      FUN_0174e374(*(undefined4 *)(*(int *)(param_1 + 0x74) + iVar1));
    } while (uVar2 < *(uint *)(param_1 + 0x70));
  }
  FUN_0177aafc(*(undefined4 *)(param_1 + 0x74));
  *(undefined4 *)(param_1 + 0x74) = 0;
  *(undefined4 *)(param_1 + 0x70) = 0;
  FUN_0177aafc(*(undefined4 *)(param_1 + 0x78));
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x84) = 0;
  return 0;
}

