// FUN_0117ef2c @ 0117ef2c size=688 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

uint * FUN_0117ef2c(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                   undefined4 param_5)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint local_6c;
  uint local_68;
  int local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 local_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*param_2 != '\x05') {
    return (uint *)&DAT_00000001;
  }
  local_58 = *(uint *)(param_2 + 4);
  local_54 = *(uint *)(param_2 + 8);
  local_40 = *(undefined4 *)(param_2 + 0xc);
  local_68 = 4;
  puVar3 = *(uint **)(param_1 + 4);
  if (local_58 == 0) {
    local_40 = 0;
  }
  local_4c = 0;
  local_5c = 0;
  local_60 = (uint)(local_58 != 0);
  local_64 = 0;
  local_6c = 0;
  local_50 = local_60;
  iStack_48 = local_58;
  uStack_44 = local_54;
  if (*(int *)(param_1 + 8) == 0) {
    while( true ) {
      uVar4 = FUN_00f45584(&local_60);
      iVar1 = (int)uVar4;
      if (iVar1 == 0) break;
      local_30 = *(undefined4 *)(iVar1 + 8);
      local_34 = *(undefined4 *)(iVar1 + 4);
      local_38 = 0x80000000;
      local_2c = param_3;
      uVar4 = FUN_011cf8a8(param_1 + 0xc,(int)((ulonglong)uVar4 >> 0x20),&local_38,param_4,param_5);
      FUN_011590bc(&local_6c,(int)uVar4,(int)((ulonglong)uVar4 >> 0x20));
    }
  }
  else {
    iVar1 = FUN_00f45584(&local_60);
    if (iVar1 != 0) {
      iVar1 = 4;
      if (2 < *puVar3) {
        iVar1 = *puVar3 - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x0117f010. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      piVar2 = (int *)(*(code *)(&DAT_0117f014 + *(int *)(&DAT_0117f014 + iVar1 * 4)))();
      return (uint *)piVar2;
    }
  }
  local_58 = local_6c;
  local_54 = local_68 + local_64 * 4;
  local_60 = local_68;
  local_5c = local_68;
  puVar3 = (uint *)thunk_FUN_016d4a50(0x10);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *puVar3 = local_60;
  puVar3[1] = local_5c;
  puVar3[2] = local_58;
  puVar3[3] = local_54;
  return puVar3;
}

