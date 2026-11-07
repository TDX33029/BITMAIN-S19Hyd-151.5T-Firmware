// FUN_00e21ef4 @ 00e21ef4 size=196 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_00e21ef4(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int *local_28;
  uint local_24;
  
  piVar5 = (int *)*param_1;
  do {
    iVar3 = *piVar5;
    bVar2 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar2);
  *piVar5 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xe21fb4);
    (*pcVar1)();
  }
  FUN_01961644(&local_60);
  local_48 = local_60;
  uStack_44 = uStack_5c;
  uStack_40 = uStack_58;
  uStack_3c = uStack_54;
  uStack_38 = uStack_50;
  local_34 = uStack_4c;
  local_24 = local_24 & 0xffffff00;
  local_28 = piVar5;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  *puVar4 = local_48;
  puVar4[1] = uStack_44;
  puVar4[2] = uStack_40;
  puVar4[3] = uStack_3c;
  puVar4[4] = uStack_38;
  puVar4[5] = local_34;
  puVar4[6] = uStack_30;
  puVar4[7] = uStack_2c;
  puVar4[8] = local_28;
  puVar4[9] = local_24;
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
  return CONCAT44(&UNK_01c16e14,puVar4);
}

