// FUN_01271b5c @ 01271b5c size=204 calls_out=6 calls_in=2
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

undefined4 FUN_01271b5c(int *param_1)

{
  int iVar1;
  int iVar2;
  char local_50 [28];
  int local_34;
  int local_30;
  int local_2c;
  char local_28 [4];
  undefined4 local_24;
  
  if (*param_1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01cf9574);
  }
  iVar2 = param_1[4];
  iVar1 = param_1[5];
  local_2c = param_1[6];
  param_1[4] = -0x80000000;
  if (iVar2 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("serialize_value called before serialize_key",0x2b,&DAT_01cf9564);
  }
  local_34 = iVar2;
  local_30 = iVar1;
  FUN_01274408(local_28);
  if (local_28[0] == '\x06') {
    FUN_019bb7e0(iVar2,iVar1);
  }
  else {
    FUN_0196b484(local_50,param_1 + 1,&local_34,local_28);
    local_24 = 0;
    if (local_50[0] != '\x06') {
      FUN_00db4764(local_50);
    }
  }
  return local_24;
}

