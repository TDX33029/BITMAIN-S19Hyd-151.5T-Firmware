// FUN_00094c1c @ 00094c1c  size=200  callers=1
// program: bmminer


undefined4 FUN_00094c1c(int *param_1,code *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  
  local_c = 0;
  while ((local_c < param_1[1] &&
         (iVar1 = (*param_2)(*(undefined4 *)(*param_1 + local_c * 4),param_3), iVar1 < 1))) {
    local_c = local_c + 1;
  }
  if (local_c == param_1[1]) {
    uVar2 = FUN_00094aa4(param_1,param_3);
  }
  else {
    uVar2 = FUN_00094ae0(param_1,local_c,param_3);
  }
  return uVar2;
}

