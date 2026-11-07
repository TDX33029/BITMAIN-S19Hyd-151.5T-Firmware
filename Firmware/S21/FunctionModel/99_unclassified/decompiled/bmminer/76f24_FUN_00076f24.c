// FUN_00076f24 @ 00076f24  size=1064  callers=0
// program: bmminer


undefined4 FUN_00076f24(byte param_1,int param_2,byte param_3)

{
  undefined1 *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int aiStack_848 [2];
  int local_840;
  byte local_83a;
  byte local_839;
  char local_834 [32];
  undefined4 local_814;
  char acStack_810 [2012];
  undefined1 auStack_34 [6];
  char local_2e;
  char local_2d;
  undefined1 *local_28;
  int local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  short local_14;
  ushort local_12;
  
  local_840 = param_2;
  local_83a = param_3;
  local_839 = param_1;
  if (param_3 < 0x41) {
    if ((param_1 & 1) == 0) {
      local_18 = 0;
      local_14 = 0;
      local_1c = 6;
      uVar4 = (uint)param_3;
      local_24 = uVar4 + 7;
      iVar2 = -(uVar4 + 0xf & 0xfffffff8);
      local_28 = (undefined1 *)((int)aiStack_848 + iVar2 + 8);
      local_20 = uVar4 + 8;
      *local_28 = 0x55;
      local_28[1] = 0xaa;
      local_28[2] = (char)local_20 + -2;
      local_28[3] = 0x86;
      local_28[4] = local_839;
      local_28[5] = 0;
      puVar1 = local_28;
      for (local_12 = 0; local_12 < local_83a; local_12 = local_12 + 1) {
        local_28[local_12 + 6] = *(undefined1 *)(local_840 + (uint)local_12);
      }
      for (local_12 = 2; (uint)local_12 < uVar4 + 6; local_12 = local_12 + 2) {
        local_14 = (ushort)(byte)local_28[local_12 + 1] * 0x100 +
                   (ushort)(byte)local_28[local_12] + local_14;
      }
      local_28[uVar4 + 6] = (char)local_14;
      local_28[uVar4 + 7] = (char)((ushort)local_14 >> 8);
      *(uint *)((int)aiStack_848 + iVar2) = local_83a + 8;
      iVar2 = FUN_0006f67c(DAT_009451f0,puVar1,uVar4 + 8,auStack_34);
      if (iVar2 == 0) {
        if ((local_2e == '\0') || (local_2d == '\0')) {
          builtin_strncpy(local_834,"write data to power register 0x8",0x20);
          local_814._0_1_ = '6';
          local_814._1_1_ = ' ';
          local_814._2_1_ = 's';
          local_814._3_1_ = 'u';
          builtin_strncpy(acStack_810,"ccess\n",7);
          FUN_0004948c(3,local_834,0);
          uVar3 = 0;
        }
        else {
          builtin_strncpy(local_834,"write data to power register 0x8",0x20);
          local_814._0_1_ = '6';
          local_814._1_1_ = ' ';
          local_814._2_1_ = 's';
          local_814._3_1_ = 'u';
          builtin_strncpy(acStack_810,"ccess\n",7);
          FUN_0004948c(3,local_834,0);
          uVar3 = 0xffffffff;
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    else {
      builtin_strncpy(local_834,"write data should start from eve",0x20);
      local_814._0_1_ = 'n';
      local_814._1_1_ = ' ';
      local_814._2_1_ = 'a';
      local_814._3_1_ = 'd';
      builtin_strncpy(acStack_810,"dress\n",7);
      FUN_0004948c(3,local_834,0);
      uVar3 = 0xffffffff;
    }
  }
  else {
    builtin_strncpy(local_834,"write length should less then 64",0x20);
    local_814 = CONCAT22(local_814._2_2_,10);
    FUN_0004948c(3,local_834,0);
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

