// FUN_01434e2c @ 01434e2c size=232 calls_out=3 calls_in=4
// strings: 

void FUN_01434e2c(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x58);
  if (cVar1 == '\0') {
    if (*(char *)(param_1 + 0x54) == '\x03') {
      FUN_01434db4(param_1 + 0x38);
      *(undefined1 *)(param_1 + 0x55) = 0;
      return;
    }
    if (*(char *)(param_1 + 0x54) != '\0') {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x30);
  }
  else {
    if (cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xf4) == '\x03') {
        FUN_01434db4(param_1 + 0xd8);
        *(undefined1 *)(param_1 + 0xf5) = 0;
        FUN_00a07b4c(param_1 + 0x60);
        return;
      }
      if (*(char *)(param_1 + 0xf4) == '\0') {
        FUN_016dffb2(*(undefined4 *)(param_1 + 0xd0));
      }
      FUN_00a07b4c(param_1 + 0x60);
      return;
    }
    if (cVar1 != '\x04') {
      return;
    }
    if (*(char *)(param_1 + 0xa4) == '\x03') {
      FUN_01434db4(param_1 + 0x88);
      *(undefined1 *)(param_1 + 0xa5) = 0;
      return;
    }
    if (*(char *)(param_1 + 0xa4) != '\0') {
      return;
    }
    uVar2 = *(undefined4 *)(param_1 + 0x80);
  }
  uVar2 = FUN_016dac50(uVar2);
  iVar3 = thunk_FUN_016dde14(6,uVar2,0,0,0,0,0);
  if (iVar3 == -4) {
    iVar3 = 0;
  }
  FUN_016d3496(iVar3);
  return;
}

