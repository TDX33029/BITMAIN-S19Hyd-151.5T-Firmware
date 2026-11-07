// FUN_01b85a80 @ 01b85a80 size=1220 calls_out=5 calls_in=1
// strings: 

void FUN_01b85a80(int param_1,uint *param_2,int param_3,uint param_4,int param_5,int param_6,
                 int param_7)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint local_48;
  uint *local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar7 = *param_2;
  param_6 = param_5 + param_6;
  if (*(int *)(param_1 + 0x9a4) == 0) {
    iVar8 = 0;
    if (*(int *)(param_1 + 0x9a8) != 0) {
      iVar8 = *(int *)(param_1 + 0x9ac);
    }
  }
  else {
    iVar8 = *(int *)(*(int *)(param_1 + 0x9a4) + 4);
  }
  iVar1 = *(int *)(param_1 + 0x860);
  local_40 = *(uint *)(iVar1 + 0x11e8);
  uVar6 = *(uint *)(iVar1 + 0x11ec);
  uVar2 = *(uint *)(iVar1 + 0x11f0);
  local_44 = (uint *)(param_3 + uVar7 * 0x10);
  uVar9 = param_6 - 0x20;
  local_3c = uVar6;
  local_38 = local_40;
  local_34 = uVar6;
  local_30 = uVar2;
  for (uVar14 = uVar7; uVar14 < param_4; uVar14 = uVar14 + 1) {
    uVar10 = local_44[2];
    uVar11 = *local_44;
    if (uVar10 == 0 && uVar11 == 0) break;
    uVar13 = local_44[1];
    local_48 = uVar11 + 3;
    if (param_7 != 2) {
      if (uVar13 == 0) {
        iVar1 = 1;
LAB_01b85c1c:
        if (local_3c == uVar11) {
          local_48 = 2 - iVar1;
        }
        else if (uVar2 == uVar11) {
          local_48 = 3 - iVar1;
        }
        else if (uVar13 == 0) {
          if (local_40 - 1 == uVar11) {
            local_48 = 3;
          }
          else {
            local_48 = uVar11 + 3;
          }
        }
      }
      else {
        iVar1 = 0;
        if (local_40 != uVar11) goto LAB_01b85c1c;
        local_48 = 1;
      }
      local_38 = local_40;
      local_34 = local_3c;
      local_30 = uVar2;
      FUN_01b857dc(&local_38,local_48);
      local_40 = local_38;
      local_3c = local_34;
      uVar6 = extraout_r1;
      uVar2 = local_30;
    }
    if (*(int *)(param_1 + 0x138) != 0) {
      uVar11 = *(uint *)(param_1 + 0xc0);
      iVar3 = *(int *)(param_1 + 0xd0);
      uVar6 = uVar10 + uVar13 + param_2[2];
      iVar1 = 1 << (uVar11 & 0xff);
      iVar4 = *(int *)(param_1 + 0x160);
      param_2[2] = uVar6;
      if (uVar6 <= (uint)(1 << (uVar11 & 0xff))) {
        iVar1 = uVar6 + iVar8;
      }
      uVar11 = (uint)(iVar4 != 0);
      if (iVar3 == 3) {
        uVar11 = 1;
      }
      uVar6 = iVar1 + 3;
      if (uVar6 < local_48 || uVar10 < 4 - uVar11) goto LAB_01b85cac;
    }
    if (*(uint *)(param_1 + 0x310) <= uVar14 - *param_2) goto LAB_01b85cac;
    if (uVar9 < param_5 + uVar13) {
      FUN_01b85170(*(undefined4 *)(param_1 + 0x300),param_5,param_5 + uVar13,uVar9);
    }
    else {
      FUN_01b84e04(*(undefined4 *)(param_1 + 0x300),param_5);
      if (0x10 < uVar13) {
        iVar1 = *(int *)(param_1 + 0x300);
        FUN_01b84e04(iVar1 + 0x10,param_5 + 0x10);
        if (0x10 < (int)(uVar13 - 0x10)) {
          uVar6 = iVar1 + 0x20;
          iVar3 = param_5;
          do {
            FUN_01b84e04(uVar6,iVar3 + 0x20);
            iVar4 = uVar6 + 0x10;
            uVar6 = uVar6 + 0x20;
            FUN_01b84e04(iVar4,iVar3 + 0x30);
            iVar3 = iVar3 + 0x20;
          } while (uVar6 < iVar1 + uVar13);
        }
      }
    }
    *(uint *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + uVar13;
    puVar12 = *(uint **)(param_1 + 0x2f8);
    if (0xffff < uVar13) {
      *(undefined4 *)(param_1 + 0x318) = 1;
      *(int *)(param_1 + 0x31c) = (int)puVar12 - *(int *)(param_1 + 0x2f4) >> 3;
    }
    *puVar12 = local_48;
    *(short *)(puVar12 + 1) = (short)uVar13;
    uVar6 = uVar10 - 3;
    if (0xffff < uVar6) {
      *(undefined4 *)(param_1 + 0x318) = 2;
      *(int *)(param_1 + 0x31c) = (int)puVar12 - *(int *)(param_1 + 0x2f4) >> 3;
    }
    *(short *)((int)puVar12 + 6) = (short)uVar6;
    *(uint **)(param_1 + 0x2f8) = puVar12 + 2;
    param_5 = param_5 + uVar10 + uVar13;
    local_44 = local_44 + 4;
  }
  if (uVar14 == uVar7 || param_7 != 2) {
    local_38 = local_40;
    local_30 = uVar2;
  }
  else {
    uVar6 = uVar14 - 1;
    local_38 = *(uint *)(param_3 + uVar6 * 0x10);
    if (uVar6 < uVar7 + 2) {
      if (uVar7 + 1 == uVar6) {
        local_3c = *(uint *)(param_3 + (uVar14 + 0xffffffe) * 0x10);
        local_30 = local_40;
        goto LAB_01b85e9c;
      }
    }
    else {
      local_3c = *(uint *)(param_3 + (uVar14 + 0xffffffd) * 0x10);
      local_40 = *(uint *)(param_3 + (uVar14 + 0xffffffd) * 0x10 + 0x10);
    }
    local_30 = local_3c;
    local_3c = local_40;
  }
LAB_01b85e9c:
  iVar8 = *(int *)(param_1 + 0x864);
  local_34 = local_3c;
  *(uint *)(iVar8 + 0x11e8) = local_38;
  *(uint *)(iVar8 + 0x11ec) = local_3c;
  *(uint *)(iVar8 + 0x11f0) = local_30;
  uVar7 = local_44[1];
  uVar6 = local_3c;
  if (uVar7 != 0) {
    FUN_01bed4e2(*(undefined4 *)(param_1 + 0x300),param_5,uVar7);
    *(uint *)(param_1 + 0x300) = *(int *)(param_1 + 0x300) + uVar7;
    param_5 = param_5 + local_44[1];
    param_2[2] = param_2[2] + local_44[1];
    uVar6 = extraout_r1_00;
  }
  if (param_5 == param_6) {
    uVar5 = 0;
    *param_2 = uVar14 + 1;
  }
  else {
LAB_01b85cac:
    uVar5 = 0xffffff95;
  }
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar5,uVar6,local_2c ^ DAT_01d53560,0);
  }
  return;
}

