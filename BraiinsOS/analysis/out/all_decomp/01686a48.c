// FUN_01686a48 @ 01686a48 size=400 calls_out=4 calls_in=1
// strings: 

void FUN_01686a48(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_220 [84];
  uint local_1cc;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 uStack_1c0;
  undefined4 uStack_1bc;
  undefined1 local_1b8 [192];
  int local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 local_e4;
  uint local_a4;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  
  FUN_0166ecb0(&local_f8);
  if (local_f8 != 3) {
    param_1[6] = local_e4;
    *param_1 = 4;
    param_1[1] = local_f8;
    param_1[2] = local_f4;
    param_1[3] = uStack_f0;
    param_1[4] = uStack_ec;
    param_1[5] = uStack_e8;
    return;
  }
  FUN_01671ec4(&local_f8,param_2);
  local_1cc = local_a4;
  if (local_a4 == 8) {
    param_1[1] = local_f8;
    param_1[2] = local_f4;
    param_1[3] = uStack_f0;
    param_1[4] = uStack_ec;
    param_1[5] = uStack_e8;
    param_1[6] = local_e4;
    *param_1 = 4;
    return;
  }
  FUN_016dd1aa(local_1b8,&local_f8,0x54);
  local_1c8 = local_a0;
  uStack_1c4 = uStack_9c;
  uStack_1c0 = uStack_98;
  uStack_1bc = uStack_94;
  FUN_016dd1aa(auStack_220,local_1b8,0x54);
  FUN_0166ecb0(&local_f8,param_2);
  if (local_f8 != 3) {
    param_1[6] = local_e4;
    param_1[1] = local_f8;
    param_1[2] = local_f4;
    param_1[3] = uStack_f0;
    param_1[4] = uStack_ec;
    param_1[5] = uStack_e8;
    *param_1 = 4;
    FUN_01683818(auStack_220);
    return;
  }
  FUN_016dd1aa(&local_f8,auStack_220,0x68);
  iVar1 = 6;
  if (1 < local_a4) {
    iVar1 = local_a4 - 2;
  }
                    /* WARNING: Could not recover jumptable at 0x01686ba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01686bac + *(int *)(&DAT_01686bac + iVar1 * 4)))();
  return;
}

