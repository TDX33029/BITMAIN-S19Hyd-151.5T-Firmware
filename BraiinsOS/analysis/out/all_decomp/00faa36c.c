// FUN_00faa36c @ 00faa36c size=192 calls_out=1 calls_in=864
// strings: 

void FUN_00faa36c(uint param_1,uint param_2,uint param_3,undefined4 param_4)

{
  undefined *puVar1;
  uint local_20;
  uint uStack_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  uint *local_10;
  undefined1 *local_c;
  
  local_18 = (undefined1 *)&local_20;
  uStack_1c = param_3;
  if (param_3 < param_1) {
    puVar1 = &DAT_005951d0;
  }
  else {
    if ((param_3 < param_2) || (param_1 <= param_2)) {
      local_10 = &uStack_1c;
      local_c = &LAB_00fac484;
      local_14 = &LAB_00fac484;
      local_20 = param_2;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00594096,&local_18,param_4);
    }
    puVar1 = &DAT_0058ef05;
    uStack_1c = param_2;
  }
  local_c = &LAB_00fac484;
  local_10 = &uStack_1c;
  local_14 = &LAB_00fac484;
  local_20 = param_1;
  local_18 = (undefined1 *)&local_20;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(puVar1,&local_18,param_4);
}

