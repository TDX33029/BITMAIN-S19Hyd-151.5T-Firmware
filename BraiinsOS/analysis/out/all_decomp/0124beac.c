// FUN_0124beac @ 0124beac size=1204 calls_out=7 calls_in=0
// strings: 

void FUN_0124beac(int *param_1,undefined4 param_2,char *param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  char *local_ac;
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
  int local_4c;
  char **local_48;
  undefined4 *local_44;
  undefined4 local_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  if (*param_3 != '\x04') {
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[2] = 4;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  iVar9 = *(int *)(param_3 + 0xc);
  iVar6 = 0;
  iVar11 = *(int *)(param_3 + 8);
  iVar8 = -1;
  do {
    iVar12 = iVar8;
    if (iVar9 * 0x18 == iVar6) {
      local_a0 = (char *)0x0;
      local_a4 = (undefined4 *)&DAT_00000004;
      local_a8 = (char *)0x0;
LAB_0124c288:
      local_8c = 0;
      local_94 = 0;
      local_88 = (undefined4 *)0x0;
      local_98 = (char *)0x80000000;
      local_44 = (undefined4 *)0x1;
      local_48 = (char **)0x1;
      local_90 = (char *)0x4;
      local_40._0_2_ = CONCAT11(iVar9 != 0,1);
      puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x20,4,param_3);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x20);
      }
      *puVar3 = local_48;
      puVar3[1] = local_44;
      puVar3[2] = local_40;
      puVar3[3] = local_3c;
      puVar3[4] = local_38;
      puVar3[5] = uStack_34;
      puVar3[6] = uStack_30;
      puVar3[7] = uStack_2c;
      *param_1 = (int)local_98;
      param_1[1] = local_94;
      param_1[2] = (int)local_90;
      param_1[3] = local_8c;
      param_1[4] = (int)puVar3;
      param_1[5] = local_84;
      param_1[6] = local_80;
      if (local_a8 == (char *)0x0) {
        return;
      }
      local_88 = puVar3;
      thunk_FUN_016d3fb4(local_a4);
      return;
    }
    if (*(char *)(iVar11 + iVar6) != '\x02') {
      local_58 = (char *)(iVar11 + iVar6);
      local_ac = (char *)(iVar11 + iVar6) + 0x18;
      goto LAB_0124bf74;
    }
    iVar8 = iVar11 + iVar6;
    iVar6 = iVar6 + 0x18;
    uVar10 = *(uint *)(iVar8 + 0xc);
    bVar13 = 1 < *(uint *)(iVar8 + 8);
    param_3 = (char *)(uVar10 - !bVar13);
    iVar8 = iVar12 + 1;
    if (uVar10 != 0 || uVar10 < bVar13) {
      local_ac = (char *)(iVar11 + iVar6);
      local_58 = local_ac + -0x18;
LAB_0124bf74:
      local_a8 = (char *)(iVar12 + 1);
      iVar12 = iVar12 + 2;
      local_40 = &local_a8;
      local_48 = &local_58;
      local_44 = (undefined4 *)&LAB_011f23f8;
      local_3c = &LAB_00fac484;
      FUN_00600d2c(&local_98,&DAT_00584e4c,&local_48);
      puVar3 = (undefined4 *)thunk_FUN_016d4a50(4);
      if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,4);
      }
      *puVar3 = 0x65707974;
      local_68 = local_98;
      uStack_64 = local_94;
      uStack_60 = local_90;
      local_3c = local_98;
      local_38 = local_94;
      uStack_34 = local_90;
      local_40 = (char **)0x4;
      local_48 = (char **)0x4;
      local_44 = puVar3;
      puVar4 = (undefined4 *)thunk_FUN_016d4a50(0x60);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x60);
      }
      *puVar4 = 4;
      puVar4[1] = puVar3;
      puVar4[3] = local_68;
      puVar4[4] = uStack_64;
      puVar4[5] = uStack_60;
      puVar4[2] = 4;
      local_70 = (char *)0x1;
      local_78 = (char *)0x4;
      local_74 = puVar4;
      do {
        pcVar1 = local_70;
        pcVar2 = local_ac + -0x18;
        do {
          iVar8 = iVar12;
          local_a8 = pcVar2;
          if (local_a8 + 0x18 == (char *)(iVar11 + iVar9 * 0x18)) {
            local_a8 = local_78;
            local_a4 = local_74;
            local_a0 = local_70;
            param_3 = (char *)0x0;
            if (local_70 != (char *)0x0) {
              local_98 = local_78;
              local_94 = (int)local_74;
              local_90 = local_70;
              local_80 = 0;
              local_84 = 0;
              local_8c = 0;
              local_40 = (char **)CONCAT31(CONCAT21(local_40._2_2_,iVar9 != 0),1);
              local_44 = (undefined4 *)0x1;
              local_48 = (char **)0x1;
              local_88 = (undefined4 *)0x4;
              puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x20);
              if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(8,0x20);
              }
              *puVar3 = local_48;
              puVar3[1] = local_44;
              puVar3[2] = local_40;
              puVar3[3] = local_3c;
              iVar8 = 0x18;
              puVar3[4] = local_38;
              puVar3[5] = uStack_34;
              puVar3[6] = uStack_30;
              puVar3[7] = uStack_2c;
              if (local_98 == (char *)0x80000000) {
                iVar8 = 0x10;
              }
              piVar5 = *(int **)((int)&local_98 + iVar8);
              if (piVar5 != (int *)0x0) {
                DataMemoryBarrier(0xb);
                do {
                  iVar6 = *piVar5;
                  bVar13 = (bool)hasExclusiveAccess(piVar5);
                } while (!bVar13);
                *piVar5 = iVar6 + -1;
                if (iVar6 == 1) {
                  DataMemoryBarrier(0xb);
                  FUN_01353488(*(undefined4 *)((int)&local_98 + iVar8));
                }
              }
              *(undefined4 **)((int)&local_98 + iVar8) = puVar3;
              *param_1 = (int)local_98;
              param_1[1] = local_94;
              param_1[2] = (int)local_90;
              param_1[3] = local_8c;
              param_1[4] = (int)local_88;
              param_1[5] = local_84;
              param_1[6] = local_80;
              return;
            }
            goto LAB_0124c288;
          }
          if (local_a8[0x18] != '\x02') break;
          pcVar2 = local_a8 + 0x18;
          iVar12 = iVar8 + 1;
        } while (*(uint *)(local_a8 + 0x24) == 0 &&
                 (uint)(1 < *(uint *)(local_a8 + 0x20)) <= *(uint *)(local_a8 + 0x24));
        local_ac = local_a8 + 0x30;
        iVar12 = iVar8 + 1;
        local_a8 = local_a8 + 0x18;
        local_3c = &LAB_00fac484;
        local_40 = (char **)&local_4c;
        local_44 = (undefined4 *)&LAB_011f23f8;
        local_48 = &local_a8;
        local_4c = iVar8;
        FUN_00600d2c(&local_98,&DAT_00584e4c,&local_48);
        puVar3 = (undefined4 *)thunk_FUN_016d4a50(4);
        if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,4);
        }
        local_40 = (char **)0x4;
        *puVar3 = 0x65707974;
        local_58 = local_98;
        uStack_54 = local_94;
        uStack_50 = local_90;
        local_3c = local_98;
        local_38 = local_94;
        uStack_34 = local_90;
        local_48 = (char **)0x4;
        if (pcVar1 == local_78) {
          local_44 = puVar3;
          FUN_011cf828(&local_78,pcVar1,1,4,0x18);
          puVar4 = local_74;
        }
        local_70 = pcVar1 + 1;
        puVar7 = puVar4 + (int)pcVar1 * 6;
        *puVar7 = 4;
        puVar7[2] = 4;
        puVar7[1] = puVar3;
        puVar7[3] = local_58;
        puVar7[4] = uStack_54;
        puVar7[5] = uStack_50;
      } while( true );
    }
  } while( true );
}

