// FUN_01583294 @ 01583294 size=536 calls_out=6 calls_in=0
// strings: 

void FUN_01583294(undefined4 *param_1,undefined4 param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint uVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
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
  undefined4 local_34;
  
  if (*param_3 == '\x04') {
    uVar4 = *(uint *)(param_3 + 0xc);
    uVar5 = 0;
    bVar10 = 0x3fffffe < uVar4;
    bVar9 = uVar4 == 0x3ffffff;
    uVar1 = uVar4 * 0x40;
    if (uVar4 < 0x4000000) {
      bVar10 = 0x7ffffffb < uVar1;
      bVar9 = uVar1 == 0x7ffffffc;
    }
    if (bVar10 && !bVar9) {
LAB_015832d0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar5,uVar1);
    }
    if (uVar1 == 0) {
      iVar3 = 4;
      local_8c = 0;
    }
    else {
      uVar5 = 4;
      iVar3 = FUN_01298504(uVar1,4);
      local_8c = uVar4;
      if (iVar3 == 0) goto LAB_015832d0;
    }
    local_84 = 0;
    local_88 = iVar3;
    if (uVar4 != 0) {
      iVar7 = *(int *)(param_3 + 8);
      iVar6 = uVar4 * 0x18;
      do {
        uVar1 = local_84;
        local_40 = 0x80000001;
        local_3c = local_84;
        local_34 = param_4;
        FUN_015737d4(&local_80,param_2,iVar7,&local_40,param_5,param_6);
        if (uVar1 == local_8c) {
          FUN_0155ab78(&local_8c);
          iVar3 = local_88;
        }
        puVar8 = (undefined4 *)(iVar3 + uVar1 * 0x40);
        local_84 = uVar1 + 1;
        iVar7 = iVar7 + 0x18;
        *puVar8 = local_80;
        puVar8[1] = local_7c;
        puVar8[2] = local_78;
        puVar8[3] = local_74;
        puVar8[4] = local_70;
        iVar6 = iVar6 + -0x18;
        puVar8[5] = local_6c;
        puVar8[6] = local_68;
        puVar8[7] = uStack_64;
        puVar8[8] = uStack_60;
        puVar8[9] = uStack_5c;
        puVar8[10] = local_58;
        puVar8[0xb] = uStack_54;
        puVar8[0xc] = uStack_50;
        puVar8[0xd] = uStack_4c;
        puVar8[0xe] = uStack_48;
        puVar8[0xf] = uStack_44;
      } while (iVar6 != 0);
    }
    iVar6 = local_84 << 6;
    iVar7 = iVar3;
    do {
      if (iVar6 == 0) {
        local_80 = 0x80000000;
        local_70 = 0;
        local_7c = local_8c;
        local_78 = iVar3;
        local_74 = local_84;
        goto LAB_0158346c;
      }
      pcVar2 = (char *)(iVar7 + 0x3c);
      iVar6 = iVar6 + -0x40;
      iVar7 = iVar7 + 0x40;
    } while (*pcVar2 != '\0');
    local_80 = 0;
    local_68 = 0;
    local_78 = 0;
    local_7c = 4;
    local_74 = local_8c;
    local_70 = iVar3;
    local_6c = local_84;
LAB_0158346c:
    local_40 = CONCAT31(CONCAT21(local_40._2_2_,uVar4 != 0),1);
    uVar5 = FUN_01531708(&local_40);
    FUN_0155ff10(&local_80,uVar5);
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

