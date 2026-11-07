// FUN_015e87b8 @ 015e87b8 size=168 calls_out=3 calls_in=1
// strings: 

void FUN_015e87b8(uint *param_1,uint param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  uint local_28;
  undefined1 *local_24;
  
  if (param_2 == 0) {
    uVar1 = 0;
    local_24 = &DAT_00000001;
    local_28 = 0;
  }
  else {
    local_24 = (undefined1 *)FUN_01298504(param_2,1);
    if (local_24 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_2);
    }
    if (param_2 < 2) {
      uVar1 = 1;
      puVar2 = local_24;
    }
    else {
      FUN_01bed93e(local_24,1,param_2 - 1);
      uVar1 = param_2;
      puVar2 = local_24 + (param_2 - 1);
    }
    *puVar2 = 1;
    local_28 = param_2;
  }
  *param_1 = local_28;
  param_1[1] = (uint)local_24;
  param_1[2] = uVar1;
  return;
}

