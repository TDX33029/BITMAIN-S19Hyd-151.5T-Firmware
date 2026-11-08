// FUN_019652e4 @ 019652e4 size=264 calls_out=3 calls_in=1
// strings: 

void FUN_019652e4(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  int local_20;
  undefined4 local_1c;
  int local_18;
  uint local_14;
  
  if (*(uint *)(param_2 + 0x14) < *(uint *)(param_2 + 0x10)) {
    cVar1 = *(char *)(*(int *)(param_2 + 0xc) + *(uint *)(param_2 + 0x14));
    if (cVar1 == '.') {
      FUN_01965594(&local_20,param_2,param_3,param_2,param_5,param_6,0);
    }
    else {
      if (cVar1 != 'E' && cVar1 != 'e') goto LAB_01965344;
      FUN_01965748(&local_20,param_2,param_3,param_2,param_5,param_6,0);
    }
    if (local_20 != 0) {
      param_1[1] = 0;
      *param_1 = 3;
      param_1[2] = local_1c;
      return;
    }
  }
  else {
LAB_01965344:
    uVar2 = 1;
    if (param_3 != 0) {
      local_18 = param_5;
      local_14 = param_6;
      goto LAB_019653d4;
    }
    local_18 = -param_5;
    local_14 = -(param_6 + (param_5 != 0));
    if ((int)local_14 < 0) {
      uVar2 = 2;
      goto LAB_019653d4;
    }
    uVar3 = FUN_01bf0e80(param_5);
    local_18 = (int)uVar3;
    local_14 = (uint)((ulonglong)uVar3 >> 0x20) | 0x80000000;
  }
  uVar2 = 0;
LAB_019653d4:
  *param_1 = uVar2;
  param_1[1] = 0;
  param_1[2] = local_18;
  param_1[3] = local_14;
  return;
}

