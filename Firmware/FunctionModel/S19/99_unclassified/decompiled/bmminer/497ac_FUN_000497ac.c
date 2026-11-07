// FUN_000497ac @ 000497ac  size=164  callers=0
// program: bmminer


int * FUN_000497ac(undefined4 *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  bool bVar4;
  
  piVar3 = param_1 + 1;
  piVar2 = (int *)param_2[1];
  if ((int *)param_2[1] == piVar3) {
    piVar2 = (int *)*param_1;
    while (piVar3 != (int *)piVar2[1]) {
      piVar2 = (int *)piVar2[1];
    }
    if (param_2 == piVar2) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar1 = (int *)param_2[2];
      if (piVar3 == piVar1) {
        piVar2 = piVar3;
      }
      else if (param_2 == (int *)piVar1[1]) {
        do {
          piVar2 = (int *)piVar1[2];
          if (piVar3 == piVar2) {
            return piVar2;
          }
          bVar4 = (int *)piVar2[1] == piVar1;
          piVar1 = piVar2;
        } while (bVar4);
      }
      else {
        piVar2 = piVar1;
      }
    }
  }
  else {
    while (piVar3 != (int *)*piVar2) {
      piVar2 = (int *)*piVar2;
    }
  }
  return piVar2;
}

