// FUN_0004f034 @ 0004f034  size=412  callers=2
// program: bmminer


uint FUN_0004f034(void)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_830;
  undefined2 local_82c;
  undefined4 local_828;
  uint local_824;
  char local_820 [24];
  undefined4 local_808;
  char acStack_804 [2020];
  
  if ((DAT_0050fabc == 0) && (uVar2 = FUN_0004f890(), (int)uVar2 < 0)) {
    snprintf(local_820,0x800,"%s: auto exec bitmain_power_open, but open power failed\n",
             "bitmain_power_version");
    FUN_00032218(0,local_820,0);
  }
  else {
    uVar1 = DAT_0050fab8;
    local_824 = 0;
    local_828 = 0;
    local_830 = 0x204aa55;
    local_82c = 6;
    iVar3 = FUN_0004e110(DAT_0050fab8,&local_830,6,&local_828,8);
    if (iVar3 != 0) {
      builtin_strncpy(local_820,"get power version failed",0x18);
      local_808 = CONCAT22(local_808._2_2_,10);
      FUN_00032218(0,local_820,0);
      builtin_strncpy(local_820,"check power version fail",0x18);
      local_808._0_1_ = 'e';
      local_808._1_1_ = 'd';
      local_808._2_1_ = ',';
      local_808._3_1_ = ' ';
      builtin_strncpy(acStack_804,"use v2 protocal to try it again\n",0x21);
      FUN_00032218(0,local_820,0);
      local_828 = 0;
      local_824 = 0;
      local_830 = 0x204aa55;
      local_82c = 0x204;
      iVar3 = FUN_0004e2c4(uVar1,&local_830,6,&local_828,8);
      if (iVar3 != 0) {
        builtin_strncpy(local_820,"get power version failed",0x18);
        local_808 = CONCAT22(local_808._2_2_,10);
        FUN_00032218(0,local_820,0);
        return 0x80000300;
      }
    }
    uVar2 = local_824 & 0xffff;
    if (uVar2 != 0) {
      DAT_0050fac0 = uVar2;
    }
  }
  return uVar2;
}

