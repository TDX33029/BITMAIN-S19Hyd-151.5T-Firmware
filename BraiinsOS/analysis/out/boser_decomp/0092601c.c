// FUN_0092601c @ 0092601c size=144 calls_out=4 calls_in=0
// strings: 

void FUN_0092601c(int param_1)

{
  char cVar1;
  int iVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x94);
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x644) == '\x03') {
      if (*(char *)(param_1 + 0x638) == '\x03') {
        iVar2 = param_1 + 0x370;
      }
      else {
        if (*(char *)(param_1 + 0x638) != '\0') goto LAB_00926094;
        iVar2 = param_1 + 0xa8;
      }
      FUN_00926ab4(iVar2);
    }
LAB_00926094:
    FUN_00927390(param_1 + 0x98);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_009260a0;
    }
    cVar1 = *(char *)(param_1 + 0x160);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x15c);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_009267f4(param_1 + 0xa0);
    }
  }
  param_1 = param_1 + 0x48;
LAB_009260a0:
  FUN_00f9604c(param_1);
  return;
}

