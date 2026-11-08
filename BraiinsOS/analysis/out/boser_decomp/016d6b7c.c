// FUN_016d6b7c @ 016d6b7c size=496 calls_out=6 calls_in=1
// strings: 

void FUN_016d6b7c(undefined4 *param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48 [9];
  
  iVar1 = FUN_016d4a28(param_2);
  if (((iVar1 != 0x3f) && (iVar1 = FUN_016d4a28(param_2), iVar1 != 0x2a)) &&
     (iVar1 = FUN_016d4a28(param_2), iVar1 != 0x2b)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_004cfe2c,0x50,&DAT_01d0a038);
  }
  iVar1 = *param_2;
  puVar5 = (undefined4 *)(iVar1 + 0x50);
  if (*(int *)(param_3 + 8) == 0) {
    local_54 = *puVar5;
    uStack_50 = *(undefined4 *)(iVar1 + 0x54);
    uStack_4c = *(undefined4 *)(iVar1 + 0x58);
    local_60 = *puVar5;
    uStack_5c = *(undefined4 *)(iVar1 + 0x54);
    uStack_58 = *(undefined4 *)(iVar1 + 0x58);
    local_48[0] = 0x1b;
    FUN_016d4540(&local_a8,param_2[1],param_2[2],&local_60,local_48);
    *param_1 = local_a8;
    param_1[1] = uStack_a4;
    param_1[2] = uStack_a0;
    param_1[3] = uStack_9c;
    param_1[4] = uStack_98;
    param_1[5] = local_94;
    param_1[6] = uStack_90;
    param_1[7] = uStack_8c;
    param_1[8] = uStack_88;
    param_1[9] = uStack_84;
    param_1[10] = local_80;
    param_1[0xb] = uStack_7c;
    param_1[0xc] = uStack_78;
    param_1[0xd] = uStack_74;
    param_1[0xe] = uStack_70;
    param_1[0xf] = uStack_6c;
  }
  else {
    iVar2 = *(int *)(param_3 + 8) + -1;
    *(int *)(param_3 + 8) = iVar2;
    puVar4 = (uint *)(*(int *)(param_3 + 4) + iVar2 * 8);
    uVar6 = *puVar4;
    uVar3 = puVar4[1];
    local_b0 = uVar6;
    local_ac = uVar3;
    if (1 < uVar6) {
      iVar1 = FUN_016d4fe8(param_2);
      if ((iVar1 != 0) && (iVar1 = FUN_016d4a28(param_2), iVar1 == 0x3f)) {
        FUN_016d4fe8(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x016d6d50. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&LAB_016d6d54 + *(int *)(&LAB_016d6d54 + uVar6 * 4)))(uVar3);
      return;
    }
    local_54 = *puVar5;
    uStack_50 = *(undefined4 *)(iVar1 + 0x54);
    uStack_4c = *(undefined4 *)(iVar1 + 0x58);
    local_60 = *puVar5;
    uStack_5c = *(undefined4 *)(iVar1 + 0x54);
    uStack_58 = *(undefined4 *)(iVar1 + 0x58);
    local_48[0] = 0x1b;
    FUN_016d4540(&local_a8,param_2[1],param_2[2],&local_60,local_48);
    *param_1 = local_a8;
    param_1[1] = uStack_a4;
    param_1[2] = uStack_a0;
    param_1[3] = uStack_9c;
    param_1[4] = uStack_98;
    param_1[5] = local_94;
    param_1[6] = uStack_90;
    param_1[7] = uStack_8c;
    param_1[8] = uStack_88;
    param_1[9] = uStack_84;
    param_1[10] = local_80;
    param_1[0xb] = uStack_7c;
    param_1[0xc] = uStack_78;
    param_1[0xd] = uStack_74;
    param_1[0xe] = uStack_70;
    param_1[0xf] = uStack_6c;
    FUN_016d776c(&local_b0);
  }
  FUN_016bedfc(param_3);
  return;
}

