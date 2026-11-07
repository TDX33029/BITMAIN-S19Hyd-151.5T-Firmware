// FUN_018059b4 @ 018059b4 size=204 calls_out=4 calls_in=0
// strings: 

void FUN_018059b4(int *param_1)

{
  int iVar1;
  int iVar2;
  
  switch((char)param_1[0x1a2]) {
  case '\0':
    FUN_0134c054(param_1[0x1e],param_1[0x1c],4,0x20);
    if (*param_1 == 2 && param_1[1] == 0) {
      return;
    }
    FUN_01431b40(param_1);
    iVar1 = 0x58;
    iVar2 = 0x50;
    goto LAB_01805a84;
  default:
    return;
  case '\x03':
    FUN_01805838(param_1 + 0x1a4);
    break;
  case '\x06':
    FUN_018059a0(param_1 + 0x1a4);
    *(undefined1 *)((int)param_1 + 0x689) = 0;
  case '\x04':
  case '\x05':
    FUN_01431b40(param_1 + 0x188);
    FUN_01805838(param_1 + 0xf8);
    FUN_01805838(param_1 + 0x68);
    FUN_0134c054(param_1[0x62],param_1[0x60],4,0x20);
    *(undefined1 *)((int)param_1 + 0x68a) = 0;
  }
  iVar1 = 0x110;
  iVar2 = 0x108;
LAB_01805a84:
  FUN_0134c054(*(undefined4 *)((int)param_1 + iVar1),*(undefined4 *)((int)param_1 + iVar2),4,0x20);
  return;
}

