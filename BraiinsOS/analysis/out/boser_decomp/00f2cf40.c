// FUN_00f2cf40 @ 00f2cf40 size=120 calls_out=3 calls_in=2
// strings: 

void FUN_00f2cf40(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  
  cVar1 = *(char *)(param_1 + 0x42);
  if (cVar1 != '\x03') {
    if (cVar1 == '\x04') {
      FUN_00f2d00c(param_1 + 0x78);
      iVar3 = 0x68;
      *(undefined1 *)(param_1 + 0x41) = 0;
      iVar2 = 0x6c;
    }
    else {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_00f2d00c(param_1 + 0x80);
      iVar3 = 0x70;
      *(undefined1 *)(param_1 + 0x40) = 0;
      iVar2 = 0x74;
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + iVar3),*(undefined4 *)(param_1 + iVar2));
  }
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
  FUN_00d3b00c(param_1);
  return;
}

