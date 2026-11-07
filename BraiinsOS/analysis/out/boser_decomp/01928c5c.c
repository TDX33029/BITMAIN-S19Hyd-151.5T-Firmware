// FUN_01928c5c @ 01928c5c size=104 calls_out=1 calls_in=2
// strings: 

void FUN_01928c5c(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    return;
  }
  iVar3 = 0;
  piVar4 = param_1;
  do {
    iVar1 = *piVar4;
    if (iVar1 != -0x80000000) {
      piVar2 = piVar4;
      if (iVar1 == -0x7fffffff) {
        iVar1 = piVar4[1];
        if (iVar1 == -0x80000000) goto LAB_01928cac;
        piVar2 = param_1 + iVar3 * 4 + 1;
      }
      FUN_0134bd64(iVar1,piVar2[1]);
    }
LAB_01928cac:
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 4;
    param_2 = param_2 + -1;
    if (param_2 == 0) {
      return;
    }
  } while( true );
}

