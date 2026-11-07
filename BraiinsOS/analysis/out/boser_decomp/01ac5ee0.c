// FUN_01ac5ee0 @ 01ac5ee0 size=396 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_01ac5ee0(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int local_7c;
  uint local_78;
  int *local_74;
  undefined1 *local_70;
  undefined4 uStack_6c;
  int *local_68;
  code *local_64;
  int local_60;
  code *local_5c;
  int local_58;
  code *local_54;
  int local_50;
  code *local_4c;
  int *local_48;
  code *local_44;
  int *local_40;
  code *local_3c;
  uint *local_38;
  code *local_34;
  int **local_30;
  undefined1 *local_2c;
  int local_28;
  
  iVar2 = 2;
  uVar3 = param_1[5];
  if (uVar3 < 0x10000) {
    iVar2 = 1;
  }
  if (uVar3 < 0x7e) {
    iVar2 = 0;
  }
  local_7c = (&DAT_005397bc)[iVar2] + uVar3 + (uint)*(byte *)((int)param_1 + 7) * 4;
  local_78 = uVar3;
  if (uVar3 == 0) {
    local_68 = (int *)0x0;
    local_60 = 0;
    local_70 = (undefined1 *)1;
  }
  else {
    iVar2 = param_1[4];
    local_64 = (code *)0x1;
    local_68 = (int *)0x0;
    local_60 = 0;
    do {
      local_70 = &LAB_0161d65c;
      local_74 = &local_28;
      local_5c = (code *)iVar2;
      local_28 = iVar2;
      FUN_012fa178(&local_68,&DAT_01d2f714,&DAT_0056ff60,&local_74);
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 - 1;
      local_70 = local_64;
    } while (uVar3 != 0);
  }
  local_48 = param_1 + 1;
  local_50 = (int)param_1 + 3;
  local_58 = (int)param_1 + 2;
  local_30 = &local_74;
  local_38 = &local_78;
  local_40 = &local_7c;
  local_2c = &LAB_00632348;
  local_34 = FUN_012fd02c;
  local_3c = FUN_012fd02c;
  local_44 = FUN_01ac60b8;
  local_4c = FUN_012fbb44;
  local_54 = FUN_012fbb44;
  local_5c = FUN_012fbb44;
  local_64 = FUN_012fbb44;
  local_74 = local_68;
  uStack_6c = local_60;
  local_68 = param_1;
  local_60 = (int)param_1 + 1;
  uVar1 = FUN_012fa178(*param_2,param_2[1],&DAT_0057ce08,&local_68);
  FUN_0134bd64(local_74,local_70);
  return uVar1;
}

