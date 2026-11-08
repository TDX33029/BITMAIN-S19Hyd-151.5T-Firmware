// FUN_01a32e3c @ 01a32e3c size=128 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a32e3c(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
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
    pcVar1 = (code *)software_udf(0xfdee,0x1a32eb8);
    (*pcVar1)();
  }
  local_14 = (uint)local_14._1_3_ << 8;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x38);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x38);
  }
  *puVar4 = piVar3;
  puVar4[1] = uStack_44;
  puVar4[2] = uStack_40;
  puVar4[3] = uStack_3c;
  puVar4[4] = local_38;
  puVar4[5] = uStack_34;
  puVar4[6] = uStack_30;
  puVar4[7] = uStack_2c;
  puVar4[8] = uStack_28;
  puVar4[9] = local_24;
  puVar4[10] = uStack_20;
  puVar4[0xb] = uStack_1c;
  puVar4[0xc] = uStack_18;
  puVar4[0xd] = local_14;
  return;
}

