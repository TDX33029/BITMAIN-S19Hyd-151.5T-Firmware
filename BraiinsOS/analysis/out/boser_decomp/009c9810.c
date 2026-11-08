// FUN_009c9810 @ 009c9810 size=216 calls_out=1 calls_in=3
// strings: 

void FUN_009c9810(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  undefined1 local_20 [2];
  undefined1 auStack_1e [2];
  uint uStack_1c;
  
  puVar1 = (uint *)(auStack_1e + 6);
  if (param_4 == 0 && (0xfa < param_3) <= param_4) {
    _local_20 = CONCAT31(stack0xffffffe1,(char)param_3);
    puVar1 = (uint *)(local_20 + 1);
  }
  else if (param_4 == 0 && (0xffff < param_3) <= param_4) {
    _local_20 = CONCAT31(stack0xffffffe1,0xfb);
    FUN_01ac6d2c(param_1,local_20,local_20 + 1);
    puVar1 = (uint *)auStack_1e;
    _local_20 = CONCAT22(auStack_1e,(short)param_3);
  }
  else if (param_4 == 0) {
    _local_20 = CONCAT31(stack0xffffffe1,0xfc);
    FUN_01ac6d2c(param_1,local_20,local_20 + 1);
    puVar1 = &uStack_1c;
    _local_20 = param_3;
  }
  else {
    _local_20 = CONCAT31(stack0xffffffe1,0xfd);
    FUN_01ac6d2c(param_1,local_20,local_20 + 1);
    _local_20 = param_3;
    uStack_1c = param_4;
  }
  FUN_01ac6d2c(param_1,local_20,puVar1);
  return;
}

