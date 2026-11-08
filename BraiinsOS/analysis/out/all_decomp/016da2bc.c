// FUN_016da2bc @ 016da2bc size=14 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_016da2bc(uint *param_1,uint param_2)

{
  undefined4 uVar1;
  
  if ((param_2 & 0xffffff00) == 0) {
    *param_1 = param_2;
    uVar1 = 0;
  }
  else {
    uVar1 = 0x16;
  }
  return uVar1;
}

