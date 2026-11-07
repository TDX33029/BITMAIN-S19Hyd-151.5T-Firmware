// FUN_011d176c @ 011d176c size=112 calls_out=4 calls_in=2
// strings: 

void FUN_011d176c(int param_1)

{
  char cVar1;
  
  cVar1 = *(char *)(param_1 + 0x210);
  if (cVar1 == '\0') {
    FUN_0119d37c(param_1);
    return;
  }
  if (cVar1 != '\x03') {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_011d1834(param_1 + 0x218);
  }
  *(undefined1 *)(param_1 + 0x213) = 0;
  FUN_005f1224(param_1 + 0x120);
  *(undefined1 *)(param_1 + 0x214) = 0;
  if (*(char *)(param_1 + 0x211) != '\0') {
    FUN_0119d3ac(param_1 + 0x220);
  }
  *(undefined2 *)(param_1 + 0x211) = 0;
  return;
}

