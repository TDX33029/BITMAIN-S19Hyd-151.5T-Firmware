// FUN_00017ee4 @ 00017ee4  size=704  callers=1
// program: bmminer


int FUN_00017ee4(uint param_1,uint param_2,uint param_3,int param_4)

{
  byte bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  byte local_2021;
  char local_2020 [8196];
  
  if (DAT_000bfb40 == 0) {
    if (3 < DAT_000be63c) {
      builtin_strncpy(local_2020,"can not read temp by asic before calibration",0x2d);
      FUN_0004948c(3,local_2020,0);
      return 0xff;
    }
  }
  else {
    iVar3 = FUN_0002a6f0();
    if (iVar3 == 0) {
      if (4 < DAT_000be63c) {
        snprintf(local_2020,0x2000,"%s chain %d not pluged","read_sensor_on_asic",param_1);
        FUN_0004948c(4,local_2020,0);
        return 0xff;
      }
    }
    else {
      iVar3 = FUN_0002a594();
      if (iVar3 == 0) {
        if (3 < DAT_000be63c) {
          snprintf(local_2020,0x2000,"%s chain %d ,index %d not connected","read_sensor_on_asic",
                   param_1,param_2);
          FUN_0004948c(3,local_2020,0);
          return 0xff;
        }
      }
      else {
        iVar3 = FUN_00017ec4();
        if (((int)param_2 < iVar3) && (param_3 < 2)) {
          local_2021 = 0xff;
          if (param_4 == 0) {
            bVar1 = (&DAT_000993a1)[param_3 * 0x10];
          }
          else {
            bVar1 = (&DAT_000993a2)[param_3 * 0x10];
          }
          iVar3 = FUN_00017794(param_1,(int)(short)*(undefined4 *)(DAT_000bfb44 + param_2 * 4) *
                                       (int)(short)DAT_000bfb40 & 0xff,(uint)bVar1,0,&local_2021);
          iVar4 = FUN_0002c3f4();
          if ((iVar4 == 0) || (iVar4 = FUN_0002c454(), iVar4 == 0)) {
            if (iVar3 != 0) goto LAB_00018188;
          }
          else {
            iVar3 = FUN_0004e8a8();
            if (iVar3 == 2) {
              cVar2 = FUN_0002c618(param_1 & 0xff,param_2 & 0xff);
            }
            else {
              cVar2 = FUN_0002c5f4();
            }
            local_2021 = cVar2 + 0x40;
            iVar3 = FUN_0002c5d0(param_1 & 0xff,param_2 & 0xff);
            if (iVar3 == 0) {
LAB_00018188:
              return local_2021 - 0x40;
            }
          }
          if (DAT_000be63c < 4) {
            return 0xff;
          }
          iVar3 = *(int *)(DAT_000bfb44 + param_2 * 4);
          snprintf(local_2020,0x2000,
                   "read temp sensor failed: chain = %d, sensor pos = %d, address = %d, reg = %d\n",
                   param_1,iVar3,DAT_000bfb40 * iVar3,(uint)bVar1);
        }
        else {
          if (DAT_000be63c < 4) {
            return 0xff;
          }
          snprintf(local_2020,0x2000,
                   "%s invalid param. index = %d, type = %d, model = %d on chain %d",
                   "read_sensor_on_asic",param_2,param_4,param_3,param_1);
        }
        FUN_0004948c(3,local_2020,0);
      }
    }
  }
  return 0xff;
}

