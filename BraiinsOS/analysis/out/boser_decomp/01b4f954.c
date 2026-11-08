// FUN_01b4f954 @ 01b4f954 size=248 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01b4f954(int param_1,undefined4 param_2,code *param_3,int param_4)

{
  int local_38;
  undefined1 auStack_34 [16];
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01b257dc(param_1,0,0x110,0);
  *(code **)(param_1 + 0x108) = param_3;
  FUN_01b257dc(auStack_34,0,0x10);
  (*param_3)(auStack_34,auStack_34,param_2);
  FUN_01b4f804(param_1 + 0x100,param_1 + 0x104,param_1,&local_38,auStack_34);
  *(byte *)(param_1 + 0x10c) = *(byte *)(param_1 + 0x10c) & 0xfe | (local_38 != 0 && param_4 != 0);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

