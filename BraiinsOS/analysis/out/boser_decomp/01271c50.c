// FUN_01271c50 @ 01271c50 size=240 calls_out=7 calls_in=0
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_01271c50(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  char local_58 [28];
  int local_3c;
  int local_38;
  int local_34;
  char local_30 [4];
  int local_2c;
  
  iVar1 = FUN_01271d68(param_1,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  if (iVar1 == 0) {
    if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
    }
    iVar1 = param_1[4];
    iVar2 = param_1[5];
    local_34 = param_1[6];
    param_1[4] = -0x80000000;
    if (iVar1 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
    }
    local_3c = iVar1;
    local_38 = iVar2;
    FUN_012767d0(local_30,param_3);
    if (local_30[0] == '\x06') {
      FUN_019bb7e0(iVar1,iVar2);
      iVar1 = local_2c;
    }
    else {
      FUN_0196b484(local_58,param_1 + 1,&local_3c,local_30);
      iVar1 = 0;
      if (local_58[0] != '\x06') {
        FUN_00db4764(local_58);
      }
    }
  }
  return iVar1;
}

