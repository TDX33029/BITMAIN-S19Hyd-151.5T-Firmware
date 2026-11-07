// FUN_01714e64 @ 01714e64 size=80 calls_out=0 calls_in=7
// strings: 

int FUN_01714e64(int *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_1[1];
  if (0 < iVar2) {
    piVar1 = (int *)(*param_1 + iVar2 * 4);
    iVar3 = iVar2;
    do {
      piVar1 = piVar1 + -1;
      if (*piVar1 != 0) {
        return iVar3;
      }
      iVar3 = iVar3 + -1;
      iVar2 = 0;
    } while (iVar3 != 0);
  }
  return iVar2;
}

