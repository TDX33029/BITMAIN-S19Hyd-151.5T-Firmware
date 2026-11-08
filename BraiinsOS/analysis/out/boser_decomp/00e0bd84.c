// FUN_00e0bd84 @ 00e0bd84 size=280 calls_out=3 calls_in=1
// strings: 

void FUN_00e0bd84(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0xc9) == '\0') {
    if (*(int *)(param_1 + 0x20) < -0x7ffffffe) {
      return;
    }
    FUN_00e51c34();
    return;
  }
  if (*(char *)(param_1 + 0xc9) != '\x03') {
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x7d)) {
  case 0:
    iVar2 = *(int *)(param_1 + 0x50);
    goto LAB_00e0bd08;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    goto LAB_00e0bcfc;
  case 4:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    break;
  case 5:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x70),*(undefined4 *)(param_1 + 0x74));
  }
  *(undefined1 *)(param_1 + 0x7e) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 100),*(undefined4 *)(param_1 + 0x68));
LAB_00e0bcfc:
  iVar2 = *(int *)(param_1 + 0x50);
  *(undefined1 *)(param_1 + 0x7f) = 0;
LAB_00e0bd08:
  if (iVar2 < -0x7ffffffe) {
    return;
  }
  FUN_00e51c34(param_1 + 0x50);
  return;
}

