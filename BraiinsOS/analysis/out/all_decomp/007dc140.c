// FUN_007dc140 @ 007dc140 size=104 calls_out=2 calls_in=0
// strings: 

void FUN_007dc140(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar3 = *(int **)(param_2 + 0x6c);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x7dc1a4);
    (*pcVar1)();
  }
  uVar7 = *(undefined4 *)(param_2 + 0x50);
  uVar6 = *(undefined4 *)(param_2 + 0x6c);
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar4 = 1;
  puVar4[1] = 1;
  puVar4[2] = uVar6;
  puVar4[3] = uVar7;
  *param_1 = puVar4;
  param_1[1] = &DAT_0185e51c;
  return;
}

