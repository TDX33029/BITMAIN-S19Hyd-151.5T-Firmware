// FUN_01244694 @ 01244694 size=772 calls_out=7 calls_in=0
// strings: 

void FUN_01244694(int *param_1,undefined4 param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int local_b8;
  int *local_b4;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_98;
  int *local_94;
  int local_90;
  int local_8c;
  int *local_88;
  int local_84;
  int local_80;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 == '\x04') {
    iVar5 = *(int *)(param_3 + 0xc);
    local_a8 = *(int *)(param_3 + 8);
    local_a0 = 0;
    local_a4 = local_a8 + iVar5 * 0x18;
    FUN_01157780(&local_78,&local_a8);
    if (local_78 == -0x80000000) {
      local_b4 = (int *)&DAT_00000004;
      local_b8 = 0;
    }
    else {
      piVar4 = (int *)thunk_FUN_016d4a50(0x60);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x60);
      }
      iVar6 = 0x18;
      *piVar4 = local_78;
      piVar4[1] = iStack_74;
      piVar4[2] = iStack_70;
      piVar4[3] = iStack_6c;
      piVar4[4] = iStack_68;
      piVar4[5] = iStack_64;
      local_98 = 4;
      local_90 = 1;
      local_48 = local_a8;
      local_44 = local_a4;
      local_40 = local_a0;
      local_94 = piVar4;
      while (iVar2 = local_90, FUN_01157780(&local_60,&local_48), local_60 != -0x80000000) {
        if (iVar2 == local_98) {
          FUN_011cf828(&local_98,iVar2,1,4,0x18);
          piVar4 = local_94;
        }
        piVar3 = (int *)((int)piVar4 + iVar6);
        local_90 = iVar2 + 1;
        iVar6 = iVar6 + 0x18;
        *piVar3 = local_60;
        piVar3[1] = iStack_5c;
        piVar3[2] = iStack_58;
        piVar3[3] = iStack_54;
        piVar3[4] = iStack_50;
        piVar3[5] = iStack_4c;
      }
      local_b8 = local_98;
      local_b4 = local_94;
      if (local_90 != 0) {
        local_80 = 0;
        local_84 = 0;
        local_8c = 0;
        local_40 = CONCAT31(CONCAT21(local_40._2_2_,iVar5 != 0),1);
        local_44 = 1;
        local_48 = 1;
        local_88 = (int *)0x4;
        piVar4 = (int *)thunk_FUN_016d4a50(0x20);
        if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x20);
        }
        *piVar4 = local_48;
        piVar4[1] = local_44;
        piVar4[2] = local_40;
        piVar4[3] = iStack_3c;
        iVar5 = 0x18;
        piVar4[4] = local_38;
        piVar4[5] = iStack_34;
        piVar4[6] = iStack_30;
        piVar4[7] = iStack_2c;
        if (local_98 == -0x80000000) {
          iVar5 = 0x10;
        }
        piVar3 = *(int **)((int)&local_98 + iVar5);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01353488(*(undefined4 *)((int)&local_98 + iVar5));
          }
        }
        *(int **)((int)&local_98 + iVar5) = piVar4;
        *param_1 = local_98;
        param_1[1] = (int)local_94;
        param_1[2] = local_90;
        param_1[3] = local_8c;
        param_1[4] = (int)local_88;
        param_1[5] = local_84;
        param_1[6] = local_80;
        return;
      }
    }
    local_8c = 0;
    local_94 = (int *)0x0;
    local_88 = (int *)0x0;
    local_98 = -0x80000000;
    local_44 = 1;
    local_48 = 1;
    local_90 = 4;
    local_40._0_2_ = CONCAT11(iVar5 != 0,1);
    piVar4 = (int *)thunk_FUN_016d4a50(0x20);
    if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x20);
    }
    *piVar4 = local_48;
    piVar4[1] = local_44;
    piVar4[2] = local_40;
    piVar4[3] = iStack_3c;
    piVar4[4] = local_38;
    piVar4[5] = iStack_34;
    piVar4[6] = iStack_30;
    piVar4[7] = iStack_2c;
    *param_1 = local_98;
    param_1[1] = (int)local_94;
    param_1[2] = local_90;
    param_1[3] = local_8c;
    param_1[4] = (int)piVar4;
    param_1[5] = local_84;
    param_1[6] = local_80;
    if (local_b8 != 0) {
      local_88 = piVar4;
      thunk_FUN_016d3fb4(local_b4);
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

