// FUN_018c7f08 @ 018c7f08 size=136 calls_out=4 calls_in=1
// strings: 

void FUN_018c7f08(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  int local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined2 local_9c;
  undefined1 *local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined1 local_2c;
  
  local_98 = &DAT_80000004;
  local_2c = 8;
  local_94 = *param_2;
  uStack_90 = param_2[1];
  uStack_8c = param_2[2];
  FUN_018e1c0c(&local_118,&local_98);
  local_9c = 4;
  if (-1 < local_118) {
    FUN_018dc0bc(param_1,uStack_114,uStack_110);
  }
  FUN_01bed4e2(&local_98,&local_118,0x80);
  FUN_018e077c(param_3,&local_98,0);
  return;
}

