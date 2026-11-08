// FUN_0188da88 @ 0188da88 size=124 calls_out=2 calls_in=2
// strings: 

void FUN_0188da88(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iStack_20;
  int iStack_1c;
  int local_18;
  int iStack_14;
  
  piVar2 = (int *)thunk_FUN_01be5118(0x20);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  *piVar2 = 1;
  piVar2[1] = 1;
  piVar2[2] = iStack_20;
  piVar2[3] = iStack_1c;
  piVar2[4] = local_18;
  piVar2[5] = iStack_14;
  piVar2[6] = 0;
  piVar2[7] = 0;
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + 1;
  if (iVar3 < 0) {
    software_udf(0xfdee,0x188daf4);
    return;
  }
  return;
}

