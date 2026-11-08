// FUN_006783b8 @ 006783b8 size=292 calls_out=4 calls_in=1
// strings: 

void FUN_006783b8(undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  uint local_1c;
  
  FUN_00677968(&local_28);
  if ((char)local_28 == '\x01') {
LAB_00678458:
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
      FUN_006784dc(&local_28,param_2,param_3,0x2e,param_5,param_6,0);
LAB_0067844c:
      if (local_28 != 0) goto LAB_00678458;
LAB_0067847c:
      uVar2 = 0;
    }
    else {
      if (cVar1 == 'E' || cVar1 == 'e') {
        FUN_006786e0(&local_28,param_2,param_3,cVar1,param_5,param_6,0);
        goto LAB_0067844c;
      }
      uVar2 = 1;
      if (param_3 == 0) {
        local_20 = -param_5;
        local_1c = -(param_6 + (param_5 != 0));
        if ((int)local_1c < 0) {
          uVar2 = 2;
          goto LAB_00678480;
        }
        uVar3 = FUN_01bf0e80(param_5);
        local_20 = (int)uVar3;
        local_1c = (uint)((ulonglong)uVar3 >> 0x20) | 0x80000000;
        goto LAB_0067847c;
      }
      local_20 = param_5;
      local_1c = param_6;
    }
LAB_00678480:
    *param_1 = uVar2;
    param_1[1] = 0;
    param_1[2] = local_20;
    param_1[3] = local_1c;
  }
  return;
}

