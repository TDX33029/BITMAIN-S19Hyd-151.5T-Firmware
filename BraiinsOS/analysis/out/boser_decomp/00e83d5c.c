// FUN_00e83d5c @ 00e83d5c size=152 calls_out=5 calls_in=2
// strings: 

void FUN_00e83d5c(int param_1)

{
  char cVar1;
  bool bVar2;
  
  switch(*(undefined1 *)(param_1 + 0x20)) {
  case 3:
    cVar1 = *(char *)(param_1 + 0xec);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xe8);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00b99500(param_1 + 0x2c);
      return;
    }
    return;
  case 4:
    FUN_00e7a7b0(param_1 + 0x28);
    goto LAB_00e83dec;
  case 5:
    FUN_00e7a7b0(param_1 + 0x28);
    break;
  case 6:
    FUN_00e7a7b0(param_1 + 0x130);
    if (*(int *)(param_1 + 0x28) != 2 || *(int *)(param_1 + 0x2c) != 0) {
      FUN_00b9a764();
    }
    break;
  default:
    return;
  }
  FUN_00a573e8(param_1 + 0x14);
LAB_00e83dec:
  FUN_0084ec48(param_1 + 8);
  return;
}

