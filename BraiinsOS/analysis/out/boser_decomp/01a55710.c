// FUN_01a55710 @ 01a55710 size=76 calls_out=1 calls_in=0
// strings: 

int * FUN_01a55710(int *param_1)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_01a4e5e0();
  if (iVar2 != 0) {
    return (int *)0x0;
  }
  piVar1 = (int *)*param_1;
  do {
    piVar3 = piVar1;
    if (piVar3 == (int *)param_1[1]) {
      return (int *)0x0;
    }
    iVar2 = *piVar3;
    *param_1 = (int)(piVar3 + 0x30);
    piVar1 = piVar3 + 0x30;
  } while (iVar2 == 0);
  return piVar3 + 0x1c;
}

