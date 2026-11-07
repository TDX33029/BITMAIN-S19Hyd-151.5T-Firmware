// FUN_015d0fb4 @ 015d0fb4 size=384 calls_out=5 calls_in=2
// strings: 

void FUN_015d0fb4(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int local_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  int *local_60;
  undefined1 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_1c = 0;
  local_28 = 0;
  local_2c = 0;
  local_34 = 0;
  local_3c = 0;
  local_40 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  local_58 = 0;
  local_5c = 0;
  local_60 = (int *)0x0;
  local_20 = 1;
  local_24 = 1;
  local_30 = 4;
  local_38 = 1;
  local_44 = 4;
  local_54 = 1;
  local_64 = 1;
  local_68 = 1;
  piVar4 = (int *)thunk_FUN_01be5118(0x50);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x50);
  }
  FUN_01bed4e2(piVar4,&local_68,0x50);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x15d10d0);
    (*pcVar1)();
  }
  local_64 = 0;
  local_68 = 0x12;
  local_60 = piVar4;
  FUN_015a9e04(&local_78,param_2,&local_68);
  if (local_78 == 4) {
    *param_1 = 4;
    param_1[1] = (int)piVar4;
    return;
  }
  param_1[1] = local_74;
  param_1[2] = iStack_70;
  param_1[3] = iStack_6c;
  *param_1 = local_78;
  piVar3 = piVar4 + 0x12;
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    FUN_015eba38(piVar4 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + -1;
  if (iVar5 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  if (piVar4[0xd] != -0x80000000) {
    FUN_015eea64();
  }
  FUN_019bb7e0(piVar4[4],piVar4[5]);
  FUN_015eea64(piVar4 + 8);
  if (piVar4 == (int *)&DAT_ffffffff) {
    return;
  }
  piVar3 = piVar4 + 1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(piVar4);
    return;
  }
  return;
}

