// FUN_0161f9e8 @ 0161f9e8 size=152 calls_out=2 calls_in=1
// strings: invalid IFLA_EVENT value

void FUN_0161f9e8(int *param_1)

{
  int local_48;
  uint local_44;
  int local_40;
  int local_38;
  uint uStack_34;
  int iStack_30;
  int local_28;
  uint uStack_24;
  int iStack_20;
  
  FUN_0160f300(&local_38);
  if (local_38 == -0x80000000) {
    local_48 = local_38;
    local_44 = uStack_34;
    local_40 = iStack_30;
  }
  else {
    local_28 = local_38;
    uStack_24 = uStack_34;
    iStack_20 = iStack_30;
    FUN_016403ac(&local_48,&local_28,"invalid IFLA_EVENT value",0x18);
  }
  if (local_48 == -0x80000000) {
    param_1[2] = local_44;
    if (6 < local_44) {
      local_44 = 7;
    }
    *param_1 = -0x80000000;
    param_1[1] = local_44;
  }
  else {
    *param_1 = local_48;
    param_1[1] = local_44;
    param_1[2] = local_40;
  }
  return;
}

