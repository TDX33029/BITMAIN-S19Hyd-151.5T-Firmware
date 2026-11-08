// FUN_0004c83c @ 0004c83c  size=52  callers=0
// program: bmminer


void FUN_0004c83c(sem_t *param_1)

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

