// FUN_00017830 @ 00017830  size=612  callers=1
// program: bmminer


int FUN_00017830(int param_1,int param_2,uint param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  byte local_821;
  char local_820 [2052];
  
  if (DAT_00088820 == 0) {
    if (3 < DAT_00087bbc) {
      builtin_strncpy(local_820,"can not read temp by asic before calibration",0x2d);
      FUN_00032218(3,local_820,0);
      return 0xff;
    }
  }
  else {
    iVar2 = FUN_000201d8();
    if (iVar2 == 0) {
      if (4 < DAT_00087bbc) {
        snprintf(local_820,0x800,"%s chain %d not pluged","read_sensor_on_asic",param_1);
        FUN_00032218(4,local_820,0);
        return 0xff;
      }
    }
    else {
      iVar2 = FUN_000200ac();
      if ((iVar2 == 0) || (iVar2 = thunk_FUN_00036ad8(), iVar2 == 0)) {
        if (3 < DAT_00087bbc) {
          snprintf(local_820,0x800,"%s chain %d ,index %d not connected","read_sensor_on_asic",
                   param_1,param_2);
LAB_00017960:
          FUN_00032218(3,local_820,0);
          return 0xff;
        }
      }
      else {
        iVar2 = FUN_00017028();
        if ((param_2 < iVar2) && (param_3 < 3)) {
          local_821 = 0xff;
          if (param_4 == 0) {
            bVar1 = (&DAT_00067e51)[param_3 * 0x10];
          }
          else {
            bVar1 = (&DAT_00067e52)[param_3 * 0x10];
          }
          iVar2 = FUN_00015c70(param_1,(int)(short)*(undefined4 *)(DAT_00088824 + param_2 * 4) *
                                       (int)(short)DAT_00088820 & 0xff,(uint)bVar1,0,&local_821);
          if (iVar2 != 0) {
            return local_821 - 0x40;
          }
          if (3 < DAT_00087bbc) {
            iVar2 = *(int *)(DAT_00088824 + param_2 * 4);
            snprintf(local_820,0x800,
                     "read temp sensor failed: chain = %d, sensor pos = %d, address = %d, reg = %d\n"
                     ,param_1,iVar2,DAT_00088820 * iVar2,(uint)bVar1);
            FUN_00032218(3,local_820,0);
          }
        }
        else if (3 < DAT_00087bbc) {
          snprintf(local_820,0x800,"%s invalid param. index = %d, type = %d, model = %d on chain %d"
                   ,"read_sensor_on_asic",param_2,param_4,param_3,param_1);
          goto LAB_00017960;
        }
      }
    }
  }
  return 0xff;
}

