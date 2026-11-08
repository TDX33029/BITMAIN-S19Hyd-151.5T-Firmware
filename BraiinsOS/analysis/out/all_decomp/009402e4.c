// FUN_009402e4 @ 009402e4 size=652 calls_out=6 calls_in=1
// strings: 

void FUN_009402e4(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  undefined1 local_d8;
  uint local_d0;
  undefined1 local_cc;
  undefined1 auStack_cb [43];
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint uStack_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  int iStack_74;
  int local_70;
  int local_6c;
  int local_68;
  undefined1 local_60 [47];
  undefined1 uStack_31;
  
  FUN_016716cc(&local_e8);
  FUN_016716cc(&local_dc,param_2);
  iVar2 = *param_2;
  if (iVar2 == 1) {
    iVar2 = 6;
    if (1 < (uint)param_2[0x17]) {
      iVar2 = param_2[0x17] - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00940338. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0094033c + *(int *)(&DAT_0094033c + iVar2 * 4)))();
    return;
  }
  if (iVar2 == 0) {
    local_a0 = CONCAT31(local_a0._1_3_,8);
    FUN_00f3ce3c(&local_d0,&local_a0,&uStack_31,&DAT_01867c68);
    uVar1 = local_d8;
  }
  else if (iVar2 == 2) {
    iVar2 = param_2[0x14];
    iVar3 = param_2[0x13];
    local_70 = param_2[0x16];
    local_6c = param_2[0x17];
    local_68 = param_2[0x18];
    local_a0 = param_2[4];
    local_9c = param_2[5];
    local_98 = param_2[6];
    local_94 = param_2[7];
    uStack_90 = param_2[8];
    local_8c = param_2[9];
    local_88 = param_2[10];
    uStack_84 = param_2[0xb];
    uStack_80 = param_2[0xc];
    uStack_7c = param_2[0xd];
    uStack_78 = param_2[0xe];
    iStack_74 = param_2[0xf];
    if ((param_2[0x10] != -0x7ffffffd) && (0 < param_2[0x10])) {
      thunk_FUN_016d3fb4(param_2[0x11]);
    }
    if ((iVar3 != -0x7ffffffd) && (0 < iVar3)) {
      thunk_FUN_016d3fb4(iVar2);
    }
    FUN_0091c098(&local_d0,&local_a0);
    uVar1 = local_d8;
  }
  else {
    local_98 = param_2[4];
    local_a0 = param_2[5];
    local_94 = local_a0 + param_2[6] * 0x70;
    local_9c = local_a0;
    FUN_009253d0(&local_d0,&local_a0);
    uVar1 = local_d8;
  }
  local_d8 = local_cc;
  if (local_d0 == 2) {
LAB_00940838:
    *(undefined1 *)(param_1 + 1) = local_d8;
    *param_1 = 2;
    return;
  }
  local_d8 = uVar1;
  FUN_016dd1aa(local_60,auStack_cb,0x2b);
  if ((local_d0 & 1) == 0) {
    if (local_dc == 2) goto LAB_00940838;
    *param_1 = local_dc;
    *(undefined1 *)(param_1 + 1) = local_d8;
    FUN_016dd1aa((int)param_1 + 5,local_60,0x2b);
    local_a0 = param_1[1];
    local_9c = param_1[2];
    local_98 = param_1[3];
    local_94 = param_1[4];
    uStack_90 = param_1[5];
    local_8c = param_1[6];
    local_88 = param_1[7];
    uStack_84 = param_1[8];
    uStack_80 = param_1[9];
    uStack_7c = param_1[10];
    uStack_78 = param_1[0xb];
    uVar4 = 1;
    if ((local_dc & 1) == 0) {
      local_9c = local_e0;
      local_a0 = local_e4;
      uVar4 = local_e8;
    }
  }
  else {
    *param_1 = 1;
    *(undefined1 *)(param_1 + 1) = local_cc;
    FUN_016dd1aa((int)param_1 + 5,local_60,0x2b);
    local_a0 = param_1[1];
    local_9c = param_1[2];
    local_98 = param_1[3];
    local_94 = param_1[4];
    uStack_90 = param_1[5];
    local_8c = param_1[6];
    local_88 = param_1[7];
    uStack_84 = param_1[8];
    uStack_80 = param_1[9];
    uStack_7c = param_1[10];
    uStack_78 = param_1[0xb];
    uVar4 = 1;
  }
  *param_1 = uVar4;
  param_1[1] = local_a0;
  param_1[2] = local_9c;
  param_1[3] = local_98;
  param_1[4] = local_94;
  param_1[5] = uStack_90;
  param_1[6] = local_8c;
  param_1[7] = local_88;
  param_1[8] = uStack_84;
  param_1[9] = uStack_80;
  param_1[10] = uStack_7c;
  param_1[0xb] = uStack_78;
  return;
}

