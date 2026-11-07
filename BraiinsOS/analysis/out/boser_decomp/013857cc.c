// FUN_013857cc @ 013857cc size=156 calls_out=2 calls_in=5
// strings: 

void FUN_013857cc(int *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int local_30;
  int iStack_24;
  
  if (*param_1 == 0) {
    piVar3 = (int *)thunk_FUN_01be5118(0x24);
    if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x24);
    }
    *piVar3 = 1;
    piVar3[1] = 1;
    piVar3[2] = 0;
    piVar3[3] = 0;
    piVar3[4] = local_30;
    piVar3[5] = 0;
    piVar3[6] = 0;
    piVar3[7] = iStack_24;
    piVar3[8] = 0;
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1385864);
      (*pcVar1)();
    }
    *param_1 = (int)piVar3;
  }
  return;
}

