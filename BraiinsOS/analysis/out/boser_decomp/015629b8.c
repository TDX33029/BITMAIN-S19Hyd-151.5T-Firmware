// FUN_015629b8 @ 015629b8 size=816 calls_out=12 calls_in=0
// strings: 

void FUN_015629b8(int *param_1,int *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  int local_cc;
  uint local_c8;
  int local_c0;
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
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*param_3 == '\x05') {
    uVar4 = *(uint *)(param_3 + 0xc);
    uVar6 = 0;
    iVar5 = uVar4 * 0xc;
    if (0xaaaaaaa < uVar4) {
LAB_015629f4:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar6,iVar5);
    }
    local_cc = 4;
    local_bc = 4;
    local_b8 = 0;
    if (iVar5 != 0) {
      uVar6 = 4;
      local_cc = FUN_01298504(iVar5,4);
      local_b8 = uVar4;
      if (local_cc == 0) goto LAB_015629f4;
    }
    local_a0[2] = *(uint *)(param_3 + 4);
    local_94 = *(undefined4 *)(param_3 + 8);
    iVar5 = *param_2;
    local_80 = uVar4;
    if (local_a0[2] == 0) {
      local_80 = 0;
    }
    local_a0[0] = (uint)(local_a0[2] != 0);
    local_b0 = 0;
    local_a4 = 0;
    local_a8 = 4;
    local_ac = 0;
    local_8c = 0;
    local_c0 = 0;
    local_a0[1] = 0;
    local_c8 = 0;
    local_b4 = local_cc;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    while( true ) {
      uVar7 = FUN_01a41998(local_a0);
      iVar3 = (int)uVar7;
      if (iVar3 == 0) break;
      FUN_01552754(&local_78,*(undefined4 *)(iVar5 + 8),*(undefined4 *)(iVar5 + 0xc),
                   *(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
      if (local_78 != -0x80000000) {
        if (local_78 == -0x7fffffff) {
          if ((char)local_74 != '\0') {
            FUN_006666fc(&local_78,*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8));
            if (local_c8 == local_b8) {
              FUN_019abd3c(&local_b8);
              local_cc = local_b4;
            }
            piVar2 = (int *)(local_cc + local_c8 * 0xc);
            *piVar2 = local_78;
            piVar2[1] = local_74;
            piVar2[2] = local_70;
            local_30 = *(undefined4 *)(iVar3 + 4);
            uStack_2c = *(undefined4 *)(iVar3 + 8);
            local_34 = 0x80000000;
            local_b0 = local_c8 + 1;
            uStack_28 = param_4;
            FUN_015737d4(&local_78,param_2 + 1,(int)((ulonglong)uVar7 >> 0x20),&local_34,param_5,
                         param_6);
            local_c0 = local_a4;
            if (local_a4 == local_ac) {
              FUN_0155ab78(&local_ac);
            }
            local_bc = local_a8;
            piVar2 = (int *)(local_a8 + local_c0 * 0x40);
            *piVar2 = local_78;
            piVar2[1] = local_74;
            piVar2[2] = local_70;
            piVar2[3] = local_6c;
            piVar2[4] = local_68;
            piVar2[5] = local_64;
            piVar2[6] = local_60;
            piVar2[7] = iStack_5c;
            piVar2[8] = iStack_58;
            piVar2[9] = iStack_54;
            piVar2[10] = local_50;
            piVar2[0xb] = iStack_4c;
            piVar2[0xc] = iStack_48;
            piVar2[0xd] = iStack_44;
            piVar2[0xe] = iStack_40;
            piVar2[0xf] = iStack_3c;
            local_c0 = local_c0 + 1;
            local_c8 = local_c8 + 1;
            local_a4 = local_c0;
          }
        }
        else {
          FUN_019bb7e0(local_78,local_74);
        }
      }
    }
    iVar5 = local_c0 << 6;
    iVar3 = local_bc;
    do {
      if (iVar5 == 0) {
        local_74 = local_ac;
        local_68 = 0;
        local_78 = -0x80000000;
        local_6c = local_c0;
        local_70 = local_bc;
        goto LAB_01562ca8;
      }
      pcVar1 = (char *)(iVar3 + 0x3c);
      iVar5 = iVar5 + -0x40;
      iVar3 = iVar3 + 0x40;
    } while (*pcVar1 != '\0');
    local_64 = local_c0;
    local_68 = local_bc;
    local_6c = local_ac;
    local_78 = 0;
    local_60 = 0;
    local_70 = 0;
    local_74 = 4;
LAB_01562ca8:
    FUN_01538264(local_a0,&local_b8);
    uVar6 = FUN_01531708(local_a0);
    FUN_0155ff10(&local_78,uVar6);
    *param_1 = local_78;
    param_1[1] = local_74;
    param_1[2] = local_70;
    param_1[3] = local_6c;
    param_1[4] = local_68;
    param_1[5] = local_64;
    param_1[6] = local_60;
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

