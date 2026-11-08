// FUN_01a1239c @ 01a1239c size=600 calls_out=11 calls_in=2
// strings: 

void FUN_01a1239c(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 7)) {
  case 0:
    param_2[1] = *param_2;
    FUN_01bed93e(param_2 + 2,0,0x11);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29fe0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29fe0);
  }
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    if ((uVar1 & 1) != 0) {
      uVar4 = 3;
      *param_1 = 2;
      goto LAB_01a125e4;
    }
    local_40 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  FUN_01a16e74(&local_38,param_2[1],param_2 + 2,param_3);
  if (local_38 == 3 && local_34 == 0) {
    if (*(int *)(local_30 + 0x24) == -0x7fffffff) {
      uVar6 = 0;
      iVar5 = 1;
      iVar7 = 0;
    }
    else {
      uVar6 = *(uint *)(local_30 + 0x18);
      iVar7 = *(int *)(local_30 + 0x1c);
      local_44 = *(int *)(local_30 + 0x20);
      local_4c = *(int *)(local_30 + 0x14);
      if (*(int *)(local_30 + 0x24) == -0x80000000) {
        local_48 = 0x80000000;
      }
      else {
        uVar2 = *(uint *)(local_30 + 0x2c);
        uVar3 = 0;
        bVar10 = 0x3ffffffe < uVar2;
        bVar9 = uVar2 == 0x3fffffff;
        uVar1 = uVar2 * 4;
        if (uVar2 < 0x40000000) {
          bVar10 = 0x7ffffffb < uVar1;
          bVar9 = uVar1 == 0x7ffffffc;
          local_50 = uVar2;
        }
        if (bVar10 && !bVar9) {
LAB_01a1250c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar3,uVar1);
        }
        uVar8 = *(undefined4 *)(local_30 + 0x28);
        if (uVar1 == 0) {
          local_54 = 4;
          local_48 = 0;
        }
        else {
          local_54 = FUN_01298504(uVar1,4);
          uVar3 = 4;
          local_48 = local_50;
          if (local_54 == 0) goto LAB_01a1250c;
        }
        FUN_01bed4e2(local_54,uVar8);
      }
      iVar5 = 0;
    }
    FUN_01a18ba0(local_30);
LAB_01a1258c:
    uVar1 = 0;
    param_1[1] = local_4c;
    param_1[6] = local_54;
    param_1[7] = local_50;
    param_1[4] = local_44;
    param_1[2] = uVar6;
    param_1[3] = iVar7;
    param_1[5] = local_48;
  }
  else {
    if (local_38 != 0) {
      iVar7 = 0;
      if (local_38 != 1) {
        local_44 = local_30;
        local_48 = local_2c;
      }
      uVar6 = (uint)(local_38 != 1);
      iVar5 = 1;
      goto LAB_01a1258c;
    }
    iVar5 = 2;
  }
  *param_1 = iVar5;
  FUN_019edbc4(uVar1,local_40);
  uVar4 = 3;
  if (iVar5 != 2) {
    uVar4 = 1;
    FUN_009cdcac(param_2 + 1);
  }
LAB_01a125e4:
  *(undefined1 *)(param_2 + 7) = uVar4;
  return;
}

