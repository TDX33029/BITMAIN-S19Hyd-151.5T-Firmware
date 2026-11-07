// FUN_01429694 @ 01429694 size=196 calls_out=2 calls_in=3
// strings: 

int * FUN_01429694(void)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_28;
  int local_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  piVar3 = (int *)thunk_FUN_01be5118(0x38);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x38);
  }
  *piVar3 = 1;
  piVar3[1] = 1;
  piVar3[2] = iStack_40;
  piVar3[3] = iStack_3c;
  piVar3[4] = local_38;
  piVar3[5] = iStack_34;
  piVar3[6] = 0;
  piVar3[7] = 0;
  piVar3[8] = iStack_28;
  piVar3[9] = local_24;
  piVar3[10] = iStack_20;
  piVar3[0xb] = iStack_1c;
  piVar3[0xc] = iStack_18;
  piVar3[0xd] = iStack_14;
  do {
    iVar4 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1429758);
    (*pcVar1)();
  }
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x14);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x14);
  }
  puVar5[4] = piVar3;
  *(undefined1 *)(puVar5 + 3) = 0;
  puVar5[2] = 0;
  *puVar5 = 1;
  puVar5[1] = 1;
  return piVar3;
}

