// FUN_006bb168 @ 006bb168 size=316 calls_out=2 calls_in=0
// strings: 

void FUN_006bb168(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  int iStack_20;
  
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  puVar3[5] = 0;
  *puVar3 = 0x80000000;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar4 = 0;
  puVar4[1] = 0;
  piVar5 = (int *)thunk_FUN_016d4a50(0x30);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x30);
  }
  *piVar5 = 1;
  piVar5[1] = 1;
  piVar5[2] = (int)puVar3;
  piVar5[3] = (int)puVar3;
  piVar5[4] = (int)puVar4;
  piVar5[5] = (int)puVar4;
  piVar5[6] = 1000;
  piVar5[7] = -0x80000000;
  piVar5[8] = 1;
  piVar5[9] = 0;
  piVar5[10] = iStack_20;
  piVar5[0xb] = 0;
  do {
    iVar6 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x6bb2a8);
    (*pcVar1)();
  }
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x1c);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x1c);
  }
  *(undefined1 *)(puVar3 + 6) = 0;
  puVar3[4] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = 0;
  param_1[3] = piVar5;
  *(undefined1 *)(param_1 + 2) = 0;
  *param_1 = piVar5;
  param_1[1] = puVar3;
  return;
}

