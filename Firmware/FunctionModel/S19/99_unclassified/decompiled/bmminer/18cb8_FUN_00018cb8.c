// FUN_00018cb8 @ 00018cb8  size=52  callers=5
// program: bmminer


int FUN_00018cb8(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = 0xff;
  iVar1 = 0;
  do {
    iVar3 = iVar1 + 1;
    iVar1 = FUN_00018c84(iVar1);
    if (iVar1 < iVar2) {
      iVar2 = iVar1;
    }
    iVar2 = (int)(short)iVar2;
    iVar1 = iVar3;
  } while (iVar3 != 4);
  return iVar2;
}

