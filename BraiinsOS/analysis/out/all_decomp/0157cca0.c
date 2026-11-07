// FUN_0157cca0 @ 0157cca0 size=176 calls_out=2 calls_in=0
// strings: 

void FUN_0157cca0(int param_1,undefined4 *param_2)

{
  uint uVar1;
  ulonglong uVar2;
  char *local_38;
  int local_34;
  char acStack_30 [24];
  undefined1 *local_18;
  undefined4 *local_14;
  
  uVar2 = *(ulonglong *)(param_1 + 8);
  uVar1 = (uint)(uVar2 >> 0x20);
  if ((uVar1 & 0x7fffffff) < 0x7ff00000) {
    local_34 = FUN_016d1b20(acStack_30);
    local_34 = local_34 - (int)acStack_30;
    local_38 = acStack_30;
  }
  else {
    local_38 = &DAT_00414412;
    if (0x7fffffff < uVar1) {
      local_38 = "-inf4\x1e";
    }
    local_34 = 4;
    if (uVar1 < 0x80000000) {
      local_34 = 3;
    }
    if ((int)uVar2 != 0 || (uVar2 & 0xfffff00000000) != 0) {
      local_34 = 3;
      local_38 = "NaN";
    }
  }
  local_14 = &DAT_0157d360;
  local_18 = (undefined1 *)&local_38;
  FUN_00fa948c(*param_2,param_2[1],&DAT_0059466b,&local_18);
  return;
}

