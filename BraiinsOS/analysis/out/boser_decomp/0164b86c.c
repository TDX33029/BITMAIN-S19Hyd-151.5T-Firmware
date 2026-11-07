// FUN_0164b86c @ 0164b86c size=628 calls_out=7 calls_in=4
// strings: 

void FUN_0164b86c(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r4;
  uint uVar7;
  uint *puVar8;
  bool bVar9;
  uint local_34;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  local_34 = *param_2;
  puVar8 = (uint *)param_2[1];
  puVar4 = param_2;
  if (local_34 == 0x80000000) {
    puVar4 = puVar8;
  }
  if (puVar4[2] <= param_3) {
    if (local_34 == 0x80000000) {
      FUN_0164a9cc(&local_30,puVar8[1],puVar8[2]);
    }
    else {
      local_30 = *param_2;
      local_2c = (uint *)param_2[1];
    }
    local_28 = 0;
    goto LAB_0164ba48;
  }
  if (local_34 == 0x80000000) {
    uVar5 = puVar8[2];
    if (uVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(param_3,uVar5,uVar5,&DAT_01d067ac);
    }
    uVar5 = uVar5 - param_3;
    uVar2 = 0;
    if ((0x3fffffff < uVar5) || (unaff_r4 = uVar5 * 4, 0x7ffffffc < unaff_r4)) {
LAB_0164b974:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar2,unaff_r4);
    }
    uVar6 = puVar8[1];
    if (unaff_r4 == 0) {
      puVar8 = (uint *)&SUB_00000004;
      local_34 = 0;
    }
    else {
      puVar8 = (uint *)FUN_01298504(unaff_r4,4);
      if (puVar8 == (uint *)0x0) {
        uVar2 = 4;
        goto LAB_0164b974;
      }
      local_34 = uVar5;
    }
    FUN_01bed4e2(puVar8,uVar6 + param_3 * 4,unaff_r4);
LAB_0164b9c0:
    if ((param_4 & 0xff) != 0) {
      if (uVar5 == 0) {
LAB_0164ba20:
        local_28 = 0;
        local_30 = local_34;
        local_2c = puVar8;
        goto LAB_0164ba30;
      }
      uVar6 = 0;
      iVar3 = uVar5 * -4;
      do {
        uVar7 = *(uint *)((int)puVar8 + (-4 - iVar3));
        *(uint *)((int)puVar8 + (-4 - iVar3)) = uVar6 | uVar7 >> (param_4 & 0xff);
        iVar3 = iVar3 + 4;
        uVar6 = uVar7 << (-param_4 & 0x1f);
      } while (iVar3 != 0);
    }
    puVar4 = &local_30;
    bVar9 = uVar5 == 0;
    local_30 = local_34;
    local_2c = puVar8;
    local_28 = uVar5;
    if (!bVar9) {
      puVar4 = puVar8 + (uVar5 - 1);
      bVar9 = puVar4 == (uint *)0x0;
    }
    if ((!bVar9) && (*puVar4 == 0)) {
      iVar3 = uVar5 << 2;
      uVar6 = uVar5 & 0x3fffffff;
      do {
        uVar7 = uVar6;
        if (iVar3 == 0) {
          uVar7 = 0;
          goto LAB_0164baa4;
        }
        iVar1 = iVar3 + -4;
        iVar3 = iVar3 + -4;
        uVar6 = uVar7 - 1;
      } while (*(int *)((int)puVar8 + iVar1) == 0);
      if (uVar7 <= uVar5) {
LAB_0164baa4:
        local_28 = uVar7;
        goto LAB_0164ba30;
      }
    }
  }
  else {
    uVar5 = param_2[2];
    if (uVar5 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,param_3,uVar5,&DAT_01d2fe30);
    }
    uVar5 = uVar5 - param_3;
    if (param_3 == 0) goto LAB_0164b9c0;
    if (uVar5 != 0) {
      FUN_01bed864(puVar8,puVar8 + param_3,uVar5 * 4);
      goto LAB_0164b9c0;
    }
    if ((param_4 & 0xff) != 0) goto LAB_0164ba20;
    local_28 = 0;
    local_30 = local_34;
    local_2c = puVar8;
  }
LAB_0164ba30:
  if ((local_28 < local_30 >> 2) && (iVar3 = FUN_0164bb38(&local_30), iVar3 != -0x7fffffff)) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
LAB_0164ba48:
  *param_1 = local_30;
  param_1[1] = (uint)local_2c;
  param_1[2] = local_28;
  return;
}

