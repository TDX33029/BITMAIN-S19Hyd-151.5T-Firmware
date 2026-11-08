// FUN_01b27294 @ 01b27294 size=288 calls_out=4 calls_in=0
// strings: 

void FUN_01b27294(int param_1,undefined4 param_2,int param_3,uint param_4)

{
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  uint uVar1;
  int iVar2;
  ulonglong uVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined8 local_40;
  uint local_38;
  uint local_34;
  int local_2c;
  
  local_2c = DAT_01d53560;
  uVar3 = FUN_01b27094(param_1 + 8,&PTR_01d3b2b0,0);
  uVar4 = FUN_01b27094(param_1);
  iVar2 = param_3 + (param_4 & 0xfffffff0);
  uVar1 = (uint)((ulonglong)uVar4 >> 0x20);
  for (; iVar2 != param_3; param_3 = param_3 + 0x10) {
    uVar5 = FUN_01b27094(param_3 + 8);
    uVar6 = FUN_01b27094(param_3);
    local_34 = (uint)((ulonglong)uVar6 >> 0x20) ^ uVar1;
    local_38 = (uint)uVar6 ^ (uint)uVar4;
    local_40 = uVar3 ^ uVar5;
    FUN_01b1e9b8(&local_40,param_2);
    uVar4 = CONCAT44(extraout_r1_00,local_38);
    uVar1 = local_34;
    uVar3 = local_40;
  }
  FUN_01b26e08(param_1,(int)((ulonglong)uVar4 >> 0x20),(uint)uVar4,uVar1);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  FUN_01b26e08(param_1 + 8,extraout_r1,(int)uVar3,(int)(uVar3 >> 0x20));
  return;
}

