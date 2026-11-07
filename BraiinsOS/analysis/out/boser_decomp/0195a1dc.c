// FUN_0195a1dc @ 0195a1dc size=180 calls_out=5 calls_in=3
// strings: 

void FUN_0195a1dc(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_1c = 0;
  iVar2 = -0x80000000;
  local_20 = 1;
  if ((*(int *)(param_2 + 0xc4) != -0x80000000) &&
     (FUN_006666fc(&local_2c,*(undefined4 *)(param_2 + 200),*(undefined4 *)(param_2 + 0xcc)),
     iVar2 = local_2c, local_2c != -0x80000000)) {
    local_1c = local_24;
    local_20 = local_28;
  }
  FUN_01960578(param_1,&local_20);
  iVar1 = param_1[2];
  if (iVar1 == *param_1) {
    FUN_0195b4a8(param_1);
  }
  FUN_01bed4e2(iVar1 * 0xd0 + param_1[1],param_2,0xd0);
  param_1[2] = iVar1 + 1;
  if (iVar2 != -0x80000000) {
    FUN_019bb7e0(iVar2,local_28);
  }
  return;
}

