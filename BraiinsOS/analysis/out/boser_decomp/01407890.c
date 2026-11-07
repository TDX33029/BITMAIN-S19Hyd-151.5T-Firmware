// FUN_01407890 @ 01407890 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_01407890(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = param_1[1];
  uVar1 = param_1[8];
  for (uVar5 = *param_1 & 0xfffffffe; uVar5 != (uVar1 & 0xfffffffe); uVar5 = uVar5 + 2) {
    uVar2 = (uVar5 & 0x3f) >> 1;
    if (uVar2 == 0x1f) {
      uVar2 = *(uint *)(uVar4 + 0x2e8);
      thunk_FUN_01be4678(uVar4);
      uVar4 = uVar2;
    }
    else {
      pcVar3 = (char *)(uVar4 + uVar2 * 0x18);
      if (*pcVar3 == '\0') {
        FUN_01406bcc(*(undefined4 *)(pcVar3 + 4));
      }
    }
  }
  if (uVar4 == 0) {
    return;
  }
  thunk_FUN_01be4678(uVar4);
  return;
}

