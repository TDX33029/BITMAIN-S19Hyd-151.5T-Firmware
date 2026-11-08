// FUN_0117ea44 @ 0117ea44 size=416 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_0117ea44(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  uint *puVar2;
  int *piVar3;
  undefined8 uVar4;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  int iStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  local_50 = *(uint *)(param_2 + 4);
  local_4c = *(uint *)(param_2 + 8);
  local_38 = *(undefined4 *)(param_2 + 0xc);
  local_60 = 4;
  piVar3 = *(int **)(param_1 + 4);
  if (local_50 == 0) {
    local_38 = 0;
  }
  local_44 = 0;
  local_54 = 0;
  local_58 = (uint)(local_50 != 0);
  local_5c = 0;
  local_64 = 0;
  local_48 = local_58;
  iStack_40 = local_50;
  uStack_3c = local_4c;
  if (*(int *)(param_1 + 8) == 0) {
    while( true ) {
      uVar4 = FUN_00f45584(&local_58);
      iVar1 = (int)uVar4;
      if (iVar1 == 0) break;
      local_2c = *(undefined4 *)(iVar1 + 8);
      local_30 = *(undefined4 *)(iVar1 + 4);
      local_34 = 0x80000000;
      local_28 = param_3;
      uVar4 = FUN_011cf8a8(param_1 + 0xc,(int)((ulonglong)uVar4 >> 0x20),&local_34,param_4,param_5);
      FUN_011590bc(&local_64,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    }
  }
  else {
    iVar1 = FUN_00f45584(&local_58);
    if (iVar1 != 0) {
                    /* WARNING: Could not recover jumptable at 0x0117eb20. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar3 = (int *)(*(code *)(&DAT_0117eb24 + *(int *)(&DAT_0117eb24 + *piVar3 * 4)))();
      return (uint *)piVar3;
    }
  }
  local_50 = local_64;
  local_4c = local_60 + local_5c * 4;
  local_58 = local_60;
  local_54 = local_60;
  puVar2 = (uint *)thunk_FUN_016d4a50(0x10);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar2 = local_58;
  puVar2[1] = local_54;
  puVar2[2] = local_50;
  puVar2[3] = local_4c;
  return puVar2;
}

