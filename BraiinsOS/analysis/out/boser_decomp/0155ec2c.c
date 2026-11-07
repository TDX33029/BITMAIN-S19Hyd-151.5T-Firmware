// FUN_0155ec2c @ 0155ec2c size=160 calls_out=3 calls_in=0
// strings: 

bool FUN_0155ec2c(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int local_28;
  undefined4 local_24;
  int local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_013208dc(&local_1c,&DAT_004a5d58,param_1,param_2);
  if (local_1c == -0x80000000) {
    FUN_00665974(&local_1c,param_1,param_2);
    FUN_013208dc(&local_28,&DAT_004a5d58,local_18,local_14);
    bVar1 = local_28 != -0x80000000;
    if (bVar1) {
      FUN_019bb7e0(local_28,local_24);
    }
    FUN_019bb7e0(local_1c,local_18);
  }
  else {
    FUN_019bb7e0(local_1c,local_18);
    bVar1 = true;
  }
  return bVar1;
}

