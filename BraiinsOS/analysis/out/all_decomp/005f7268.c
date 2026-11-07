// FUN_005f7268 @ 005f7268 size=184 calls_out=2 calls_in=0
// strings: 

void FUN_005f7268(undefined4 *param_1,undefined1 *param_2,int param_3,uint param_4,uint param_5,
                 uint param_6)

{
  ulonglong uVar1;
  undefined1 local_1f;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  
  local_1f = *param_2;
  local_1e = param_2[1];
  local_1d = param_2[2];
  if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_5,param_6,param_4,&DAT_01857218);
  }
  local_14 = &local_1d;
  local_18 = &local_1e;
  local_1c = &local_1f;
  uVar1 = FUN_005f70a0(&local_1c,param_3 + param_5,param_3 + param_6);
  if ((uVar1 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  param_1[1] = ((int)(uVar1 >> 0x20) - (param_3 + param_5)) + param_5;
  *param_1 = 2;
  return;
}

