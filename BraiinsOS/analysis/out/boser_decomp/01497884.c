// FUN_01497884 @ 01497884 size=504 calls_out=9 calls_in=1
// strings: 

void FUN_01497884(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  uint local_b8;
  undefined4 *local_b4;
  uint local_b0;
  uint local_a8;
  undefined4 *local_a4;
  uint local_a0;
  uint local_9c [3];
  int local_90;
  uint local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar5 = *param_2;
  uVar4 = 0;
  uVar3 = param_2[2];
  if (iVar5 == 0) {
    uVar3 = 0;
  }
  uVar8 = (uint)(iVar5 != 0);
  iVar1 = uVar3 * 0x28;
  if (0x3333333 < uVar3) {
LAB_014978c4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar1);
  }
  iVar9 = param_2[1];
  uVar6 = 0;
  if (iVar1 == 0) {
    local_a4 = (undefined4 *)&DAT_00000008;
    local_a8 = 0;
  }
  else {
    uVar4 = 8;
    local_a4 = (undefined4 *)FUN_01298504(iVar1,8);
    local_a8 = uVar3;
    if (local_a4 == (undefined4 *)0x0) goto LAB_014978c4;
  }
  local_a0 = 0;
  local_88 = 0;
  local_9c[1] = 0;
  puVar7 = local_a4;
  local_9c[0] = uVar8;
  local_9c[2] = iVar5;
  local_90 = iVar9;
  local_8c = uVar8;
  local_84 = iVar5;
  local_80 = iVar9;
  local_7c = uVar3;
  while( true ) {
    uVar10 = FUN_0165d304(local_9c);
    puVar2 = local_a4;
    iVar5 = (int)uVar10;
    if (iVar5 == 0) break;
    FUN_006666fc(&local_50,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
    FUN_014976a0(&local_40,(int)((ulonglong)uVar10 >> 0x20));
    uVar6 = uVar6 + 1;
    local_78 = local_50;
    uStack_74 = uStack_4c;
    uStack_70 = uStack_48;
    *puVar7 = local_50;
    puVar7[1] = uStack_4c;
    puVar7[2] = uStack_48;
    puVar7[3] = uStack_6c;
    puVar7[4] = local_40;
    puVar7[5] = uStack_3c;
    puVar7[6] = uStack_38;
    puVar7[7] = uStack_34;
    puVar7[8] = uStack_30;
    puVar7[9] = uStack_2c;
    puVar7 = puVar7 + 10;
  }
  local_b8 = local_a8;
  local_b4 = local_a4;
  local_b0 = uVar6;
  local_a0 = uVar6;
  if (uVar6 == 0) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)(param_1 + 4) = 0;
    FUN_01488188(&local_b8);
  }
  else {
    if (uVar6 != 1) {
      if (uVar6 < 0x15) {
        iVar5 = 0x28;
        do {
          FUN_014980f4(puVar2,(undefined1 *)((int)puVar2 + iVar5));
          iVar5 = iVar5 + 0x28;
        } while (uVar6 * 0x28 != iVar5);
      }
      else {
        FUN_0149954c(local_a4);
      }
    }
    FUN_01494038(param_1 + 4,&local_b8);
  }
  *param_1 = 5;
  return;
}

