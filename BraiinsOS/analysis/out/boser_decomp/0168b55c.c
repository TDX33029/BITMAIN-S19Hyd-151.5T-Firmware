// FUN_0168b55c @ 0168b55c size=700 calls_out=4 calls_in=3
// strings: assertion failed: stack.is_empty()

void FUN_0168b55c(int param_1,uint param_2,undefined4 param_3,int *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  undefined1 *local_38;
  uint *local_34;
  undefined1 *local_30;
  uint *local_2c;
  code *local_28;
  
  if (param_4[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: stack.is_empty()",0x22,&DAT_01d077ac);
  }
  if (*(uint *)(param_1 + 0x148) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,*(uint *)(param_1 + 0x148),&DAT_01d08b38);
  }
  if (*(int *)(*(int *)(param_1 + 0x144) + param_2 * 0x14) - 3U < 4) {
    if (*param_4 == 0) {
      FUN_01a54b48(param_4);
    }
    puVar3 = (uint *)param_4[1];
    iVar9 = *(int *)(param_5 + 4);
    local_40 = *(uint *)(param_5 + 8);
    iVar6 = *(int *)(param_5 + 0x10);
    uVar7 = *(uint *)(param_5 + 0x14);
    uVar8 = *(uint *)(param_5 + 0x18);
    *puVar3 = param_2;
    iVar5 = 1;
    do {
      iVar5 = iVar5 + -1;
      local_48 = puVar3[iVar5];
      param_4[2] = iVar5;
      if (uVar7 <= local_48) {
        puVar4 = &DAT_01d08af8;
        goto LAB_0168b918;
      }
      uVar1 = local_40;
      if (local_40 < uVar8) {
        uVar1 = uVar8;
      }
      uVar2 = *(uint *)(iVar6 + local_48 * 4);
      if (uVar8 <= uVar2) {
LAB_0168b638:
        local_44 = uVar8;
        if (uVar8 != uVar1) {
          *(uint *)(iVar9 + uVar8 * 4) = local_48;
          if (local_48 < uVar7) {
            *(uint *)(iVar6 + local_48 * 4) = uVar8;
            uVar7 = *(uint *)(param_1 + 0x148);
            *(uint *)(param_5 + 0x18) = uVar8 + 1;
            if (uVar7 <= local_48) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(local_48,uVar7,&DAT_01d08b38);
            }
                    /* WARNING: Could not recover jumptable at 0x0168b680. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)(&DAT_0168b684 +
                      *(int *)(&DAT_0168b684 +
                              *(int *)(*(int *)(param_1 + 0x144) + local_48 * 0x14) * 4)))();
            return;
          }
          puVar4 = &DAT_01d07c6c;
LAB_0168b918:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(local_48,uVar7,puVar4);
        }
        goto LAB_0168b888;
      }
      if (local_40 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar2,local_40,&DAT_01d08b08);
      }
      if (*(uint *)(iVar9 + uVar2 * 4) != local_48) goto LAB_0168b638;
    } while (iVar5 != 0);
  }
  else {
    local_48 = param_2;
    if (*(uint *)(param_5 + 0x14) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(param_2,*(uint *)(param_5 + 0x14),&DAT_01d08af8);
    }
    iVar5 = *(int *)(param_5 + 0x10);
    local_44 = *(uint *)(param_5 + 0x18);
    uVar7 = *(uint *)(iVar5 + param_2 * 4);
    if (uVar7 < local_44) {
      local_40 = *(uint *)(param_5 + 8);
      if (local_40 <= uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,local_40,&DAT_01d08b08);
      }
      if (*(uint *)(*(int *)(param_5 + 4) + uVar7 * 4) == param_2) {
        return;
      }
    }
    else {
      local_40 = *(uint *)(param_5 + 8);
    }
    if (local_40 <= local_44) {
LAB_0168b888:
      local_28 = FUN_016cbc48;
      local_2c = &local_48;
      local_30 = &LAB_01a6a304;
      local_34 = &local_40;
      local_38 = &LAB_01a6a304;
      local_3c = &local_44;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0058fcf7,&local_3c,&DAT_01d08ae8);
    }
    *(uint *)(*(int *)(param_5 + 4) + local_44 * 4) = param_2;
    *(uint *)(iVar5 + param_2 * 4) = local_44;
    *(uint *)(param_5 + 0x18) = local_44 + 1;
  }
  return;
}

