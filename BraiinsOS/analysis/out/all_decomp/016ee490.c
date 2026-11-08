// FUN_016ee490 @ 016ee490 size=176 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_016ee490(int param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_0173cfb8();
  if (piVar1 != (int *)0x0) {
    iVar2 = FUN_0177b624(param_2,param_3);
    *piVar1 = iVar2;
    if (iVar2 != 0 || param_3 == 0) {
      piVar1[1] = param_3;
      *(int **)(param_1 + 8) = piVar1;
      return 1;
    }
    FUN_0177aafc(piVar1);
  }
  return 0;
}

