// FUN_01904fbc @ 01904fbc size=192 calls_out=3 calls_in=0
// strings: 

void FUN_01904fbc(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  int local_1c;
  int local_18;
  
  iVar1 = *(int *)(param_2 + 4);
  FUN_019269f4(&local_2c,0x30,&DAT_0053337e,5,1,0);
  FUN_019269f4(&local_20,3,&DAT_00523849,1,iVar1 + 0xc,0x20);
  iVar1 = local_1c;
  FUN_01657150(&local_2c,local_1c,local_1c + local_18);
  FUN_0134bd64(local_20,iVar1);
  FUN_019269f4(&local_20,0x30,local_28,local_24,1,0);
  *param_1 = local_20;
  param_1[1] = local_1c;
  param_1[2] = local_18;
  FUN_0134bd64(local_2c,local_28);
  return;
}

