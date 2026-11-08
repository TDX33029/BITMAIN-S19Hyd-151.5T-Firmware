// FUN_00a41520 @ 00a41520 size=348 calls_out=9 calls_in=1
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_00a41520(int *param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int unaff_r6;
  int unaff_r9;
  undefined4 uVar3;
  int unaff_r11;
  char local_68 [28];
  int local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  if (*param_1 == 0) {
    iVar2 = FUN_007025b0(param_1);
    if (iVar2 == 0) {
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
      if (param_4 == 0) {
        uVar1 = 0;
        param_5 = unaff_r6;
      }
      else {
        uVar3 = 0;
        if (param_5 < 0) {
LAB_00a41598:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar3,param_5);
        }
        if (param_5 == 0) {
          unaff_r9 = 1;
          unaff_r11 = 0;
        }
        else {
          uVar3 = 1;
          unaff_r9 = FUN_01298504(param_5,1);
          unaff_r11 = param_5;
          if (unaff_r9 == 0) goto LAB_00a41598;
        }
        FUN_01bed4e2(unaff_r9,param_4,param_5);
        uVar1 = 3;
      }
      local_40 = CONCAT31(local_40._1_3_,uVar1);
      local_3c = unaff_r11;
      local_38 = unaff_r9;
      local_34 = param_5;
      FUN_0196b484(local_68,param_1 + 1,&local_4c,&local_40);
      if (local_68[0] != '\x06') {
        FUN_00db4764(local_68);
      }
      iVar2 = 0;
    }
  }
  else {
    local_40 = 10;
    iVar2 = FUN_01966fbc(&local_40,0,0);
  }
  return iVar2;
}

