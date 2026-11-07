// FUN_018f2280 @ 018f2280 size=200 calls_out=3 calls_in=2
// strings: 

void FUN_018f2280(int param_1,int *param_2)

{
  int iVar1;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_5c;
  int local_58;
  undefined2 local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined2 local_3c;
  int local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar1 = param_2[1];
  local_64 = param_2[2];
  local_58 = param_2[3];
  local_5c = *(undefined4 *)(param_1 + 0x244);
  local_54 = (undefined2)param_2[4];
  local_6c = 0;
  local_68 = iVar1;
  while (FUN_0191e464(&local_38,&local_6c), local_38 == 1) {
    local_4c = local_34;
    uStack_48 = uStack_30;
    uStack_44 = uStack_2c;
    uStack_40 = uStack_28;
    local_3c = local_54;
    local_50 = local_58;
    FUN_018f23e0(param_1,&local_50);
  }
  if (*param_2 == -0x80000000) {
    return;
  }
  FUN_0134bd64(*param_2,iVar1);
  return;
}

