// FUN_00db2358 @ 00db2358 size=148 calls_out=3 calls_in=2
// strings: 

void FUN_00db2358(int param_1)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0x1c) != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0x14) != 0) {
      FUN_00e43e74(*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x18),1);
      return;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    if (*(char *)(param_1 + 0xff) == '\x03') {
      FUN_005c270c(param_1 + 0x20);
      *(undefined2 *)(param_1 + 0xfd) = 0;
      if (*(char *)(param_1 + 0xcc) == '\0') {
        uVar1 = *(undefined4 *)(param_1 + 0xc4);
        puVar2 = *(undefined4 **)(param_1 + 200);
        *puVar2 = *(undefined4 *)(param_1 + 0xc0);
        puVar2[1] = uVar1;
      }
      *(undefined1 *)(param_1 + 0xfc) = 0;
    }
    FUN_00e44114(*(undefined4 *)(param_1 + 0x10));
    return;
  }
  return;
}

