// FUN_01747c4c @ 01747c4c size=208 calls_out=4 calls_in=2
// strings: 

void FUN_01747c4c(int *param_1)

{
  int iVar1;
  int iVar2;
  
  switch((char)param_1[0x1b9]) {
  case '\0':
    FUN_0134c054(param_1[0x1e],param_1[0x1c],4,0x20);
    if (*param_1 == 2 && param_1[1] == 0) {
      return;
    }
    FUN_01431b40(param_1);
    iVar1 = 0x58;
    iVar2 = 0x50;
    goto LAB_01747d20;
  default:
    return;
  case '\x03':
    FUN_01a8c36c(param_1 + 0x1ba);
    break;
  case '\x06':
    FUN_01a8c3fc(param_1 + 0x1bc);
    *(undefined1 *)((int)param_1 + 0x6e5) = 0;
  case '\x04':
  case '\x05':
    FUN_01431b40(param_1 + 0x198);
    FUN_01a8c36c(param_1 + 0x100);
    FUN_01a8c36c(param_1 + 0x68);
    FUN_0134c054(param_1[0x62],param_1[0x60],4,0x20);
    *(undefined1 *)((int)param_1 + 0x6e6) = 0;
  }
  iVar1 = 0x110;
  iVar2 = 0x108;
LAB_01747d20:
  FUN_0134c054(*(undefined4 *)((int)param_1 + iVar1),*(undefined4 *)((int)param_1 + iVar2),4,0x20);
  return;
}

