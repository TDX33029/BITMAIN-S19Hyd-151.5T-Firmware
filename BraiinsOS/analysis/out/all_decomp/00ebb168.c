// FUN_00ebb168 @ 00ebb168 size=176 calls_out=3 calls_in=2
// strings: 

void FUN_00ebb168(int param_1)

{
  char cVar1;
  
  if (*(char *)(param_1 + 0xac) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0xa9) != '\x03') {
    if (*(char *)(param_1 + 0xa9) == '\0') {
      FUN_00d82ff4(param_1 + 0x74);
      return;
    }
    return;
  }
  cVar1 = *(char *)(param_1 + 0x3d);
  if (cVar1 == '\x04') {
    FUN_00d82ff4(param_1 + 0x40);
    FUN_00e44900(*(undefined4 *)(param_1 + 0x34));
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 == '\0') {
        FUN_00d82ff4(param_1 + 4);
      }
      goto LAB_00ebb20c;
    }
    if (*(int *)(param_1 + 0x6c) != 0) {
      FUN_00e44660(*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),1);
    }
  }
  if (*(char *)(param_1 + 0x3c) != '\0') {
    FUN_00d82ff4(param_1 + 0x40);
  }
  *(undefined1 *)(param_1 + 0x3c) = 0;
LAB_00ebb20c:
  *(undefined1 *)(param_1 + 0xa8) = 0;
  return;
}

