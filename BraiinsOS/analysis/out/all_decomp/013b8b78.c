// FUN_013b8b78 @ 013b8b78 size=364 calls_out=3 calls_in=1
// strings: multiple epsilon transitions to same state

void FUN_013b8b78(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  code *local_34;
  uint *local_30;
  code *local_2c;
  uint *local_28;
  code *local_24;
  
  local_44 = param_3;
  if (*(uint *)(param_2 + 0x180) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_3,*(uint *)(param_2 + 0x180),&DAT_01894268);
  }
  iVar4 = *(int *)(param_2 + 0x17c);
  local_3c = *(uint *)(param_2 + 0x174);
  local_40 = *(uint *)(param_2 + 0x184);
  uVar1 = *(uint *)(iVar4 + param_3 * 4);
  if (uVar1 < local_40) {
    if (local_3c <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar1,local_3c,&DAT_01894278);
    }
    if (*(uint *)(*(int *)(param_2 + 0x170) + uVar1 * 4) == param_3) {
      *param_1 = 0x2f;
      param_1[1] = "multiple epsilon transitions to same state";
      param_1[2] = 0x2a;
      return;
    }
  }
  if (local_3c <= local_40) {
    local_2c = FUN_007883b8;
    local_34 = FUN_007883b8;
    local_38 = &local_40;
    local_24 = FUN_013bc8e0;
    local_28 = &local_44;
    local_30 = &local_3c;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0058f9b7,&local_38,&DAT_01894248);
  }
  *(uint *)(*(int *)(param_2 + 0x170) + local_40 * 4) = param_3;
  *(uint *)(iVar4 + param_3 * 4) = local_40;
  iVar4 = *(int *)(param_2 + 0x168);
  *(uint *)(param_2 + 0x184) = local_40 + 1;
  if (iVar4 == *(int *)(param_2 + 0x160)) {
    FUN_013c4150(param_2 + 0x160);
  }
  iVar2 = *(int *)(param_2 + 0x164);
  *(int *)(param_2 + 0x168) = iVar4 + 1;
  *param_1 = 0x30;
  puVar3 = (uint *)(iVar2 + iVar4 * 0x10);
  *puVar3 = param_3;
  puVar3[2] = param_5;
  puVar3[3] = param_6;
  return;
}

