// FUN_00bd06d8 @ 00bd06d8 size=112 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00bd06d8(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  int local_14;
  
  piVar3 = (int *)*param_1;
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xbd0744);
    (*pcVar1)();
  }
  local_14 = (uint)local_14._1_3_ << 8;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  *puVar4 = piVar3;
  puVar4[1] = uStack_1c;
  puVar4[2] = uStack_18;
  puVar4[3] = local_14;
  return;
}

