// FUN_006755e4 @ 006755e4 size=100 calls_out=3 calls_in=2
// strings: 

void FUN_006755e4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x5e);
  if (cVar1 == '\0') {
    FUN_0067593c(param_1 + 0x20);
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_006b3d8c((int *)(param_1 + 0x40));
      return;
    }
  }
  else {
    if (cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_01139b38(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
    }
    *(undefined2 *)(param_1 + 0x5c) = 0;
  }
  return;
}

