// FUN_010b96c4 @ 010b96c4 size=124 calls_out=2 calls_in=0
// strings: 

void FUN_010b96c4(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  piVar5 = (int *)param_1[4];
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + 1;
  if (-1 < iVar4) {
    uVar7 = *param_1;
    uVar8 = param_1[1];
    uVar9 = param_1[2];
    uVar10 = param_1[3];
    piVar6 = (int *)param_1[5];
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (-1 < iVar4) {
      puVar3 = (undefined4 *)thunk_FUN_01be5118(0x18);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x18);
      }
      *puVar3 = uVar7;
      puVar3[1] = uVar8;
      puVar3[2] = uVar9;
      puVar3[3] = uVar10;
      puVar3[4] = piVar5;
      puVar3[5] = piVar6;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x10b973c);
  (*pcVar1)();
}

