// FUN_0001f7a4 @ 0001f7a4  size=824  callers=0
// program: bmminer


undefined4 FUN_0001f7a4(int param_1,undefined2 *param_2,uint *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint param3;
  undefined2 *puVar3;
  undefined1 auStack_2120 [256];
  char acStack_2020 [8196];
  
  param3 = *param_3;
  if (param3 < 0x62) {
    if (DAT_000be63c < 3) {
      return 0xffffffff;
    }
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"INPUT too short %u<%u\n",param3,0x62);
    FUN_0004a3a4(2,acStack_2020,0);
    return 0xffffffff;
  }
  puVar3 = *(undefined2 **)(param_1 + 300);
  if (DAT_000be63c < 5) goto LAB_0001f7f8;
  memset(acStack_2020,0,0x2000);
  snprintf(acStack_2020,0x2000,"BOARD_CRC_DATA_LEN=%d\n",0x61);
  FUN_0004a3a4(4,acStack_2020,0);
  if (4 < DAT_000be63c) {
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"BOARD_ENC_DATA_START=%d\n",2);
    FUN_0004a3a4(4,acStack_2020,0);
    if (DAT_000be63c < 5) goto LAB_0001f7f8;
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"BOARD_ENC_DATA_LEN=%d\n",0x60);
    FUN_0004a3a4(4,acStack_2020,0);
    if (DAT_000be63c < 5) goto LAB_0001f7f8;
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"PARAM_CRC_DATA_START=%d\n",0x62);
    FUN_0004a3a4(4,acStack_2020,0);
    if (DAT_000be63c < 5) goto LAB_0001f7f8;
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"PARAM_CRC_DATA_LEN=%d\n",0xf);
    FUN_0004a3a4(4,acStack_2020,0);
  }
  if (4 < DAT_000be63c) {
    memset(acStack_2020,0,0x2000);
    snprintf(acStack_2020,0x2000,"PARAM_ENC_DATA_START=%d\n",0x62);
    FUN_0004a3a4(4,acStack_2020,0);
    if (4 < DAT_000be63c) {
      memset(acStack_2020,0,0x2000);
      snprintf(acStack_2020,0x2000,"PARAM_ENC_DATA_LEN=%d\n",0x10);
      FUN_0004a3a4(4,acStack_2020,0);
    }
  }
LAB_0001f7f8:
  uVar1 = FUN_0004d0a0(puVar3,0x308);
  *(undefined1 *)((int)puVar3 + 0x61) = uVar1;
  memcpy(auStack_2120,puVar3 + 1,0x60);
  iVar2 = FUN_00023df4(auStack_2120,0x60,*(byte *)((int)puVar3 + 1) >> 4,
                       *(byte *)((int)puVar3 + 1) & 0xf);
  if (iVar2 != 0) {
    *param_2 = *puVar3;
    memcpy(param_2 + 1,auStack_2120,0x60);
    *param_3 = 0x62;
    *param_4 = 0;
    return 0;
  }
  if (DAT_000be63c < 3) {
    return 0xffffffff;
  }
  memset(acStack_2020,0,0x2000);
  snprintf(acStack_2020,0x2000,"%s: data_enc error\n","edf_v4_region_1_encode");
  FUN_0004a3a4(2,acStack_2020,0);
  return 0xffffffff;
}

