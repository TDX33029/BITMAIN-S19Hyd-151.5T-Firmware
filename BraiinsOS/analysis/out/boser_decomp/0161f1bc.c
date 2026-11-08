// FUN_0161f1bc @ 0161f1bc size=176 calls_out=1 calls_in=3
// strings: LinkMessageBuffer

void FUN_0161f1bc(int *param_1,int param_2)

{
  int local_44;
  int local_40;
  int local_3c;
  char *local_38;
  undefined4 local_34;
  uint local_30 [2];
  char **local_28;
  undefined1 *local_24;
  uint *local_20;
  code *local_1c;
  uint *local_18;
  code *local_14;
  
  local_30[0] = *(uint *)(param_2 + 4);
  if (local_30[0] < 0x10) {
    local_34 = 0x11;
    local_18 = local_30;
    local_20 = local_30 + 1;
    local_28 = &local_38;
    local_14 = FUN_012fd02c;
    local_1c = FUN_012fd02c;
    local_30[1] = 0x10;
    local_38 = "LinkMessageBuffer";
    local_24 = &LAB_018a13b8;
    FUN_00664898(&local_44,&DAT_005ab249,&local_28);
    if (local_44 != -0x80000000) {
      *param_1 = local_44;
      param_1[1] = local_40;
      param_1[2] = local_3c;
      return;
    }
  }
  *param_1 = -0x80000000;
  param_1[1] = param_2;
  return;
}

