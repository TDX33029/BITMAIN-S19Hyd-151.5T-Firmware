// FUN_0188512c @ 0188512c size=88 calls_out=2 calls_in=0
// strings: 

void FUN_0188512c(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  if (piVar5 != (int *)0x0) {
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x1885180);
      (*pcVar1)();
    }
  }
  puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,4);
  }
  *puVar4 = piVar5;
  return;
}

