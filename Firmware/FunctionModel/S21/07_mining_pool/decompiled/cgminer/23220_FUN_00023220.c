// FUN_00023220 @ 00023220  size=52  callers=0
// program: cgminer


void FUN_00023220(sem_t *param_1)

{
  int iVar1;
  int *piVar2;
  
  do {
    while( true ) {
      iVar1 = sem_trywait(param_1);
      if (-1 < iVar1) break;
      piVar2 = __errno_location();
      if (*piVar2 != 4) {
        return;
      }
    }
  } while (iVar1 == 0);
  return;
}

