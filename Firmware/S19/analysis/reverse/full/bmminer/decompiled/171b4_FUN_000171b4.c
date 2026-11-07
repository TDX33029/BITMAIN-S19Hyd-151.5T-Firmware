// FUN_000171b4 @ 000171b4  size=1060  callers=1
// program: bmminer


undefined4 FUN_000171b4(byte *param_1)

{
  short sVar1;
  short sVar2;
  byte bVar3;
  byte bVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int extraout_r1;
  uint uVar8;
  int param5;
  uint uVar9;
  int param6;
  char acStack_928 [256];
  undefined4 local_828;
  undefined4 uStack_824;
  
  bVar3 = param_1[2];
  uVar8 = *(uint *)(param_1 + 4);
  uVar6 = FUN_0002009c();
  FUN_0006769c(bVar3,uVar6);
  if (extraout_r1 == 0) {
    if ((uVar8 & 0xff00ff00) == 0x100) {
      uVar9 = *param_1 & 0xf;
      iVar7 = FUN_00017054(uVar9,param_1[2]);
      sVar1 = ((ushort)uVar8 & 0xff) - 0x40;
      param6 = (int)sVar1;
      sVar2 = ((ushort)(uVar8 >> 0x10) & 0xff) - 0x40;
      param5 = (int)sVar2;
      memset(acStack_928,0,0x100);
      if (iVar7 == -1) {
        if (DAT_00087bbc < 4) {
          return 0xffffffff;
        }
        bVar3 = param_1[2];
        uVar6 = FUN_0002009c();
        iVar7 = FUN_00067408(bVar3,uVar6);
        snprintf((char *)&local_828,0x800,
                 "Fault: get temp report from chain %d, *chipid %d, pcb %d, asic %d\n",uVar9,iVar7,
                 param5,param6);
        FUN_00032218(3,&local_828,0);
        return 0xffffffff;
      }
      FUN_00015fd4(&local_828);
      uVar8 = (uint)DAT_000872a1;
      DAT_000872a1 = DAT_000872a0;
      if (DAT_000872a0 != uVar8) {
        snprintf(acStack_928,0xff,"change ignore: %d",(uint)DAT_000872a0);
        if (DAT_00089044 == 0) {
          DAT_00089044 = FUN_0005b008("bmminer_auto_temp");
        }
        FUN_0005c5c4(DAT_00089044,"temperature/temperature.c",0x19,"I2A_deal_temp_from_respone",0x1a
                     ,0x152,0x14,"%s",acStack_928);
      }
      memset(acStack_928,0,0x100);
      snprintf(acStack_928,0xff,"c%d\tp%d\t%d\t%d",uVar9,iVar7,param5,param6);
      if (DAT_00089044 == 0) {
        DAT_00089044 = FUN_0005b008("bmminer_auto_temp");
      }
      FUN_0005c5c4(DAT_00089044,"temperature/temperature.c",0x19,"I2A_deal_temp_from_respone",0x1a,
                   0x158,0x14,"%s",acStack_928);
      if (DAT_000872a1 == 0) {
        pthread_mutex_lock((pthread_mutex_t *)&DAT_00088828);
        iVar5 = DAT_00088840;
        *(short *)(*(int *)(*(int *)(DAT_00088840 + (short)uVar9 * 4) + 4) + iVar7 * 6 + 2) = sVar2;
        *(short *)(*(int *)(*(int *)(iVar5 + (short)uVar9 * 4) + 8) + iVar7 * 6 + 2) = sVar1;
        pthread_mutex_unlock((pthread_mutex_t *)&DAT_00088828);
        FUN_00016114(uVar9,iVar7,1,param5);
        FUN_00016114(uVar9,iVar7,2,param6);
        iVar7 = iVar7 + uVar9 * 6;
        (&DAT_0071a278)[iVar7 * 2] = local_828;
        (&DAT_0071a27c)[iVar7 * 2] = uStack_824;
        return 0;
      }
      return 0;
    }
    if (3 < DAT_00087bbc) {
      bVar3 = *param_1;
      bVar4 = param_1[2];
      uVar9 = *(uint *)(param_1 + 4);
      uVar6 = FUN_0002009c();
      iVar7 = FUN_00067408(bVar4,uVar6);
      snprintf((char *)&local_828,0x800,
               "=>>> get EXTERNAL_TEMPERATURE_SENSOR_READ 0x%08x from chain %d, chipid %d\n",uVar9,
               bVar3 & 0xf,iVar7 + 1);
      FUN_00032218(3,&local_828,0);
      if (3 < DAT_00087bbc) {
        snprintf((char *)&local_828,0x800,
                 "==>> *reg.u._LOCAL_TEMP_ADDR 0x%02x != 0x00 || reg.u._EXTERNAL_TEMP_ADDR 0x%02x != 0x01\n"
                 ,uVar8 >> 0x18,(uVar8 & 0xffff) >> 8);
        FUN_00032218(3,&local_828,0);
        return 0xffffffff;
      }
    }
  }
  else if (3 < DAT_00087bbc) {
    snprintf((char *)&local_828,0x800,
             "=>>> get EXTERNAL_TEMPERATURE_SENSOR_READ 0x%08x from chain %d, *chip_addr %d\n",
             *(uint *)(param_1 + 4),*param_1 & 0xf,(uint)param_1[2]);
    FUN_00032218(3,&local_828,0);
    if (3 < DAT_00087bbc) {
      snprintf((char *)&local_828,0x800,
               "==>> reg.u._LOCAL_TEMP_ADDR 0x%02x != 0x00 || reg.u._EXTERNAL_TEMP_ADDR 0x%02x != 0x01\n"
               ,uVar8 >> 0x18,(uVar8 & 0xffff) >> 8);
      FUN_00032218(3,&local_828,0);
      return 0xffffffff;
    }
  }
  return 0xffffffff;
}

