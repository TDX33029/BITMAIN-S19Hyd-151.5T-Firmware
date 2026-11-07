// FUN_01ac1dfc @ 01ac1dfc size=696 calls_out=9 calls_in=1
// strings: 

void FUN_01ac1dfc(int *param_1)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  uint local_a0;
  int local_9c;
  uint local_98;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint uStack_84;
  undefined4 local_80;
  uint local_7c;
  uint uStack_78;
  undefined4 uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  undefined *local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined2 local_40;
  undefined1 local_3e;
  undefined1 auStack_38 [20];
  
  uVar4 = param_1[3];
  uVar6 = 0;
  bVar11 = 0x3fffffe < uVar4;
  bVar10 = uVar4 == 0x3ffffff;
  uVar3 = uVar4 * 0x40;
  if (uVar4 < 0x4000000) {
    bVar11 = 0x7ffffff7 < uVar3;
    bVar10 = uVar3 == 0x7ffffff8;
  }
  if (!(bVar11 && !bVar10)) {
    if (uVar3 == 0) {
      local_9c = 8;
      local_a0 = 0;
      uVar3 = uVar4;
    }
    else {
      uVar6 = 8;
      local_9c = FUN_01298504(uVar3,8);
      if (local_9c == 0) goto LAB_01ac1e1c;
      uVar3 = param_1[3];
      local_a0 = uVar4;
    }
    uVar4 = uVar3 - 1;
    if (uVar3 == 0) {
      uVar4 = 0;
    }
    local_98 = 0;
    if (local_a0 < uVar4) {
      FUN_006520b4(&local_a0,0,uVar4,8,0x40);
    }
    uVar4 = local_98;
    iVar2 = local_9c;
    if (1 < uVar3) {
      iVar8 = local_9c + local_98 * 0x40;
      iVar5 = 0;
      puVar9 = (undefined4 *)(iVar8 + 0x30);
      do {
        FUN_01bed4e2((uint)&local_90 | 3,&DAT_01d30848,0x10);
        local_50 = local_90;
        uStack_4c = local_8c;
        uStack_48 = local_88;
        uStack_44 = uStack_84;
        local_40 = (undefined2)local_80;
        local_3e = local_80._2_1_;
        FUN_01bed93e(puVar9 + -0xc,0,0x1d);
        iVar7 = iVar8 + iVar5 * 0x40;
        FUN_01bed4e2(iVar7 + 0x1d,&local_50,0x13);
        iVar5 = iVar5 + 1;
        *puVar9 = &DAT_01d2f018;
        *(undefined4 *)(iVar7 + 0x38) = 3;
        *(int *)(iVar7 + 0x3c) = iVar5;
        puVar9 = puVar9 + 0x10;
      } while (uVar3 - 1 != iVar5);
      uVar4 = uVar4 + iVar5;
    }
    local_98 = uVar4;
    FUN_01bed4e2((uint)auStack_38 | 3,&DAT_01d30848,0x10);
    FUN_01bed93e(&local_88,0,0x15);
    local_54 = 0x400000;
    local_58 = 3;
    local_8c = 0;
    local_90 = 0;
    FUN_01bed4e2((int)&uStack_74 + 1,auStack_38,0x13);
    local_60 = &DAT_01d2f018;
    if (uVar4 == local_a0) {
      FUN_007024c0(&local_a0);
      iVar2 = local_9c;
    }
    puVar1 = (uint *)(iVar2 + uVar4 * 0x40);
    *puVar1 = local_90;
    puVar1[1] = local_8c;
    puVar1[2] = local_88;
    puVar1[3] = uStack_84;
    puVar1[4] = local_80;
    puVar1[5] = local_7c;
    puVar1[6] = uStack_78;
    puVar1[7] = uStack_74;
    puVar1[8] = uStack_70;
    puVar1[9] = uStack_6c;
    puVar1[10] = local_68;
    puVar1[0xb] = uStack_64;
    puVar1[0xc] = (uint)local_60;
    puVar1[0xd] = uStack_5c;
    puVar1[0xe] = local_58;
    puVar1[0xf] = local_54;
    local_98 = uVar4 + 1;
    local_90 = local_a0;
    local_8c = local_9c;
    local_88 = local_98;
    if ((local_98 < local_a0) &&
       (iVar2 = FUN_006641a8(&local_90,local_98,8,0x40), iVar2 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    uVar4 = local_88;
    uVar3 = local_8c;
    iVar2 = *param_1;
    if (iVar2 != 0) {
      iVar8 = param_1[1];
      iVar7 = iVar8 + 1;
      iVar5 = iVar2 + 0x20;
      while (iVar7 = iVar7 + -1, iVar7 != 0) {
        FUN_01aae24c(iVar5);
        iVar5 = iVar5 + 0x40;
      }
      if (iVar8 != 0) {
        thunk_FUN_01be4678(iVar2);
      }
    }
    *param_1 = uVar3;
    param_1[1] = uVar4;
    return;
  }
LAB_01ac1e1c:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar6,uVar3);
}

