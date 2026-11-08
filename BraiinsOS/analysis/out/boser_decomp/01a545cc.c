// FUN_01a545cc @ 01a545cc size=208 calls_out=2 calls_in=0
// strings: Formatted | value | decordotted

void FUN_01a545cc(int *param_1,undefined4 *param_2)

{
  undefined1 *puVar1;
  int *piVar2;
  int iVar3;
  undefined4 *local_18;
  undefined1 local_14;
  undefined1 local_13;
  
  iVar3 = *param_1;
  local_14 = (**(code **)(param_2[1] + 0xc))(*param_2,"Formatted",9);
  local_13 = 0;
  local_18 = param_2;
  FUN_01302c38(&local_18,"value",5,iVar3 + 0x18,&DAT_01aaa184);
  piVar2 = (int *)(iVar3 + 0x20);
  if (*piVar2 == -0x7ffffffd) {
    piVar2 = (int *)&DAT_01d2c658;
    puVar1 = &LAB_018a0040;
  }
  else {
    puVar1 = &LAB_01a53e34;
  }
  FUN_01302c38(&local_18,&DAT_0056d634,4,piVar2,puVar1);
  FUN_01302c38(&local_18,"decordotted",5,iVar3,FUN_01a53cac);
  FUN_01302e1c();
  return;
}

