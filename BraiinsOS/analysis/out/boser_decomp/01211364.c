// FUN_01211364 @ 01211364 size=248 calls_out=2 calls_in=0
// strings: 

uint FUN_01211364(int param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *(uint *)(param_1 + 0x408);
  uVar1 = FUN_01ab69e4();
  uVar4 = *(uint *)(param_1 + 0x888);
  if (uVar1 < uVar3) {
    uVar1 = uVar3;
  }
  uVar3 = FUN_01ab69e4(param_1 + 0x480);
  if (uVar3 < uVar4) {
    uVar3 = uVar4;
  }
  if ((*(char *)(param_1 + 0x990) == '\0') && (*(char *)(param_1 + 0x991) != '\0')) {
    uVar3 = 6;
  }
  iVar2 = FUN_01210d98(param_1 + 0x480,0x462ac5c7,0x46f73942,0x500266fd,0x3d6e394a,0x462ac5c7);
  if (*(char *)(param_1 + 0x998) == '\0') {
    if (*(char *)(param_1 + 0x999) == '\x01') {
      if (*(char *)(param_1 + 0x99a) == '\x01') {
        if (uVar3 <= uVar1) {
          uVar1 = uVar3;
        }
        if (uVar3 == 6) {
          return 6;
        }
        return uVar1;
      }
      if (uVar3 == 6) {
        return 6;
      }
    }
    uVar4 = uVar3;
    if (uVar1 < uVar3) {
      uVar4 = uVar1;
    }
    if (uVar3 == 6) {
      uVar4 = uVar1;
    }
    if (uVar3 != 5) {
      uVar1 = uVar4;
    }
    if (iVar2 == 0) {
      uVar1 = uVar4;
    }
  }
  return uVar1;
}

