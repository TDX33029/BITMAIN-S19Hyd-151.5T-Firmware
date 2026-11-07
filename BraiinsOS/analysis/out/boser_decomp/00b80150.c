// FUN_00b80150 @ 00b80150 size=256 calls_out=6 calls_in=2
// strings: 

void FUN_00b80150(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  switch(*(undefined1 *)(param_1 + 0x5a)) {
  case 0:
    FUN_00b697cc(param_1 + 0x50);
  default:
    goto switchD_00b8016c_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0xb9) == '\x03') {
      if (*(char *)(param_1 + 0xa9) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x98);
        bVar3 = cVar1 == '\x03';
        if (bVar3) {
          cVar1 = *(char *)(param_1 + 0x74);
        }
        if (bVar3 && cVar1 == '\x04') {
          FUN_0193c3cc(param_1 + 0x78);
        }
        FUN_00a43aa8(param_1 + 0xa0);
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
      else if (*(char *)(param_1 + 0xa9) == '\0') {
        FUN_00a43aa8(param_1 + 0x9c);
      }
      FUN_00b802e4(param_1 + 0xb0);
      *(undefined1 *)(param_1 + 0xb8) = 0;
      iVar2 = 0x50;
    }
    else {
      iVar2 = 0x58;
      if (*(char *)(param_1 + 0xb9) != '\0') break;
    }
    FUN_00b697cc(param_1 + 0x5c + iVar2);
    break;
  case 4:
    if (*(char *)(param_1 + 100) == '\x03') {
      iVar2 = param_1 + 0x60;
    }
    else {
      if (*(char *)(param_1 + 100) != '\0') break;
      iVar2 = param_1 + 0x5c;
    }
    FUN_00b802e4(iVar2);
    break;
  case 5:
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x5c),*(undefined4 *)(param_1 + 0x60));
  }
  *(undefined1 *)(param_1 + 0x58) = 0;
switchD_00b8016c_caseD_1:
  FUN_01431b40(param_1);
  return;
}

