// FUN_00db2428 @ 00db2428 size=292 calls_out=4 calls_in=3
// strings: 

void FUN_00db2428(int param_1)

{
  switch(*(undefined1 *)(param_1 + 0x48)) {
  case 3:
  case 5:
  case 7:
  case 9:
  case 0xb:
  case 0xd:
    if (*(char *)(param_1 + 0x58) != '\x03') {
      return;
    }
    if (*(int *)(param_1 + 0x50) == 0) {
      return;
    }
    FUN_00e43e74(*(int *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x54),1);
    return;
  case 4:
    if (*(char *)(param_1 + 0x100) == '\x03') {
      FUN_005c270c(param_1 + 0x58);
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x143) == '\x03') {
      FUN_005c270c(param_1 + 0x58);
      *(undefined2 *)(param_1 + 0x140) = 0;
      *(undefined1 *)(param_1 + 0x142) = 0;
      FUN_00e44114(*(undefined4 *)(param_1 + 0x4c));
      return;
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x110) == '\x03') {
      FUN_005c270c(param_1 + 0x60);
    }
    break;
  case 10:
    if (*(char *)(param_1 + 0x111) == '\x03') {
      FUN_005c270c(param_1 + 0x58);
LAB_00db2550:
      *(undefined1 *)(param_1 + 0x110) = 0;
      FUN_00e44114(*(undefined4 *)(param_1 + 0x4c));
      return;
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x111) == '\x03') {
      FUN_005c270c(param_1 + 0x58);
      goto LAB_00db2550;
    }
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x126) == '\x03') {
      FUN_005c270c(param_1 + 0x58);
      *(undefined1 *)(param_1 + 0x125) = 0;
      FUN_005c37bc(param_1 + 0x100);
      *(undefined1 *)(param_1 + 0x124) = 0;
    }
    break;
  default:
    return;
  }
  FUN_00e44114(*(undefined4 *)(param_1 + 0x4c));
  return;
}

