// FUN_005d012c @ 005d012c size=180 calls_out=3 calls_in=2
// strings: 

int * FUN_005d012c(int param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 *puVar5;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x98)) {
  case 0:
    puVar5 = *(undefined4 **)(param_1 + 0x88);
    *(undefined1 *)(param_1 + 0x94) = 0;
    *(int *)(param_1 + 0x8c) = param_1;
    *(undefined4 **)(param_1 + 0x90) = puVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20c20);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20c20);
  case 3:
    if (*(char *)(param_1 + 0x94) != '\0') {
      if (*(char *)(param_1 + 0x94) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20db4);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20db4);
    }
    puVar5 = *(undefined4 **)(param_1 + 0x90);
  }
  piVar4 = (int *)*puVar5;
  do {
    iVar3 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x5d01f0);
    (*pcVar1)();
  }
  *(undefined1 *)(param_1 + 0x94) = 1;
  FUN_0096a6b0(param_1);
  *(undefined1 *)(param_1 + 0x98) = 1;
  return piVar4;
}

