// FUN_00604790 @ 00604790 size=260 calls_out=5 calls_in=3
// strings: 

void FUN_00604790(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int local_24;
  
  uVar5 = 1;
  lVar1 = (ulonglong)param_4 * (ulonglong)(param_5 + 3U & 0x7c);
  uVar4 = (uint)lVar1;
  iVar2 = 4;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x7ffffffc < uVar4)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    if (uVar4 != 0) {
      iVar2 = thunk_FUN_016d4a50(uVar4);
      goto joined_r0x00604814;
    }
LAB_0060486c:
    param_1[1] = iVar2;
    uVar5 = 0;
  }
  else {
    if (uVar4 == 0) {
      local_24 = 0;
      iVar3 = FUN_016d51b0(&local_24,4,0);
      iVar2 = local_24;
      if ((iVar3 == 0) && (local_24 != 0)) {
        FUN_016dd1aa(local_24,param_3,param_5 * param_2);
        thunk_FUN_016d3fb4(param_3);
        goto LAB_0060486c;
      }
    }
    else {
      iVar2 = thunk_FUN_016d4ea4(param_3,uVar4);
joined_r0x00604814:
      if (iVar2 != 0) goto LAB_0060486c;
    }
    param_1[1] = 4;
  }
  param_1[2] = uVar4;
  *param_1 = uVar5;
  return;
}

