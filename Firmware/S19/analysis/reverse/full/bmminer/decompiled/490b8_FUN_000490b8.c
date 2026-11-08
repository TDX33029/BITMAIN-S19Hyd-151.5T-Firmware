// FUN_000490b8 @ 000490b8  size=128  callers=2
// program: bmminer


int FUN_000490b8(int *param_1,undefined4 param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  void *local_1c;
  
  piVar3 = (int *)*param_1;
  while( true ) {
    if (piVar3 == param_1 + 1) {
      return 0;
    }
    FUN_000498b4(piVar3[4],&local_1c);
    iVar2 = (*(code *)param_1[9])(param_2,local_1c);
    free(local_1c);
    if (iVar2 == 0) break;
    piVar1 = piVar3 + 1;
    if (iVar2 < 0) {
      piVar1 = piVar3;
    }
    piVar3 = (int *)*piVar1;
  }
  return (int)piVar3;
}

