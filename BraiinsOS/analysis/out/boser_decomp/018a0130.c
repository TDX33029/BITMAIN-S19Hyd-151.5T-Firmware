// FUN_018a0130 @ 018a0130 size=108 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_018a0130(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 auStack_68 [68];
  int local_24;
  int local_20;
  
  FUN_01306b30(auStack_68,param_1,param_2,param_3,param_4);
  do {
    FUN_0189c7e4(&local_24,auStack_68);
  } while (local_24 == 0);
  if (local_24 == 1) {
  }
  else {
    local_20 = param_2;
  }
  return CONCAT44(param_2 - local_20,param_1 + local_20);
}

