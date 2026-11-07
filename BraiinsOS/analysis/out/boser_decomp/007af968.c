// FUN_007af968 @ 007af968 size=120 calls_out=3 calls_in=0
// strings: 

void FUN_007af968(undefined4 *param_1,int param_2)

{
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  char local_18 [4];
  undefined4 local_14;
  
  local_20 = 0;
  local_28 = 0;
  uStack_24 = 1;
  if (param_2 == -1) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    FUN_019ac378(local_18,param_2,&local_28);
    if (local_18[0] != '\x04') {
      FUN_0069263c(local_18[0],local_14);
    }
    *param_1 = local_28;
    param_1[1] = uStack_24;
    param_1[2] = local_20;
    FUN_01bf01d6(param_2);
  }
  return;
}

