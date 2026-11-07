// FUN_0132e238 @ 0132e238 size=372 calls_out=6 calls_in=3
// strings: internal error: entered unreachable code

void FUN_0132e238(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  byte extraout_r3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  uint local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  undefined4 uStack_30;
  int iStack_2c;
  int local_28;
  
  FUN_01330bc8(&local_40,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
  if (local_40 == 2) {
    param_1[1] = local_3c;
    param_1[2] = local_38;
    uVar5 = 1;
    param_1[3] = local_34;
    param_1[4] = uStack_30;
    param_1[5] = iStack_2c;
  }
  else if ((local_40 & 1) == 0) {
    if (iStack_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01ce634c);
    }
    uVar3 = 0;
    if (local_28 < 0) {
LAB_0132e2fc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar3,local_28);
    }
    uVar5 = 1;
    if (local_28 == 0) {
      iVar2 = 1;
      iVar6 = 0;
    }
    else {
      uVar3 = 1;
      iVar2 = FUN_01298504(local_28,1);
      iVar6 = local_28;
      if (iVar2 == 0) goto LAB_0132e2fc;
    }
    FUN_01bed4e2(iVar2,iStack_2c,local_28);
    param_1[4] = local_28;
    param_1[1] = 0xf;
    param_1[2] = iVar6;
    param_1[3] = iVar2;
    param_1[5] = param_3;
  }
  else {
    FUN_0133f3b4(param_2,local_3c);
    if ((local_38 & 1) == 0) {
      uVar1 = *(uint *)(param_2 + 0x38) & 1;
      local_34 = 0;
      uVar3 = 0x8000000a;
      bVar4 = extraout_r3;
    }
    else {
      bVar4 = (byte)*(uint *)(param_2 + 0x38) & 1;
      uVar1 = local_34 & 0xff;
      local_34 = local_34 & 0xffffff00;
      uVar3 = 0x8000000b;
    }
    *(byte *)(param_1 + 5) = bVar4;
    param_1[1] = uStack_30;
    uVar5 = 0;
    param_1[2] = uVar3;
    param_1[3] = local_3c;
    param_1[4] = local_34 | uVar1;
  }
  *param_1 = uVar5;
  return;
}

