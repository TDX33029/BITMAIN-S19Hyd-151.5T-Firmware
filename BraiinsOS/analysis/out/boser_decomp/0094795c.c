// FUN_0094795c @ 0094795c size=944 calls_out=13 calls_in=1
// strings: 

void FUN_0094795c(undefined1 *param_1,undefined4 param_2)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined **ppuVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  int local_5c;
  undefined4 local_58;
  uint local_54;
  undefined **local_50;
  undefined1 *local_4c;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 local_34;
  undefined *local_2c;
  undefined *local_28;
  
  FUN_009c98e8(&local_58);
  if (local_58 == (uint *)0x1) {
    uVar9 = CONCAT44(local_54,1);
  }
  else {
    uVar9 = FUN_00736c0c(local_50,local_4c);
  }
  local_38 = (uint)(uVar9 >> 0x20);
  if ((uVar9 & 1) != 0) {
LAB_00947a5c:
    uVar2 = 9;
    *(uint *)(param_1 + 4) = local_38;
    goto LAB_00947a64;
  }
  switch(local_38) {
  case 0:
    uVar2 = 0;
    break;
  case 1:
    FUN_009c98e8(&local_58,param_2);
    if (local_58 == (uint *)0x1) {
      uVar9 = CONCAT44(local_54,1);
    }
    else {
      uVar9 = FUN_00736cb4(local_50,local_4c);
    }
    uVar7 = (uint)(uVar9 >> 0x20);
    if ((uVar9 & 1) == 0) {
      uVar6 = 0x15555;
      if (uVar9 < 0x1555500000000) {
        uVar6 = uVar7;
      }
      if (uVar7 == 0) {
        uVar3 = 4;
        uVar6 = 0;
      }
      else {
        uVar3 = FUN_01298504(uVar6 * 0xc,4);
        if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,uVar6 * 0xc);
        }
      }
      local_38 = 0;
      local_5c = 0;
      local_40 = uVar6;
      local_3c = uVar3;
      while (uVar6 = local_38, uVar7 != local_38) {
        FUN_00aeed24(&local_58,param_2);
        ppuVar5 = local_50;
        uVar1 = local_54;
        iVar8 = (int)local_58;
        if (local_58 == (uint *)0x80000000) {
          FUN_006a41c0(&local_40);
          uVar7 = local_54;
          goto LAB_00947d28;
        }
        if (uVar6 == local_40) {
          FUN_019abd3c(&local_40);
          uVar3 = local_3c;
        }
        local_38 = uVar6 + 1;
        piVar4 = (int *)(uVar3 + local_5c);
        *piVar4 = iVar8;
        local_5c = local_5c + 0xc;
        piVar4[1] = uVar1;
        piVar4[2] = (int)ppuVar5;
      }
      uVar7 = local_3c;
      if (local_40 != 0x80000000) {
        *(uint *)(param_1 + 4) = local_40;
        *(uint *)(param_1 + 8) = local_3c;
        uVar2 = 1;
        *(uint *)(param_1 + 0xc) = local_38;
        break;
      }
    }
LAB_00947d28:
    *(uint *)(param_1 + 4) = uVar7;
    goto LAB_00947d2c;
  case 2:
    uVar2 = 2;
    break;
  case 3:
    uVar2 = 3;
    break;
  case 4:
    uVar2 = 4;
    break;
  case 5:
    FUN_00a4dad8(&local_58,param_2);
    if ((char)local_58 != '\x01') {
      param_1[1] = local_58._1_1_;
      uVar2 = 5;
      break;
    }
    local_3c = local_54;
    goto LAB_00947b40;
  case 6:
    FUN_00abcba0(&local_40,param_2);
    if (local_40 != 3) {
      FUN_01bed4e2((uint)&local_58 | 3,&local_40,0x10);
      FUN_01bed4e2(param_1 + 1,&local_58,0x13);
      uVar2 = 6;
      break;
    }
LAB_00947b40:
    *(uint *)(param_1 + 4) = local_3c;
LAB_00947d2c:
    uVar2 = 9;
    break;
  case 7:
    FUN_00aeed24(&local_58,param_2);
    ppuVar5 = local_50;
    uVar7 = local_54;
    iVar8 = (int)local_58;
    if (local_58 != (uint *)0x80000000) {
      FUN_00abcba0(&local_58,param_2);
      if (local_58 == (uint *)0x3) {
LAB_00947c24:
        *(uint *)(param_1 + 4) = local_54;
        *param_1 = 9;
        FUN_019bb7e0(iVar8,uVar7);
        return;
      }
      *(uint **)(param_1 + 0x10) = local_58;
      *(uint *)(param_1 + 0x14) = local_54;
      *(undefined ***)(param_1 + 0x18) = local_50;
      *(undefined1 **)(param_1 + 0x1c) = local_4c;
      uVar2 = 7;
LAB_00947c5c:
      *(int *)(param_1 + 4) = iVar8;
      *(uint *)(param_1 + 8) = uVar7;
      *(undefined ***)(param_1 + 0xc) = ppuVar5;
      break;
    }
    goto LAB_00947b64;
  case 8:
    FUN_00aeed24(&local_58,param_2);
    ppuVar5 = local_50;
    uVar7 = local_54;
    iVar8 = (int)local_58;
    if (local_58 != (uint *)0x80000000) {
      FUN_00abcba0(&local_58,param_2);
      if (local_58 == (uint *)0x3) goto LAB_00947c24;
      *(uint **)(param_1 + 0x10) = local_58;
      *(uint *)(param_1 + 0x14) = local_54;
      *(undefined ***)(param_1 + 0x18) = local_50;
      *(undefined1 **)(param_1 + 0x1c) = local_4c;
      uVar2 = 8;
      goto LAB_00947c5c;
    }
LAB_00947b64:
    uVar2 = 9;
    *(uint *)(param_1 + 4) = local_54;
    break;
  default:
    local_40 = CONCAT31(local_40._1_3_,1);
    local_50 = &local_2c;
    local_58 = &local_40;
    local_34 = 0;
    local_28 = &DAT_01d064b8;
    local_2c = &DAT_01c1039c;
    local_4c = &LAB_0196b2a4;
    local_54 = 0x1963220;
    local_38 = FUN_00a9cfdc(&DAT_0058eb0d,&local_58);
    goto LAB_00947a5c;
  }
LAB_00947a64:
  *param_1 = uVar2;
  return;
}

