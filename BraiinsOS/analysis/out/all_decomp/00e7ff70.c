// FUN_00e7ff70 @ 00e7ff70 size=168 calls_out=5 calls_in=2
// strings: 

void FUN_00e7ff70(int param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 0xc9);
  if (cVar1 == '\0') {
    FUN_00e84298(param_1 + 0x60);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0xd8) == '\x04') {
      cVar1 = *(char *)(param_1 + 0x120);
      bVar2 = cVar1 == '\x03';
      if (bVar2) {
        cVar1 = *(char *)(param_1 + 0x11c);
      }
      if (bVar2 && cVar1 == '\x03') {
        FUN_00de3884(param_1 + 0xe4);
      }
      FUN_00e44900(*(undefined4 *)(param_1 + 0xd4));
    }
    else if ((*(char *)(param_1 + 0xd8) == '\x03') && (*(int *)(param_1 + 0xdc) != 0)) {
      FUN_00e44660(*(int *)(param_1 + 0xdc),*(undefined4 *)(param_1 + 0xe0),1);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00e8405c(param_1 + 0xd0);
  }
  FUN_00e84298(param_1);
  *(undefined1 *)(param_1 + 200) = 0;
  return;
}

