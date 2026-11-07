// FUN_016d6a6c @ 016d6a6c size=88 calls_out=3 calls_in=2
// strings: 

undefined4 FUN_016d6a6c(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  if (param_3 < 0x7fffffff) {
    if ((param_4 & 2) != 0) {
      FUN_016dfc54();
    }
    software_interrupt(0);
    uVar1 = FUN_016d3496(param_1,param_2,param_3,param_4);
  }
  else {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    uVar1 = 0xffffffff;
    *puVar2 = 0xc;
  }
  return uVar1;
}

