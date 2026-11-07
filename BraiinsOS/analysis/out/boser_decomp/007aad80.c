// FUN_007aad80 @ 007aad80 size=228 calls_out=5 calls_in=3
// strings: Should have switched to stored and unencrypted beforehand

void FUN_007aad80(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint local_1070;
  int iStack_106c;
  int iStack_1068;
  undefined4 local_1064;
  
  FUN_01bed4e2(&local_1070,param_2,0x1050);
  *param_2 = 2;
  param_2[1] = 0;
  if (((local_1070 ^ 3) == 0 && iStack_106c == 0) && iStack_1068 == 0) {
    uVar2 = param_2[5];
    uVar3 = param_2[6];
    uVar4 = param_2[7];
    *param_1 = param_2[4];
    param_1[1] = uVar2;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
  }
  else {
    iVar1 = thunk_FUN_01be5118(0x39);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x39);
    }
    FUN_01bed4e2(iVar1,"Should have switched to stored and unencrypted beforehand",0x39);
    *param_1 = 0;
    param_1[1] = 0x39;
    param_1[2] = iVar1;
    param_1[3] = 0x39;
    if ((local_1070 ^ 3) == 0 && iStack_106c == 0) {
      if (iStack_1068 != 0) {
        FUN_01139b38(iStack_1068,local_1064);
        return;
      }
    }
    else {
      FUN_007a93e4(&local_1070);
    }
  }
  return;
}

