// FUN_01a2e9bc @ 01a2e9bc size=204 calls_out=3 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a2e9bc(int param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  int *local_18;
  int *local_14;
  int local_10;
  undefined4 uStack_c;
  
  FUN_01a15574(&local_38,*(undefined4 *)(param_1 + 0x10));
  local_14 = *(int **)(param_1 + 0x14);
  do {
    iVar4 = *local_14;
    bVar2 = (bool)hasExclusiveAccess(local_14);
  } while (!bVar2);
  *local_14 = iVar4 + 1;
  if (-1 < iVar4) {
    piVar5 = local_14 + 0x11;
    do {
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = *piVar5 + 1;
    local_18 = *(int **)(param_1 + 0x28);
    do {
      iVar4 = *local_18;
      bVar2 = (bool)hasExclusiveAccess(local_18);
    } while (!bVar2);
    *local_18 = iVar4 + 1;
    if (-1 < iVar4) {
      local_24 = uStack_34;
      local_28 = local_38;
      local_10 = (uint)local_10._1_3_ << 8;
      local_20 = uStack_30;
      puVar3 = (undefined4 *)thunk_FUN_01be5118(0x20);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x20);
      }
      *puVar3 = local_28;
      puVar3[1] = local_24;
      puVar3[2] = local_20;
      puVar3[3] = uStack_1c;
      puVar3[4] = local_18;
      puVar3[5] = local_14;
      puVar3[6] = local_10;
      puVar3[7] = uStack_c;
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a2ea84);
  (*pcVar1)();
}

