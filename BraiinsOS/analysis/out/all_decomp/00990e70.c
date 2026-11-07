// FUN_00990e70 @ 00990e70 size=96 calls_out=2 calls_in=0
// strings: 

void FUN_00990e70(undefined4 *param_1)

{
  code *pcVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  bool bVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  
  piVar7 = (int *)*param_1;
  uVar2 = *(undefined2 *)((int)param_1 + 6);
  uVar3 = *(undefined2 *)(param_1 + 1);
  do {
    iVar5 = *piVar7;
    bVar4 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar4);
  *piVar7 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x990ecc);
    (*pcVar1)();
  }
  puVar6 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *(undefined2 *)((int)puVar6 + 6) = uVar2;
  *(undefined2 *)(puVar6 + 1) = uVar3;
  *puVar6 = piVar7;
  return;
}

