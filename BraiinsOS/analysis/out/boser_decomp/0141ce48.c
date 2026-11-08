// FUN_0141ce48 @ 0141ce48 size=124 calls_out=1 calls_in=6
// strings: 

void FUN_0141ce48(int param_1,undefined4 param_2)

{
  undefined1 auStack_3c [8];
  int local_34;
  undefined4 local_30;
  int local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined1 auStack_20 [8];
  
  while( true ) {
    FUN_0141cec4(auStack_3c,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
                 param_1 + 0x2c,param_2);
    param_2 = local_30;
    if (local_34 != 1) break;
    (**(code **)(local_2c + 0x10))(auStack_20,uStack_28,uStack_24);
  }
  (**(code **)(local_2c + 0x10))(auStack_20,uStack_28,uStack_24);
  return;
}

