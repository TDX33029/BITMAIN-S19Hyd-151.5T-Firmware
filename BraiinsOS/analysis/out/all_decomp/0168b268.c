// FUN_0168b268 @ 0168b268 size=56 calls_out=0 calls_in=0
// strings: 

int * FUN_0168b268(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  piVar1 = (int *)*param_1;
  do {
    piVar3 = piVar1;
    if (piVar3 == (int *)param_1[1]) {
      return (int *)0x0;
    }
    iVar2 = *piVar3;
    *param_1 = piVar3 + 0x1c;
    piVar1 = piVar3 + 0x1c;
  } while (iVar2 != 1);
  return piVar3 + 2;
}

