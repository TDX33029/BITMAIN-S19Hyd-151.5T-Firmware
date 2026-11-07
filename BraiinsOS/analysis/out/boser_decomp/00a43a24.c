// FUN_00a43a24 @ 00a43a24 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_00a43a24(int param_1)

{
  char cVar1;
  bool bVar2;
  
  if (*(char *)(param_1 + 0x4d) == '\0') {
    FUN_00a43aa8(param_1 + 0x40);
    return;
  }
  if (*(char *)(param_1 + 0x4d) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x3c);
  bVar2 = cVar1 == '\x03';
  if (bVar2) {
    cVar1 = *(char *)(param_1 + 0x18);
  }
  if (bVar2 && cVar1 == '\x04') {
    FUN_0193c3cc(param_1 + 0x1c);
  }
  FUN_00a43aa8(param_1 + 0x44);
  *(undefined1 *)(param_1 + 0x4c) = 0;
  return;
}

