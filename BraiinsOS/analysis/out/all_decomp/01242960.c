// FUN_01242960 @ 01242960 size=1088 calls_out=7 calls_in=0
// strings: 

void FUN_01242960(int *param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  char *pcVar12;
  char *local_a8;
  undefined4 *local_a4;
  char *local_a0;
  char *local_98;
  int local_94;
  char *local_90;
  int local_8c;
  undefined4 *local_88;
  int local_84;
  int local_80;
  char *local_78;
  undefined4 *local_74;
  char *local_70;
  char *local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  char *local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  char *local_4c;
  char **local_48;
  undefined4 *local_44;
  undefined4 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 == '\x04') {
    pcVar7 = *(char **)(param_3 + 8);
    iVar10 = *(int *)(param_3 + 0xc);
    iVar5 = iVar10 * 0x18;
    local_a8 = (char *)0xffffffff;
    pcVar9 = pcVar7;
    while (pcVar8 = pcVar9, pcVar11 = local_a8, iVar5 != 0) {
      pcVar9 = pcVar8 + 0x18;
      iVar5 = iVar5 + -0x18;
      local_a8 = pcVar11 + 1;
      if (*pcVar8 != '\x02') {
        local_40 = &local_a8;
        local_48 = &local_58;
        local_3c = &LAB_00fac484;
        local_44 = (undefined4 *)&LAB_011f23f8;
        local_58 = pcVar8;
        FUN_00600d2c(&local_98,&DAT_005805e6,&local_48);
        puVar2 = (undefined4 *)thunk_FUN_016d4a50(4);
        if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,4);
        }
        local_40 = (char **)0x4;
        *puVar2 = 0x65707974;
        local_68 = local_98;
        uStack_64 = local_94;
        uStack_60 = local_90;
        local_3c = local_98;
        local_38 = local_94;
        uStack_34 = local_90;
        local_48 = (char **)0x4;
        local_44 = puVar2;
        puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x60);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,0x60);
        }
        pcVar11 = pcVar11 + 2;
        *puVar3 = 4;
        puVar3[1] = puVar2;
        puVar3[3] = local_68;
        puVar3[4] = uStack_64;
        puVar3[5] = uStack_60;
        puVar3[2] = 4;
        local_70 = (char *)0x1;
        local_78 = (char *)0x4;
        local_74 = puVar3;
        do {
          pcVar8 = local_70;
          do {
            pcVar12 = pcVar11;
            local_a8 = pcVar9;
            if (local_a8 == pcVar7 + iVar10 * 0x18) {
              local_a8 = local_78;
              local_a4 = local_74;
              local_a0 = local_70;
              if (local_70 != (char *)0x0) {
                local_98 = local_78;
                local_94 = (int)local_74;
                local_90 = local_70;
                local_80 = 0;
                local_84 = 0;
                local_8c = 0;
                local_40 = (char **)CONCAT31(CONCAT21(local_40._2_2_,iVar10 != 0),1);
                local_44 = (undefined4 *)0x1;
                local_48 = (char **)0x1;
                local_88 = (undefined4 *)0x4;
                puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x20);
                if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600874(8,0x20);
                }
                *puVar2 = local_48;
                puVar2[1] = local_44;
                puVar2[2] = local_40;
                puVar2[3] = local_3c;
                iVar5 = 0x18;
                puVar2[4] = local_38;
                puVar2[5] = uStack_34;
                puVar2[6] = uStack_30;
                puVar2[7] = uStack_2c;
                if (local_98 == (char *)0x80000000) {
                  iVar5 = 0x10;
                }
                piVar4 = *(int **)((int)&local_98 + iVar5);
                if (piVar4 != (int *)0x0) {
                  DataMemoryBarrier(0xb);
                  do {
                    iVar10 = *piVar4;
                    bVar1 = (bool)hasExclusiveAccess(piVar4);
                  } while (!bVar1);
                  *piVar4 = iVar10 + -1;
                  if (iVar10 == 1) {
                    DataMemoryBarrier(0xb);
                    FUN_01353488(*(undefined4 *)((int)&local_98 + iVar5));
                  }
                }
                *(undefined4 **)((int)&local_98 + iVar5) = puVar2;
                *param_1 = (int)local_98;
                param_1[1] = local_94;
                param_1[2] = (int)local_90;
                param_1[3] = local_8c;
                param_1[4] = (int)local_88;
                param_1[5] = local_84;
                param_1[6] = local_80;
                return;
              }
              goto LAB_01242cc8;
            }
            pcVar9 = local_a8 + 0x18;
            pcVar11 = pcVar12 + 1;
          } while (*local_a8 == '\x02');
          local_3c = &LAB_00fac484;
          local_44 = (undefined4 *)&LAB_011f23f8;
          local_48 = &local_a8;
          local_4c = pcVar12;
          local_40 = &local_4c;
          FUN_00600d2c(&local_98,&DAT_005805e6,&local_48);
          puVar2 = (undefined4 *)thunk_FUN_016d4a50(4);
          if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,4);
          }
          *puVar2 = 0x65707974;
          local_58 = local_98;
          uStack_54 = local_94;
          uStack_50 = local_90;
          local_3c = local_98;
          local_38 = local_94;
          uStack_34 = local_90;
          local_40 = (char **)0x4;
          local_48 = (char **)0x4;
          if (pcVar8 == local_78) {
            local_44 = puVar2;
            FUN_011cf828(&local_78,pcVar8,1,4,0x18);
            puVar3 = local_74;
          }
          puVar6 = puVar3 + (int)pcVar8 * 6;
          *puVar6 = 4;
          local_70 = pcVar8 + 1;
          puVar6[2] = 4;
          puVar6[1] = puVar2;
          puVar6[3] = local_58;
          puVar6[4] = uStack_54;
          puVar6[5] = uStack_50;
        } while( true );
      }
    }
    local_a0 = (char *)0x0;
    local_a4 = (undefined4 *)&DAT_00000004;
    local_a8 = (char *)0x0;
LAB_01242cc8:
    local_8c = 0;
    local_94 = 0;
    local_88 = (undefined4 *)0x0;
    local_98 = (char *)0x80000000;
    local_44 = (undefined4 *)0x1;
    local_48 = (char **)0x1;
    local_90 = (char *)0x4;
    local_40._0_2_ = CONCAT11(iVar10 != 0,1);
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x20);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x20);
    }
    *puVar2 = local_48;
    puVar2[1] = local_44;
    puVar2[2] = local_40;
    puVar2[3] = local_3c;
    puVar2[4] = local_38;
    puVar2[5] = uStack_34;
    puVar2[6] = uStack_30;
    puVar2[7] = uStack_2c;
    *param_1 = (int)local_98;
    param_1[1] = local_94;
    param_1[2] = (int)local_90;
    param_1[3] = local_8c;
    param_1[4] = (int)puVar2;
    param_1[5] = local_84;
    param_1[6] = local_80;
    if (local_a8 != (char *)0x0) {
      local_88 = puVar2;
      thunk_FUN_016d3fb4(local_a4);
      return;
    }
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

