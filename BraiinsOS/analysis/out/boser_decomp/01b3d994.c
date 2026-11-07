// FUN_01b3d994 @ 01b3d994 size=624 calls_out=1 calls_in=4
// strings: 

undefined8
FUN_01b3d994(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7)

{
  undefined1 auStack_28c [76];
  undefined1 auStack_240 [76];
  undefined1 auStack_1f4 [76];
  undefined1 auStack_1a8 [76];
  undefined1 auStack_15c [76];
  undefined1 auStack_110 [76];
  undefined1 auStack_c4 [76];
  undefined1 auStack_78 [76];
  int local_2c;
  
  local_2c = DAT_01d53560;
  (**(code **)(param_1 + 0x14))(auStack_28c,param_7);
  (**(code **)(param_1 + 0x14))(auStack_240,param_6);
  (**(code **)(param_1 + 0x10))(auStack_1f4,param_5,auStack_240);
  (**(code **)(param_1 + 0xc))(auStack_1a8,param_5,auStack_28c);
  (**(code **)(param_1 + 8))(auStack_15c,param_5,auStack_28c);
  (**(code **)(param_1 + 8))(auStack_110,auStack_15c,auStack_15c);
  (**(code **)(param_1 + 8))(auStack_15c,auStack_15c,auStack_110);
  (**(code **)(param_1 + 0x10))(auStack_c4,auStack_1a8,auStack_15c);
  (**(code **)(param_1 + 0x14))(param_2,auStack_c4);
  (**(code **)(param_1 + 8))(auStack_78,auStack_1f4);
  (**(code **)(param_1 + 8))(auStack_78,auStack_78,auStack_78);
  (**(code **)(param_1 + 8))(auStack_110,auStack_78,auStack_78);
  (**(code **)(param_1 + 0xc))(param_2,param_2,auStack_110);
  (**(code **)(param_1 + 8))(auStack_1a8,param_6,param_7);
  (**(code **)(param_1 + 0x14))(param_4,auStack_1a8);
  (**(code **)(param_1 + 0xc))(param_4,param_4,auStack_240);
  (**(code **)(param_1 + 0xc))(param_4,param_4,auStack_28c);
  (**(code **)(param_1 + 0xc))(param_3,auStack_78,param_2);
  (**(code **)(param_1 + 8))(auStack_240,auStack_240,auStack_240);
  (**(code **)(param_1 + 0x14))(auStack_240,auStack_240);
  (**(code **)(param_1 + 0x10))(param_3,auStack_c4,param_3);
  (**(code **)(param_1 + 8))(auStack_240,auStack_240,auStack_240);
  (**(code **)(param_1 + 0xc))(param_3,param_3,auStack_240);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

