// FUN_0123c5a0 @ 0123c5a0 size=520 calls_out=6 calls_in=2
// strings: 

void FUN_0123c5a0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_144;
  undefined1 local_140;
  undefined4 local_13f;
  undefined3 uStack_13b;
  uint local_138;
  undefined1 local_134;
  undefined4 local_133;
  undefined3 uStack_12f;
  uint local_12c;
  undefined1 local_128;
  undefined1 auStack_127 [55];
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 auStack_b8 [24];
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int local_84;
  int iStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 uStack_25;
  
  FUN_01a56a10(&local_144);
  FUN_01a56a10(&local_138,param_2);
  iVar1 = *param_2;
  if (iVar1 == 1) {
    iVar1 = 6;
    if (1 < (uint)param_2[0x17]) {
      iVar1 = param_2[0x17] - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x0123c5ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0123c5f0 + *(int *)(&DAT_0123c5f0 + iVar1 * 4)))();
    return;
  }
  if (iVar1 == 0) {
    local_90 = CONCAT31(local_90._1_3_,8);
    FUN_01a41ac0(&local_12c,&local_90,&uStack_25,&DAT_01d064d8);
  }
  else if (iVar1 == 2) {
    FUN_01bed4e2(&local_f0,param_2 + 2,0x60);
    local_90 = param_2[4];
    iStack_8c = param_2[5];
    iStack_88 = param_2[6];
    local_84 = param_2[7];
    iStack_80 = param_2[8];
    iStack_7c = param_2[9];
    local_78 = param_2[10];
    iStack_74 = param_2[0xb];
    iStack_70 = param_2[0xc];
    iStack_6c = param_2[0xd];
    iStack_68 = param_2[0xe];
    iStack_64 = param_2[0xf];
    local_58 = local_98;
    local_5c = local_9c;
    local_60 = local_a0;
    FUN_01a53c68(auStack_b8);
    FUN_01239448(&local_12c,&local_90);
  }
  else {
    local_84 = param_2[4];
    iStack_80 = param_2[5];
    iStack_7c = param_2[6];
    local_90 = param_2[1];
    iStack_8c = param_2[2];
    iStack_88 = param_2[3];
    FUN_0124aa1c(&local_12c);
  }
  if (local_12c == 2) {
LAB_0123c830:
    *(undefined1 *)(param_1 + 1) = local_128;
    *param_1 = 2;
  }
  else {
    FUN_01bed4e2(&local_50,auStack_127,0x2b);
    if ((local_12c & 1) == 0) {
      uStack_4c = CONCAT13(uStack_4c._3_1_,uStack_12f);
      local_128 = local_134;
      if (local_138 == 2) goto LAB_0123c830;
      local_f0 = local_133;
      uStack_ec = uStack_4c;
      uVar2 = 1;
      if ((local_138 & 1) == 0) {
        local_f0 = local_13f;
        uStack_ec = CONCAT13(uStack_4c._3_1_,uStack_13b);
        uVar2 = local_144;
        local_128 = local_140;
      }
    }
    else {
      local_f0 = local_50;
      uStack_ec = uStack_4c;
      uVar2 = 1;
    }
    *param_1 = uVar2;
    *(undefined1 *)(param_1 + 1) = local_128;
    FUN_01bed4e2((int)param_1 + 5,&local_f0,0x2b);
  }
  return;
}

