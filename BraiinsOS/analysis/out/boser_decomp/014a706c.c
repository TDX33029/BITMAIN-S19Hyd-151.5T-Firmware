// FUN_014a706c @ 014a706c size=100 calls_out=4 calls_in=2
// strings: 

void FUN_014a706c(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  
  bVar1 = *param_1;
  if (bVar1 < 3) {
    return;
  }
  if (bVar1 == 3) {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
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

