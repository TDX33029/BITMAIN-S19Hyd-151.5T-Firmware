// FUN_012727e0 @ 012727e0 size=456 calls_out=8 calls_in=2
// strings: internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_012727e0(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 uVar2;
  char local_58 [28];
  int local_3c;
  int local_38;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  undefined4 local_24;
  
  if (*param_1 != 0) {
    local_30 = 10;
    iVar1 = FUN_01966fbc(&local_30,0,0);
    return iVar1;
  }
  iVar1 = FUN_007025b0(param_1,param_2,4);
  if (iVar1 != 0) {
    return iVar1;
  }
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
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_3) {
  case 0:
    uVar2 = 7;
    local_28 = (undefined4 *)thunk_FUN_01be5118(7);
    if (local_28 == (undefined4 *)0x0) {
LAB_012729ac:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar2);
    }
    *(undefined4 *)((int)local_28 + 3) = 0x6e61656c;
    uVar2 = 0x6c6f6f62;
    break;
  case 1:
    uVar2 = 7;
    local_28 = (undefined4 *)thunk_FUN_01be5118(7);
    if (local_28 == (undefined4 *)0x0) goto LAB_012729ac;
    *(undefined4 *)((int)local_28 + 3) = 0x72656765;
    uVar2 = 0x65746e69;
    break;
  case 2:
    uVar2 = 6;
    local_28 = (undefined4 *)thunk_FUN_01be5118(6);
    if (local_28 == (undefined4 *)0x0) goto LAB_012729ac;
    *(undefined2 *)(local_28 + 1) = 0x7265;
    uVar2 = 0x626d756e;
    goto LAB_012728e0;
  case 3:
    uVar2 = 6;
    local_28 = (undefined4 *)thunk_FUN_01be5118(6);
    if (local_28 == (undefined4 *)0x0) goto LAB_012729ac;
    *(undefined2 *)(local_28 + 1) = 0x676e;
    uVar2 = 0x69727473;
LAB_012728e0:
    *local_28 = uVar2;
    local_2c = 6;
    goto LAB_0127291c;
  }
  *local_28 = uVar2;
  local_2c = 7;
LAB_0127291c:
  local_30 = CONCAT31(local_30._1_3_,3);
  local_24 = local_2c;
  FUN_0196b484(local_58,param_1 + 1,&local_3c,&local_30);
  if (local_58[0] != '\x06') {
    FUN_00db4764(local_58);
  }
  return 0;
}

