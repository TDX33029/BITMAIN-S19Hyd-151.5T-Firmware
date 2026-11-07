// FUN_016eeb10 @ 016eeb10 size=192 calls_out=1 calls_in=0
// strings: 

ulonglong FUN_016eeb10(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  
  piVar4 = *(int **)(param_1 + 8);
  piVar2 = *(int **)(param_2 + 8);
  if (piVar2 != (int *)0x0 && piVar4 != (int *)0x0) {
    piVar3 = (int *)*piVar4;
    if ((int *)*piVar2 != (int *)0x0 && piVar3 != (int *)0x0) {
      if (*piVar3 != *(int *)*piVar2) {
        return ZEXT48(piVar2) << 0x20;
      }
      if (piVar3[4] == 0) {
        return 1;
      }
      iVar1 = FUN_016dd50a(piVar4[1],piVar2[1]);
      return (ulonglong)(iVar1 == 0);
    }
  }
  return 0xfffffffe;
}

