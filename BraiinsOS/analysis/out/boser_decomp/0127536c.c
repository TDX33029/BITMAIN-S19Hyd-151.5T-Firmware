// FUN_0127536c @ 0127536c size=516 calls_out=8 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0127536c(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char cVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int local_38;
  undefined1 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar8 = *(uint *)(param_2 + 0x14);
  if (uVar8 < *(uint *)(param_2 + 0x10)) {
    do {
      uVar10 = (uint)*(byte *)(*(int *)(param_2 + 0xc) + uVar8);
      uVar9 = uVar10 - 9;
      if ((0x17 < uVar9) || ((1 << (uVar9 & 0xff) & 0x800013U) == 0)) {
        if (uVar10 != 0x5b) {
          iVar6 = FUN_019659c8(param_2,&local_58,&DAT_01c2548c);
          goto LAB_0127552c;
        }
        cVar5 = *(char *)(param_2 + 0x24) + -1;
        *(char *)(param_2 + 0x24) = cVar5;
        if (cVar5 == '\0') {
          local_58 = 0x18;
          goto LAB_012753c4;
        }
        iVar11 = 0;
        *(uint *)(param_2 + 0x14) = uVar8 + 1;
        iVar6 = 4;
        local_34 = 1;
        local_28 = 0;
        local_2c = 4;
        local_30 = 0;
        local_38 = param_2;
        goto LAB_01275430;
      }
      uVar8 = uVar8 + 1;
      *(uint *)(param_2 + 0x14) = uVar8;
    } while (*(uint *)(param_2 + 0x10) != uVar8);
  }
  local_58 = 5;
LAB_012753c4:
  iVar6 = FUN_01964674(param_2,&local_58);
  goto LAB_01275538;
LAB_01275430:
  iVar4 = local_28;
  FUN_01643378(&local_58,&local_38);
  iVar3 = local_50;
  iVar2 = local_54;
  iVar1 = local_58;
  if (local_58 == -0x80000000) goto LAB_012754a8;
  if (local_58 == -0x7fffffff) {
    local_44 = local_54;
    local_48 = -0x80000000;
    FUN_006a41c0(&local_30);
    goto LAB_012754b8;
  }
  if (iVar4 == local_30) {
    FUN_019abd3c(&local_30);
    iVar6 = local_2c;
  }
  local_28 = iVar4 + 1;
  piVar7 = (int *)(iVar6 + iVar11);
  *piVar7 = iVar1;
  iVar11 = iVar11 + 0xc;
  piVar7[1] = iVar2;
  piVar7[2] = iVar3;
  goto LAB_01275430;
LAB_012754a8:
  local_48 = local_30;
  local_44 = local_2c;
  iStack_40 = local_28;
LAB_012754b8:
  *(char *)(param_2 + 0x24) = *(char *)(param_2 + 0x24) + '\x01';
  iVar11 = FUN_01964fb0(param_2);
  iVar6 = local_44;
  local_58 = local_48;
  local_54 = local_44;
  local_50 = iStack_40;
  local_4c = iVar11;
  if (local_48 == -0x80000000) {
    if (iVar11 != 0) {
      FUN_006c7e7c(iVar11);
    }
  }
  else {
    if (iVar11 == 0) {
      *param_1 = local_48;
      param_1[1] = local_44;
      param_1[2] = iStack_40;
      return;
    }
    FUN_006a41c0(&local_58);
    iVar6 = iVar11;
  }
LAB_0127552c:
  iVar6 = FUN_01966f00(iVar6,param_2);
LAB_01275538:
  *param_1 = -0x80000000;
  param_1[1] = iVar6;
  return;
}

