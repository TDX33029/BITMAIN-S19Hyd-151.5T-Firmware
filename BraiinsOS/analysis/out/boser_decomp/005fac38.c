// FUN_005fac38 @ 005fac38 size=48 calls_out=1 calls_in=4
// strings: 

void FUN_005fac38(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x14);
  if ((cVar1 != '\x03' && cVar1 != '\x04') && (cVar1 != '\x05')) {
    return;
  }
  if (*(char *)(param_1 + 0x3c) == '\x03') {
    FUN_00b71be0(param_1 + 0x28);
    return;
  }
  return;
}

