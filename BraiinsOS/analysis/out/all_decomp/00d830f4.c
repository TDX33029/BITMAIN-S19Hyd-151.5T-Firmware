// FUN_00d830f4 @ 00d830f4 size=124 calls_out=3 calls_in=5
// strings: 

void FUN_00d830f4(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x39);
  if (cVar1 == '\0') {
    FUN_00d82ff4(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x68) != 0) {
      FUN_00e44660(*(int *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),1);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00d82ff4(param_1 + 0x3c);
    FUN_00e44900(*(undefined4 *)(param_1 + 0x30));
  }
  if (*(char *)(param_1 + 0x38) != '\0') {
    FUN_00d82ff4(param_1 + 0x3c);
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

