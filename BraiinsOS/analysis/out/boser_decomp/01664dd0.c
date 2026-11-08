// FUN_01664dd0 @ 01664dd0 size=160 calls_out=2 calls_in=0
// strings: 

void FUN_01664dd0(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint local_1c;
  uint *local_18;
  code *local_14;
  
  local_1c = *param_1;
  if (local_1c < 0x80000001) {
    uVar1 = local_1c - 0x10000;
    if (uVar1 < 3) {
                    /* WARNING: Could not recover jumptable at 0x01664e38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_2[1] + 0xc))
                (*param_2,*(undefined4 *)(&DAT_01d33154 + uVar1 * 4),
                 *(undefined4 *)(&DAT_00537c58 + uVar1 * 4));
      return;
    }
    local_14 = FUN_012fce60;
    local_18 = &local_1c;
    FUN_012fa178(*param_2,param_2[1],&DAT_005a856b,&local_18);
  }
  else {
    local_14 = (code *)-local_1c;
    local_18 = (uint *)((uint)local_18 & 0xffffff00);
    FUN_019a7d7c(&local_18);
  }
  return;
}

