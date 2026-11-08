// FUN_014e87cc @ 014e87cc size=100 calls_out=1 calls_in=4
// strings: 

void FUN_014e87cc(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 local_20 [8];
  uint local_18;
  int local_14;
  
  if ((uint)-param_4 < (uint)(param_3 < 5)) {
                    /* WARNING: Could not recover jumptable at 0x014e87ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_014e87f0 + *(int *)(&DAT_014e87f0 + param_3 * 4)))();
    return;
  }
  local_20[0] = 1;
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = FUN_01967740(local_20,&DAT_01cfa494,&DAT_01d064b8);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

