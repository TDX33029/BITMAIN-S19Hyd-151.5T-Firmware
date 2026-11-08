// FUN_01274488 @ 01274488 size=776 calls_out=12 calls_in=6
// strings: 

void FUN_01274488(undefined1 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  undefined8 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  uint local_68;
  undefined4 local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  undefined4 uStack_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    uVar1 = 0;
    break;
  case 1:
    uVar1 = param_2[1];
    *param_1 = 1;
    param_1[1] = uVar1;
    return;
  case 2:
    puVar5 = (undefined8 *)(param_2 + 0x10);
    if (*(int *)(param_2 + 8) == 0) {
      uVar7 = *(undefined4 *)puVar5;
      uVar6 = *(uint *)(param_2 + 0x14);
      *(uint *)(param_1 + 8) = 0;
      *param_1 = 2;
    }
    else {
      if (*(int *)(param_2 + 8) != 1) {
        FUN_019689d8((int)*puVar5);
        return;
      }
      uVar7 = *(undefined4 *)puVar5;
      uVar6 = *(uint *)(param_2 + 0x14);
      *param_1 = 2;
      *(uint *)(param_1 + 8) = uVar6 >> 0x1f;
    }
    *(undefined4 *)(param_1 + 0x10) = uVar7;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x14) = uVar6;
    return;
  case 3:
    iVar3 = *(int *)(param_2 + 0xc);
    uVar7 = 0;
    if (iVar3 < 0) {
LAB_012744fc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,iVar3);
    }
    uVar9 = *(undefined4 *)(param_2 + 8);
    if (iVar3 == 0) {
      iVar4 = 1;
      iVar8 = 0;
    }
    else {
      uVar7 = 1;
      iVar4 = FUN_01298504(iVar3,1);
      iVar8 = iVar3;
      if (iVar4 == 0) goto LAB_012744fc;
    }
    FUN_01bed4e2(iVar4,uVar9,iVar3);
    *(int *)(param_1 + 4) = iVar8;
    uVar1 = 3;
    *(int *)(param_1 + 8) = iVar4;
    *(int *)(param_1 + 0xc) = iVar3;
    break;
  case 4:
    iVar3 = *(int *)(param_2 + 0xc);
    iVar8 = *(int *)(param_2 + 8);
    FUN_0196aa8c(&local_50,iVar3);
    if (local_50 == 0x80000000) {
      *(int *)(param_1 + 4) = local_4c;
      *param_1 = 6;
    }
    else {
      local_60 = local_50;
      local_5c = local_4c;
      local_58 = local_48;
      for (iVar3 = iVar3 * 0x18; iVar3 != 0; iVar3 = iVar3 + -0x18) {
        FUN_01274488(&local_40,iVar8);
        uVar6 = local_58;
        if ((char)local_40 == '\x06') {
          *(uint *)(param_1 + 4) = local_3c;
          *param_1 = 6;
          FUN_00949b70(&local_60);
          return;
        }
        if (local_58 == local_60) {
          FUN_01969b6c(&local_60);
        }
        iVar8 = iVar8 + 0x18;
        puVar2 = (uint *)(local_5c + uVar6 * 0x18);
        *puVar2 = local_40;
        puVar2[1] = local_3c;
        puVar2[2] = local_38;
        puVar2[3] = local_34;
        puVar2[4] = uStack_30;
        puVar2[5] = uStack_2c;
        local_58 = uVar6 + 1;
      }
      FUN_01bed4e2((uint)&local_50 | 3,&local_60,0xc);
      *param_1 = 4;
      FUN_01bed4e2(param_1 + 1,&local_50,0xf);
    }
    return;
  case 5:
    local_40 = *(uint *)(param_2 + 4);
    local_3c = *(uint *)(param_2 + 8);
    local_58 = 0x80000000;
    local_34 = 0;
    local_28 = *(undefined4 *)(param_2 + 0xc);
    if (local_40 == 0) {
      local_28 = 0;
    }
    local_44 = 0;
    local_48 = (uint)(local_40 != 0);
    local_5c = 0;
    local_64 = 0;
    local_68 = 0;
    local_38 = local_48;
    uStack_30 = local_40;
    uStack_2c = local_3c;
    do {
      uVar10 = FUN_01a41998(&local_48);
      if ((int)uVar10 == 0) {
        local_48 = local_68;
        local_44 = local_64;
        local_40 = local_60;
        local_3c = local_5c;
        local_38 = local_58;
        local_34 = uStack_54;
        uStack_30 = local_50;
        uStack_2c = local_4c;
        FUN_0196aafc(param_1,&local_48);
        return;
      }
      iVar3 = FUN_01271f14(&local_68,(int)uVar10,(int)((ulonglong)uVar10 >> 0x20));
    } while (iVar3 == 0);
    *(int *)(param_1 + 4) = iVar3;
    *param_1 = 6;
    FUN_0127464c(&local_68);
    return;
  }
  *param_1 = uVar1;
  return;
}

