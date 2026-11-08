// FUN_00b227c4 @ 00b227c4 size=484 calls_out=5 calls_in=1
// strings: 

void FUN_00b227c4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 *local_b8;
  int local_b4;
  int local_b0;
  undefined4 *local_ac;
  int local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 auStack_30 [12];
  
  iVar5 = param_2[1];
  uVar8 = *param_2;
  pcVar7 = *(code **)(iVar5 + 0xc);
  do {
    iVar1 = (*pcVar7)(uVar8);
    if (iVar1 == 0) goto LAB_00b22828;
  } while (*(int *)(iVar1 + 0x2b0) != 0);
  local_b4 = param_2[2];
  piVar6 = (int *)param_2[3];
  FUN_00a5cd1c(&local_a0,*piVar6 + local_b4);
  if (local_78 != -0x80000000) {
    pcVar4 = *(code **)(iVar5 + 0x10);
    (*pcVar4)(&local_68,uVar8);
    local_b8 = (undefined4 *)thunk_FUN_01be5118(0xe0);
    if (local_b8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(8,0xe0);
    }
    *local_b8 = local_a0;
    local_b8[1] = uStack_9c;
    local_b8[2] = uStack_98;
    local_b8[3] = uStack_94;
    local_b8[4] = local_90;
    local_b8[5] = uStack_8c;
    local_b8[6] = uStack_88;
    local_b8[7] = uStack_84;
    local_b8[8] = uStack_80;
    local_b8[9] = local_7c;
    local_b8[10] = local_78;
    local_b8[0xb] = local_74;
    local_b8[0xc] = uStack_70;
    local_b8[0xd] = uStack_6c;
    local_a8 = 1;
    local_b0 = 4;
    local_ac = local_b8;
    while( true ) {
      iVar1 = local_a8;
      local_b4 = local_b4 + 1;
      do {
        iVar2 = (*pcVar7)(uVar8);
        if (iVar2 == 0) goto LAB_00b2297c;
      } while (*(int *)(iVar2 + 0x2b0) != 0);
      FUN_00a5cd1c(&local_68,*piVar6 + local_b4);
      if (local_40 == -0x80000000) break;
      if (iVar1 == local_b0) {
        (*pcVar4)(auStack_30,uVar8);
        FUN_0132b898(&local_b0,iVar1,1,8,0x38);
        local_b8 = local_ac;
      }
      local_a8 = iVar1 + 1;
      puVar3 = local_b8 + iVar1 * 0xe;
      *puVar3 = local_68;
      puVar3[1] = uStack_64;
      puVar3[2] = uStack_60;
      puVar3[3] = uStack_5c;
      puVar3[4] = local_58;
      puVar3[5] = uStack_54;
      puVar3[6] = uStack_50;
      puVar3[7] = uStack_4c;
      puVar3[8] = uStack_48;
      puVar3[9] = local_44;
      puVar3[10] = local_40;
      puVar3[0xb] = local_3c;
      puVar3[0xc] = uStack_38;
      puVar3[0xd] = uStack_34;
    }
LAB_00b2297c:
    FUN_017ce5f0(uVar8,iVar5);
    *param_1 = local_b0;
    param_1[1] = (int)local_ac;
    param_1[2] = local_a8;
    return;
  }
LAB_00b22828:
  *param_1 = 0;
  param_1[1] = 8;
  param_1[2] = 0;
  FUN_017ce5f0(uVar8,iVar5);
  return;
}

