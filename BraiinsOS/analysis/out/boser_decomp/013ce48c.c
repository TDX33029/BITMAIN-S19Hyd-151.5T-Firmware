// FUN_013ce48c @ 013ce48c size=120 calls_out=3 calls_in=1
// strings: 

void FUN_013ce48c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int local_88;
  int local_84;
  undefined1 auStack_80 [96];
  
  iVar2 = param_2[1];
  FUN_013e4770(&local_88,iVar2,param_2[2]);
  if (local_88 == -0x80000000) {
    FUN_019bb7e0(*param_2,iVar2);
    local_88 = -0x80000000;
  }
  else {
    FUN_01bed4e2(param_1 + 2,auStack_80,0x60);
    iVar2 = param_2[1];
    iVar1 = param_2[2];
    param_1[0x1a] = *param_2;
    param_1[0x1b] = iVar2;
    param_1[0x1c] = iVar1;
  }
  *param_1 = local_88;
  param_1[1] = local_84;
  return;
}

