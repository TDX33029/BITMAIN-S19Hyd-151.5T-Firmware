// FUN_019ca9c4 @ 019ca9c4 size=228 calls_out=5 calls_in=5
// strings: 

void FUN_019ca9c4(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_38;
  int local_34;
  undefined4 local_30;
  uint local_28;
  uint local_24;
  uint local_20;
  
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  local_30 = 0;
  local_38 = param_3;
  local_34 = iVar1;
  FUN_019ba480(&local_28,*param_2);
  if ((local_28 == 0) || ((local_24 & 0xff) == 4)) {
    FUN_01980288(&local_28,param_2,&local_38);
    if (((char)local_28 == '\x04') || ((local_28 & 0xff) == 4)) {
      *param_1 = local_38;
      param_1[1] = local_34;
      param_1[2] = local_30;
      return;
    }
    param_3 = local_38;
    iVar1 = local_34;
  }
  else {
    local_28 = local_24;
    local_24 = local_20;
  }
  param_1[1] = local_28;
  param_1[2] = local_24;
  *param_1 = 0x80000000;
  FUN_0134bd64(param_3,iVar1);
  return;
}

