// FUN_016f7aa8 @ 016f7aa8 size=648 calls_out=9 calls_in=1
// strings: 

void FUN_016f7aa8(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int local_90;
  int local_8c;
  int local_88;
  uint *local_80;
  uint *local_7c;
  undefined4 uStack_78;
  uint *puStack_74;
  uint local_70;
  uint uStack_6c;
  uint uStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  int local_48;
  int *local_44;
  int local_40;
  int *local_3c;
  int *local_38;
  int local_34;
  int *local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  iVar6 = param_2[2];
  if (iVar6 == 0) {
    iVar2 = 4;
    local_90 = 0;
  }
  else {
    iVar2 = FUN_01298504(iVar6 * 0xc,4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar6 * 0xc);
    }
    local_90 = iVar6;
  }
  local_80 = (uint *)param_2[1];
  uStack_78 = *param_2;
  puVar8 = local_80 + iVar6 * 4;
  local_88 = 0;
  local_8c = iVar2;
  local_7c = local_80;
  puStack_74 = puVar8;
  if (iVar6 != 0) {
    puVar5 = local_80;
    iVar6 = 0;
    local_7c = local_80;
    do {
      puVar7 = puVar5 + 4;
      if (*puVar5 == 2) goto LAB_016f7cd0;
      if ((*puVar5 & 1) == 0) {
        uVar11 = puVar5[1];
        uVar12 = puVar5[2];
        uVar13 = puVar5[3];
        if (iVar6 == local_90) {
          FUN_018c4418(&local_90);
          iVar2 = local_8c;
        }
        iVar14 = iVar6 + 1;
        puVar5 = (uint *)(iVar2 + iVar6 * 0xc);
        *puVar5 = uVar11;
        puVar5[1] = uVar12;
        puVar5[2] = uVar13;
        local_88 = iVar14;
      }
      else {
        local_70 = puVar5[1];
        uStack_6c = puVar5[2];
        uStack_68 = puVar5[3];
        local_5c = 0;
        local_60 = 0;
        local_58 = local_70;
        local_54 = uStack_6c;
        uStack_50 = uStack_68;
        local_3c = (int *)FUN_01937230();
        local_28 = &local_60;
        local_2c = 0;
        local_30 = (int *)0x0;
        local_34 = 0;
        local_38 = (int *)0x2000;
        FUN_017124a4(&local_48,&local_3c);
        if (local_48 == -0x80000000) {
          *param_1 = -0x80000000;
          param_1[1] = (int)local_44;
          local_7c = puVar7;
          FUN_019bb7e0(local_58,local_54);
          FUN_017151bc(&local_80);
          FUN_0190f040(&local_90);
          return;
        }
        local_34 = local_48;
        local_38 = local_44;
        local_3c = local_44;
        piVar3 = local_44 + local_40 * 3;
        local_30 = piVar3;
        if (local_40 != 0) {
          iVar14 = iVar6 * 0xc;
          piVar1 = local_44;
          do {
            iVar10 = *piVar1;
            piVar4 = piVar1 + 3;
            if (iVar10 == -0x80000000) goto LAB_016f7c5c;
            iVar2 = piVar1[1];
            iVar9 = piVar1[2];
            if (iVar6 == local_90) {
              FUN_018c4418(&local_90);
            }
            iVar6 = iVar6 + 1;
            piVar4 = (int *)(local_8c + iVar14);
            *piVar4 = iVar10;
            iVar14 = iVar14 + 0xc;
            piVar4[1] = iVar2;
            piVar4[2] = iVar9;
            piVar4 = piVar1 + 3;
            iVar2 = local_8c;
            piVar1 = piVar1 + 3;
            local_88 = iVar6;
          } while (piVar4 != piVar3);
          piVar4 = piVar3;
LAB_016f7c5c:
          local_38 = piVar4;
        }
        FUN_0192f3bc(&local_3c);
        FUN_019bb7e0(local_58,local_54);
        iVar14 = iVar6;
      }
      puVar5 = puVar7;
      iVar6 = iVar14;
    } while (puVar7 != puVar8);
    puVar7 = puVar8;
LAB_016f7cd0:
    local_7c = puVar7;
  }
  FUN_017151bc(&local_80);
  *param_1 = local_90;
  param_1[1] = local_8c;
  param_1[2] = local_88;
  return;
}

