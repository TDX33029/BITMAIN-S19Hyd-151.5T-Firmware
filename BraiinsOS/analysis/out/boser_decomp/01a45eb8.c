// FUN_01a45eb8 @ 01a45eb8 size=1080 calls_out=8 calls_in=1
// strings: 

void FUN_01a45eb8(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  int iVar12;
  bool bVar13;
  uint local_8c;
  int local_84;
  uint local_7c;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_4c;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  int local_30;
  int local_2c;
  
  iVar7 = *param_2;
  iVar10 = param_2[2];
  FUN_01a4e62c(&local_70);
  if (local_70 != 3) {
    local_7c = local_70;
    goto LAB_01a46098;
  }
  uVar1 = param_2[3];
  if (uVar1 == 0) {
LAB_01a46028:
    local_7c = 1;
    local_5c = 0;
    local_64 = 0;
    local_74 = 0;
    uVar1 = 0;
    local_68 = 4;
    local_60 = 0;
LAB_01a46090:
    local_6c = local_74 & 0xff | uVar1 << 8;
  }
  else {
    pbVar5 = (byte *)param_2[2];
    iVar12 = *param_2;
    uVar3 = (uint)*pbVar5;
    if (uVar3 == 0x22) {
      FUN_01a46968(&local_70,param_2);
      uVar4 = local_64;
      uVar3 = local_68;
      uVar1 = local_6c;
      local_7c = local_70;
      if (local_70 == 3) {
        uVar8 = 0;
        if ((int)local_64 < 0) {
LAB_01a45fa8:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar8,uVar4);
        }
        local_84 = 0;
        if (local_64 == 0) {
          uVar2 = 1;
          local_8c = 0;
        }
        else {
          uVar8 = 1;
          uVar2 = FUN_01298504(local_64,1);
          if (uVar2 == 0) goto LAB_01a45fa8;
          local_8c = uVar4;
        }
        uVar9 = 0x1a462c8;
        FUN_01bed4e2(uVar2,uVar3,uVar4);
        if (uVar1 != 0x80000000) {
          uVar9 = 0x1a462e0;
          FUN_0134bd64(uVar1,uVar3);
        }
        local_74 = local_8c;
      }
      else {
LAB_01a46054:
        local_84 = local_5c;
        uVar2 = local_68;
        uVar4 = local_64;
        local_7c = local_70;
        uVar9 = local_60;
        local_74 = local_6c;
      }
LAB_01a46060:
      uVar1 = local_74 >> 8;
      if (local_7c != 3) {
        local_5c = local_84;
        local_64 = uVar4;
        local_68 = uVar2;
        local_60 = uVar9;
        goto LAB_01a46090;
      }
      pbVar11 = (byte *)param_2[2];
      local_7c = uVar2;
    }
    else {
      if (uVar3 == 0x27) {
        FUN_01a46d5c(&local_70,param_2);
        uVar4 = local_68;
        uVar1 = local_6c;
        local_7c = local_70;
        if (local_70 != 3) goto LAB_01a46054;
        uVar8 = 0;
        if ((int)local_68 < 0) {
LAB_01a45f44:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar8,uVar4);
        }
        local_84 = 0;
        if (local_68 == 0) {
          uVar2 = 1;
          local_74 = 0;
        }
        else {
          uVar8 = 1;
          uVar2 = FUN_01298504(local_68,1);
          if (uVar2 == 0) goto LAB_01a45f44;
          local_74 = uVar4;
        }
        FUN_01bed4e2(uVar2,uVar1);
        uVar9 = 0x1a462a4;
        goto LAB_01a46060;
      }
      uVar4 = 1;
      while( true ) {
        uVar2 = (uVar3 & 0xdf) - 0x41;
        bVar13 = 0x19 < uVar2;
        if (bVar13) {
          uVar2 = uVar3 - 0x30;
        }
        if ((bVar13 && 9 < uVar2) && (uVar3 != 0x5f && uVar3 != 0x2d)) {
          uVar4 = uVar4 - 1;
          goto LAB_01a45ff8;
        }
        if (uVar1 == uVar4) break;
        uVar3 = (uint)pbVar5[uVar4];
        uVar4 = uVar4 + 1;
      }
      uVar4 = uVar1;
LAB_01a45ff8:
      if (uVar4 == 0) goto LAB_01a46028;
      pbVar11 = pbVar5 + uVar4;
      uVar8 = 0;
      param_2[2] = (int)pbVar11;
      param_2[3] = uVar1 - uVar4;
      if ((int)uVar4 < 0) {
LAB_01a4601c:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,uVar4);
      }
      uVar8 = 1;
      local_7c = FUN_01298504(uVar4,1);
      if (local_7c == 0) goto LAB_01a4601c;
      FUN_01bed4e2(local_7c,pbVar5,uVar4);
      uVar1 = uVar4 >> 8;
      local_74 = uVar4;
    }
    uVar3 = (int)pbVar5 - iVar12;
    iVar12 = param_2[2];
    iVar6 = *param_2;
    FUN_01a4e62c(&local_70,param_2);
    uVar2 = (int)pbVar11 - iVar6;
    uVar8 = 0x80000002;
    if (uVar3 == uVar2) {
      uVar8 = 0x80000000;
    }
    uVar1 = local_74 & 0xff | uVar1 << 8;
    if (local_70 == 3) {
      uVar9 = iVar10 - iVar7;
      iVar12 = iVar12 - iVar6;
      iVar7 = param_2[2] - *param_2;
      if (uVar1 != 0x80000000) {
        local_34 = 0x80000003;
        local_40 = 0x80000003;
        local_4c = 0x80000003;
        local_58 = 0x80000003;
        local_6c = local_7c;
        local_70 = uVar1;
        local_68 = uVar4;
        local_64 = uVar8;
        local_60 = uVar3;
        local_5c = uVar2;
        FUN_01a60060(&local_40);
        local_34 = 0x80000002;
        if (iVar12 == iVar7) {
          local_34 = 0x80000000;
        }
        local_40 = 0x80000002;
        if (uVar9 == uVar3) {
          local_40 = 0x80000000;
        }
        local_3c = uVar9;
        local_38 = uVar3;
        local_30 = iVar12;
        local_2c = iVar7;
        FUN_01bed4e2(param_1,&local_70,0x48);
        return;
      }
      local_5c = iVar7;
      local_64 = uVar3;
      local_6c = uVar4;
      local_68 = uVar9;
      local_60 = iVar12;
    }
    else {
      FUN_0134bd64(uVar1,local_7c);
      local_7c = local_70;
    }
  }
LAB_01a46098:
  param_1[2] = local_6c;
  *param_1 = 0x80000000;
  param_1[1] = local_7c;
  param_1[3] = local_68;
  param_1[4] = local_64;
  param_1[5] = local_60;
  param_1[6] = local_5c;
  return;
}

