// FUN_014dbb88 @ 014dbb88 size=100 calls_out=1 calls_in=2
// strings: 

void FUN_014dbb88(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4)

{
  undefined4 uVar1;
  undefined1 local_20 [8];
  uint local_18;
  int local_14;
  
  if ((uint)-param_4 < (uint)(param_3 < 4)) {
                    /* WARNING: Could not recover jumptable at 0x014dbba8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_014dbbac + *(int *)(&DAT_014dbbac + param_3 * 4)))();
    return;
  }
  local_20[0] = 1;
  local_18 = param_3;
  local_14 = param_4;
  uVar1 = FUN_01967740(local_20,&DAT_01cfa354,&DAT_01d064b8);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

