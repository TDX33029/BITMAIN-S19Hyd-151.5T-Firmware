// FUN_01a4e594 @ 01a4e594 size=76 calls_out=0 calls_in=1
// strings: 

int FUN_01a4e594(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (param_2 == 0) {
    return 0;
  }
  piVar2 = (int *)*param_1;
  do {
    if (piVar2 == (int *)param_1[1]) {
      return param_2;
    }
    iVar1 = *piVar2;
    *param_1 = piVar2 + 0x30;
    if (iVar1 != 0) {
      param_2 = param_2 + -1;
    }
    piVar2 = piVar2 + 0x30;
  } while (param_2 != 0);
  return 0;
}

