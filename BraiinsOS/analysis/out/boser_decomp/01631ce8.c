// FUN_01631ce8 @ 01631ce8 size=120 calls_out=4 calls_in=1
// strings: 

void FUN_01631ce8(byte *param_1)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  
  bVar1 = *param_1;
  if (bVar1 < 0xb) {
    return;
  }
  if (bVar1 == 0xb) {
    uVar5 = *(undefined4 *)(param_1 + 8);
    FUN_01631d60(uVar5,*(undefined4 *)(param_1 + 0xc));
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = 4;
    uVar4 = 0x14;
  }
  else {
    if (bVar1 != 0xc) {
      FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
      return;
    }
    uVar5 = *(undefined4 *)(param_1 + 8);
    FUN_01631d98(uVar5,*(undefined4 *)(param_1 + 0xc));
    uVar2 = *(undefined4 *)(param_1 + 4);
    uVar3 = 8;
    uVar4 = 0x10;
  }
  FUN_0134aee0(uVar2,uVar5,uVar3,uVar4);
  return;
}

