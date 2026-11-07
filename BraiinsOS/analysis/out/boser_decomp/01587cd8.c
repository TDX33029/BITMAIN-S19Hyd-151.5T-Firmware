// FUN_01587cd8 @ 01587cd8 size=608 calls_out=6 calls_in=0
// strings: 

void FUN_01587cd8(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  bool bVar12;
  bool bVar13;
  uint local_8c;
  int local_88;
  uint local_84;
  undefined4 local_80;
  uint local_7c;
  int local_78;
  uint local_74;
  int local_70;
  uint local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  uint uStack_30;
  undefined4 local_2c;
  
  if ((*param_3 == '\x04') && (uVar6 = *(uint *)(param_3 + 0xc), uVar6 != 0)) {
    uVar8 = *(uint *)(param_2 + 8);
    uVar9 = 0;
    uVar3 = uVar8;
    if (uVar6 < uVar8) {
      uVar3 = uVar6;
    }
    bVar13 = 0x3fffffe < uVar3;
    bVar12 = uVar3 == 0x3ffffff;
    uVar1 = uVar3 * 0x40;
    if (uVar3 < 0x4000000) {
      bVar13 = 0x7ffffffb < uVar1;
      bVar12 = uVar1 == 0x7ffffffc;
    }
    if (bVar13 && !bVar12) {
LAB_01587d30:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,uVar1);
    }
    if (uVar1 == 0) {
      iVar4 = 4;
      local_8c = 0;
    }
    else {
      uVar9 = 4;
      iVar4 = FUN_01298504(uVar1,4);
      local_8c = uVar3;
      if (iVar4 == 0) goto LAB_01587d30;
    }
    iVar10 = *(int *)(param_3 + 8);
    iVar7 = *(int *)(param_2 + 4);
    local_84 = 0;
    local_88 = iVar4;
    if (uVar8 == 0) {
      uVar8 = 0;
    }
    else {
      do {
        uVar8 = local_84;
        local_40 = 0x80000001;
        local_3c = local_84;
        local_34 = param_4;
        FUN_015737d4(&local_80,iVar7,iVar10,&local_40,param_5,param_6);
        if (uVar8 == local_8c) {
          FUN_0155ab78(&local_8c);
          iVar4 = local_88;
        }
        puVar11 = (undefined4 *)(iVar4 + uVar8 * 0x40);
        local_84 = uVar8 + 1;
        iVar10 = iVar10 + 0x18;
        *puVar11 = local_80;
        puVar11[1] = local_7c;
        puVar11[2] = local_78;
        puVar11[3] = local_74;
        puVar11[4] = local_70;
        iVar7 = iVar7 + 0x14;
        puVar11[5] = local_6c;
        puVar11[6] = local_68;
        puVar11[7] = uStack_64;
        puVar11[8] = uStack_60;
        puVar11[9] = uStack_5c;
        puVar11[10] = local_58;
        puVar11[0xb] = uStack_54;
        puVar11[0xc] = uStack_50;
        puVar11[0xd] = uStack_4c;
        puVar11[0xe] = uStack_48;
        puVar11[0xf] = uStack_44;
      } while (uVar3 != local_84);
    }
    uVar5 = 2;
    iVar7 = local_84 << 6;
    if (local_84 == uVar6) {
      uVar5 = 1;
    }
    iVar10 = iVar4;
    do {
      if (iVar7 == 0) {
        local_7c = local_8c;
        local_70 = 0;
        local_80 = 0x80000000;
        local_78 = iVar4;
        local_74 = local_84;
        goto LAB_01587eec;
      }
      pcVar2 = (char *)(iVar10 + 0x3c);
      iVar7 = iVar7 + -0x40;
      iVar10 = iVar10 + 0x40;
    } while (*pcVar2 != '\0');
    local_74 = local_8c;
    local_80 = 0;
    local_68 = 0;
    local_78 = 0;
    local_7c = 4;
    local_70 = iVar4;
    local_6c = local_84;
LAB_01587eec:
    local_40 = CONCAT22(local_40._2_2_,0x100);
    local_38 = 0;
    local_34 = 0;
    local_2c = 0;
    local_40 = CONCAT31(local_40._1_3_,uVar5);
    uStack_30 = uVar8;
    uVar9 = FUN_01531708(&local_40);
    FUN_0155ff10(&local_80,uVar9);
    *param_1 = local_80;
    param_1[1] = local_7c;
    param_1[2] = local_78;
    param_1[3] = local_74;
    param_1[4] = local_70;
    param_1[5] = local_6c;
    param_1[6] = local_68;
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

