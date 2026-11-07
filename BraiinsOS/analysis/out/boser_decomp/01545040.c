// FUN_01545040 @ 01545040 size=1660 calls_out=22 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01545040(int *param_1,int param_2,char *param_3,int param_4,int param_5,undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  int **ppiVar13;
  int **ppiVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  longlong lVar23;
  int local_fc;
  int local_e0;
  undefined4 local_dc;
  int local_d8;
  uint local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
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
  int local_74;
  int local_70;
  int local_6c;
  int **local_68;
  undefined *local_64;
  int **local_60;
  int local_5c;
  int *local_58;
  undefined4 local_54;
  undefined8 local_50;
  int local_48;
  int *local_44;
  undefined4 local_40;
  int *local_38;
  undefined *local_34;
  int local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  if (*param_3 != '\x04') {
    param_1[2] = 4;
    *param_1 = -0x80000000;
    param_1[1] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    return;
  }
  uVar12 = *(uint *)(param_3 + 0xc);
  FUN_018a7af8(&local_dc,uVar12);
  FUN_0154589c(param_2,param_3,&local_dc,param_6,0);
  iVar16 = local_d8;
  local_c8 = 0;
  uVar17 = 0;
  local_d0 = 0;
  local_bc = 0;
  if (local_d4 < uVar12) {
    uVar12 = local_d4;
  }
  local_c4 = 0;
  puVar19 = (undefined *)0x0;
  iVar8 = *(int *)(param_2 + 0x34);
  iVar11 = *(int *)(param_3 + 8);
  bVar10 = false;
  local_cc = 4;
  local_c0 = 4;
  local_fc = 0;
  local_e0 = 0;
  iVar5 = 4;
  do {
    uVar6 = uVar12;
    if (uVar12 < uVar17) {
      uVar6 = uVar17;
    }
    do {
      puVar20 = puVar19;
      uVar18 = uVar17;
      if (uVar6 == uVar18) {
        local_70 = 0;
        local_78 = 0;
        local_74 = 4;
        if (local_e0 != 0) {
          ppiVar13 = *(int ***)(param_2 + 0x70);
          do {
            piVar4 = *ppiVar13;
            bVar2 = (bool)hasExclusiveAccess(ppiVar13);
          } while (!bVar2);
          *ppiVar13 = (int *)((int)piVar4 + 1);
          if ((int)piVar4 < 0) {
LAB_015456c4:
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x15456c4);
            (*pcVar1)();
          }
          uVar12 = *(uint *)(param_2 + 0x74);
          if (param_5 == 0) {
            local_68 = (int **)0x0;
          }
          else {
            iVar16 = *(int *)(param_2 + 0x70);
            DataMemoryBarrier(0xb);
            if (*(int *)(param_5 + 0x14) != 0) {
              FUN_0154f894((undefined4 *)(param_5 + 0xc),param_5);
            }
            piVar4 = *(int **)(param_5 + 0xc);
            do {
              iVar5 = *piVar4;
              bVar2 = (bool)hasExclusiveAccess(piVar4);
            } while (!bVar2);
            *piVar4 = iVar5 + 1;
            if (iVar5 < 0) goto LAB_015456c4;
            iVar16 = iVar16 + 8;
            uVar9 = *(undefined4 *)(param_5 + 0x10);
            uVar17 = (*(int **)(param_5 + 4))[1];
            if (uVar12 < uVar17) {
              uVar17 = 0;
            }
            else {
              iVar5 = thunk_FUN_01bed842(**(int **)(param_5 + 4) + 8,iVar16,uVar17);
              if (iVar5 != 0) {
                uVar17 = 0;
              }
              iVar16 = iVar16 + uVar17;
            }
            local_50 = FUN_016bc0ec(iVar16,uVar12 - uVar17);
            local_5c = 3;
            local_68 = (int **)0x2;
            local_58 = piVar4;
            local_54 = uVar9;
          }
          uVar22 = FUN_01531840(param_4);
          local_6c = FUN_01595784(ppiVar13,uVar12,&local_68,(int)uVar22,
                                  (int)((ulonglong)uVar22 >> 0x20),param_3,&local_c4);
          lVar23 = FUN_0159662c(local_6c + 0x20);
          ppiVar14 = (int **)((ulonglong)lVar23 >> 0x20);
          if (lVar23 < 0) {
            uVar9 = 0;
            ppiVar14 = ppiVar13;
LAB_015454b0:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar9,ppiVar14);
          }
          puVar19 = (undefined *)0x1;
          ppiVar13 = (int **)0x0;
          if (ppiVar14 != (int **)0x0) {
            uVar9 = 1;
            puVar19 = (undefined *)FUN_01298504(ppiVar14,1);
            if (puVar19 == (undefined *)0x0) goto LAB_015454b0;
            ppiVar13 = ppiVar14;
          }
          FUN_01bed4e2(puVar19,(int)lVar23,ppiVar14);
          local_40 = 0;
          local_44 = (int *)&DAT_00000001;
          local_48 = 0;
          local_38 = &local_48;
          local_2c = 0;
          local_30 = 0x60000020;
          local_34 = &DAT_01cfb7ac;
          iVar5 = FUN_01592e4c(&local_6c,&local_38);
          iVar16 = local_70;
          if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01cfb7c4,&DAT_01d30334);
          }
          local_5c = local_48;
          local_58 = local_44;
          local_54 = local_40;
          local_68 = ppiVar13;
          local_64 = puVar19;
          local_60 = ppiVar14;
          if (local_70 == local_78) {
            FUN_013e6234(&local_78);
          }
          puVar21 = (undefined4 *)(local_74 + iVar16 * 0x18);
          *puVar21 = local_68;
          puVar21[1] = local_64;
          puVar21[2] = local_60;
          puVar21[3] = local_5c;
          puVar21[4] = local_58;
          puVar21[5] = local_54;
          local_70 = iVar16 + 1;
          FUN_01542824(&local_6c);
        }
        if (bVar10) {
          *param_1 = local_78;
          param_1[1] = local_74;
          param_1[2] = local_70;
          param_1[3] = local_d0;
          param_1[4] = local_cc;
          param_1[5] = local_c8;
          param_1[6] = 0;
        }
        else {
          param_1[1] = local_d0;
          param_1[2] = local_cc;
          param_1[3] = local_c8;
          *param_1 = -0x80000000;
          param_1[4] = 0;
          FUN_0074dd34(&local_78);
        }
        if (local_e0 == 0) {
          FUN_006a41c0(&local_c4);
        }
        FUN_019bb7e0(local_dc,local_d8);
        return;
      }
      puVar19 = puVar20 + 1;
      uVar17 = uVar18 + 1;
    } while (*(char *)(iVar16 + uVar18) != '\0');
    iVar15 = iVar11 + uVar18 * 0x18;
    if (iVar8 == 0) {
      local_30 = 0;
      local_38 = (int *)0x0;
      local_5c = 0;
      local_34 = (undefined *)0x1;
      local_60 = (int **)0x60000020;
      local_64 = &DAT_01cfb7ac;
      local_68 = &local_38;
      iVar15 = FUN_01968fa4(iVar15,&local_68);
      iVar5 = local_30;
      puVar20 = local_34;
      piVar4 = local_38;
      if (iVar15 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01cfb7c4,&DAT_01d30334);
      }
      if (local_e0 == local_c4) {
        FUN_019abd3c(&local_c4);
      }
      local_bc = local_e0 + 1;
      piVar7 = (int *)(local_c0 + local_e0 * 0xc);
      *piVar7 = (int)piVar4;
      piVar7[1] = (int)puVar20;
      piVar7[2] = iVar5;
      bVar10 = true;
      iVar5 = local_c0;
      local_e0 = local_bc;
    }
    else {
      local_68 = (int **)&DAT_80000001;
      local_64 = puVar20;
      local_5c = param_4;
      FUN_015737d4(&local_b8,(int *)(param_2 + 0x34),iVar15,&local_68,param_5,param_6);
      if ((char)local_7c == '\0') {
        local_30 = 0;
        local_38 = (int *)0x0;
        local_5c = 0;
        local_34 = (undefined *)0x1;
        local_60 = (int **)0x60000020;
        local_64 = &DAT_01cfb7ac;
        local_68 = &local_38;
        iVar3 = FUN_01968fa4(iVar15,&local_68);
        iVar15 = local_30;
        puVar20 = local_34;
        piVar4 = local_38;
        if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01cfb7c4,&DAT_01d30334);
        }
        if (local_e0 == local_c4) {
          FUN_019abd3c(&local_c4);
          iVar5 = local_c0;
        }
        local_bc = local_e0 + 1;
        piVar7 = (int *)(iVar5 + local_e0 * 0xc);
        *piVar7 = (int)piVar4;
        piVar7[1] = (int)puVar20;
        bVar10 = true;
        piVar7[2] = iVar15;
        local_fc = local_c8;
        local_e0 = local_bc;
      }
      else {
      }
      if (local_fc == local_d0) {
        FUN_0155ab78(&local_d0);
      }
      puVar21 = (undefined4 *)(local_cc + local_fc * 0x40);
      local_fc = local_fc + 1;
      *puVar21 = local_b8;
      puVar21[1] = uStack_b4;
      puVar21[2] = uStack_b0;
      puVar21[3] = uStack_ac;
      puVar21[4] = uStack_a8;
      puVar21[5] = local_a4;
      puVar21[6] = uStack_a0;
      puVar21[7] = uStack_9c;
      puVar21[8] = uStack_98;
      puVar21[9] = uStack_94;
      puVar21[10] = local_90;
      puVar21[0xb] = uStack_8c;
      puVar21[0xc] = uStack_88;
      puVar21[0xd] = uStack_84;
      puVar21[0xe] = uStack_80;
      puVar21[0xf] = local_7c;
      local_c8 = local_fc;
    }
  } while( true );
}

