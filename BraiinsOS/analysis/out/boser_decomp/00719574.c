// FUN_00719574 @ 00719574 size=124 calls_out=1 calls_in=5
// strings: 

void FUN_00719574(undefined1 *param_1,int param_2,uint param_3,uint param_4,uint param_5,
                 uint param_6)

{
  longlong lVar1;
  undefined1 uVar2;
  uint uVar3;
  int local_18;
  int local_14;
  
  if (param_5 <= param_3) {
    lVar1 = (ulonglong)(param_4 & 0xff) * (ulonglong)param_6;
    uVar3 = (uint)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      uVar2 = 0x38;
      goto LAB_007195b4;
    }
    param_2 = param_2 + param_5;
    if (uVar3 <= param_3 - param_5) {
      local_14 = (param_3 - param_5) - uVar3;
      local_18 = param_2 + uVar3;
      FUN_007195f0(param_1,&local_18,param_4);
      return;
    }
  }
  uVar2 = 0x13;
  *(int *)(param_1 + 8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 0;
LAB_007195b4:
  *param_1 = uVar2;
  return;
}

