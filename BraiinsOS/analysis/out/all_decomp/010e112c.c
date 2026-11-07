// FUN_010e112c @ 010e112c size=424 calls_out=0 calls_in=4
// strings: 

void FUN_010e112c(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40 [8];
  
  uVar3 = param_2 & 0xffffff;
  if (uVar3 >> 0x17 != 0) {
    *param_1 = 1;
    param_1[1] = &DAT_00387cef;
    param_1[2] = 0x32;
    return;
  }
  if (param_2 < 0x4000000) {
    local_40[1] = 0;
    local_44 = 0;
    local_48 = 0;
    local_40[0] = uVar3 >> ((param_2 >> 0x18) * -8 + 0x18 & 0xff);
    local_4c = 0;
    local_50 = 0;
    local_54 = 0;
    local_58 = 0;
  }
  else {
    local_40[7] = 0;
    local_40[6] = 0;
    local_40[5] = 0;
    local_40[4] = 0;
    local_40[3] = 0;
    local_40[2] = 0;
    local_40[1] = 0;
    local_40[0] = 0;
    uVar4 = (param_2 >> 0x18) * 8 - 0x18;
    uVar2 = uVar4 & 0x38;
    uVar1 = uVar4 >> 6;
    if (uVar4 < 0x100) {
      uVar5 = uVar3 << uVar2;
      uVar6 = uVar2 - 0x20;
      if (-1 < (int)uVar6) {
        uVar5 = 0;
      }
      local_40[uVar1 * 2] = uVar5;
      uVar5 = uVar3 >> (0x20 - uVar2 & 0xff);
      if (-1 < (int)uVar6) {
        uVar5 = uVar3 << (uVar6 & 0xff);
      }
      local_40[uVar1 * 2 + 1] = uVar5;
      iVar7 = uVar1 + 1;
      if (iVar7 != 4) {
        local_40[iVar7 * 2] = 0;
        local_40[iVar7 * 2 + 1] = 0;
        iVar7 = uVar1 + 2;
        if (iVar7 != 4) {
          local_40[iVar7 * 2] = 0;
          local_40[iVar7 * 2 + 1] = 0;
          iVar7 = uVar1 + 3;
          if (iVar7 != 4) {
            local_40[iVar7 * 2] = 0;
            local_40[iVar7 * 2 + 1] = 0;
          }
        }
      }
    }
    if ((uVar2 != 0) && (uVar4 < 0xc0)) {
      uVar4 = local_40[uVar1 * 2 + 2];
      uVar3 = uVar3 >> (0x40 - uVar2 & 0xff);
      if (-1 < (int)(0x20 - uVar2)) {
        uVar3 = 0;
      }
      local_40[uVar1 * 2 + 2] = uVar4 + uVar3;
      local_40[uVar1 * 2 + 3] = local_40[uVar1 * 2 + 3] + (uint)CARRY4(uVar4,uVar3);
    }
    local_58 = local_40[2];
    local_54 = local_40[3];
    local_50 = local_40[4];
    local_4c = local_40[5];
    local_48 = local_40[6];
    local_44 = local_40[7];
  }
  param_1[2] = local_40[0];
  param_1[3] = local_40[1];
  param_1[4] = local_58;
  param_1[5] = local_54;
  param_1[6] = local_50;
  param_1[7] = local_4c;
  param_1[8] = local_48;
  param_1[9] = local_44;
  *param_1 = 0;
  return;
}

