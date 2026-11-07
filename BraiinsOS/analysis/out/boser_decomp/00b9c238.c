// FUN_00b9c238 @ 00b9c238 size=132 calls_out=4 calls_in=8
// strings: 

void FUN_00b9c238(int param_1)

{
  char cVar1;
  int iVar2;
  
  cVar1 = *(char *)(param_1 + 0x8b);
  if (cVar1 == '\0') {
    FUN_00b9c200(param_1 + 0x20);
    return;
  }
  if (cVar1 == '\x03') {
    FUN_0084ee30(param_1 + 0xa8);
    FUN_009286c8(param_1 + 0x90);
    FUN_0084eeb4(param_1 + 0x80);
    goto LAB_00b9c2b0;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0xc4) == '\0') {
    iVar2 = param_1 + 0xa8;
LAB_00b9c2a4:
    FUN_009286c8(iVar2);
  }
  else if (*(char *)(param_1 + 0xc4) == '\x03') {
    iVar2 = param_1 + 0x90;
    goto LAB_00b9c2a4;
  }
  FUN_0084eeb4(param_1 + 0x80);
LAB_00b9c2b0:
  *(undefined2 *)(param_1 + 0x88) = 0;
  return;
}

