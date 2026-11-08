// FUN_011c0268 @ 011c0268 size=360 calls_out=5 calls_in=1
// strings: 

void FUN_011c0268(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  if (*(char *)(param_2 + 0x28) == '\x01') {
    cVar1 = *(char *)(param_2 + 0x29);
    if (cVar1 != '.') goto LAB_011c0298;
LAB_011c0334:
    FUN_011b9d88(&local_20,param_2,param_3,param_5,param_5,param_6,0);
    param_6 = local_14;
joined_r0x011c02c4:
    if (local_20 != 0) {
LAB_011c02cc:
      *param_1 = 3;
      param_1[1] = 0;
      param_1[2] = local_1c;
      return;
    }
  }
  else {
    FUN_011ef738(&local_20,param_2 + 0x18);
    cVar1 = '\0';
    if ((local_20 & 0xff) != 5) {
      if ((local_20 & 0xff) != 4) {
        local_1c = FUN_0157c4a0(local_20,local_1c);
        goto LAB_011c02cc;
      }
      *(char *)(param_2 + 0x29) = local_20._1_1_;
      *(undefined1 *)(param_2 + 0x28) = 1;
      cVar1 = local_20._1_1_;
    }
    if (cVar1 == '.') goto LAB_011c0334;
LAB_011c0298:
    if (cVar1 == 'E' || cVar1 == 'e') {
      FUN_011ba128(&local_20,param_2,param_3,param_5,param_5,param_6,0);
      param_6 = local_14;
      goto joined_r0x011c02c4;
    }
    uVar2 = 1;
    if (param_3 != 0) {
      local_18 = param_5;
      goto LAB_011c0364;
    }
    local_18 = -param_5;
    param_6 = -(param_6 + (param_5 != 0));
    if ((int)param_6 < 0) {
      uVar2 = 2;
      goto LAB_011c0364;
    }
    uVar3 = FUN_01845f30(param_5);
    local_18 = (int)uVar3;
    param_6 = (uint)((ulonglong)uVar3 >> 0x20) | 0x80000000;
  }
  uVar2 = 0;
LAB_011c0364:
  *param_1 = uVar2;
  param_1[1] = 0;
  param_1[2] = local_18;
  param_1[3] = param_6;
  return;
}

