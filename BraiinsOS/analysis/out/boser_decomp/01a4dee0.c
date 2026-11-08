// FUN_01a4dee0 @ 01a4dee0 size=572 calls_out=8 calls_in=3
// strings: 

void FUN_01a4dee0(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int local_84;
  uint local_80;
  int local_7c;
  uint local_70;
  undefined4 local_6c;
  int local_68;
  
  if (param_3 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0056b1c8,0x20,&DAT_01d2c144);
  }
  iVar1 = param_2 + param_4 * 0x48;
  uVar2 = *(uint *)(iVar1 + 0xc);
  if (uVar2 == 0x80000003) {
LAB_01a4df50:
    FUN_01a61d00(&local_70,*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8));
    uVar4 = local_6c;
    uVar2 = 1;
    local_84 = 1;
    if ((int)local_70 < 0) {
      uVar2 = local_70 ^ 0x80000000;
    }
    if (uVar2 == 0) {
      uVar4 = 1;
      iVar7 = 0;
    }
    else {
      if (uVar2 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2c154);
      }
      if (local_68 < 0) {
        uVar5 = 0;
LAB_01a4df98:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar5,local_68);
      }
      if (local_68 == 0) {
        iVar7 = 0;
      }
      else {
        uVar5 = 1;
        local_84 = FUN_01298504(local_68,1);
        iVar7 = local_68;
        if (local_84 == 0) goto LAB_01a4df98;
      }
    }
    FUN_01bed4e2(local_84,uVar4,iVar7);
    if (-1 < (int)local_70) {
      FUN_0134bd64(local_70,local_6c);
    }
  }
  else {
    uVar6 = 1;
    if ((int)uVar2 < 0) {
      uVar6 = uVar2 ^ 0x80000000;
    }
    local_84 = 1;
    if (uVar6 == 0) {
      uVar4 = 1;
      iVar7 = 0;
    }
    else {
      if (uVar6 != 1) goto LAB_01a4df50;
      iVar7 = *(int *)(iVar1 + 0x14);
      uVar5 = 0;
      if (iVar7 < 0) {
LAB_01a4df44:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar5,iVar7);
      }
      uVar4 = *(undefined4 *)(iVar1 + 0x10);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      else {
        uVar5 = 1;
        local_84 = FUN_01298504(iVar7,1);
        if (local_84 == 0) goto LAB_01a4df44;
      }
    }
    FUN_01bed4e2(local_84,uVar4,iVar7);
  }
  if (param_4 == 0) {
    local_7c = 4;
    local_80 = 0;
  }
  else {
    iVar1 = param_4 * 0x48;
    local_7c = FUN_01298504(iVar1,4);
    if (local_7c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar1);
    }
    uVar2 = 0;
    iVar3 = local_7c;
    do {
      local_80 = param_4;
      if (iVar1 == 0) break;
      FUN_01a60910(&local_70,param_2);
      FUN_01bed4e2(iVar3,&local_70,0x48);
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x48;
      iVar1 = iVar1 + -0x48;
      param_2 = param_2 + 0x48;
    } while (param_4 != uVar2);
  }
  param_1[3] = local_80;
  param_1[4] = local_7c;
  param_1[5] = param_4;
  *param_1 = iVar7;
  param_1[1] = local_84;
  param_1[2] = iVar7;
  return;
}

