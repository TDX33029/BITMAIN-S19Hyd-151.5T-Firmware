// FUN_0070c288 @ 0070c288 size=84 calls_out=2 calls_in=0
// strings: 

void FUN_0070c288(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  
  piVar5 = (int *)*param_1;
  do {
    iVar4 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar4 + 1;
  if (iVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x70c2d8);
    (*pcVar1)();
  }
  uVar6 = param_1[1];
  puVar3 = (undefined4 *)thunk_FUN_01be5118(8);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,8);
  }
  *puVar3 = piVar5;
  puVar3[1] = uVar6;
  return;
}

