// FUN_014d9d74 @ 014d9d74 size=80 calls_out=2 calls_in=0
// strings: 

void FUN_014d9d74(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xf8);
  if (cVar1 == '\0') {
    FUN_014de9e8(param_1 + 0x10);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_014de9e8(param_1 + 0x150);
    FUN_00a07b4c(param_1 + 0x100);
    return;
  }
  if (cVar1 == '\x04') {
    FUN_014de9e8(param_1 + 0x100);
    return;
  }
  return;
}

