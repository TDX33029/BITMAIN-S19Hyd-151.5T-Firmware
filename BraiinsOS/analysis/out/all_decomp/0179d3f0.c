// FUN_0179d3f0 @ 0179d3f0 size=1088 calls_out=10 calls_in=2
// strings: 

uint FUN_0179d3f0(int *param_1,int param_2,int param_3,int param_4,undefined4 *param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint local_5c;
  int local_58;
  int local_54;
  undefined4 local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_2c;
  
  iVar6 = param_1[3];
  local_2c = DAT_018ddaf8;
  iVar4 = param_1[2];
  uVar1 = *(uint *)(param_4 + 0x1c);
  if (*(int *)(param_4 + 0x40) == 1) {
LAB_0179d464:
    local_5c = *(uint *)(param_2 + 0x404);
    local_48 = 0xff;
    FUN_016dd1aa(param_3,param_2,0x408);
LAB_0179d4a0:
    local_54 = param_7 + -0x400;
    local_58 = param_6 + 0x400;
    uVar7 = iVar6 - iVar4;
    if (*(int *)(param_2 + 0x404) == 2) {
      uVar3 = 6;
    }
    else {
      uVar3 = 0x3f;
    }
    if (uVar7 <= uVar3) goto LAB_0179d4bc;
    uVar3 = FUN_01794f44(param_6,&local_48,iVar4,uVar7,param_6,param_7);
    if (0xffffff88 < uVar3) {
LAB_0179d794:
      param_5[0x21] = uVar3;
      uVar1 = uVar3;
      goto LAB_0179d518;
    }
    if (uVar7 == uVar3) {
      *param_5 = 1;
      param_5[0x21] = 0;
    }
    else {
      if (uVar3 <= (uVar7 >> 7) + 4) goto LAB_0179d4bc;
      if (local_5c == 1) {
        iVar4 = FUN_01796e68(param_2,param_6,local_48);
        local_5c = (uint)(iVar4 != 0);
      }
      FUN_016dd606(param_3,0,0x404);
      uVar2 = FUN_01797084(0xb,uVar7,local_48,local_58,local_54,param_3,param_6,
                           (uint)(7 < uVar1) << 1);
      uVar3 = FUN_0179635c(param_3,param_6,local_48,uVar2,local_58,local_54);
      if (0xffffff88 < uVar3) goto LAB_0179d794;
      iVar4 = FUN_01796e04(param_3,param_6,local_48);
      uVar1 = FUN_01795bc8(param_5 + 1,0x80,param_3,local_48,uVar3,local_58,local_54);
      uVar3 = uVar1;
      if ((local_5c == 0) || (uVar3 = FUN_01796e04(param_2,param_6,local_48), uVar7 <= uVar3)) {
        if (uVar7 <= iVar4 + uVar1) goto LAB_0179d560;
      }
      else if ((uVar3 <= iVar4 + uVar1) || (uVar7 <= uVar1 + 0xc)) {
        FUN_016dd1aa(param_3,param_2,0x408);
        *param_5 = 3;
        param_5[0x21] = 0;
        goto LAB_0179d4c8;
      }
      *param_5 = 2;
      *(undefined4 *)(param_3 + 0x404) = 1;
      param_5[0x21] = uVar1;
      if (0xffffff88 < uVar1) goto LAB_0179d518;
    }
  }
  else {
    if (*(int *)(param_4 + 0x40) == 2) {
LAB_0179d560:
      FUN_016dd1aa(param_3,param_2,0x408);
    }
    else {
      if (uVar1 != 1) goto LAB_0179d464;
      local_48 = 0xff;
      iVar5 = *(int *)(param_4 + 0x18);
      local_5c = *(uint *)(param_2 + 0x404);
      FUN_016dd1aa(param_3,param_2,0x408);
      if (iVar5 == 0) goto LAB_0179d4a0;
    }
LAB_0179d4bc:
    *param_5 = 0;
    param_5[0x21] = 0;
  }
LAB_0179d4c8:
  iVar4 = param_1[1] - *param_1 >> 3;
  if (iVar4 == 0) {
    *(undefined4 *)(param_3 + 0x11e4) = 0;
    *(undefined4 *)(param_3 + 0x11dc) = 0;
    *(undefined4 *)(param_3 + 0x11e0) = 0;
    local_38 = 0;
    local_44 = 0;
    local_3c = 0;
    uVar3 = 0;
    uVar2 = 0;
  }
  else {
    uVar3 = FUN_0179c17c(&local_48,param_1,iVar4,param_2 + 0x408,param_3 + 0x408,param_5 + 0x25,
                         (int)param_5 + 0x119,*(undefined4 *)(param_4 + 0x1c),param_6,param_6 + 0xd4
                         ,param_7 + -0xd4);
    if (0xffffff88 < local_3c) {
      param_5[0x47] = local_3c;
      uVar1 = local_3c;
      goto LAB_0179d518;
    }
    uVar3 = local_40;
    uVar2 = local_48;
  }
  param_5[0x47] = local_3c;
  param_5[0x22] = uVar2;
  param_5[0x23] = local_44;
  param_5[0x24] = uVar3;
  param_5[0x48] = local_38;
  uVar1 = 0;
LAB_0179d518:
  if ((local_2c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar3,local_2c ^ DAT_018ddaf8,0);
  }
  return uVar1;
}

