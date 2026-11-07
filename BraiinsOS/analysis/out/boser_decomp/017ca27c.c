// FUN_017ca27c @ 017ca27c size=248 calls_out=4 calls_in=0
// strings: 

void FUN_017ca27c(int *param_1)

{
  char cVar1;
  uint uVar2;
  
  cVar1 = (char)param_1[0x1c7];
  if (cVar1 == '\0') {
    if (*param_1 != 4 || param_1[1] != 0) {
      FUN_017c2d1c(param_1);
    }
    if (param_1[0xe2] != 2) {
      FUN_017c2fb8();
    }
    FUN_017725ac(param_1 + 0x1c6);
    return;
  }
  if (cVar1 == '\x03') {
    uVar2 = param_1[0x1ca];
    if ((uVar2 & 7) != 4) {
      if (uVar2 == 5) goto LAB_017ca318;
      FUN_017c2d1c(param_1 + 0x1ca);
    }
    if (param_1[0x2ac] != 2) {
      FUN_017c2fb8();
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    if (param_1[0x1c8] != 4 || param_1[0x1c9] != 0) {
      FUN_017c2d1c();
    }
    *(undefined1 *)((int)param_1 + 0x71e) = 0;
    if (param_1[0xe4] == 5 && param_1[0xe5] == 0) {
      FUN_017ca424(param_1 + 0xe4);
    }
  }
LAB_017ca318:
  if (*(char *)((int)param_1 + 0x71d) != '\0') {
    FUN_017725ac(param_1 + 0x1c8);
  }
  *(undefined1 *)((int)param_1 + 0x71d) = 0;
  return;
}

