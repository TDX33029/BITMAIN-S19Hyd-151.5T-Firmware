// FUN_0118ec5c @ 0118ec5c size=820 calls_out=6 calls_in=1
// strings: 

void FUN_0118ec5c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int extraout_r2;
  int extraout_r2_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint local_60;
  int local_5c;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  
  uVar2 = *(uint *)(param_2 + 0x58);
  uVar4 = *(uint *)(param_2 + 0x5c);
  uVar9 = param_2 + 0x18;
  iVar8 = *(int *)(param_2 + 0x78);
  do {
    uVar3 = uVar2;
    uVar5 = uVar4;
    if (uVar4 <= uVar2) {
      local_40 = *(uint *)(param_2 + 0x10);
      local_3c = *(uint *)(param_2 + 0x14);
      local_38 = 0;
      local_34 = local_3c;
      FUN_019e7bb8(&local_30,uVar9,param_3,&local_40);
      uVar2 = local_30 & 0xff;
      if ((local_30 & 0xff) != 5) {
        uVar4 = local_30 & 0xff;
        if (uVar4 == 4) {
          if (local_3c < local_38) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,local_38,local_3c,&DAT_01d2e4e0);
          }
          uVar3 = 0;
          *(undefined4 *)(param_2 + 0x58) = 0;
          *(uint *)(param_2 + 0x5c) = local_38;
          uVar5 = local_38;
          goto LAB_0118ecec;
        }
        uVar2 = local_30;
        if (uVar4 != 5) {
          uVar9 = local_30 >> 8;
          iVar1 = local_2c;
          goto LAB_0118eda8;
        }
      }
      local_60 = uVar2;
      iVar8 = -0x7ffffffe;
      local_5c = extraout_r2;
      goto LAB_0118eefc;
    }
LAB_0118ecec:
    if ((uVar5 < uVar3) || (*(uint *)(param_2 + 0x14) < uVar5)) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(uVar3,uVar5,*(uint *)(param_2 + 0x14),&DAT_01c24264);
    }
    uVar2 = uVar5 - uVar3;
    iVar7 = *(int *)(param_2 + 0x10) + uVar3;
    iVar1 = FUN_01bed7c2(iVar7,10,uVar2);
    if (iVar1 != 0) {
      uVar4 = iVar1 - iVar7;
      if (uVar2 <= uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar4,uVar2,&DAT_01c24274);
      }
      iVar6 = uVar4 + 1;
      FUN_01ac6cbc(param_2 + 0x6c,iVar7,iVar6);
      iVar1 = iVar6 + iVar8;
      uVar2 = *(int *)(param_2 + 0x58) + iVar6;
      if (*(uint *)(param_2 + 0x5c) < uVar2) {
        uVar2 = *(uint *)(param_2 + 0x5c);
      }
      *(uint *)(param_2 + 0x58) = uVar2;
      break;
    }
    FUN_01ac6cbc(param_2 + 0x6c,iVar7,uVar2);
    uVar4 = *(uint *)(param_2 + 0x5c);
    iVar1 = uVar2 + iVar8;
    *(int *)(param_2 + 0x78) = iVar1;
    uVar2 = *(int *)(param_2 + 0x58) + uVar2;
    if (uVar4 < uVar2) {
      uVar2 = uVar4;
    }
    *(uint *)(param_2 + 0x58) = uVar2;
    iVar8 = iVar1;
  } while (uVar5 != uVar3);
  iVar8 = 0;
  uVar4 = 4;
  *(undefined4 *)(param_2 + 0x78) = 0;
LAB_0118eda8:
  uVar5 = *(uint *)(param_2 + 0x74);
  uVar3 = *(uint *)(param_2 + 0x70);
  uVar2 = *(uint *)(param_2 + 0x6c);
  *(undefined4 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x74) = 0;
  *(undefined4 *)(param_2 + 0x70) = 1;
  FUN_012fbd94(&local_40,uVar3,uVar5);
  if (local_40 == 1) {
    local_48 = local_3c;
    local_44 = local_38;
    uStack_54 = uVar2;
    uVar2 = uVar3;
    uVar3 = uVar5;
  }
  else {
    uStack_54 = 0x80000000;
    local_48 = uVar5;
  }
  uStack_50 = uVar2;
  uStack_4c = uVar3;
  local_40 = uVar4 | uVar9 << 8;
  local_3c = iVar1;
  FUN_019ecbb0(&local_60,&local_40,&uStack_54,iVar8,param_2 + 0x60,0);
  if ((local_60 & 0xff) == 5) {
    iVar8 = -0x7ffffffe;
    local_60 = 5;
    local_5c = extraout_r2_00;
LAB_0118eefc:
    if (iVar8 != -0x80000000) {
      if (iVar8 == -0x7fffffff) {
        iVar8 = -0x80000000;
      }
      else if (iVar8 == -0x7ffffffe) {
        *param_1 = -0x7ffffffe;
        return;
      }
      goto LAB_0118ef2c;
    }
  }
  else {
    iVar8 = -0x7fffffff;
    if ((local_60 & 0xff) != 4) goto LAB_0118eefc;
    iVar8 = *(int *)(param_2 + 0x68);
    if (local_5c != 0) {
      if (iVar8 != 0) goto LAB_0118eea8;
LAB_0118eedc:
      iVar8 = *(int *)(param_2 + 0x60);
      local_5c = *(int *)(param_2 + 0x68);
      local_60 = *(uint *)(param_2 + 100);
      *(undefined4 *)(param_2 + 0x60) = 0;
      *(undefined4 *)(param_2 + 100) = 1;
      *(undefined4 *)(param_2 + 0x68) = 0;
      goto LAB_0118eefc;
    }
    if (iVar8 != 0) {
LAB_0118eea8:
      if (*(char *)(*(int *)(param_2 + 100) + iVar8 + -1) == '\n') {
        iVar1 = iVar8 + -1;
        *(int *)(param_2 + 0x68) = iVar1;
        if ((iVar1 != 0) && (*(char *)(*(int *)(param_2 + 100) + iVar1 + -1) == '\r')) {
          *(int *)(param_2 + 0x68) = iVar8 + -2;
        }
      }
      goto LAB_0118eedc;
    }
    local_60 = 0;
  }
  iVar8 = -0x7fffffff;
LAB_0118ef2c:
  *param_1 = iVar8;
  param_1[1] = local_60;
  param_1[2] = local_5c;
  return;
}

