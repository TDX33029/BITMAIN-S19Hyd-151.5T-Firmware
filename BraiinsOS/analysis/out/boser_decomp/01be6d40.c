// FUN_01be6d40 @ 01be6d40 size=88 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_01be6d40(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_3 < 0x7fffffff) {
    if ((param_4 & 2) != 0) {
      FUN_01befe78();
    }
    software_interrupt(0);
    uVar1 = FUN_01be3b5a(param_1,param_2,param_3,param_4);
  }
  else {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar1 = 0xffffffff;
    *puVar2 = 0xc;
  }
  return uVar1;
}

