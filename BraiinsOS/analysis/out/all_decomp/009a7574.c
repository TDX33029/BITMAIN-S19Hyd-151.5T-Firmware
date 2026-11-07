// FUN_009a7574 @ 009a7574 size=172 calls_out=1 calls_in=0
// strings: T1Temperature reached DANGEROUS levelSome hashboards reached dangerous PCB temperature. Check that cooling is adequate (fans; coolant flow; ambient/inlet temperature). Miner is paused. Auto-resumes after cooldown if the overheat recovery feature is enabled.

undefined4 FUN_009a7574(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined *puStack_34;
  undefined4 uStack_30;
  undefined **local_28;
  undefined4 *local_24;
  
  iVar3 = *param_1;
  if (iVar3 == 4) {
                    /* WARNING: Could not recover jumptable at 0x009a75a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,param_1[2],param_1[3]);
    return uVar1;
  }
  local_28 = &puStack_34;
  puStack_34 = (&PTR_s_T1Temperature_reached_DANGEROUS_l_018b099c)[iVar3];
  uStack_30 = 2;
  local_24 = &DAT_0157d360;
  iVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00576c7f,&local_28);
  if (iVar2 == 0) {
                    /* WARNING: Could not recover jumptable at 0x009a7614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_009a7618 + *(int *)(&DAT_009a7618 + iVar3 * 4)))
                      (param_1 + 2,param_1 + 1);
    return uVar1;
  }
  return 1;
}

