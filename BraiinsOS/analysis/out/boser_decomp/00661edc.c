// FUN_00661edc @ 00661edc size=168 calls_out=2 calls_in=0
// strings: SearcherVithkuqi | rabinkarp

void FUN_00661edc(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  iVar2 = *param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"SearcherVithkuqi",8);
  local_13 = 0;
  local_18 = param_2;
  uVar1 = FUN_01302c38(&local_18,&DAT_0056e028,4,&DAT_01cfde28,&LAB_018a0040);
  uVar1 = FUN_01302c38(uVar1,&DAT_0056f2ec,4,&DAT_01cfde30,&LAB_018a0040);
  FUN_01302c38(uVar1,"rabinkarp",9,iVar2 + 0x28,FUN_015fcff0);
  FUN_01302e1c();
  return;
}

