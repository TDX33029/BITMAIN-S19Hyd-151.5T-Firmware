// FUN_01561200 @ 01561200 size=876 calls_out=12 calls_in=0
// strings: 

void FUN_01561200(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int local_dc;
  int local_d4;
  uint local_c4;
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
    uVar6 = *(uint *)(param_3 + 0xc);
    uVar12 = 0;
    iVar8 = uVar6 * 0xc;
    if (0xaaaaaaa < uVar6) {
LAB_01561244:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,iVar8);
    }
    local_d4 = 4;
    local_b8 = 0;
    if (iVar8 != 0) {
      uVar12 = 4;
      local_d4 = FUN_01298504(iVar8,4);
      local_b8 = uVar6;
      if (local_d4 == 0) goto LAB_01561244;
    }
    iVar8 = 0;
    iVar7 = *(int *)(param_2 + 8);
    local_dc = 4;
    piVar9 = *(int **)(param_2 + 4);
    local_b0 = 0;
    local_a4 = 0;
    local_a8 = 4;
    local_ac = 0;
    local_b4 = local_d4;
    if (iVar7 != 0) {
      iVar11 = *(int *)(param_3 + 4);
      uVar12 = *(undefined4 *)(param_3 + 8);
      uVar2 = (uint)(iVar11 != 0);
      local_dc = 4;
      if (iVar11 == 0) {
        uVar6 = 0;
      }
      iVar8 = 0;
      local_c4 = 0;
      piVar10 = piVar9;
      do {
        local_a0[1] = 0;
        piVar3 = piVar10 + 6;
        local_8c = 0;
        local_a0[0] = uVar2;
        local_a0[2] = iVar11;
        local_94 = uVar12;
        local_90 = uVar2;
        local_88 = iVar11;
        local_84 = uVar12;
        local_80 = uVar6;
        while( true ) {
          uVar13 = FUN_01a41998(local_a0);
          iVar4 = (int)uVar13;
          if (iVar4 == 0) break;
          FUN_01338048(&local_78,*piVar10 + 8,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8))
          ;
          if (local_78 == 0x12) {
            if ((char)local_74 != '\0') {
              FUN_006666fc(&local_78,*(undefined4 *)(iVar4 + 4),*(undefined4 *)(iVar4 + 8));
              if (local_c4 == local_b8) {
                FUN_019abd3c(&local_b8);
                local_d4 = local_b4;
              }
              piVar5 = (int *)(local_d4 + local_c4 * 0xc);
              *piVar5 = local_78;
              piVar5[1] = local_74;
              piVar5[2] = local_70;
              local_30 = *(undefined4 *)(iVar4 + 4);
              uStack_2c = *(undefined4 *)(iVar4 + 8);
              local_34 = 0x80000000;
              local_b0 = local_c4 + 1;
              uStack_28 = param_4;
              FUN_015737d4(&local_78,piVar10 + 1,(int)((ulonglong)uVar13 >> 0x20),&local_34,param_5,
                           param_6);
              iVar8 = local_a4;
              if (local_a4 == local_ac) {
                FUN_0155ab78(&local_ac);
              }
              local_dc = local_a8;
              piVar5 = (int *)(local_a8 + iVar8 * 0x40);
              *piVar5 = local_78;
              piVar5[1] = local_74;
              piVar5[2] = local_70;
              piVar5[3] = local_6c;
              piVar5[4] = local_68;
              piVar5[5] = local_64;
              piVar5[6] = local_60;
              piVar5[7] = iStack_5c;
              piVar5[8] = iStack_58;
              piVar5[9] = iStack_54;
              piVar5[10] = local_50;
              piVar5[0xb] = iStack_4c;
              piVar5[0xc] = iStack_48;
              piVar5[0xd] = iStack_44;
              piVar5[0xe] = iStack_40;
              piVar5[0xf] = iStack_3c;
              iVar8 = iVar8 + 1;
              local_c4 = local_c4 + 1;
              local_a4 = iVar8;
            }
          }
          else {
            FUN_0150174c(&local_78);
          }
        }
        piVar10 = piVar3;
      } while (piVar3 != piVar9 + iVar7 * 6);
    }
    iVar7 = iVar8 << 6;
    iVar11 = local_dc;
    do {
      if (iVar7 == 0) {
        local_68 = 0;
        local_78 = -0x80000000;
        local_74 = local_ac;
        local_70 = local_dc;
        local_6c = iVar8;
        goto LAB_0156152c;
      }
      pcVar1 = (char *)(iVar11 + 0x3c);
      iVar7 = iVar7 + -0x40;
      iVar11 = iVar11 + 0x40;
    } while (*pcVar1 != '\0');
    local_78 = 0;
    local_60 = 0;
    local_70 = 0;
    local_74 = 4;
    local_6c = local_ac;
    local_68 = local_dc;
    local_64 = iVar8;
LAB_0156152c:
    FUN_01538264(local_a0,&local_b8);
    uVar12 = FUN_01531708(local_a0);
    FUN_0155ff10(&local_78,uVar12);
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

