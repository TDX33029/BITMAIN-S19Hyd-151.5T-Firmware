// FUN_01afa214 @ 01afa214 size=596 calls_out=5 calls_in=4
// strings: 

undefined4 FUN_01afa214(uint *param_1)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int local_48;
  int local_44;
  undefined4 local_40;
  int local_38;
  int local_34;
  uint local_30;
  uint local_2c;
  
  uVar1 = *(ushort *)((int)param_1 + 0x32);
  uVar8 = param_1[6];
  uVar10 = param_1[7];
  iVar9 = uVar1 + 4;
  uVar12 = param_1[2];
  uVar11 = param_1[3];
  uVar6 = param_1[4];
  uVar13 = *param_1;
  uVar2 = param_1[0xc];
  local_48 = iVar9;
  local_30._0_2_ = (short)uVar2;
  if ((char)param_1[0xd] == '\0') {
    uVar7 = param_1[10];
    uVar5 = param_1[0xb];
    uVar3 = param_1[8];
    local_44 = FUN_01298504(iVar9,1,uVar7,uVar8,uVar7,uVar5,uVar10,uVar3,uVar6,uVar8);
    if (local_44 == 0) goto LAB_01afa45c;
    local_40 = 0;
    local_34 = 2;
    local_38 = 0;
    FUN_01342ea8(&local_48,&local_38);
    local_30 = CONCAT22(local_30._2_2_,uVar1);
    local_34 = 2;
    local_38 = 0;
    FUN_01342ea8(&local_48,&local_38);
    if ((uVar13 & 1) != 0) {
      local_34 = 8;
      local_38 = 0;
      local_30 = uVar12;
      local_2c = uVar11;
      FUN_01af9ed4(&local_48,&local_38);
    }
    if ((uVar6 & 1) != 0) {
      local_34 = 8;
      local_38 = 0;
      local_30 = uVar8;
      local_2c = uVar10;
      FUN_01af9ed4(&local_48,&local_38);
    }
    if ((uVar3 & 1) != 0) {
      local_34 = 8;
      local_38 = 0;
      local_30 = uVar7;
      local_2c = uVar5;
      FUN_01af9ed4(&local_48,&local_38);
    }
  }
  else {
    if ((uVar6 & uVar13) == 0 && (param_1[5] & param_1[1]) == 0) {
      return 1;
    }
    local_44 = FUN_01298504(iVar9,1);
    if (local_44 == 0) {
LAB_01afa45c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,iVar9);
    }
    local_40 = 0;
    local_34 = 2;
    local_38 = 0;
    FUN_01342ea8(&local_48,&local_38);
    local_30 = CONCAT22(local_30._2_2_,uVar1);
    local_34 = 2;
    local_38 = 0;
    FUN_01342ea8(&local_48,&local_38);
    local_34 = 8;
    local_38 = 0;
    local_30 = uVar12;
    local_2c = uVar11;
    FUN_01af9ed4(&local_48,&local_38);
    local_34 = 8;
    local_38 = 0;
    local_30 = uVar8;
    local_2c = uVar10;
    FUN_01af9ed4(&local_48,&local_38);
  }
  local_38 = local_48;
  local_34 = local_44;
  local_30 = local_40;
  uVar4 = FUN_01608eec(&local_38);
  return uVar4;
}

