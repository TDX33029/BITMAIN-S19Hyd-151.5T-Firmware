// FUN_00e039dc @ 00e039dc size=104 calls_out=3 calls_in=0
// strings: 

void FUN_00e039dc(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0xc2) != '\x03') {
      return;
    }
    FUN_00bf94b4(param_1 + 0x10);
    *(undefined2 *)(param_1 + 0xc0) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xd4);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0xc0);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_00df41b8(param_1 + 0x68);
    }
    FUN_00e032bc(param_1 + 0x38);
    return;
  }
  return;
}

