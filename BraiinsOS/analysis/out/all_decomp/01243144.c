// FUN_01243144 @ 01243144 size=376 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4 * FUN_01243144(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 local_6c;
  int *local_68;
  int *local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  int local_4c;
  int *local_48;
  int local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  undefined4 *puStack_30;
  undefined4 uStack_2c;
  int local_28;
  
  if (*param_2 != '\x04') {
    return (undefined4 *)&DAT_00000001;
  }
  local_68 = *(int **)(param_2 + 8);
  iVar5 = 0;
  local_58 = &local_6c;
  local_64 = local_68 + *(int *)(param_2 + 0xc) * 6;
  local_60 = 0;
  local_6c = param_4;
  local_5c = param_1;
  local_54 = param_3;
  piVar1 = (int *)FUN_01159348(&local_68);
  if (piVar1 == (int *)0x0) {
    local_40 = (int *)&DAT_00000004;
    local_38 = 0;
  }
  else {
    local_40 = piVar1;
    piVar2 = (int *)thunk_FUN_016d4a50(0x10);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,0x10);
    }
    *piVar2 = (int)piVar1;
    local_44 = 1;
    local_4c = 4;
    local_40 = local_68;
    local_3c = local_64;
    local_38 = local_60;
    local_34 = (int *)local_5c;
    puStack_30 = local_58;
    uStack_2c = local_54;
    local_48 = piVar2;
    while (iVar5 = local_44, iVar3 = FUN_01159348(&local_40), iVar3 != 0) {
      local_28 = iVar3;
      if (iVar5 == local_4c) {
        FUN_011cf828(&local_4c,iVar5,1,4,4);
        piVar2 = local_48;
      }
      piVar2[iVar5] = iVar3;
      local_44 = iVar5 + 1;
    }
    local_40 = local_48;
    local_38 = local_4c;
  }
  local_34 = local_40 + iVar5;
  local_3c = local_40;
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x10);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar4 = local_40;
  puVar4[1] = local_3c;
  puVar4[2] = local_38;
  puVar4[3] = local_34;
  return puVar4;
}

