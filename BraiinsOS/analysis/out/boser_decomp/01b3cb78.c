// FUN_01b3cb78 @ 01b3cb78 size=100 calls_out=3 calls_in=3
// strings: 

int * FUN_01b3cb78(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_01b6ad8c(8);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_01b2adb8();
    *piVar1 = iVar2;
    iVar2 = FUN_01b2adb8();
    piVar1[1] = iVar2;
    if (iVar2 != 0 && *piVar1 != 0) {
      return piVar1;
    }
    FUN_01b3cb34(piVar1);
  }
  return (int *)0x0;
}

