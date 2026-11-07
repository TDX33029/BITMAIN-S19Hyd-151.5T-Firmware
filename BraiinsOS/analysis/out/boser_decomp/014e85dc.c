// FUN_014e85dc @ 014e85dc size=100 calls_out=1 calls_in=1
// strings: 

void FUN_014e85dc(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 local_20 [8];
  uint local_18;
  int local_14;
  
  if ((uint)-param_4 < (uint)(param_3 < 0x10)) {
                    /* WARNING: Could not recover jumptable at 0x014e85fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_014e8600 + *(int *)(&DAT_014e8600 + param_3 * 4)))();
    return;
  }
  local_20[0] = 1;
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = FUN_01967740(local_20,&DAT_01cfa35c,&DAT_01d064b8);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

