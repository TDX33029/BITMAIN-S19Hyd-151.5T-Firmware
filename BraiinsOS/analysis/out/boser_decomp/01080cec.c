// FUN_01080cec @ 01080cec size=112 calls_out=4 calls_in=2
// strings: 

void FUN_01080cec(undefined4 *param_1)

{
  char cVar1;
  bool bVar2;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x04') {
    FUN_01080d88(param_1 + 0x10);
    FUN_0134c054(param_1[9],param_1[10],1,0x10);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_01080d50;
    }
    cVar1 = *(char *)(param_1 + 0x14);
    bVar2 = cVar1 == '\x03';
    if (bVar2) {
      cVar1 = *(char *)(param_1 + 0x13);
    }
    if (bVar2 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0xb);
    }
  }
  param_1 = param_1 + 5;
LAB_01080d50:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

