// FUN_01b55010 @ 01b55010 size=108 calls_out=3 calls_in=1
// strings: 

int * FUN_01b55010(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int extraout_r3;
  
  piVar1 = (int *)FUN_01b6b0a8(0xc);
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_01b2adb8();
    *piVar1 = iVar2;
    if (iVar2 != 0) {
      iVar3 = FUN_01b2adb8();
      iVar2 = extraout_r3;
      if (iVar3 != 0) {
        iVar2 = 0x1f;
      }
      piVar1[1] = iVar3;
      if (iVar3 != 0) {
        piVar1[2] = iVar2;
        return piVar1;
      }
    }
    FUN_01b54fcc(piVar1);
  }
  return (int *)0x0;
}

