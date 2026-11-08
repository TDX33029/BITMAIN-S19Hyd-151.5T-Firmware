// FUN_01bf033e @ 01bf033e size=44 calls_out=1 calls_in=4
// strings: 

undefined8 FUN_01bf033e(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  software_interrupt(0);
  iVar1 = FUN_01be3b5a(param_1,param_4,param_3,&local_10);
  if (iVar1 != 0) {
    local_10 = 0xffffffff;
    uStack_c = 0xffffffff;
  }
  return CONCAT44(uStack_c,local_10);
}

