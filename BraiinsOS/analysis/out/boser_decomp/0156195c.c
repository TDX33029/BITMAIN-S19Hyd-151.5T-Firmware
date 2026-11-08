// FUN_0156195c @ 0156195c size=776 calls_out=12 calls_in=0
// strings: 

void FUN_0156195c(int *param_1,int *param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  uint local_c8;
  int local_c4;
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
    uVar5 = *(uint *)(param_3 + 0xc);
    uVar7 = 0;
    iVar6 = uVar5 * 0xc;
    if (0xaaaaaaa < uVar5) {
LAB_01561998:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar7,iVar6);
    }
    local_c4 = 4;
    local_bc = 4;
    local_b8 = 0;
    if (iVar6 != 0) {
      uVar7 = 4;
      local_c4 = FUN_01298504(iVar6,4);
      local_b8 = uVar5;
      if (local_c4 == 0) goto LAB_01561998;
    }
    local_a0[2] = *(uint *)(param_3 + 4);
    local_94 = *(undefined4 *)(param_3 + 8);
    if (local_a0[2] == 0) {
      uVar5 = 0;
    }
    iVar3 = *param_2;
    local_a0[0] = (uint)(local_a0[2] != 0);
    iVar6 = 0;
    local_b0 = 0;
    local_a4 = 0;
    local_a8 = 4;
    local_ac = 0;
    local_8c = 0;
    local_a0[1] = 0;
    local_c8 = 0;
    local_b4 = local_c4;
    local_90 = local_a0[0];
    local_88 = local_a0[2];
    local_84 = local_94;
    local_80 = uVar5;
    while( true ) {
      uVar8 = FUN_01a41998(local_a0);
      iVar4 = (int)uVar8;
      if (iVar4 == 0) break;
      FUN_01338048(&local_78,iVar3 + 8,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
      if (local_78 == 0x12) {
        if ((char)local_74 != '\0') {
          FUN_006666fc(&local_78,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
          if (local_c8 == local_b8) {
            FUN_019abd3c(&local_b8);
            local_c4 = local_b4;
          }
          piVar2 = (int *)(local_c4 + local_c8 * 0xc);
          *piVar2 = local_78;
          piVar2[1] = local_74;
          piVar2[2] = local_70;
          local_30 = *(undefined4 *)(iVar4 + 4);
          uStack_2c = *(undefined4 *)(iVar4 + 8);
          local_34 = 0x80000000;
          local_b0 = local_c8 + 1;
          uStack_28 = param_4;
          FUN_015737d4(&local_78,param_2 + 1,(int)((ulonglong)uVar8 >> 0x20),&local_34,param_5,
                       param_6);
          iVar6 = local_a4;
          if (local_a4 == local_ac) {
            FUN_0155ab78(&local_ac);
          }
          local_bc = local_a8;
          piVar2 = (int *)(local_a8 + iVar6 * 0x40);
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
          iVar6 = iVar6 + 1;
          local_c8 = local_c8 + 1;
          local_a4 = iVar6;
        }
      }
      else {
        FUN_0150174c(&local_78);
      }
    }
    iVar3 = iVar6 << 6;
    iVar4 = local_bc;
    do {
      if (iVar3 == 0) {
        local_74 = local_ac;
        local_68 = 0;
        local_78 = -0x80000000;
        local_70 = local_bc;
        local_6c = iVar6;
        goto LAB_01561c24;
      }
      pcVar1 = (char *)(iVar4 + 0x3c);
      iVar3 = iVar3 + -0x40;
      iVar4 = iVar4 + 0x40;
    } while (*pcVar1 != '\0');
    local_68 = local_bc;
    local_6c = local_ac;
    local_78 = 0;
    local_60 = 0;
    local_70 = 0;
    local_74 = 4;
    local_64 = iVar6;
LAB_01561c24:
    FUN_01538264(local_a0,&local_b8);
    uVar7 = FUN_01531708(local_a0);
    FUN_0155ff10(&local_78,uVar7);
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

