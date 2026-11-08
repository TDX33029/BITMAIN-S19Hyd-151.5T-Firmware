// FUN_0001f4fc @ 0001f4fc  size=332  callers=0
// program: bmminer


undefined4 FUN_0001f4fc(int param_1,void *param_2,uint *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  uint param3;
  int iVar2;
  char acStack_2020 [8196];
  
  param3 = *param_3;
  if (param3 < 0x88) {
    if (2 < DAT_000be63c) {
      memset(acStack_2020,0,0x2000);
      snprintf(acStack_2020,0x2000,"INPUT too short %u<%u\n",param3,0x88);
      FUN_0004a3a4(2,acStack_2020,0);
    }
  }
  else {
    iVar2 = *(int *)(param_1 + 300);
    uVar1 = FUN_0004d0a0((void *)(iVar2 + 0x72),0x438);
    *(undefined1 *)(iVar2 + 0xf9) = uVar1;
    memcpy(param_2,(void *)(iVar2 + 0x72),0x88);
    iVar2 = FUN_00023df4(param_2,0x88,*(byte *)(iVar2 + 1) >> 4,*(byte *)(iVar2 + 1) & 0xf);
    if (iVar2 != 0) {
      *param_3 = 0x88;
      *param_4 = 0x72;
      return 0;
    }
    if (2 < DAT_000be63c) {
      memset(acStack_2020,0,0x2000);
      snprintf(acStack_2020,0x2000,"%s: data_enc error\n","edf_v4_region_3_encode");
      FUN_0004a3a4(2,acStack_2020,0);
    }
  }
  return 0xffffffff;
}

