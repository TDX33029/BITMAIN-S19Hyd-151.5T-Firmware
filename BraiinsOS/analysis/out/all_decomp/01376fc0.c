// FUN_01376fc0 @ 01376fc0 size=760 calls_out=8 calls_in=1
// strings: must call 'start_pattern' firstinvalid capture indexa small enough slotcannot patch from a sparse NFA state | must call 'start_pattern' firstinvalid capture indexa small enough slotcannot patch from a sparse NFA state

void FUN_01376fc0(int *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int local_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_2 == param_2[1]) {
    *param_1 = 0x2b;
    return;
  }
  iVar3 = param_2[2];
  *param_2 = *param_2 + 4;
  if (*(int *)(iVar3 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb715c(&DAT_01892850);
  }
  *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
  if (*(int *)(iVar3 + 0x24) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00565ff0,0x41,&DAT_01893840);
  }
  iVar5 = *(int *)(iVar3 + 0x48);
  *(undefined4 *)(iVar3 + 0x24) = 1;
  *(int *)(iVar3 + 0x28) = iVar5;
  if (iVar5 == *(int *)(iVar3 + 0x40)) {
    FUN_013c1038();
  }
  *(undefined4 *)(*(int *)(iVar3 + 0x44) + iVar5 * 4) = 0;
  *(int *)(iVar3 + 0x48) = iVar5 + 1;
  *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
  FUN_01371064(&local_68,iVar3,0,0);
  iVar5 = local_60;
  uVar7 = local_64;
  if (local_68 == 0x2a) {
    if (*(int *)(iVar3 + 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_018929b0);
    }
    *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
    if (*(int *)(iVar3 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("must call \'start_pattern\' firstinvalid capture indexa small enough slotcannot patch from a sparse NFA state"
                   ,0x1f,&DAT_01893870);
    }
    uVar4 = *(uint *)(iVar3 + 0x28);
    iVar6 = *(int *)(iVar3 + 0x3c);
    local_68 = 9;
    local_64 = uVar4;
    if (iVar6 == *(int *)(iVar3 + 0x34)) {
      FUN_013c40f0();
    }
    *(int *)(iVar3 + 0x3c) = iVar6 + 1;
    puVar2 = (undefined4 *)(*(int *)(iVar3 + 0x38) + iVar6 * 0x10);
    *puVar2 = 9;
    puVar2[1] = uVar4;
    if ((*(int *)(iVar3 + 0x2c) == 1) &&
       (*(uint *)(iVar3 + 0x30) < (uint)(*(int *)(iVar3 + 0x58) + (iVar6 + 1) * 0x10))) {
      *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
      local_68 = 0x27;
      iVar6 = iVar5;
      uVar7 = *(uint *)(iVar3 + 0x30);
      goto LAB_01377204;
    }
    iVar1 = *(int *)(iVar3 + 0x20);
    *(int *)(iVar3 + 0x20) = iVar1 + 1;
    if (iVar1 != -1) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb715c(&DAT_01892940);
    }
    *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
    FUN_013b6288(&local_68,(int *)(iVar3 + 0x24),iVar5,iVar6);
    iVar5 = *(int *)(iVar3 + 0x20) + 1;
    *(int *)(iVar3 + 0x20) = iVar5;
    if (local_68 == 0x2a) {
      if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb715c(&DAT_01892860);
      }
      *(undefined4 *)(iVar3 + 0x20) = 0xffffffff;
      if (*(int *)(iVar3 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("must call \'start_pattern\' firstinvalid capture indexa small enough slotcannot patch from a sparse NFA state"
                     ,0x1f,&DAT_01893870);
      }
      uVar4 = *(uint *)(iVar3 + 0x28);
      if (*(uint *)(iVar3 + 0x48) <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar4,*(uint *)(iVar3 + 0x48),&DAT_01893850);
      }
      *(uint *)(*(int *)(iVar3 + 0x44) + uVar4 * 4) = uVar7;
      *(int *)(iVar3 + 0x20) = *(int *)(iVar3 + 0x20) + 1;
      *(undefined4 *)(iVar3 + 0x24) = 0;
      local_68 = 0x2a;
      goto LAB_01377204;
    }
    local_a0 = local_5c;
    iStack_9c = iStack_58;
    iStack_98 = iStack_54;
    iStack_94 = iStack_50;
    local_90 = local_4c;
    iStack_8c = iStack_48;
    iStack_88 = iStack_44;
    iStack_84 = iStack_40;
    iVar6 = local_60;
    uVar7 = local_64;
  }
  else {
    local_a0 = local_5c;
    iStack_9c = iStack_58;
    iStack_98 = iStack_54;
    iStack_94 = iStack_50;
    local_90 = local_4c;
    iStack_8c = iStack_48;
    iStack_88 = iStack_44;
    iStack_84 = iStack_40;
    iVar6 = local_60;
  }
  local_80 = local_3c;
  iStack_7c = iStack_38;
  iStack_78 = iStack_34;
  iStack_74 = iStack_30;
  iStack_70 = iStack_2c;
LAB_01377204:
  *param_1 = local_68;
  param_1[1] = uVar7;
  param_1[2] = iVar6;
  param_1[3] = local_a0;
  param_1[4] = iStack_9c;
  param_1[5] = iStack_98;
  param_1[6] = iStack_94;
  param_1[7] = local_90;
  param_1[8] = iStack_8c;
  param_1[9] = iStack_88;
  param_1[10] = iStack_84;
  param_1[0xb] = local_80;
  param_1[0xc] = iStack_7c;
  param_1[0xd] = iStack_78;
  param_1[0xe] = iStack_74;
  param_1[0xf] = iStack_70;
  return;
}

