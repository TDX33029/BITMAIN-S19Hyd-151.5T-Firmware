// FUN_0132ed10 @ 0132ed10 size=368 calls_out=5 calls_in=2
// strings: internal error: entered unreachable code

void FUN_0132ed10(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_44;
  uint local_40;
  int local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 local_30;
  int local_2c;
  int local_28;
  
  uVar2 = 1;
  FUN_01330bc8(&local_40,param_2,param_3,param_4,param_5,param_6,1,param_7);
  if (local_40 == 2) {
    param_1[1] = local_3c;
    param_1[2] = local_38;
    param_1[3] = local_34;
    param_1[4] = local_30;
    param_1[5] = local_2c;
  }
  else if (local_38 == 0) {
    if ((local_40 & 1) == 0) {
      if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01ce638c);
      }
      uVar3 = 0;
      if (local_28 < 0) {
LAB_0132ede8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar3,local_28);
      }
      uVar2 = 0;
      if (local_28 == 0) {
        iVar1 = 1;
        local_44 = 0;
      }
      else {
        uVar3 = 1;
        iVar1 = FUN_01298504(local_28,1);
        local_44 = local_28;
        if (iVar1 == 0) goto LAB_0132ede8;
      }
      FUN_01bed4e2(iVar1,local_2c,local_28);
      *(undefined2 *)(param_2 + 0x41) = 0x101;
      param_1[2] = 0x80000012;
      param_1[1] = local_30;
      param_1[3] = local_44;
      param_1[4] = iVar1;
      param_1[5] = local_28;
      param_1[6] = param_3;
    }
    else {
      *(undefined1 *)(param_2 + 0x41) = 1;
      uVar2 = 0;
      if (local_3c == 0) {
        *(undefined1 *)(param_2 + 0x43) = 1;
      }
      param_1[1] = local_30;
      param_1[2] = 0x80000011;
      param_1[3] = local_3c;
    }
  }
  else {
    uVar2 = 1;
    param_1[5] = param_3;
    param_1[1] = 0xe;
  }
  *param_1 = uVar2;
  return;
}

