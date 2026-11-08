// FUN_005f54a4 @ 005f54a4 size=160 calls_out=4 calls_in=1
// strings: 

void FUN_005f54a4(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x38) == '\x04') {
    if (*(char *)(param_1 + 0xa0) == '\x03') {
      FUN_01431b40(param_1 + 0x50);
      iVar2 = param_1 + 0x48;
    }
    else {
      if (*(char *)(param_1 + 0xa0) != '\0') goto LAB_005f5538;
      iVar2 = param_1 + 0x40;
    }
    FUN_0183a528(iVar2);
  }
  else if (*(char *)(param_1 + 0x38) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x94);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x58);
    }
    if (bVar3 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x90);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x8c);
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_019e12b8(param_1 + 0x6c);
        if (*(int *)(param_1 + 0x78) != 0) {
          (**(code **)(*(int *)(param_1 + 0x78) + 0xc))(*(undefined4 *)(param_1 + 0x7c));
        }
      }
    }
  }
LAB_005f5538:
  FUN_005efd2c(param_1 + 0xa8);
  return;
}

