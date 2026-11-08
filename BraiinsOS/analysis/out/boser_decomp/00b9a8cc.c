// FUN_00b9a8cc @ 00b9a8cc size=108 calls_out=4 calls_in=33
// strings: 

void FUN_00b9a8cc(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x97);
  if (cVar1 == '\0') {
    FUN_00b9c200(param_1 + 0x20);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_00b9c104(param_1 + 0x98);
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_00b9c238(param_1 + 0x98);
  }
  *(undefined1 *)(param_1 + 0x95) = 0;
  if (*(char *)(param_1 + 0x94) != '\0') {
    FUN_01822488(param_1);
  }
  *(undefined1 *)(param_1 + 0x96) = 0;
  *(undefined1 *)(param_1 + 0x94) = 0;
  return;
}

