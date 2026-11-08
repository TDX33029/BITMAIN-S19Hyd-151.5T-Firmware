// FUN_008d5b00 @ 008d5b00 size=216 calls_out=1 calls_in=1
// strings: 

void FUN_008d5b00(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint **local_58;
  code *local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint *local_40 [2];
  
  iVar1 = 2;
  if ((uint)(*param_1 < 5) <= -param_1[1]) {
    iVar1 = *param_1 - 5;
  }
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x008d5b90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00569a30,8);
    return;
  }
  if (iVar1 == 1) {
    local_40[0] = param_1 + 2;
    local_54 = FUN_008d6cdc;
    local_58 = local_40;
    FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_58);
    return;
  }
  local_58 = (uint **)*param_1;
  local_54 = (code *)param_1[1];
  uStack_50 = param_1[2];
  uStack_4c = param_1[3];
  uStack_48 = param_1[4];
  uStack_44 = param_1[5];
                    /* WARNING: Could not recover jumptable at 0x008d5bb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_008d5bbc + *(int *)(&DAT_008d5bbc + (int)local_58 * 4)))();
  return;
}

