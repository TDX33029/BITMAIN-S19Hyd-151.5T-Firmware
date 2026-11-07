// FUN_014f36e8 @ 014f36e8 size=84 calls_out=2 calls_in=1
// strings: sysupgrade_emmc_stm32mp157c_ii3_bmc1

undefined4 FUN_014f36e8(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_2 == 0x24) {
    param_2 = 0x24;
    iVar1 = thunk_FUN_01bed842(param_1,"sysupgrade_emmc_stm32mp157c_ii3_bmc1",0x24);
    if (iVar1 == 0) {
      return 0;
    }
  }
  uVar2 = FUN_014dedb0(param_1,param_2,&DAT_01cfa384,1);
  return uVar2;
}

