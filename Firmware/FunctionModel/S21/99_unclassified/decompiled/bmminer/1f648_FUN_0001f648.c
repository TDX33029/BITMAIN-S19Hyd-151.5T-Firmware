// FUN_0001f648 @ 0001f648  size=344  callers=0
// program: bmminer


undefined4 FUN_0001f648(int param_1,undefined4 *param_2,uint *param_3,undefined4 *param_4)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint param3;
  int iVar5;
  char acStack_2018 [8192];
  
  param3 = *param_3;
  if (param3 < 0x10) {
    if (2 < DAT_000be63c) {
      memset(acStack_2018,0,0x2000);
      snprintf(acStack_2018,0x2000,"INPUT too short %u<%u\n",param3,0x10);
      FUN_0004a3a4(2,acStack_2018,0);
    }
  }
  else {
    iVar5 = *(int *)(param_1 + 300);
    uVar1 = FUN_0004d0a0(iVar5 + 0x62,0x78);
    uVar3 = *(undefined4 *)(iVar5 + 0x6a);
    *(undefined1 *)(iVar5 + 0x71) = uVar1;
    uVar2 = *(undefined4 *)(iVar5 + 0x62);
    uVar4 = *(undefined4 *)(iVar5 + 0x6e);
    param_2[1] = *(undefined4 *)(iVar5 + 0x66);
    *param_2 = uVar2;
    param_2[3] = uVar4;
    param_2[2] = uVar3;
    iVar5 = FUN_00023df4(param_2,0x10,*(byte *)(iVar5 + 1) >> 4,*(byte *)(iVar5 + 1) & 0xf);
    if (iVar5 != 0) {
      *param_3 = 0x10;
      *param_4 = 0x62;
      return 0;
    }
    if (2 < DAT_000be63c) {
      memset(acStack_2018,0,0x2000);
      snprintf(acStack_2018,0x2000,"%s: data_enc error\n","edf_v4_region_2_encode");
      FUN_0004a3a4(2,acStack_2018,0);
    }
  }
  return 0xffffffff;
}

