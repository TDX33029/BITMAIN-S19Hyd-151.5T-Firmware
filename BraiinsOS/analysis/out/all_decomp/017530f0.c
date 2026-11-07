// FUN_017530f0 @ 017530f0 size=240 calls_out=8 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x01753048) */

int * FUN_017530f0(void)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0177a9c0(0x90);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
    if (iVar2 == 0) {
      iVar2 = FUN_01752fc8();
      *piVar1 = iVar2;
    }
    iVar2 = *(int *)(iVar2 + 0x28);
    piVar1[0xb] = 1;
    piVar1[0xc] = iVar2;
    FUN_01781e28(piVar1 + 0xd);
    FUN_016f19c4(piVar1 + 10);
    if (*(code **)(*piVar1 + 4) == (code *)0x0) {
      return piVar1;
    }
    iVar2 = (**(code **)(*piVar1 + 4))(piVar1);
    if (iVar2 != 0) {
      return piVar1;
    }
    FUN_016f19e8(&DAT_018de68c,piVar1,piVar1 + 10);
    FUN_01781f20(piVar1 + 0xd);
    FUN_0177aafc(piVar1);
  }
  return (int *)0x0;
}

