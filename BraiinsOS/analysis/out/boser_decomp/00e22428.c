// FUN_00e22428 @ 00e22428 size=168 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00e22428(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 uStack_24;
  undefined4 uStack_20;
  uint local_1c;
  
  piVar5 = (int *)*param_1;
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xe224cc);
    (*pcVar1)();
  }
  local_1c = local_1c & 0xffffff00;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar4 = piVar5;
  puVar4[1] = uStack_24;
  puVar4[2] = uStack_20;
  puVar4[3] = local_1c;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01181f8c(piVar5);
  }
  return CONCAT44(&UNK_01c16e54,puVar4);
}

