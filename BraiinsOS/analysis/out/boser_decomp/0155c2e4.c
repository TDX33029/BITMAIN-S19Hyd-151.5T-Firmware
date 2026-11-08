// FUN_0155c2e4 @ 0155c2e4 size=196 calls_out=2 calls_in=0
// strings: ValidationErrorRepr | instance_path | schema_path

void FUN_0155c2e4(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  iVar2 = *(int *)*param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"ValidationErrorRepr",0x13);
  local_13 = 0;
  local_18 = param_2;
  uVar1 = FUN_01302c38(&local_18,&DAT_0056fbe8,8,iVar2 + 0x58,&LAB_01596fac);
  uVar1 = FUN_01302c38(uVar1,&DAT_0056f2ec,4,iVar2 + 0x20,&LAB_01597108);
  uVar1 = FUN_01302c38(uVar1,"instance_path",0xd,iVar2 + 0x70,FUN_0155c0fc);
  FUN_01302c38(uVar1,"schema_path",0xb,iVar2 + 0x78,FUN_0155c0fc);
  FUN_01302b5c();
  return;
}

