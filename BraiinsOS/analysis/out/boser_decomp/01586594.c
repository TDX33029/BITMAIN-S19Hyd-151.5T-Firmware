// FUN_01586594 @ 01586594 size=952 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01586594(int *param_1,undefined4 param_2,char *param_3)

{
  char **ppcVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char **local_a0;
  undefined4 *local_9c;
  char **local_98;
  char **local_90;
  undefined4 *local_8c;
  char **local_88;
  code *local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  int iStack_68;
  char **local_58;
  undefined4 *local_54;
  char **local_50;
  char *local_48;
  undefined4 uStack_44;
  int iStack_40;
  char *local_38;
  undefined4 uStack_34;
  int iStack_30;
  char *local_2c;
  char *local_28;
  
  if (*param_3 == '\x04') {
    iVar8 = *(int *)(param_3 + 0xc);
    pcVar10 = *(char **)(param_3 + 8);
    iVar5 = iVar8 * 0x18;
    pcVar7 = &DAT_ffffffff;
    pcVar11 = pcVar10;
    while (pcVar12 = pcVar11, pcVar9 = pcVar7, iVar5 != 0) {
      pcVar11 = pcVar12 + 0x18;
      iVar5 = iVar5 + -0x18;
      pcVar7 = pcVar9 + 1;
      if (*pcVar12 != '\x03') {
        local_88 = &local_28;
        local_84 = FUN_012fd02c;
        local_90 = &local_38;
        local_8c = (undefined4 *)&LAB_015388d8;
        local_38 = pcVar12;
        local_28 = pcVar7;
        FUN_00664898(&local_70,&DAT_00595b13,&local_90);
        puVar2 = (undefined4 *)thunk_FUN_01be5118(4);
        if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,4);
        }
        *puVar2 = 0x65707974;
        local_48 = local_70;
        uStack_44 = uStack_6c;
        iStack_40 = iStack_68;
        local_88 = (char **)0x4;
        local_90 = (char **)0x4;
        local_84 = (code *)local_70;
        local_80 = uStack_6c;
        local_7c = iStack_68;
        local_8c = puVar2;
        puVar3 = (undefined4 *)thunk_FUN_01be5118(0x60);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x60);
        }
        pcVar9 = pcVar9 + 2;
        *puVar3 = 4;
        puVar3[1] = puVar2;
        puVar3[2] = 4;
        puVar3[3] = local_48;
        puVar3[4] = uStack_44;
        puVar3[5] = iStack_40;
        local_50 = (char **)0x1;
        local_58 = (char **)0x4;
        local_54 = puVar3;
        do {
          ppcVar1 = local_50;
          local_88 = &local_2c;
          do {
            pcVar12 = pcVar11;
            pcVar7 = pcVar9;
            if (pcVar12 == pcVar10 + iVar8 * 0x18) {
              local_a0 = local_58;
              local_9c = local_54;
              local_98 = local_50;
              if (local_50 != (char **)0x0) {
                local_78 = 0;
                local_7c = 0;
                local_84 = (code *)0x0;
                local_80 = 4;
                local_70 = (char *)CONCAT31(CONCAT21(local_70._2_2_,iVar8 != 0),1);
                local_90 = local_a0;
                local_8c = local_9c;
                local_88 = local_98;
                uVar4 = FUN_01531708(&local_70);
                FUN_0155ff10(&local_90,uVar4);
                *param_1 = (int)local_90;
                param_1[1] = (int)local_8c;
                param_1[2] = (int)local_88;
                param_1[3] = (int)local_84;
                param_1[4] = local_80;
                param_1[5] = local_7c;
                param_1[6] = local_78;
                return;
              }
              goto LAB_015868c4;
            }
            pcVar11 = pcVar12 + 0x18;
            pcVar9 = pcVar7 + 1;
          } while (*pcVar12 == '\x03');
          local_84 = FUN_012fd02c;
          local_8c = (undefined4 *)&LAB_015388d8;
          local_90 = &local_28;
          local_2c = pcVar7;
          local_28 = pcVar12;
          FUN_00664898(&local_70,&DAT_00595b13);
          puVar2 = (undefined4 *)thunk_FUN_01be5118(4);
          if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(1,4);
          }
          *puVar2 = 0x65707974;
          local_38 = local_70;
          uStack_34 = uStack_6c;
          iStack_30 = iStack_68;
          local_88 = (char **)0x4;
          local_90 = (char **)0x4;
          local_80 = uStack_6c;
          local_7c = iStack_68;
          if (ppcVar1 == local_58) {
            local_8c = puVar2;
            FUN_01af7b44(&local_58,ppcVar1,1,4,0x18);
            puVar3 = local_54;
          }
          local_50 = (char **)((int)ppcVar1 + 1);
          puVar6 = puVar3 + (int)ppcVar1 * 6;
          *puVar6 = 4;
          puVar6[1] = puVar2;
          puVar6[2] = 4;
          puVar6[3] = local_38;
          puVar6[4] = uStack_34;
          puVar6[5] = iStack_30;
        } while( true );
      }
    }
    local_98 = (char **)0x0;
    local_9c = (undefined4 *)&SUB_00000004;
    local_a0 = (char **)0x0;
LAB_015868c4:
    local_84 = (code *)0x0;
    local_8c = (undefined4 *)0x0;
    local_80 = 0;
    local_90 = (char **)0x80000000;
    local_88 = (char **)0x4;
    local_70 = (char *)CONCAT31(CONCAT21(local_70._2_2_,iVar8 != 0),1);
    uVar4 = FUN_01531708(&local_70);
    FUN_0155ff10(&local_90,uVar4);
    *param_1 = (int)local_90;
    param_1[1] = (int)local_8c;
    param_1[2] = (int)local_88;
    param_1[3] = (int)local_84;
    param_1[4] = local_80;
    param_1[5] = local_7c;
    param_1[6] = local_78;
    FUN_0074dd34(&local_a0);
  }
  else {
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
  }
  return;
}

