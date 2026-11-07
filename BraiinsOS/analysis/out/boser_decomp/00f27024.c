// FUN_00f27024 @ 00f27024 size=152 calls_out=5 calls_in=2
// strings: 

void FUN_00f27024(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x1c)) {
  case 3:
    cVar1 = *(char *)(param_1 + 0xe8);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xe4);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00b99500(param_1 + 0x28);
      return;
    }
    return;
  case 4:
    FUN_00b99b94(param_1 + 0x20);
    goto LAB_00f270b4;
  case 5:
    FUN_00b99b94(param_1 + 0x20);
    break;
  case 6:
    FUN_00b99b94(param_1 + 0x128);
    if (*(int *)(param_1 + 0x20) != 2 || *(int *)(param_1 + 0x24) != 0) {
      FUN_00b9a764();
    }
    break;
  default:
    return;
  }
  FUN_00a573e8(param_1 + 0x10);
LAB_00f270b4:
  FUN_0084ec48(param_1 + 4);
  return;
}

