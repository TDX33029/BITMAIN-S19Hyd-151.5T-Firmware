// FUN_009deb3c @ 009deb3c size=272 calls_out=10 calls_in=2
// strings: 

void FUN_009deb3c(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int *piVar5;
  
  cVar1 = *(char *)(param_1 + 0x98);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x14d) == '\x04') {
      piVar5 = (int *)(param_1 + 0x150);
      if (*piVar5 != 4 || *(int *)(param_1 + 0x154) != 0) {
        FUN_01710ba4(param_1 + 400);
        FUN_01af7af8(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194),4,0x10);
        if (*piVar5 != 3 || *(int *)(param_1 + 0x154) != 0) {
          FUN_0142e6dc(piVar5);
        }
      }
      FUN_009d5afc(param_1 + 0x1a0);
    }
    else {
      if (*(char *)(param_1 + 0x14d) != '\x03') goto LAB_009dec14;
      puVar3 = *(undefined4 **)(param_1 + 0x154);
      uVar4 = *(undefined4 *)(param_1 + 0x150);
      pcVar2 = (code *)*puVar3;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(uVar4);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_01be4678(uVar4);
      }
    }
    *(undefined1 *)(param_1 + 0x14c) = 0;
    FUN_009ded20(param_1 + 0xa0);
  }
  else if (cVar1 != '\x03') {
    if (cVar1 != '\0') {
      return;
    }
    goto LAB_009dec20;
  }
LAB_009dec14:
  FUN_00668c84(*(undefined4 *)(param_1 + 0x90));
  param_1 = param_1 + 0x40;
LAB_009dec20:
  FUN_00a5a6e0();
  FUN_009dee28(param_1 + 0x3c);
  FUN_01706d0c(param_1 + 0x10);
  return;
}

