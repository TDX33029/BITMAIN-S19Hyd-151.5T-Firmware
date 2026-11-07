// FUN_008b39b4 @ 008b39b4 size=396 calls_out=3 calls_in=2
// strings: 

void FUN_008b39b4(int *param_1)

{
  char cVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*param_1 != 0 || param_1[1] != 0) {
    FUN_00a07b4c(param_1 + 2);
    return;
  }
  if (*(char *)((int)param_1 + 0x19) == '\x04') {
    cVar1 = *(char *)((int)param_1 + 0x72);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = (char)param_1[0x1b];
    }
    if (bVar5 && cVar1 == '\x03') {
      iVar3 = param_1[0x19];
      puVar4 = (undefined4 *)param_1[0x1a];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(iVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
      if (param_1[0x13] != 0) {
        thunk_FUN_016d3fb4(param_1[0x14]);
      }
    }
    (*(code *)**(undefined4 **)param_1[7])();
    if ((param_1[0x1d] & 0x7fffffffU) != 0) {
      thunk_FUN_016d3fb4(param_1[0x1e]);
    }
    *(undefined1 *)(param_1 + 6) = 0;
    goto LAB_008b3b34;
  }
  if (*(char *)((int)param_1 + 0x19) != '\x03') {
    return;
  }
  cVar1 = *(char *)((int)param_1 + 0x39);
  if (cVar1 == '\x05') {
    cVar1 = (char)param_1[0x11];
    if (cVar1 == '\x03') {
      cVar1 = *(char *)((int)param_1 + 0x81);
      iVar3 = 0xc;
LAB_008b3b0c:
      if (cVar1 != '\x03') goto LAB_008b3b20;
    }
    else {
      iVar3 = 0x10;
      if (cVar1 == '\x04') {
        cVar1 = (char)param_1[0x20];
        goto LAB_008b3b0c;
      }
      if (cVar1 != '\x05') goto LAB_008b3b20;
    }
    FUN_0080cf9c((int)param_1 + iVar3 + 0x3c);
  }
  else if (cVar1 == '\x04') {
    FUN_00a07b4c(param_1 + 0x10);
  }
  else {
    if (cVar1 != '\x03') goto LAB_008b3b34;
    if (*(char *)((int)param_1 + 0x51) == '\x03') {
      iVar3 = param_1[0xf];
      puVar4 = (undefined4 *)param_1[0x10];
      pcVar2 = (code *)*puVar4;
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(iVar3);
      }
      if (puVar4[1] != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
    }
  }
LAB_008b3b20:
  if (param_1[9] != 0) {
    thunk_FUN_016d3fb4(param_1[10]);
  }
LAB_008b3b34:
  *(undefined1 *)(param_1 + 6) = 0;
  return;
}

