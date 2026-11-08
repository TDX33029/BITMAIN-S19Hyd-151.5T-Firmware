// FUN_015ed628 @ 015ed628 size=352 calls_out=4 calls_in=12
// strings: 

void FUN_015ed628(int *param_1,undefined4 param_2,int param_3,char *param_4,uint param_5)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_3 == 0) {
    bVar3 = false;
    local_28 = 0;
    local_2c = 1;
    if (param_5 != 0) goto LAB_015ed6b8;
LAB_015ed6c8:
    local_30 = local_28;
    if (bVar3) {
      FUN_015bf41c(&local_30,param_3,1,1,1);
      *(undefined1 *)(local_2c + local_28) = 0x2f;
      iVar1 = local_28 + 1;
      iVar2 = local_30;
      goto LAB_015ed704;
    }
    if (param_5 == 0) goto LAB_015ed728;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    FUN_016dd1aa(iVar1,param_2,param_3);
    bVar3 = *(char *)(iVar1 + param_3 + -1) != '/';
    local_2c = iVar1;
    local_28 = param_3;
    if (param_5 == 0) goto LAB_015ed6c8;
LAB_015ed6b8:
    iVar1 = 0;
    iVar2 = param_3;
    local_30 = local_28;
    if (*param_4 != '/') goto LAB_015ed6c8;
LAB_015ed704:
    param_3 = iVar1;
    local_28 = param_3;
    if (param_5 <= (uint)(iVar2 - param_3)) goto LAB_015ed728;
  }
  FUN_015bf41c(&local_30,param_3,param_5,1,1);
  param_3 = local_28;
LAB_015ed728:
  FUN_016dd1aa(local_2c + param_3,param_4,param_5);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = param_3 + param_5;
  return;
}

