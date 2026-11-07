// FUN_0161f930 @ 0161f930 size=160 calls_out=2 calls_in=1
// strings: 

void FUN_0161f930(byte *param_1)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  bVar1 = *param_1;
  cVar2 = '\x02';
  uVar4 = 2;
  if (7 < bVar1) {
    cVar2 = bVar1 - 8;
  }
  if (cVar2 == '\0') {
    uVar3 = *(uint *)(param_1 + 4);
    if ((int)uVar3 < 0) {
      uVar4 = uVar3 ^ 0x80000000;
    }
    if (uVar4 == 0) {
      FUN_0134aee0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),4,8);
      return;
    }
    if (uVar4 == 1) {
      return;
    }
    FUN_0134bd64(uVar3,*(undefined4 *)(param_1 + 8));
    return;
  }
  if (cVar2 == '\x01') {
    if (*(int *)(param_1 + 4) == 3) {
      FUN_0134bd64(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
      return;
    }
    FUN_0134aee0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),1,0x10);
    return;
  }
  if ((cVar2 == '\x02') && (bVar1 != 7)) {
    return;
  }
  FUN_0134bd64(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  return;
}

