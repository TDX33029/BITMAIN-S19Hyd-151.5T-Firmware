// FUN_01a2d9a0 @ 01a2d9a0 size=244 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a2d9a0(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  int *local_20;
  int *local_1c;
  int local_18;
  undefined4 uStack_14;
  
  FUN_01a15574(&local_60,*(undefined4 *)(param_1 + 0x10));
  FUN_01a15264(&local_50,*(undefined4 *)(param_1 + 0x20));
  local_1c = *(int **)(param_1 + 0x24);
  do {
    iVar4 = *local_1c;
    bVar2 = (bool)hasExclusiveAccess(local_1c);
  } while (!bVar2);
  *local_1c = iVar4 + 1;
  if (-1 < iVar4) {
    piVar5 = local_1c + 0x11;
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = *piVar5 + 1;
    local_20 = *(int **)(param_1 + 0x2c);
    do {
      iVar4 = *local_20;
      bVar2 = (bool)hasExclusiveAccess(local_20);
    } while (!bVar2);
    *local_20 = iVar4 + 1;
    if (-1 < iVar4) {
      local_18 = (uint)local_18._1_3_ << 8;
      local_3c = uStack_5c;
      local_40 = local_60;
      local_2c = local_4c;
      local_30 = local_50;
      local_38 = uStack_58;
      local_28 = local_48;
      puVar3 = (undefined4 *)thunk_FUN_01be5118(0x30);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x30);
      }
      *puVar3 = local_40;
      puVar3[1] = local_3c;
      puVar3[2] = local_38;
      puVar3[3] = uStack_34;
      puVar3[4] = local_30;
      puVar3[5] = local_2c;
      puVar3[6] = local_28;
      puVar3[7] = uStack_24;
      puVar3[8] = local_20;
      puVar3[9] = local_1c;
      puVar3[10] = local_18;
      puVar3[0xb] = uStack_14;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a2da90);
  (*pcVar1)();
}

