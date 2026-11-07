// FUN_014e8710 @ 014e8710 size=100 calls_out=1 calls_in=1
// strings: 

void FUN_014e8710(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 local_20 [8];
  uint local_18;
  int local_14;
  
  if ((uint)-param_4 < (uint)(param_3 < 6)) {
                    /* WARNING: Could not recover jumptable at 0x014e8730. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_014e8734 + *(int *)(&DAT_014e8734 + param_3 * 4)))();
    return;
  }
  local_20[0] = 1;
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = FUN_01967740(local_20,&DAT_01cfa364,&DAT_01d064b8);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

