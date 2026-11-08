// FUN_013c5b10 @ 013c5b10 size=700 calls_out=4 calls_in=3
// strings: assertion failed: stack.is_empty()

void FUN_013c5b10(int param_1,uint param_2,undefined4 param_3,int *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint local_48;
  uint local_44;
  uint local_40;
  uint *local_3c;
  code *local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  code *local_28;
  
  if (param_4[2] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: stack.is_empty()",0x22,&DAT_018942a8);
  }
  if (*(uint *)(param_1 + 0x148) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_2,*(uint *)(param_1 + 0x148),&DAT_01894288);
  }
  if (*(int *)(*(int *)(param_1 + 0x144) + param_2 * 0x14) - 3U < 4) {
    if (*param_4 == 0) {
      FUN_013c1038(param_4);
    }
    iVar7 = *(int *)(param_5 + 4);
    local_40 = *(uint *)(param_5 + 8);
    puVar3 = (uint *)param_4[1];
    iVar4 = 1;
    iVar5 = *(int *)(param_5 + 0x10);
    uVar6 = *(uint *)(param_5 + 0x14);
    local_44 = *(uint *)(param_5 + 0x18);
    *puVar3 = param_2;
    do {
      iVar4 = iVar4 + -1;
      param_4[2] = iVar4;
      local_48 = puVar3[iVar4];
      if (uVar6 <= local_48) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_48,uVar6,&DAT_01894268);
      }
      uVar1 = local_40;
      if (local_40 < local_44) {
        uVar1 = local_44;
      }
      uVar2 = *(uint *)(iVar5 + local_48 * 4);
      if (local_44 <= uVar2) {
LAB_013c5c18:
        if (local_44 != uVar1) {
          *(uint *)(iVar7 + local_44 * 4) = local_48;
          if (uVar6 <= local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(local_48,uVar6,&DAT_01894258);
          }
          *(uint *)(iVar5 + local_48 * 4) = local_44;
          uVar6 = *(uint *)(param_1 + 0x148);
          *(uint *)(param_5 + 0x18) = local_44 + 1;
          if (uVar6 <= local_48) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(local_48,uVar6,&DAT_01894288);
          }
                    /* WARNING: Could not recover jumptable at 0x013c5c60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_013c5c64 +
                    *(int *)(&DAT_013c5c64 +
                            *(int *)(*(int *)(param_1 + 0x144) + local_48 * 0x14) * 4)))();
          return;
        }
        goto LAB_013c5e18;
      }
      if (local_40 <= uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar2,local_40,&DAT_01894278);
      }
      if (*(uint *)(iVar7 + uVar2 * 4) != local_48) goto LAB_013c5c18;
    } while (iVar4 != 0);
  }
  else {
    local_48 = param_2;
    if (*(uint *)(param_5 + 0x14) <= param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(param_2,*(uint *)(param_5 + 0x14),&DAT_01894268);
    }
    iVar4 = *(int *)(param_5 + 0x10);
    local_40 = *(uint *)(param_5 + 8);
    local_44 = *(uint *)(param_5 + 0x18);
    uVar6 = *(uint *)(iVar4 + param_2 * 4);
    if (uVar6 < local_44) {
      if (local_40 <= uVar6) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar6,local_40,&DAT_01894278);
      }
      if (*(uint *)(*(int *)(param_5 + 4) + uVar6 * 4) == param_2) {
        return;
      }
    }
    if (local_40 <= local_44) {
LAB_013c5e18:
      local_28 = FUN_013bc8e0;
      local_38 = FUN_007883b8;
      local_2c = &local_48;
      local_3c = &local_44;
      local_34 = &local_40;
      local_30 = local_38;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0058f9b7,&local_3c,&DAT_01894248);
    }
    *(uint *)(*(int *)(param_5 + 4) + local_44 * 4) = param_2;
    *(uint *)(iVar4 + param_2 * 4) = local_44;
    *(uint *)(param_5 + 0x18) = local_44 + 1;
  }
  return;
}

