// FUN_012c3ee8 @ 012c3ee8 size=292 calls_out=4 calls_in=1
// strings: 

void FUN_012c3ee8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  
  FUN_012c39c8(&local_28);
  if ((char)local_28 == '\x01') {
LAB_012c3f88:
    param_1[1] = 0;
    *param_1 = 3;
    param_1[2] = local_24;
  }
  else {
    cVar1 = local_28._2_1_;
    if (local_28._1_1_ == '\0') {
      cVar1 = '\0';
    }
    if (cVar1 == '.') {
      FUN_012c400c(&local_28,param_2,param_3,0x2e,param_5,param_6,0);
LAB_012c3f7c:
      if (local_28 != 0) goto LAB_012c3f88;
LAB_012c3fac:
      uVar2 = 0;
    }
    else {
      if (cVar1 == 'E' || cVar1 == 'e') {
        FUN_012c4210(&local_28,param_2,param_3,cVar1,param_5,param_6,0);
        goto LAB_012c3f7c;
      }
      uVar2 = 1;
      if (param_3 == 0) {
        local_20 = -param_5;
        local_1c = -(param_6 + (param_5 != 0));
        if ((int)local_1c < 0) {
          uVar2 = 2;
          goto LAB_012c3fb0;
        }
        uVar3 = FUN_01bf0e80(param_5);
        local_20 = (int)uVar3;
        local_1c = (uint)((ulonglong)uVar3 >> 0x20) | 0x80000000;
        goto LAB_012c3fac;
      }
      local_20 = param_5;
      local_1c = param_6;
    }
LAB_012c3fb0:
    *param_1 = uVar2;
    param_1[1] = 0;
    param_1[2] = local_20;
    param_1[3] = local_1c;
  }
  return;
}

