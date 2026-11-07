// FUN_016a55a4 @ 016a55a4 size=272 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_016a55a4(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint local_44;
  uint *local_40;
  code *local_3c;
  int local_38;
  code *local_34;
  int local_30;
  code *local_2c;
  int local_28;
  code *local_24;
  uint *local_20;
  code *local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  uVar4 = param_1[1];
  if ((int)-(uVar4 + (9999 < *param_1)) < 0 ==
      (SBORROW4(0,uVar4) != SBORROW4(-uVar4,(uint)(9999 < *param_1)))) {
    if ((int)uVar4 < 0) {
      puVar3 = &DAT_00569ba8;
    }
    else {
      puVar3 = &DAT_0056a180;
    }
  }
  else {
    puVar3 = &DAT_00589737;
  }
  uVar6 = *param_2;
  uVar5 = param_2[1];
  local_3c = FUN_00fac310;
  local_40 = param_1;
  iVar1 = FUN_00fa948c(uVar6,uVar5,puVar3,&local_40);
  uVar2 = 1;
  if (iVar1 == 0) {
    local_1c = FUN_00fac0c8;
    local_14 = &LAB_00fac484;
    local_44 = param_1[2] / 1000;
    local_24 = FUN_00fac0c8;
    local_18 = &local_44;
    local_20 = param_1 + 4;
    local_28 = (int)param_1 + 0xf;
    local_30 = (int)param_1 + 0xe;
    local_38 = (int)param_1 + 0xd;
    local_2c = FUN_00fac0c8;
    local_34 = FUN_00fac0c8;
    local_3c = FUN_00fac0c8;
    local_40 = param_1 + 3;
    uVar2 = FUN_00fa948c(uVar6,uVar5,&DAT_00415016,&local_40);
  }
  return uVar2;
}

