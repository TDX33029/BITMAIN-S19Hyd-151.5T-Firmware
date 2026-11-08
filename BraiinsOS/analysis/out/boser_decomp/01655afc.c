// FUN_01655afc @ 01655afc size=236 calls_out=3 calls_in=8
// strings: 

void FUN_01655afc(int *param_1)

{
  int iVar1;
  int local_38;
  int iStack_34;
  int iStack_30;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  FUN_016558d4(&local_38);
  if (local_38 == -0x80000000) {
    FUN_012fbd94(&local_1c,iStack_34,iStack_30);
    if (local_1c == 1) {
      param_1[1] = local_18;
      param_1[2] = local_14;
      iVar1 = -0x7fffffff;
    }
    else {
      param_1[1] = local_18;
      param_1[2] = local_14;
      iVar1 = -0x80000000;
    }
    *param_1 = iVar1;
  }
  else {
    local_28 = local_38;
    local_24 = iStack_34;
    local_20 = iStack_30;
    FUN_012fbd94(&local_1c,iStack_34,iStack_30);
    if (local_1c == 0) {
      local_20 = local_24;
      local_18 = iStack_30;
    }
    else {
      if (local_28 != -0x80000000) {
        param_1[2] = local_14;
        *param_1 = -0x7fffffff;
        param_1[1] = local_18;
        FUN_0134bd64(local_28,iStack_34);
        return;
      }
      local_28 = local_24;
    }
    *param_1 = local_28;
    param_1[1] = local_20;
    param_1[2] = local_18;
  }
  return;
}

