// FUN_0127247c @ 0127247c size=460 calls_out=9 calls_in=2
// strings: dangerous | internal error: entered unreachable code | serialize_value called before serialize_key

int FUN_0127247c(int *param_1,undefined4 param_2,undefined1 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
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
  iVar1 = FUN_007025b0(param_1,param_2,8);
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
    uVar3 = 6;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(6);
    if (puVar2 == (undefined4 *)0x0) {
LAB_0127264c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,uVar3);
    }
    *(undefined2 *)(puVar2 + 1) = 0x656c;
    uVar3 = 0x62617473;
    break;
  case 1:
    uVar3 = 4;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar2 == (undefined4 *)0x0) goto LAB_0127264c;
    uVar3 = 4;
    *puVar2 = 0x61746562;
    goto LAB_012725bc;
  case 2:
    uVar3 = 9;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar2 == (undefined4 *)0x0) goto LAB_0127264c;
    uVar3 = 9;
    FUN_01bed4e2(puVar2,"dangerous",9);
    goto LAB_012725bc;
  case 3:
    uVar3 = 6;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(6);
    if (puVar2 == (undefined4 *)0x0) goto LAB_0127264c;
    *(undefined2 *)(puVar2 + 1) = 0x6e65;
    uVar3 = 0x64646968;
  }
  *puVar2 = uVar3;
  uVar3 = 6;
LAB_012725bc:
  local_30 = CONCAT31(local_30._1_3_,3);
  local_2c = uVar3;
  local_28 = puVar2;
  local_24 = uVar3;
  FUN_0196b484(local_58,param_1 + 1,&local_3c,&local_30);
  if (local_58[0] != '\x06') {
    FUN_00db4764(local_58);
  }
  return 0;
}

