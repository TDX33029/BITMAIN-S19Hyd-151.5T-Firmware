// FUN_00a34590 @ 00a34590 size=712 calls_out=5 calls_in=1
// strings: 

void FUN_00a34590(uint *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint local_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  undefined1 local_90;
  undefined3 local_8f;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int local_40;
  undefined1 uStack_31;
  
  FUN_016716cc(&local_d4);
  FUN_016716cc(&local_b4,param_2);
  iVar1 = *param_2;
  if (iVar1 == 1) {
    iVar1 = 6;
    if (1 < (uint)param_2[0x17]) {
      iVar1 = param_2[0x17] - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00a345f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00a345f4 + *(int *)(&DAT_00a345f4 + iVar1 * 4)))();
    return;
  }
  if (iVar1 == 0) {
    local_78 = CONCAT31(local_78._1_3_,8);
    FUN_00f3ce3c(&local_a8,&local_78,&uStack_31,&DAT_0186d2c0);
  }
  else if (iVar1 == 2) {
    iVar1 = param_2[0x14];
    local_48 = param_2[0x16];
    iVar2 = param_2[0x13];
    local_44 = param_2[0x17];
    local_40 = param_2[0x18];
    local_78 = param_2[4];
    local_74 = param_2[5];
    local_70 = param_2[6];
    local_6c = param_2[7];
    iStack_68 = param_2[8];
    iStack_64 = param_2[9];
    local_60 = param_2[10];
    iStack_5c = param_2[0xb];
    iStack_58 = param_2[0xc];
    iStack_54 = param_2[0xd];
    iStack_50 = param_2[0xe];
    iStack_4c = param_2[0xf];
    if ((param_2[0x10] != -0x7ffffffd) && (0 < param_2[0x10])) {
      thunk_FUN_016d3fb4(param_2[0x11]);
    }
    if ((iVar2 != -0x7ffffffd) && (0 < iVar2)) {
      thunk_FUN_016d3fb4(iVar1);
    }
    FUN_00a3db50(&local_a8,&local_78);
  }
  else {
    local_70 = param_2[4];
    local_78 = param_2[5];
    local_6c = local_78 + param_2[6] * 0x70;
    local_74 = local_78;
    FUN_00a5d814(&local_a8,&local_78);
  }
  if (local_a8 == 2) {
LAB_00a34b00:
    param_1[2] = local_a0;
    param_1[4] = 0;
    param_1[3] = local_9c;
    *param_1 = 2;
    return;
  }
  if ((local_a8 & 1) == 0) {
    local_a0 = local_ac;
    if (local_b4 == 2) goto LAB_00a34b00;
    local_a4 = local_b0;
  }
  else {
    local_b4 = 1;
  }
  bVar3 = (local_b4 & 1) != 0;
  param_1[10] = local_80;
  param_1[2] = local_a0;
  if (bVar3) {
    uStack_d0 = local_a4;
  }
  param_1[3] = local_9c;
  if (bVar3) {
    local_d4 = 1;
    uStack_cc = local_a0;
  }
  param_1[4] = local_98;
  param_1[6] = CONCAT31(local_8f,local_90);
  param_1[0xb] = uStack_7c;
  param_1[5] = local_94;
  param_1[7] = local_8c;
  param_1[8] = local_88;
  param_1[9] = local_84;
  *param_1 = local_b4;
  param_1[1] = local_a4;
  param_1[2] = uStack_cc;
  *param_1 = local_d4;
  param_1[1] = uStack_d0;
  return;
}

