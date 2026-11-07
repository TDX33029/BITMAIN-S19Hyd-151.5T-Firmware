// FUN_00daee60 @ 00daee60 size=1472 calls_out=21 calls_in=0
// strings: state | RUNNINGDORMANTLOWERUP | idlast_updatedlast_ticknext_tickran

void FUN_00daee60(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  int local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_78;
  uint local_74;
  undefined4 local_70;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 local_2c;
  
  (**(code **)(param_2[0x1d] + 0xc))(&local_78,param_2[0x1c]);
  uVar1 = local_74;
  if ((local_78 & 0xff) == 2) {
    if ((*param_2 != 2 || param_2[1] != 0) &&
       (FUN_00709104(&local_a8,param_2,*param_3), local_a8 != 0)) {
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_a8;
      param_1[3] = local_a4;
      param_1[4] = local_a0;
      param_1[5] = local_9c;
      param_1[6] = uStack_60;
      param_1[7] = local_5c;
      param_1[8] = uStack_58;
      param_1[9] = uStack_54;
      param_1[10] = local_50;
      param_1[0xb] = uStack_4c;
      param_1[0xc] = uStack_48;
      param_1[0xd] = uStack_44;
      param_1[0xe] = uStack_40;
      param_1[0xf] = uStack_3c;
      return;
    }
    uVar2 = 6;
  }
  else {
    if ((local_78 & 1) == 0) {
      FUN_00a98170(local_74 + 0x98);
      DataMemoryBarrier(0xb);
      iVar3 = 3;
      if ((uint)(*(uint *)(local_74 + 0xa0) < 3) <= (uint)-*(int *)(local_74 + 0xa4)) {
        iVar3 = *(uint *)(local_74 + 0xa0) - 3;
      }
                    /* WARNING: Could not recover jumptable at 0x00daef80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00daef84 + *(int *)(&DAT_00daef84 + iVar3 * 4)))();
      return;
    }
    local_74 = local_70;
    local_2c = 0;
    local_78 = uVar1;
    FUN_0101f630(param_2 + 0x1c,&local_78);
    uVar2 = 5;
  }
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
}

