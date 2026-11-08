// FUN_0113d324 @ 0113d324 size=384 calls_out=4 calls_in=3
// strings: 

void FUN_0113d324(int *param_1,undefined4 param_2,int param_3,char *param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int local_30;
  int local_2c;
  int local_28;
  
  if (param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  if (param_3 == 0) {
    FUN_016dd1aa(1,param_2,0);
    local_2c = 1;
    bVar3 = false;
    local_30 = 0;
    if (param_5 != 0) goto LAB_0113d3d4;
LAB_0113d3e4:
    if (!bVar3) {
      uVar2 = local_30 - param_3;
      local_28 = param_3;
      goto joined_r0x0113d440;
    }
    local_28 = param_3;
    FUN_015bf41c(&local_30,param_3,1,1,1);
    iVar1 = local_28 + 1;
    *(undefined1 *)(local_2c + local_28) = 0x2f;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(param_3);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_3);
    }
    FUN_016dd1aa(iVar1,param_2,param_3);
    bVar3 = *(char *)(iVar1 + param_3 + -1) != '/';
    local_30 = param_3;
    local_2c = iVar1;
    if (param_5 == 0) goto LAB_0113d3e4;
LAB_0113d3d4:
    iVar1 = 0;
    if (*param_4 != '/') goto LAB_0113d3e4;
  }
  uVar2 = local_30 - iVar1;
  local_28 = iVar1;
joined_r0x0113d440:
  if (uVar2 < param_5) {
    FUN_015bf41c(&local_30,local_28,param_5,1,1);
  }
  iVar1 = local_28;
  FUN_016dd1aa(local_2c + local_28,param_4,param_5);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = iVar1 + param_5;
  return;
}

