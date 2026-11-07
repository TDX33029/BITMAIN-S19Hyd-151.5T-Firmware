// FUN_0155fbb0 @ 0155fbb0 size=768 calls_out=11 calls_in=0
// strings: 

void FUN_0155fbb0(undefined4 *param_1,int *param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0 [3];
  undefined4 local_94;
  uint local_90;
  undefined4 local_8c;
  int local_88;
  undefined4 local_84;
  uint local_80;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_3 == '\x05') {
    uVar7 = *(uint *)(param_3 + 0xc);
    uVar9 = 0;
    iVar6 = uVar7 * 0xc;
    if (0xaaaaaaa < uVar7) {
LAB_0155fbec:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,iVar6);
    }
    iVar3 = 4;
    local_b8 = 0;
    if (iVar6 != 0) {
      uVar9 = 4;
      iVar3 = FUN_01298504(iVar6,4);
      local_b8 = uVar7;
      if (iVar3 == 0) goto LAB_0155fbec;
    }
    local_94 = *(undefined4 *)(param_3 + 8);
    local_a0[2] = *(uint *)(param_3 + 4);
    local_bc = 0;
    iVar6 = *param_2;
    local_80 = uVar7;
    if (local_a0[2] == 0) {
      local_80 = 0;
    }
    local_a0[0] = (uint)(local_a0[2] != 0);
    local_b0 = 0;
    local_a4 = 0;
    local_c4 = 4;
    local_a8 = 4;
    local_ac = 0;
    local_8c = 0;
    local_a0[1] = 0;
    local_c0 = 0;
    local_b4 = iVar3;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    while( true ) {
      uVar10 = FUN_01a41998(local_a0);
      iVar4 = (int)uVar10;
      if (iVar4 == 0) break;
      uVar9 = *(undefined4 *)(iVar4 + 4);
      uVar8 = *(undefined4 *)(iVar4 + 8);
      cVar2 = FUN_0155ff74(iVar6 + 8,uVar9,uVar8);
      if (cVar2 != '\0') {
        FUN_006666fc(&local_78,uVar9,uVar8);
        if (local_c0 == local_b8) {
          FUN_019abd3c(&local_b8);
          iVar3 = local_b4;
        }
        puVar5 = (undefined4 *)(iVar3 + local_c0 * 0xc);
        *puVar5 = local_78;
        puVar5[1] = local_74;
        puVar5[2] = local_70;
        local_30 = *(undefined4 *)(iVar4 + 4);
        uStack_2c = *(undefined4 *)(iVar4 + 8);
        local_34 = 0x80000000;
        local_b0 = local_c0 + 1;
        uStack_28 = param_4;
        FUN_015737d4(&local_78,param_2 + 1,(int)((ulonglong)uVar10 >> 0x20),&local_34,param_5,
                     param_6);
        local_bc = local_a4;
        if (local_a4 == local_ac) {
          FUN_0155ab78(&local_ac);
        }
        local_c4 = local_a8;
        puVar5 = (undefined4 *)(local_a8 + local_bc * 0x40);
        *puVar5 = local_78;
        puVar5[1] = local_74;
        puVar5[2] = local_70;
        puVar5[3] = local_6c;
        puVar5[4] = local_68;
        puVar5[5] = local_64;
        puVar5[6] = local_60;
        puVar5[7] = uStack_5c;
        puVar5[8] = uStack_58;
        puVar5[9] = uStack_54;
        puVar5[10] = local_50;
        puVar5[0xb] = uStack_4c;
        puVar5[0xc] = uStack_48;
        puVar5[0xd] = uStack_44;
        puVar5[0xe] = uStack_40;
        puVar5[0xf] = uStack_3c;
        local_bc = local_bc + 1;
        local_c0 = local_c0 + 1;
        local_a4 = local_bc;
      }
    }
    iVar6 = local_bc << 6;
    iVar3 = local_c4;
    do {
      if (iVar6 == 0) {
        local_74 = local_ac;
        local_68 = 0;
        local_78 = 0x80000000;
        local_6c = local_bc;
        local_70 = local_c4;
        goto LAB_0155fe70;
      }
      pcVar1 = (char *)(iVar3 + 0x3c);
      iVar6 = iVar6 + -0x40;
      iVar3 = iVar3 + 0x40;
    } while (*pcVar1 != '\0');
    local_64 = local_bc;
    local_6c = local_ac;
    local_78 = 0;
    local_68 = local_c4;
    local_60 = 0;
    local_70 = 0;
    local_74 = 4;
LAB_0155fe70:
    FUN_01538264(local_a0,&local_b8);
    uVar9 = FUN_01531708(local_a0);
    FUN_0155ff10(&local_78,uVar9);
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[2] = local_70;
    param_1[3] = local_6c;
    param_1[4] = local_68;
    param_1[5] = local_64;
    param_1[6] = local_60;
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

