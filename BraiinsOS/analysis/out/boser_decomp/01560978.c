// FUN_01560978 @ 01560978 size=848 calls_out=11 calls_in=0
// strings: 

void FUN_01560978(undefined4 *param_1,int param_2,char *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  char *pcVar1;
  char cVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  undefined8 uVar16;
  int local_e4;
  int local_e0;
  uint local_bc;
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
    uVar6 = *(uint *)(param_3 + 0xc);
    uVar13 = 0;
    iVar7 = uVar6 * 0xc;
    if (0xaaaaaaa < uVar6) {
LAB_015609c0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar13,iVar7);
    }
    iVar12 = 4;
    local_b8 = 0;
    if (iVar7 != 0) {
      uVar13 = 4;
      iVar12 = FUN_01298504(iVar7,4);
      local_b8 = uVar6;
      if (iVar12 == 0) goto LAB_015609c0;
    }
    iVar7 = *(int *)(param_2 + 8);
    local_e0 = 4;
    piVar14 = *(int **)(param_2 + 4);
    local_e4 = 0;
    local_b0 = 0;
    local_a4 = 0;
    local_a8 = 4;
    local_ac = 0;
    local_b4 = iVar12;
    if (iVar7 != 0) {
      iVar8 = *(int *)(param_3 + 4);
      uVar13 = *(undefined4 *)(param_3 + 8);
      if (iVar8 == 0) {
        uVar6 = 0;
      }
      uVar9 = (uint)(iVar8 != 0);
      local_e0 = 4;
      local_e4 = 0;
      local_bc = 0;
      piVar15 = piVar14;
      do {
        piVar3 = piVar15 + 6;
        local_8c = 0;
        local_a0[1] = 0;
        local_a0[0] = uVar9;
        local_a0[2] = iVar8;
        uStack_94 = uVar13;
        uStack_90 = uVar9;
        local_88 = iVar8;
        local_84 = uVar13;
        local_80 = uVar6;
        while( true ) {
          uVar16 = FUN_01a41998(local_a0);
          iVar4 = (int)uVar16;
          if (iVar4 == 0) break;
          uVar10 = *(undefined4 *)(iVar4 + 4);
          uVar11 = *(undefined4 *)(iVar4 + 8);
          cVar2 = FUN_0155ff74(*piVar15 + 8,uVar10,uVar11);
          if (cVar2 != '\0') {
            FUN_006666fc(&local_78,uVar10,uVar11);
            if (local_bc == local_b8) {
              FUN_019abd3c(&local_b8);
              iVar12 = local_b4;
            }
            puVar5 = (undefined4 *)(iVar12 + local_bc * 0xc);
            *puVar5 = local_78;
            puVar5[1] = local_74;
            puVar5[2] = local_70;
            local_30 = *(undefined4 *)(iVar4 + 4);
            uStack_2c = *(undefined4 *)(iVar4 + 8);
            local_34 = 0x80000000;
            local_b0 = local_bc + 1;
            uStack_28 = param_4;
            FUN_015737d4(&local_78,piVar15 + 1,(int)((ulonglong)uVar16 >> 0x20),&local_34,param_5,
                         param_6);
            local_e4 = local_a4;
            if (local_a4 == local_ac) {
              FUN_0155ab78(&local_ac);
            }
            local_e0 = local_a8;
            puVar5 = (undefined4 *)(local_a8 + local_e4 * 0x40);
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
            local_e4 = local_e4 + 1;
            local_bc = local_bc + 1;
            local_a4 = local_e4;
          }
        }
        piVar15 = piVar3;
      } while (piVar3 != piVar14 + iVar7 * 6);
    }
    iVar7 = local_e4 << 6;
    iVar12 = local_e0;
    do {
      if (iVar7 == 0) {
        local_68 = 0;
        local_78 = 0x80000000;
        local_74 = local_ac;
        local_70 = local_e0;
        local_6c = local_e4;
        goto LAB_01560c88;
      }
      pcVar1 = (char *)(iVar12 + 0x3c);
      iVar7 = iVar7 + -0x40;
      iVar12 = iVar12 + 0x40;
    } while (*pcVar1 != '\0');
    local_78 = 0;
    local_60 = 0;
    local_70 = 0;
    local_74 = 4;
    local_6c = local_ac;
    local_68 = local_e0;
    local_64 = local_e4;
LAB_01560c88:
    FUN_01538264(local_a0,&local_b8);
    uVar13 = FUN_01531708(local_a0);
    FUN_0155ff10(&local_78,uVar13);
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

