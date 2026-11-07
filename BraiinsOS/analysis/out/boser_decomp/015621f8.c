// FUN_015621f8 @ 015621f8 size=896 calls_out=12 calls_in=0
// strings: 

void FUN_015621f8(int *param_1,int param_2,char *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int *piVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  int local_e0;
  int local_d8;
  uint local_d4;
  uint local_b8;
  int local_b4;
  uint local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  uint local_a0 [3];
  undefined4 uStack_94;
  uint uStack_90;
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
    uVar7 = *(uint *)(param_3 + 0xc);
    uVar12 = 0;
    iVar9 = uVar7 * 0xc;
    if (0xaaaaaaa < uVar7) {
LAB_0156223c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar12,iVar9);
    }
    local_d8 = 4;
    local_b8 = 0;
    if (iVar9 != 0) {
      uVar12 = 4;
      local_d8 = FUN_01298504(iVar9,4);
      local_b8 = uVar7;
      if (local_d8 == 0) goto LAB_0156223c;
    }
    iVar9 = 0;
    iVar8 = *(int *)(param_2 + 8);
    local_e0 = 4;
    piVar10 = *(int **)(param_2 + 4);
    local_b0 = 0;
    local_a4 = 0;
    local_a8 = 4;
    local_ac = 0;
    local_b4 = local_d8;
    if (iVar8 != 0) {
      iVar9 = 0;
      iVar2 = *(int *)(param_3 + 4);
      uVar12 = *(undefined4 *)(param_3 + 8);
      if (iVar2 == 0) {
        uVar7 = 0;
      }
      uVar3 = (uint)(iVar2 != 0);
      local_e0 = 4;
      local_d4 = 0;
      piVar11 = piVar10;
      do {
        piVar4 = piVar11 + 6;
        local_8c = 0;
        local_a0[1] = 0;
        local_a0[0] = uVar3;
        local_a0[2] = iVar2;
        uStack_94 = uVar12;
        uStack_90 = uVar3;
        local_88 = iVar2;
        local_84 = uVar12;
        local_80 = uVar7;
        while( true ) {
          uVar13 = FUN_01a41998(local_a0);
          iVar5 = (int)uVar13;
          if (iVar5 == 0) break;
          FUN_01552754(&local_78,*(undefined4 *)(*piVar11 + 8),*(undefined4 *)(*piVar11 + 0xc),
                       *(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
          if (local_78 != -0x80000000) {
            if (local_78 == -0x7fffffff) {
              if ((char)local_74 != '\0') {
                FUN_006666fc(&local_78,*(undefined4 *)(iVar5 + 4),*(undefined4 *)(iVar5 + 8));
                if (local_d4 == local_b8) {
                  FUN_019abd3c(&local_b8);
                  local_d8 = local_b4;
                }
                piVar6 = (int *)(local_d8 + local_d4 * 0xc);
                *piVar6 = local_78;
                piVar6[1] = local_74;
                piVar6[2] = local_70;
                local_30 = *(undefined4 *)(iVar5 + 4);
                uStack_2c = *(undefined4 *)(iVar5 + 8);
                local_34 = 0x80000000;
                local_b0 = local_d4 + 1;
                uStack_28 = param_4;
                FUN_015737d4(&local_78,piVar11 + 1,(int)((ulonglong)uVar13 >> 0x20),&local_34,
                             param_5,param_6);
                iVar9 = local_a4;
                if (local_a4 == local_ac) {
                  FUN_0155ab78(&local_ac);
                }
                local_e0 = local_a8;
                piVar6 = (int *)(local_a8 + iVar9 * 0x40);
                *piVar6 = local_78;
                piVar6[1] = local_74;
                piVar6[2] = local_70;
                piVar6[3] = local_6c;
                piVar6[4] = local_68;
                piVar6[5] = local_64;
                piVar6[6] = local_60;
                piVar6[7] = iStack_5c;
                piVar6[8] = iStack_58;
                piVar6[9] = iStack_54;
                piVar6[10] = local_50;
                piVar6[0xb] = iStack_4c;
                piVar6[0xc] = iStack_48;
                piVar6[0xd] = iStack_44;
                piVar6[0xe] = iStack_40;
                piVar6[0xf] = iStack_3c;
                iVar9 = iVar9 + 1;
                local_d4 = local_d4 + 1;
                local_a4 = iVar9;
              }
            }
            else {
              FUN_019bb7e0(local_78,local_74);
            }
          }
        }
        piVar11 = piVar4;
      } while (piVar4 != piVar10 + iVar8 * 6);
    }
    iVar8 = iVar9 << 6;
    iVar2 = local_e0;
    do {
      if (iVar8 == 0) {
        local_68 = 0;
        local_78 = -0x80000000;
        local_74 = local_ac;
        local_70 = local_e0;
        local_6c = iVar9;
        goto LAB_01562538;
      }
      pcVar1 = (char *)(iVar2 + 0x3c);
      iVar8 = iVar8 + -0x40;
      iVar2 = iVar2 + 0x40;
    } while (*pcVar1 != '\0');
    local_78 = 0;
    local_60 = 0;
    local_70 = 0;
    local_74 = 4;
    local_6c = local_ac;
    local_68 = local_e0;
    local_64 = iVar9;
LAB_01562538:
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

