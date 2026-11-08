// FUN_0174e3b8 @ 0174e3b8 size=128 calls_out=3 calls_in=1
// strings: 

int * FUN_0174e3b8(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0177a9c0(0xc);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_017141d0();
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      iVar2 = FUN_017141d0();
      piVar1[1] = iVar2;
      if (iVar2 != 0) {
        piVar1[2] = 0x1f;
        return piVar1;
      }
    }
    FUN_0174e374(piVar1);
  }
  return (int *)0x0;
}

