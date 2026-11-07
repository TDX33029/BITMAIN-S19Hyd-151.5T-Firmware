// FUN_0082e0d4 @ 0082e0d4 size=172 calls_out=2 calls_in=0
// strings: 

void FUN_0082e0d4(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
  
  piVar6 = *(int **)(param_2 + 0x148);
  do {
    iVar3 = *piVar6;
    bVar2 = (bool)hasExclusiveAccess(piVar6);
  } while (!bVar2);
  *piVar6 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x82e180);
    (*pcVar1)();
  }
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar4 = param_3;
  puVar4[1] = param_4;
  puVar4[2] = piVar6;
  puVar5 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *(undefined1 *)(puVar5 + 4) = 0;
  *param_1 = 0xc;
  *puVar5 = 1;
  puVar5[1] = 1;
  puVar5[2] = puVar4;
  puVar5[3] = &DAT_0186003c;
  *(undefined4 **)(param_1 + 4) = puVar5;
  *(undefined **)(param_1 + 8) = &DAT_01860054;
  return;
}

