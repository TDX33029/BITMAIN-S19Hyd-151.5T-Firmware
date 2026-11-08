// FUN_00b579fc @ 00b579fc size=192 calls_out=4 calls_in=1
// strings: 

void FUN_00b579fc(int param_1)

{
  if (*(char *)(param_1 + 0x3c) == '\x03') {
    if (*(int *)(param_1 + 0x40) != 0) {
      FUN_00c81a4c(*(int *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44),1);
    }
LAB_00b57a34:
    *(undefined1 *)(param_1 + 0x3d) = 0;
    return;
  }
  if (*(char *)(param_1 + 0x3c) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 300) != '\x03') {
    if (*(char *)(param_1 + 300) == '\0') {
      FUN_00c822ec(*(undefined4 *)(param_1 + 0x124));
    }
    goto LAB_00b57a34;
  }
  if (*(char *)(param_1 + 0xac) == '\x04') {
    FUN_00b30fcc(param_1 + 0xc0);
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined2 *)(param_1 + 0xad) = 0;
  }
  else {
    if (*(char *)(param_1 + 0xac) != '\x03') goto LAB_00b57aa8;
    if (*(int *)(param_1 + 0xb8) != 0) {
      FUN_00c8204c(*(int *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),1);
    }
  }
  *(undefined1 *)(param_1 + 0xaf) = 0;
LAB_00b57aa8:
  *(undefined1 *)(param_1 + 0x12d) = 0;
  *(undefined1 *)(param_1 + 0x3d) = 0;
  return;
}

