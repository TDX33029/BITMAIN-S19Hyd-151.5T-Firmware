// FUN_010ec7f4 @ 010ec7f4 size=188 calls_out=4 calls_in=1
// strings: 

void FUN_010ec7f4(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  
  if (*(char *)(param_1 + 0xe4) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x1e);
  if (cVar1 == '\x05') {
    if (*(char *)(param_1 + 0x50) == '\x03') {
      FUN_00b6bb40(param_1 + 0x30);
    }
    goto switchD_010ec860_caseD_1;
  }
  if (cVar1 != '\x04') {
    if (cVar1 != '\x03') {
      return;
    }
    if (*(char *)(param_1 + 0x75) == '\x03') {
      FUN_00740564(param_1 + 0x20);
      *(undefined1 *)(param_1 + 0x74) = 0;
    }
    goto switchD_010ec860_caseD_1;
  }
  if (9 < *(byte *)(param_1 + 0xb8)) goto switchD_010ec860_caseD_1;
  iVar4 = param_1 + 0x20;
  switch(*(byte *)(param_1 + 0xb8)) {
  case 0:
    iVar4 = param_1 + 0x60;
    break;
  case 1:
  case 2:
    goto switchD_010ec860_caseD_1;
  case 7:
    uVar2 = *(undefined4 *)(param_1 + 0xc4);
    uVar3 = *(undefined4 *)(param_1 + 200);
    goto LAB_010ec8b8;
  case 8:
    uVar2 = *(undefined4 *)(param_1 + 0xc0);
    uVar3 = *(undefined4 *)(param_1 + 0xc4);
LAB_010ec8b8:
    FUN_019bb7e0(uVar2,uVar3);
  }
  FUN_005f649c(iVar4);
switchD_010ec860_caseD_1:
  *(undefined1 *)(param_1 + 0x1d) = 0;
  FUN_019bb7e0(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  return;
}

