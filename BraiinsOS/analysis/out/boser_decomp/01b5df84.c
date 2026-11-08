// FUN_01b5df84 @ 01b5df84 size=256 calls_out=4 calls_in=1
// strings: 

undefined4
FUN_01b5df84(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7)

{
  undefined4 uVar1;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 auStack_17e [338];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_6 < 0x100) {
    local_180 = 0;
    local_17f = (undefined1)param_6;
    if (param_6 != 0) {
      FUN_01b269d8(auStack_17e,param_5,param_6);
    }
    uVar1 = FUN_01b5d8f8(param_1,param_2,param_3,param_4,&local_180,param_6 + 2,param_7,0);
  }
  else {
    uVar1 = 0xffffffff;
  }
  FUN_01b6b174(&local_180,0x14c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar1;
}

