// FUN_0172bfe0 @ 0172bfe0 size=120 calls_out=3 calls_in=3
// strings: 

int * FUN_0172bfe0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0177a6c0(8);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_017141d0();
    *piVar1 = iVar2;
    iVar2 = FUN_017141d0();
    piVar1[1] = iVar2;
    if (iVar2 != 0 && *piVar1 != 0) {
      return piVar1;
    }
    FUN_0172bf9c(piVar1);
  }
  return (int *)0x0;
}

