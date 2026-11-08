// FUN_01960bec @ 01960bec size=100 calls_out=4 calls_in=0
// strings: 

void FUN_01960bec(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    return;
  }
  if (bVar1 == 3) {
    FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
    return;
  }
  if (bVar1 == 4) {
    uVar2 = *(undefined4 *)(param_1 + 8);
    FUN_0196b060(uVar2,*(undefined4 *)(param_1 + 0xc));
    FUN_0134aee0(*(undefined4 *)(param_1 + 4),uVar2,8,0x18);
    return;
  }
  FUN_0196afa8(param_1 + 4);
  return;
}

