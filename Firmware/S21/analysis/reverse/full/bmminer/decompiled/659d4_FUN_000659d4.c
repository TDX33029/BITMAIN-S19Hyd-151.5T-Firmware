// FUN_000659d4 @ 000659d4  size=288  callers=0
// program: bmminer


undefined4 FUN_000659d4(undefined4 param_1,int param_2)

{
  undefined4 uVar1;
  char local_80c [20];
  uint local_7f8;
  char acStack_7f4 [2024];
  int local_c;
  
  local_c = FUN_0006508c(param_1);
  if (local_c == 0) {
    builtin_strncpy(local_80c,"unsuported led port\n",0x14);
    local_7f8 = local_7f8 & 0xffffff00;
    FUN_0004948c(0,local_80c,0);
    uVar1 = 0xffffffff;
  }
  else if (param_2 == 200) {
    builtin_strncpy(local_80c,"interval is same wit",0x14);
    local_7f8._0_1_ = 'h';
    local_7f8._1_1_ = ' ';
    local_7f8._2_1_ = 'd';
    local_7f8._3_1_ = 'e';
    builtin_strncpy(acStack_7f4,"fault\n",7);
    FUN_0004948c(1,local_80c,0);
    uVar1 = 0;
  }
  else {
    FUN_000656c8(local_c,param_2,DAT_00945050);
    uVar1 = 0;
  }
  return uVar1;
}

