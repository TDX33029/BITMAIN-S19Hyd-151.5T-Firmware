// FUN_00910e88 @ 00910e88 size=624 calls_out=5 calls_in=0
// strings: 

void FUN_00910e88(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  uint local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
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
  
  FUN_016716cc(&local_b4);
  iVar1 = *param_2;
  if (iVar1 == 1) {
    iVar1 = 6;
    if (1 < (uint)param_2[0x17]) {
      iVar1 = param_2[0x17] - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x00910ed4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00910ed8 + *(int *)(&DAT_00910ed8 + iVar1 * 4)))();
    return;
  }
  if (iVar1 == 0) {
    local_78 = CONCAT31(local_78._1_3_,8);
    FUN_00f3ce3c(&local_a8,&local_78,&uStack_31,&DAT_01867c58);
  }
  else if (iVar1 == 2) {
    iVar2 = param_2[0x13];
    iVar1 = param_2[0x14];
    local_48 = param_2[0x16];
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
    FUN_0091c138(&local_a8,&local_78);
  }
  else {
    local_70 = param_2[4];
    local_78 = param_2[5];
    local_6c = local_78 + param_2[6] * 0x70;
    local_74 = local_78;
    FUN_00925520(&local_a8,&local_78);
  }
  if (local_a8 == 2) {
    *(undefined2 *)(param_1 + 1) = (undefined2)local_a4;
    *param_1 = 2;
    return;
  }
  if ((local_a8 & 1) == 0) {
    local_a4 = local_b0;
    local_a0 = local_ac;
  }
  else {
    local_b4 = 1;
  }
  param_1[1] = local_a4;
  param_1[2] = local_a0;
  *param_1 = local_b4;
  param_1[3] = local_9c;
  param_1[4] = uStack_98;
  param_1[5] = uStack_94;
  param_1[6] = uStack_90;
  param_1[7] = local_8c;
  param_1[8] = uStack_88;
  param_1[9] = uStack_84;
  param_1[10] = uStack_80;
  param_1[0xb] = uStack_7c;
  return;
}

