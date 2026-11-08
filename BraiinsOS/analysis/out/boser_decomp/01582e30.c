// FUN_01582e30 @ 01582e30 size=488 calls_out=4 calls_in=0
// strings: 

void FUN_01582e30(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  bool bVar10;
  bool bVar11;
  uint local_84;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  uint local_30;
  undefined4 local_28;
  
  if (*param_3 == '\x04') {
    uVar5 = 0;
    uVar4 = *(uint *)(param_2 + 8);
    if (*(uint *)(param_3 + 0xc) < *(uint *)(param_2 + 8)) {
      uVar4 = *(uint *)(param_3 + 0xc);
    }
    bVar11 = 0x3fffffe < uVar4;
    bVar10 = uVar4 == 0x3ffffff;
    uVar1 = uVar4 * 0x40;
    if (uVar4 < 0x4000000) {
      bVar11 = 0x7ffffffb < uVar1;
      bVar10 = uVar1 == 0x7ffffffc;
    }
    if (bVar11 && !bVar10) {
LAB_01582e7c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,uVar1);
    }
    uVar7 = 0;
    if (uVar1 == 0) {
      iVar3 = 4;
      local_84 = 0;
    }
    else {
      uVar5 = 4;
      iVar3 = FUN_01298504(uVar1,4);
      local_84 = uVar4;
      if (iVar3 == 0) goto LAB_01582e7c;
    }
    iVar6 = *(int *)(param_2 + 4);
    iVar8 = *(int *)(param_3 + 8);
    local_7c = 0;
    if (uVar4 != 0) {
      local_80 = iVar3;
      do {
        uVar7 = local_7c;
        local_34 = 0x80000001;
        local_30 = local_7c;
        local_28 = param_4;
        FUN_015737d4(&local_78,iVar6,iVar8,&local_34,param_5,param_6);
        if (uVar7 == local_84) {
          FUN_0155ab78(&local_84);
          iVar3 = local_80;
        }
        puVar9 = (undefined4 *)(iVar3 + uVar7 * 0x40);
        uVar7 = uVar7 + 1;
        iVar6 = iVar6 + 0x14;
        *puVar9 = local_78;
        puVar9[1] = uStack_74;
        puVar9[2] = uStack_70;
        puVar9[3] = uStack_6c;
        puVar9[4] = uStack_68;
        iVar8 = iVar8 + 0x18;
        puVar9[5] = local_64;
        puVar9[6] = uStack_60;
        puVar9[7] = uStack_5c;
        puVar9[8] = uStack_58;
        puVar9[9] = uStack_54;
        puVar9[10] = local_50;
        puVar9[0xb] = uStack_4c;
        puVar9[0xc] = uStack_48;
        puVar9[0xd] = uStack_44;
        puVar9[0xe] = uStack_40;
        puVar9[0xf] = uStack_3c;
        local_7c = uVar7;
      } while (uVar4 != uVar7);
    }
    iVar6 = uVar7 << 6;
    iVar8 = iVar3;
    do {
      if (iVar6 == 0) {
        *param_1 = 0x80000000;
        param_1[1] = local_84;
        param_1[2] = iVar3;
        param_1[3] = uVar7;
        param_1[4] = 0;
        return;
      }
      pcVar2 = (char *)(iVar8 + 0x3c);
      iVar6 = iVar6 + -0x40;
      iVar8 = iVar8 + 0x40;
    } while (*pcVar2 != '\0');
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    param_1[3] = local_84;
    param_1[4] = iVar3;
    param_1[5] = uVar7;
    param_1[6] = 0;
  }
  else {
    *param_1 = 0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

