// FUN_014a796c @ 014a796c size=288 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_014a796c(int *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined1 uVar2;
  char local_58 [28];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      local_3c = param_1[4];
      local_38 = param_1[5];
      local_34 = param_1[6];
      param_1[4] = -0x80000000;
      if (local_3c == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      local_28 = (undefined1 *)thunk_FUN_01be5118(1);
      if (local_28 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,1);
      }
      uVar2 = 0x4e;
      if ((param_4 & 1) != 0) {
        uVar2 = 0x59;
      }
      *local_28 = uVar2;
      local_30 = CONCAT31(local_30._1_3_,3);
      local_24 = 1;
      local_2c = 1;
      FUN_0196b484(local_58,param_1 + 1,&local_3c,&local_30);
      if (local_58[0] != '\x06') {
        FUN_00db4764(local_58);
      }
      iVar1 = 0;
    }
  }
  else {
    local_30 = 10;
    iVar1 = FUN_01966fbc(&local_30,0,0);
  }
  return iVar1;
}

