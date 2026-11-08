// FUN_0123e608 @ 0123e608 size=468 calls_out=6 calls_in=2
// strings: 

void FUN_0123e608(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  bool bVar3;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  uint local_110;
  undefined4 local_10c;
  undefined4 uStack_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 local_c8 [56];
  undefined1 auStack_90 [24];
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int local_68;
  int iStack_64;
  int iStack_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined1 uStack_25;
  
  FUN_01a56a10(&uStack_144);
  FUN_01a56a10(&local_110,param_2);
  iVar1 = *param_2;
  if (iVar1 == 1) {
    iVar1 = 6;
    if (1 < (uint)param_2[0x17]) {
      iVar1 = param_2[0x17] - 2;
    }
                    /* WARNING: Could not recover jumptable at 0x0123e658. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_0123e65c + *(int *)(&DAT_0123e65c + iVar1 * 4)))();
    return;
  }
  if (iVar1 == 0) {
    local_68 = CONCAT31(local_68._1_3_,8);
    FUN_01a41ac0(&local_104,&local_68,&uStack_25,&DAT_01cf9934);
  }
  else if (iVar1 == 2) {
    FUN_01bed4e2(local_c8,param_2 + 2,0x60);
    local_68 = param_2[4];
    iStack_64 = param_2[5];
    iStack_60 = param_2[6];
    local_5c = param_2[7];
    iStack_58 = param_2[8];
    iStack_54 = param_2[9];
    local_50 = param_2[10];
    iStack_4c = param_2[0xb];
    iStack_48 = param_2[0xc];
    iStack_44 = param_2[0xd];
    iStack_40 = param_2[0xe];
    iStack_3c = param_2[0xf];
    local_30 = local_70;
    local_34 = local_74;
    local_38 = local_78;
    FUN_01a53c68(auStack_90);
    FUN_0123b408(&local_104,&local_68);
  }
  else {
    local_5c = param_2[4];
    iStack_58 = param_2[5];
    iStack_54 = param_2[6];
    local_68 = param_2[1];
    iStack_64 = param_2[2];
    iStack_60 = param_2[3];
    FUN_0124abe8(&local_104);
  }
  if (local_104 == 2) {
LAB_0123e8a4:
    *param_1 = 2;
    param_1[1] = 1;
    param_1[2] = local_100;
  }
  else {
    puVar2 = &uStack_108;
    bVar3 = (local_104 & 1) == 0;
    if (!bVar3) {
      puVar2 = &local_fc;
    }
    if (bVar3) {
      local_100 = local_10c;
      if (local_110 == 2) goto LAB_0123e8a4;
    }
    else {
      local_110 = 1;
    }
    if ((local_110 & 1) != 0) {
      uStack_144 = 1;
      uStack_140 = local_100;
      uStack_13c = *puVar2;
    }
    *param_1 = uStack_144;
    param_1[1] = uStack_140;
    param_1[2] = uStack_13c;
    param_1[3] = local_f8;
    param_1[4] = uStack_f4;
    param_1[5] = uStack_f0;
    param_1[6] = uStack_ec;
    param_1[7] = local_e8;
    param_1[8] = uStack_e4;
    param_1[9] = uStack_e0;
    param_1[10] = uStack_dc;
    param_1[0xb] = uStack_d8;
  }
  return;
}

