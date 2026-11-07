// FUN_016b50ec @ 016b50ec size=320 calls_out=3 calls_in=1
// strings: multiple epsilon transitions to same state | multiple epsilon transitions to same state

void FUN_016b50ec(undefined4 *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint *local_38;
  undefined1 *local_34;
  uint *local_30;
  undefined1 *local_2c;
  uint *local_28;
  code *local_24;
  
  local_44 = param_3;
  if (*(uint *)(param_2 + 0x180) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,*(uint *)(param_2 + 0x180),&DAT_01d08af8);
  }
  iVar4 = *(int *)(param_2 + 0x17c);
  local_40 = *(uint *)(param_2 + 0x184);
  uVar1 = *(uint *)(iVar4 + param_3 * 4);
  if (uVar1 < local_40) {
    local_3c = *(uint *)(param_2 + 0x174);
    if (local_3c <= uVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar1,local_3c,&DAT_01d08b08);
    }
    if (*(uint *)(*(int *)(param_2 + 0x170) + uVar1 * 4) == param_3) {
      *param_1 = 0x2f;
      param_1[1] = "multiple epsilon transitions to same state";
      param_1[2] = 0x2a;
      return;
    }
  }
  else {
    local_3c = *(uint *)(param_2 + 0x174);
  }
  if (local_3c <= local_40) {
    local_28 = &local_44;
    local_30 = &local_3c;
    local_38 = &local_40;
    local_24 = FUN_016cbc48;
    local_2c = &LAB_01a6a304;
    local_34 = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_0058fcf7,&local_38,&DAT_01d08ae8);
  }
  *(uint *)(*(int *)(param_2 + 0x170) + local_40 * 4) = param_3;
  *(uint *)(param_2 + 0x184) = local_40 + 1;
  iVar3 = *(int *)(param_2 + 0x160);
  *(uint *)(iVar4 + param_3 * 4) = local_40;
  iVar4 = *(int *)(param_2 + 0x168);
  if (iVar4 == iVar3) {
    FUN_015f5b78();
  }
  iVar3 = *(int *)(param_2 + 0x164);
  *(int *)(param_2 + 0x168) = iVar4 + 1;
  *param_1 = 0x30;
  puVar2 = (uint *)(iVar3 + iVar4 * 0x10);
  *puVar2 = param_3;
  puVar2[2] = param_5;
  puVar2[3] = param_6;
  return;
}

