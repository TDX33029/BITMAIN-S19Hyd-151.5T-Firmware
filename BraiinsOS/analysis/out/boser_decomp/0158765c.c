// FUN_0158765c @ 0158765c size=592 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0158765c(int *param_1,undefined4 param_2,char *param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int local_b0;
  int *local_ac;
  int local_a8;
  int local_a0;
  int *local_9c;
  int local_98;
  int local_94;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_80;
  int *local_7c;
  int local_78;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  if (*param_3 == '\x04') {
    iVar5 = *(int *)(param_3 + 0xc);
    local_68 = *(int *)(param_3 + 8);
    local_60 = 0;
    local_64 = local_68 + iVar5 * 0x18;
    FUN_014fc1e8(&local_58,&local_68);
    if (local_58 == -0x80000000) {
      local_a8 = 0;
      local_ac = (int *)&SUB_00000004;
      local_b0 = 0;
    }
    else {
      piVar2 = (int *)thunk_FUN_01be5118(0x60);
      if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x60);
      }
      iVar6 = 0x18;
      *piVar2 = local_58;
      piVar2[1] = iStack_54;
      piVar2[2] = iStack_50;
      piVar2[3] = iStack_4c;
      piVar2[4] = iStack_48;
      piVar2[5] = iStack_44;
      local_80 = 4;
      local_78 = 1;
      local_a0 = local_68;
      local_9c = (int *)local_64;
      local_98 = local_60;
      local_7c = piVar2;
      while (iVar1 = local_78, FUN_014fc1e8(&local_40,&local_a0), local_40 != -0x80000000) {
        if (iVar1 == local_80) {
          FUN_01af7b44(&local_80,iVar1,1,4,0x18);
          piVar2 = local_7c;
        }
        piVar3 = (int *)((int)piVar2 + iVar6);
        local_78 = iVar1 + 1;
        iVar6 = iVar6 + 0x18;
        *piVar3 = local_40;
        piVar3[1] = iStack_3c;
        piVar3[2] = iStack_38;
        piVar3[3] = iStack_34;
        piVar3[4] = iStack_30;
        piVar3[5] = iStack_2c;
      }
      local_b0 = local_80;
      local_ac = local_7c;
      local_a8 = local_78;
      if (local_78 != 0) {
        local_a0 = local_80;
        local_9c = local_7c;
        local_98 = local_78;
        local_88 = 0;
        local_8c = 0;
        local_94 = 0;
        local_90 = 4;
        local_80 = CONCAT31(CONCAT21(local_80._2_2_,iVar5 != 0),1);
        uVar4 = FUN_01531708(&local_80);
        FUN_0155ff10(&local_a0,uVar4);
        *param_1 = local_a0;
        param_1[1] = (int)local_9c;
        param_1[2] = local_98;
        param_1[3] = local_94;
        param_1[4] = local_90;
        param_1[5] = local_8c;
        param_1[6] = local_88;
        return;
      }
    }
    local_94 = 0;
    local_9c = (int *)0x0;
    local_90 = 0;
    local_a0 = -0x80000000;
    local_98 = 4;
    local_80 = CONCAT31(CONCAT21(local_80._2_2_,iVar5 != 0),1);
    uVar4 = FUN_01531708(&local_80);
    FUN_0155ff10(&local_a0,uVar4);
    *param_1 = local_a0;
    param_1[1] = (int)local_9c;
    param_1[2] = local_98;
    param_1[3] = local_94;
    param_1[4] = local_90;
    param_1[5] = local_8c;
    param_1[6] = local_88;
    FUN_0074dd34(&local_b0);
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

