// FUN_00076c94 @ 00076c94  size=656  callers=1
// program: bmminer


undefined4 FUN_00076c94(byte param_1,int param_2,byte param_3)

{
  int iVar1;
  char local_868 [32];
  uint local_848;
  char acStack_844 [2012];
  undefined1 auStack_68 [72];
  byte local_20 [4];
  undefined4 local_1c;
  short local_18;
  int local_14;
  ushort local_10;
  short local_e;
  undefined4 local_c;
  
  if (param_3 < 0x41) {
    if ((param_1 & 1) == 0) {
      local_c = 0;
      local_20[0] = 0x55;
      local_20[1] = 0xaa;
      local_20[2] = 8;
      local_20[3] = 6;
      local_1c = 0;
      local_18 = 0;
      memset(auStack_68,0,0x48);
      local_e = 0;
      local_14 = 6;
      local_1c = (uint)CONCAT12(param_3,(ushort)param_1);
      for (local_10 = 2; local_10 < 8; local_10 = local_10 + 2) {
        local_e = (ushort)local_20[local_10] + local_e;
        local_e = (ushort)local_20[local_10 + 1] * 0x100 + local_e;
      }
      local_18 = local_e;
      iVar1 = FUN_0006f67c(DAT_009451f0,local_20,10,auStack_68,param_3 + 8);
      if (iVar1 == 0) {
        for (local_10 = 0; iVar1 = local_14, local_10 < param_3; local_10 = local_10 + 1) {
          local_14 = local_14 + 1;
          *(undefined1 *)(param_2 + (uint)local_10) = auStack_68[iVar1];
        }
      }
      else {
        local_c = 0xffffffff;
      }
    }
    else {
      builtin_strncpy(local_868,"read data should start from even",0x20);
      local_848._0_1_ = ' ';
      local_848._1_1_ = 'a';
      local_848._2_1_ = 'd';
      local_848._3_1_ = 'd';
      builtin_strncpy(acStack_844,"ress\n",6);
      FUN_0004948c(3,local_868,0);
      local_c = 0xffffffff;
    }
  }
  else {
    builtin_strncpy(local_868,"read length should less then 64\n",0x20);
    local_848 = local_848 & 0xffffff00;
    FUN_0004948c(3,local_868,0);
    local_c = 0xffffffff;
  }
  return local_c;
}

