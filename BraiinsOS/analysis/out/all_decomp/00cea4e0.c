// FUN_00cea4e0 @ 00cea4e0 size=100 calls_out=2 calls_in=2
// strings: 

void FUN_00cea4e0(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0xf);
  if (cVar1 == '\x03') {
    FUN_00cea588(param_1 + 0x18);
  }
  else if (cVar1 == '\x04') {
    FUN_00cea648(param_1 + 0x10);
  }
  else if (cVar1 != '\x05') {
    return;
  }
  *(undefined1 *)(param_1 + 0xd) = 0;
  if (*(char *)(param_1 + 0xc) != '\0') {
    FUN_00cea648(param_1 + 0x10);
  }
  *(undefined1 *)(param_1 + 0xe) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  return;
}

