// FUN_01260464 @ 01260464 size=196 calls_out=3 calls_in=2
// strings: 

void FUN_01260464(int *param_1,undefined4 param_2,byte param_3,undefined4 param_4,undefined4 param_5
                 )

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  int local_28;
  int local_24;
  int local_20;
  
  FUN_0126520c(param_1,param_2,param_4,param_5);
  if (param_3 != 2) {
    local_28 = *param_1;
    local_24 = param_1[1];
    local_20 = param_1[2];
    uVar3 = 3;
    if ((param_3 & 1) != 0) {
      uVar3 = 4;
    }
    if ((uint)(local_28 - local_20) < uVar3) {
      FUN_016092cc(&local_28,local_20,uVar3,1,1);
    }
    iVar1 = local_20;
    puVar2 = &DAT_0056e75c;
    if ((param_3 & 1) == 0) {
      puVar2 = &DAT_00450e53;
    }
    FUN_01bed4e2(local_24 + local_20,puVar2,uVar3);
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = iVar1 + uVar3;
  }
  return;
}

