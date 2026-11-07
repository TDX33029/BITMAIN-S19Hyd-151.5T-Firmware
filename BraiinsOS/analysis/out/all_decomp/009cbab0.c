// FUN_009cbab0 @ 009cbab0 size=396 calls_out=5 calls_in=0
// strings: 

int FUN_009cbab0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  int iVar9;
  undefined4 ****local_50;
  code *local_4c;
  int local_48;
  int local_40;
  code *local_3c;
  uint local_38;
  undefined4 ****local_30;
  code *local_2c;
  int local_28;
  
  piVar5 = (int *)*param_1;
  uVar1 = *param_2;
  uVar3 = param_2[1];
  local_4c = (code *)piVar5[1];
  local_48 = piVar5[2];
  local_50 = (undefined4 ****)*piVar5;
  piVar5[2] = 0;
  piVar5[1] = 4;
  *piVar5 = 0;
  local_2c = FUN_009a0c0c;
  local_30 = &local_50;
  iVar2 = FUN_00fa948c(uVar1,uVar3,&DAT_00590e71,&local_30);
  if (iVar2 == 0) {
    uVar6 = piVar5[2];
    local_40 = *piVar5;
    pcVar7 = (code *)piVar5[1];
    *piVar5 = (int)local_50;
    piVar5[1] = (int)local_4c;
    piVar5[2] = local_48;
    local_3c = pcVar7;
    if (uVar6 == 0) {
      local_38 = 0;
    }
    else {
      piVar5[1] = 4;
      piVar5[2] = 0;
      *piVar5 = 0;
      local_30 = local_50;
      local_2c = local_4c;
      local_28 = local_48;
      local_38 = uVar6;
      if ((uint)((int)local_50 - local_48) < uVar6) {
        FUN_009b6da4(&local_30,local_48,uVar6,4,8);
      }
      iVar4 = local_28;
      FUN_016dd1aa(local_2c + local_28 * 8,pcVar7,uVar6 << 3);
      iVar9 = *piVar5;
      local_28 = iVar4 + uVar6;
      iVar8 = piVar5[1];
      iVar4 = piVar5[2];
      *piVar5 = (int)local_30;
      piVar5[1] = (int)local_2c;
      piVar5[2] = local_28;
      local_38 = 0;
      FUN_009a1ddc(iVar8,iVar4);
      if (iVar9 != 0) {
        thunk_FUN_016d3fb4(iVar8);
      }
    }
    FUN_009a1ddc(pcVar7,0);
    if (local_40 == 0) {
      return 0;
    }
  }
  else {
    FUN_009a1ddc(local_4c,local_48);
    if (local_50 == (undefined4 ****)0x0) {
      return iVar2;
    }
    pcVar7 = local_4c;
  }
  thunk_FUN_016d3fb4(pcVar7);
  return iVar2;
}

