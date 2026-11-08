// FUN_01a7630c @ 01a7630c size=748 calls_out=8 calls_in=1
// strings: 

void FUN_01a7630c(undefined4 *param_1,int param_2,undefined4 param_3,uint *param_4,int param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint local_4c;
  uint *local_48;
  uint *local_44;
  uint local_40;
  uint *puStack_3c;
  uint uStack_38;
  uint *local_30;
  uint *local_2c;
  uint *local_28;
  
  FUN_015e8ad4(&local_30,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_01299464(&local_48,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  local_60 = local_30;
  local_5c = local_2c;
  local_58 = local_28;
  local_54 = local_48;
  local_50 = local_44;
  local_4c = local_40;
  if ((param_4 == *(uint **)(param_5 + 0x10)) &&
     (iVar1 = thunk_FUN_01bed842(param_3,*(undefined4 *)(param_5 + 0xc),param_4), iVar1 == 0)) {
    FUN_015a66dc(&local_60,*(undefined4 *)(param_5 + 0x3c),*(undefined4 *)(param_5 + 0x40));
    local_30 = local_60;
    local_2c = local_5c;
    local_28 = local_58;
    FUN_0134aee0(local_54,local_50,4,4);
    puVar2 = local_28;
    FUN_012fbd94(&local_48,local_2c,local_28);
    if (local_48 != (uint *)0x0) {
      puVar2 = local_2c;
      if (local_30 != (uint *)&DAT_80000000) {
        local_48 = local_30;
        puStack_3c = local_44;
        uStack_38 = local_40;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_48,&DAT_01d2d594,&DAT_01d2d5b4);
      }
      goto LAB_01a765cc;
    }
  }
  else {
    puVar2 = (uint *)((int)local_58 - (int)param_4);
    if (local_4c != 0) {
      uVar4 = 0;
      puVar5 = local_50;
      uVar3 = local_4c;
LAB_01a763cc:
      uVar3 = uVar3 - 1;
      if ((uint *)*puVar5 < puVar2) goto code_r0x01a763dc;
      puVar5 = puVar5 + 1;
      if (uVar4 + 1 < local_4c) {
        do {
          if ((uint *)*puVar5 < puVar2) {
            local_50[uVar4] = *puVar5;
            uVar4 = uVar4 + 1;
          }
          uVar3 = uVar3 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar3 != 0);
      }
      local_4c = uVar4;
    }
LAB_01a763f0:
    if (param_4 <= local_58) {
      local_58 = puVar2;
    }
    if ((local_58 < *(uint **)(param_5 + 0x10)) ||
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_5 + 0xc),
                                   (undefined1 *)
                                   ((int)local_5c +
                                   ((int)local_58 - (int)*(uint **)(param_5 + 0x10)))), iVar1 != 0))
    {
      FUN_015a62b0(&local_60,param_5 + 8);
    }
    if (*(int *)(param_5 + 0x34) != 0) {
      iVar1 = param_5;
      do {
        iVar1 = *(int *)(iVar1 + 0x30);
        FUN_015a62b0(&local_60,iVar1 + 8);
      } while (*(int *)(iVar1 + 0x34) != 0);
    }
    do {
      iVar1 = param_5;
      param_5 = *(int *)(iVar1 + 0x30);
    } while (*(int *)(iVar1 + 0x34) != 0);
    FUN_015a66dc(&local_60,*(undefined4 *)(iVar1 + 0x3c),*(undefined4 *)(iVar1 + 0x40));
    local_30 = local_60;
    local_2c = local_5c;
    local_28 = local_58;
    FUN_0134aee0(local_54,local_50,4,4);
    puVar2 = local_28;
    FUN_012fbd94(&local_48,local_2c,local_28);
    if (local_48 != (uint *)0x0) {
      puVar2 = local_2c;
      if (local_30 != (uint *)&DAT_80000000) {
        local_48 = local_30;
        puStack_3c = local_44;
        uStack_38 = local_40;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_48,&DAT_01d2d594,&DAT_01d2d5a4);
      }
      goto LAB_01a765cc;
    }
  }
  local_44 = puVar2;
  puVar2 = local_30;
  local_28 = local_2c;
LAB_01a765cc:
  *param_1 = puVar2;
  param_1[1] = local_28;
  param_1[2] = local_44;
  return;
code_r0x01a763dc:
  uVar4 = uVar4 + 1;
  puVar5 = puVar5 + 1;
  if (uVar3 == 0) goto LAB_01a763f0;
  goto LAB_01a763cc;
}

