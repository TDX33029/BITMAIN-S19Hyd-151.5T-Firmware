// FUN_014a7b24 @ 014a7b24 size=388 calls_out=9 calls_in=1
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_014a7b24(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  char local_68 [28];
  int local_4c;
  int local_48;
  int local_44;
  undefined1 local_40 [4];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_1c;
  
  if (*param_1 == 0) {
    iVar1 = FUN_007025b0(param_1);
    if (iVar1 == 0) {
      if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
      }
      local_4c = param_1[4];
      local_48 = param_1[5];
      local_44 = param_1[6];
      param_1[4] = -0x80000000;
      if (local_4c == -0x80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
      }
      uVar2 = 0;
      if (param_5 < 0) {
LAB_014a7414:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar2,param_5);
      }
      if (param_5 == 0) {
        local_38 = 1;
        local_3c = 0;
      }
      else {
        uVar2 = 1;
        local_38 = FUN_01298504(param_5,1);
        local_3c = param_5;
        if (local_38 == 0) goto LAB_014a7414;
      }
      FUN_01bed4e2(local_38,param_4,param_5);
      local_40[0] = 3;
      local_34 = param_5;
      FUN_0196b484(local_68,param_1 + 1,&local_4c,local_40);
      if (local_68[0] != '\x06') {
        FUN_00db4764(local_68);
      }
      return 0;
    }
  }
  else {
    local_1c = 10;
    iVar1 = FUN_01966fbc(&local_1c,0,0);
  }
  return iVar1;
}

