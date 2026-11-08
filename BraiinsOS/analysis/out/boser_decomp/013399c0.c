// FUN_013399c0 @ 013399c0 size=148 calls_out=2 calls_in=1
// strings: 

void FUN_013399c0(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int local_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  
  iVar2 = *(int *)(param_2 + 0x40);
  *(int *)(param_2 + 0x40) = iVar2 + 1;
  local_48 = 9;
  local_44 = iVar2;
  FUN_013387b0(param_2 + 0x34,&local_48);
  FUN_01339e00(&local_48,param_2,param_3,param_4);
  iVar1 = local_48;
  if (local_48 == 0x12) {
    local_48 = 0xb;
    local_44 = iVar2;
    FUN_013387b0(param_2 + 0x34,&local_48);
  }
  else {
    param_1[1] = local_44;
    param_1[2] = iStack_40;
    param_1[3] = iStack_3c;
    param_1[4] = iStack_38;
  }
  *param_1 = iVar1;
  return;
}

