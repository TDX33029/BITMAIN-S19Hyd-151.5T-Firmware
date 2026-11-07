// FUN_011b3748 @ 011b3748 size=76 calls_out=2 calls_in=0
// strings: 

bool FUN_011b3748(undefined4 param_1,undefined4 param_2)

{
  char local_40 [24];
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  uStack_20 = 0;
  local_1c = 0;
  local_28 = param_1;
  uStack_24 = param_2;
  local_18 = param_1;
  local_14 = param_2;
  FUN_011b3794(local_40,&local_28);
  FUN_011b38b4(local_40);
  return local_40[0] != '\x06';
}

