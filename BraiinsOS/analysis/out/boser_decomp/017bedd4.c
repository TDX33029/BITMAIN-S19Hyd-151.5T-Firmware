// FUN_017bedd4 @ 017bedd4 size=196 calls_out=5 calls_in=2
// strings: 

void FUN_017bedd4(int *param_1)

{
  char cVar1;
  code *pcVar2;
  int unaff_r4;
  undefined4 *puVar3;
  bool bVar4;
  
  if (*param_1 == 0) {
    cVar1 = (char)param_1[0x1c9];
    if (cVar1 == '\0') {
      FUN_0177357c(param_1 + 2);
      FUN_01773654(param_1 + 0xe4);
      FUN_017725ac(param_1 + 0x1c8);
      return;
    }
    if (cVar1 == '\x03') {
      FUN_017bed90(param_1 + 0x1cc);
    }
    else {
      if (cVar1 != '\x04') {
        return;
      }
      FUN_0177357c(param_1 + 0x1ca);
      *(undefined1 *)((int)param_1 + 0x726) = 0;
      if (param_1[0xe6] == 5 && param_1[0xe7] == 0) {
        FUN_017736f8();
      }
    }
    if (*(char *)((int)param_1 + 0x725) != '\0') {
      FUN_017725ac(param_1 + 0x1ca);
    }
    *(undefined1 *)((int)param_1 + 0x725) = 0;
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  bVar4 = param_1[2] == 0 && param_1[3] == 0;
  if (param_1[2] != 0 || param_1[3] != 0) {
    unaff_r4 = param_1[4];
    bVar4 = unaff_r4 == 0;
  }
  if (!bVar4) {
    puVar3 = (undefined4 *)param_1[5];
    pcVar2 = (code *)*puVar3;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(unaff_r4);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_01be4678(unaff_r4);
      return;
    }
  }
  return;
}

