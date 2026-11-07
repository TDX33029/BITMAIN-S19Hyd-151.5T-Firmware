// FUN_00d354b8 @ 00d354b8 size=332 calls_out=3 calls_in=2
// strings: 

void FUN_00d354b8(int param_1)

{
  char cVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  bool bVar5;
  
  if (*(char *)(param_1 + 0x20) == '\x03') {
    puVar4 = *(undefined4 **)(param_1 + 0x28);
    uVar3 = *(undefined4 *)(param_1 + 0x24);
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] == 0) {
      return;
    }
    thunk_FUN_01be4678(uVar3);
    return;
  }
  if (*(char *)(param_1 + 0x20) != '\x05') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x40)) {
  case 3:
    if (*(char *)(param_1 + 0x7c) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x78);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x54);
    }
    if (bVar5 && cVar1 == '\x04') {
      FUN_0193c3cc(param_1 + 0x58);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x78) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x74);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x70);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x50);
      }
    }
    goto LAB_00d355ec;
  case 5:
    if (*(char *)(param_1 + 0x78) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x74);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x70);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x50);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0x84) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x80);
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)(param_1 + 0x7c);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x5c);
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x30),1);
    break;
  default:
    return;
  }
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x38),1);
LAB_00d355ec:
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x2c),1);
  return;
}

