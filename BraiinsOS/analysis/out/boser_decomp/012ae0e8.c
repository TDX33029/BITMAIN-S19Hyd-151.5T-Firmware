// FUN_012ae0e8 @ 012ae0e8 size=2756 calls_out=19 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012ae0e8(undefined4 param_1,int param_2,uint param_3,int param_4)

{
  uint *puVar1;
  byte bVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 *puVar5;
  byte *pbVar6;
  byte *pbVar7;
  uint uVar8;
  char *pcVar9;
  undefined *puVar10;
  char *****pppppcVar11;
  char *****pppppcVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  char *****pppppcVar16;
  bool bVar17;
  char ****local_b8;
  char ***local_b4;
  char ****local_b0;
  char ***local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_9c;
  undefined4 *local_98;
  int local_94;
  char *****local_90;
  byte *local_8c;
  char *****local_88;
  code *local_84;
  char *****local_80;
  undefined1 *local_7c;
  int local_78;
  int local_74;
  int local_70;
  undefined1 auStack_6c [4];
  int local_68;
  int local_64;
  char *****local_60;
  byte *local_5c;
  char *****local_58;
  char *****local_50;
  byte *pbStack_4c;
  char *****pppppcStack_48;
  char *****local_40;
  byte *local_3c;
  char *****local_38;
  char *****local_30;
  byte *local_2c;
  char *****local_28;
  
  local_b8 = &local_b4;
  local_b4 = (char ***)(param_2 + 0x62);
  local_b0 = &local_ac;
  local_ac = (char ***)(param_2 + 0x70);
  if (*(char *)(param_2 + 0x70) == '\x04') {
    local_ac = local_b4;
  }
  local_90 = &local_b8;
  puVar10 = &DAT_0041faec;
  local_8c = &DAT_012b59c8;
  FUN_00664898(&local_a8,&DAT_0041faec,&local_90);
  local_94 = 0;
  local_98 = (undefined4 *)&SUB_00000004;
  local_9c = 0;
  if (((((*(uint *)(param_4 + 8) & 1) != 0) && (*(int *)(param_4 + 0x10) == 0)) ||
      ((*(byte *)(param_4 + 0x11d) & 4) != 0)) ||
     (pppppcVar16 = *(char ******)(param_4 + 200), pppppcVar16 == (char *****)0x0)) {
LAB_012ae5d8:
    iVar3 = 4;
    local_70 = 0;
    local_74 = 4;
    local_78 = 0;
    pppppcVar16 = *(char ******)(param_4 + 0xac);
    pppppcVar12 = pppppcVar16 + *(int *)(param_4 + 0xb0) * 2;
    while( true ) {
      iVar13 = local_70;
      do {
        pppppcVar11 = pppppcVar16;
        if (pppppcVar11 == pppppcVar12) goto LAB_012ae6bc;
        pppppcVar16 = pppppcVar11 + 2;
      } while (*(char *)(pppppcVar11 + 1) != '\x01');
      local_90 = &local_b0;
      local_8c = &DAT_012b59c8;
      local_88 = pppppcVar11;
      local_84 = FUN_012fbb84;
      FUN_00664898(&local_30,&DAT_0041fe2d,&local_90);
      if (local_30 == (char *****)&DAT_80000000) break;
      if (iVar13 == local_78) {
        FUN_006520b4(&local_78,iVar13,1,4,0xc);
        iVar3 = local_74;
      }
      puVar5 = (undefined4 *)(iVar3 + iVar13 * 0xc);
      local_70 = iVar13 + 1;
      *puVar5 = local_30;
      puVar5[1] = local_2c;
      puVar5[2] = local_28;
    }
LAB_012ae6bc:
    pppppcVar12 = *(char ******)(param_4 + 0xa0);
    iVar3 = *(int *)(param_4 + 0xa4);
    pppppcVar16 = pppppcVar12;
    while (pppppcVar11 = pppppcVar16, pppppcVar11 != pppppcVar12 + iVar3 * 3) {
      pppppcVar16 = pppppcVar11 + 3;
      if (*(char *)(pppppcVar11 + 2) == '\x01') {
        local_90 = &local_b0;
        local_84 = (code *)&LAB_01298df4;
        local_8c = &DAT_012b59c8;
        local_88 = pppppcVar11;
        FUN_00664898(&local_30,&DAT_0041fe20,&local_90);
        if (local_30 == (char *****)&DAT_80000000) break;
        if (iVar13 == local_78) {
          FUN_006520b4(&local_78,iVar13,1,4,0xc);
        }
        local_70 = iVar13 + 1;
        puVar5 = (undefined4 *)(local_74 + iVar13 * 0xc);
        *puVar5 = local_30;
        puVar5[1] = local_2c;
        puVar5[2] = local_28;
        iVar13 = local_70;
      }
    }
    if (iVar13 != 0) {
      FUN_012b345c(&local_40,local_74,iVar13,local_a4,local_a0);
      local_84 = (code *)&LAB_00632348;
      local_8c = &DAT_012b59c8;
      local_90 = &local_b8;
      local_88 = (char *****)&local_40;
      FUN_00664898(&local_30,&DAT_0041faf8,&local_90);
      pppppcVar12 = local_28;
      pbVar4 = local_2c;
      pppppcVar16 = local_30;
      iVar3 = local_94;
      if (local_94 == local_9c) {
        FUN_019abd3c(&local_9c);
      }
      local_94 = iVar3 + 1;
      puVar5 = local_98 + iVar3 * 3;
      *puVar5 = pppppcVar16;
      puVar5[1] = pbVar4;
      puVar5[2] = pppppcVar12;
      FUN_0134bd64(local_40,local_3c);
    }
    if (((*(byte *)(param_4 + 0x11c) & 0x10) == 0) &&
       (iVar3 = FUN_012af518(param_3,param_4), iVar3 == 0)) {
      FUN_012bad98(auStack_6c,param_4);
      if (local_64 != 0) {
        iVar3 = local_64 * 0x24;
        iVar13 = local_68;
        do {
          if (iVar3 == 0) goto LAB_012ae91c;
          FUN_012bbe08(&local_50,iVar13);
          iVar3 = iVar3 + -0x24;
          iVar13 = iVar13 + 0x24;
        } while (local_50 == (char *****)&DAT_80000001);
        local_88 = (char *****)&local_40;
        local_40 = local_50;
        local_3c = pbStack_4c;
        local_38 = pppppcStack_48;
        local_84 = (code *)&LAB_012b97d8;
        local_8c = &DAT_012b59c8;
        local_90 = &local_b0;
        FUN_00664898(&local_30,&DAT_004200d0,&local_90);
        pppppcVar12 = local_28;
        pbVar4 = local_2c;
        pppppcVar16 = local_30;
        if (local_40 != (char *****)&DAT_80000000) {
          FUN_0134bd64(local_40,local_3c);
        }
        if (pppppcVar16 == (char *****)&DAT_80000000) {
LAB_012ae91c:
          local_88 = (char *****)0x0;
          local_8c = &SUB_00000004;
          local_90 = (char *****)0x0;
        }
        else {
          pbVar6 = (byte *)thunk_FUN_01be5118(0x30);
          if (pbVar6 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(4,0x30);
          }
          *(char ******)pbVar6 = pppppcVar16;
          *(byte **)(pbVar6 + 4) = pbVar4;
          *(char ******)(pbVar6 + 8) = pppppcVar12;
          local_60 = (char *****)&SUB_00000004;
          local_58 = (char *****)&DAT_00000001;
          pppppcVar16 = (char *****)&DAT_00000001;
          local_5c = pbVar6;
          while (iVar13 != local_68 + local_64 * 0x24) {
            FUN_012bbe08(&local_50,iVar13);
            iVar13 = iVar13 + 0x24;
            if (local_50 != (char *****)&DAT_80000001) {
              local_88 = (char *****)&local_40;
              local_40 = local_50;
              local_3c = pbStack_4c;
              local_38 = pppppcStack_48;
              local_84 = (code *)&LAB_012b97d8;
              local_8c = &DAT_012b59c8;
              local_90 = &local_b0;
              FUN_00664898(&local_30,&DAT_004200d0,&local_90);
              pppppcVar11 = local_28;
              pbVar4 = local_2c;
              pppppcVar12 = local_30;
              if (local_40 != (char *****)&DAT_80000000) {
                FUN_0134bd64(local_40,local_3c);
              }
              if (pppppcVar12 == (char *****)&DAT_80000000) break;
              if (pppppcVar16 == local_60) {
                FUN_006520b4(&local_60,pppppcVar16,1,4,0xc);
                pbVar6 = local_5c;
              }
              local_58 = (char *****)((int)pppppcVar16 + 1);
              pbVar7 = pbVar6 + (int)pppppcVar16 * 0xc;
              *(char ******)pbVar7 = pppppcVar12;
              *(byte **)(pbVar7 + 4) = pbVar4;
              *(char ******)(pbVar7 + 8) = pppppcVar11;
              pppppcVar16 = local_58;
            }
          }
          local_90 = local_60;
          local_8c = local_5c;
          local_88 = local_58;
        }
        FUN_012b345c(&local_40,local_8c,local_88,local_a4,local_a0);
        FUN_006a41c0(&local_90);
        local_84 = (code *)&LAB_00632348;
        local_8c = &DAT_012b59c8;
        local_90 = &local_b8;
        local_88 = (char *****)&local_40;
        FUN_00664898(&local_30,&DAT_0041fc3d,&local_90);
        pppppcVar12 = local_28;
        pbVar4 = local_2c;
        pppppcVar16 = local_30;
        iVar3 = local_94;
        if (local_94 == local_9c) {
          FUN_019abd3c(&local_9c);
        }
        local_94 = iVar3 + 1;
        puVar5 = local_98 + iVar3 * 3;
        *puVar5 = pppppcVar16;
        puVar5[1] = pbVar4;
        puVar5[2] = pppppcVar12;
        FUN_0134bd64(local_40,local_3c);
      }
      FUN_01298844(auStack_6c);
    }
    pcVar9 = &DAT_005319c3;
    if ((param_3 & 1) != 0) {
      pcVar9 = "\n";
    }
    FUN_012b345c(param_1,local_98,local_94,pcVar9,1);
    FUN_006a41c0(&local_78);
    FUN_006a41c0(&local_9c);
    FUN_0134bd64(local_a8,local_a4);
    return;
  }
  if (pppppcVar16 < (char *****)0xaaaaaab) {
    iVar3 = *(int *)(param_4 + 0xc4);
    uVar15 = 4;
    puVar10 = (undefined *)((int)pppppcVar16 * 0xc);
    pbVar4 = (byte *)FUN_01298504(puVar10,4);
    if (pbVar4 != (byte *)0x0) {
      local_58 = (char *****)0x0;
      pppppcVar12 = (char *****)0x0;
      local_60 = pppppcVar16;
      local_5c = pbVar4;
      do {
        puVar5 = (undefined4 *)(iVar3 + (int)pppppcVar12 * 8);
        FUN_006643f0(&local_50,*puVar5,puVar5[1]);
        local_30 = local_50;
        local_2c = pbStack_4c;
        local_28 = pppppcStack_48;
        if (pppppcStack_48 != (char *****)0x0) {
          pbVar6 = pbStack_4c;
          do {
            pbVar7 = pbVar6 + 1;
            uVar8 = (uint)*pbVar6;
            if (0x7fffffff < (uint)(int)(char)*pbVar6) {
              if (uVar8 < 0xe0) {
                uVar8 = pbVar6[1] & 0x3f | (uVar8 & 0x1f) << 6;
                pbVar7 = pbVar6 + 2;
              }
              else {
                uVar14 = pbVar6[2] & 0x3f | (pbVar6[1] & 0x3f) << 6;
                if (uVar8 < 0xf0) {
                  uVar8 = uVar14 | (uVar8 & 0x1f) << 0xc;
                  pbVar7 = pbVar6 + 3;
                }
                else {
                  uVar8 = pbVar6[3] & 0x3f | uVar14 << 6 | (uVar8 & 7) << 0x12;
                  pbVar7 = pbVar6 + 4;
                }
              }
            }
            if ((uVar8 - 9 < 0x18) && ((1 << (uVar8 - 9 & 0xff) & 0x80001fU) != 0)) {
LAB_012ae364:
              local_3c = &LAB_012b97cc;
              local_40 = (char *****)&local_30;
              FUN_00664898(&local_90,&DAT_00590e5f,&local_40);
              local_40 = local_90;
              local_3c = local_8c;
              local_38 = local_88;
              if (local_30 != (char *****)&DAT_80000000) {
                FUN_0134bd64(local_30,local_2c);
              }
              goto LAB_012ae3b0;
            }
            if (0x7f < uVar8) {
              uVar14 = uVar8 >> 8;
              if (uVar14 < 0x20) {
                if (uVar14 == 0) {
                  bVar2 = (&DAT_00533bcd)[uVar8 & 0xff] & 1;
joined_r0x012ae340:
                  if (bVar2 != 0) goto LAB_012ae364;
                }
                else if ((uVar14 == 0x16) && (uVar8 == 0x1680)) goto LAB_012ae364;
              }
              else {
                if (uVar14 == 0x20) {
                  bVar2 = (&DAT_00533bcd)[uVar8 & 0xff] & 2;
                  goto joined_r0x012ae340;
                }
                if (uVar14 == 0x30 && uVar8 == 0x3000) goto LAB_012ae364;
              }
            }
            pbVar6 = pbVar7;
          } while (pbVar7 != pbStack_4c + (int)pppppcStack_48);
        }
        local_40 = local_50;
        local_3c = pbStack_4c;
        local_38 = pppppcStack_48;
LAB_012ae3b0:
        pbVar6 = local_5c;
        pppppcVar11 = (char *****)((int)pppppcVar12 + 1);
        pbVar7 = pbVar4 + (int)pppppcVar12 * 0xc;
        *(char ******)pbVar7 = local_40;
        *(byte **)(pbVar7 + 4) = local_3c;
        *(char ******)(pbVar7 + 8) = local_38;
        pppppcVar12 = pppppcVar11;
      } while (pppppcVar11 != pppppcVar16);
      local_30 = local_60;
      local_2c = local_5c;
      local_58 = pppppcVar16;
      local_28 = pppppcVar16;
      if (pppppcVar16 == (char *****)0x0) {
        local_38 = (char *****)0x0;
        local_3c = &DAT_00000001;
        local_40 = (char *****)0x0;
      }
      else {
        iVar3 = (int)pppppcVar16 * 0xc;
        uVar8 = iVar3 - 0xc;
        pppppcVar16 = (char *****)((uVar8 >> 2) * -0x55555555);
        pbVar4 = local_5c;
        while (iVar3 != 0) {
          puVar1 = (uint *)(pbVar4 + 8);
          iVar3 = iVar3 + -0xc;
          pbVar4 = pbVar4 + 0xc;
          bVar17 = CARRY4(*puVar1,(uint)pppppcVar16);
          pppppcVar16 = (char *****)(*puVar1 + (int)pppppcVar16);
          if (bVar17) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c(&DAT_005324b9,0x35,&DAT_01d2f704);
          }
        }
        uVar15 = 0;
        if ((int)pppppcVar16 < 0) {
LAB_012ae450:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar15,pppppcVar16);
        }
        if (pppppcVar16 == (char *****)0x0) {
          pbVar4 = &DAT_00000001;
          pppppcVar12 = (char *****)0x0;
        }
        else {
          uVar15 = 1;
          pbVar4 = (byte *)FUN_01298504(pppppcVar16,1);
          pppppcVar12 = pppppcVar16;
          if (pbVar4 == (byte *)0x0) goto LAB_012ae450;
        }
        local_88 = (char *****)0x0;
        local_90 = pppppcVar12;
        local_8c = pbVar4;
        FUN_01ac6d2c(&local_90,*(int *)(pbVar6 + 4),*(int *)(pbVar6 + 4) + *(int *)(pbVar6 + 8));
        pbVar6 = pbVar6 + 0x10;
        iVar3 = (int)pppppcVar16 - (int)local_88;
        pbVar4 = local_8c + (int)local_88;
        for (; uVar8 != 0; uVar8 = uVar8 - 0xc) {
          if (iVar3 == 0) {
LAB_012aeb94:
                    /* WARNING: Subroutine does not return */
            FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d2f6f4);
          }
          uVar15 = *(undefined4 *)pbVar6;
          uVar14 = *(uint *)(pbVar6 + 4);
          *pbVar4 = 0x20;
          if (iVar3 - 1U < uVar14) goto LAB_012aeb94;
          FUN_01bed4e2(pbVar4 + 1,uVar15,uVar14);
          iVar3 = (iVar3 - 1U) - uVar14;
          pbVar4 = pbVar4 + 1 + uVar14;
          pbVar6 = pbVar6 + 0xc;
        }
        local_88 = (char *****)((int)pppppcVar16 - iVar3);
        local_40 = local_90;
        local_3c = local_8c;
        local_38 = local_88;
      }
      FUN_01298ce0(&local_30);
      local_7c = &LAB_00632348;
      local_88 = &local_b0;
      local_90 = &local_b8;
      local_84 = (code *)&DAT_012b59c8;
      local_8c = &DAT_012b59c8;
      local_80 = (char *****)&local_40;
      FUN_00664898(&local_30,&DAT_0041fc14,&local_90);
      pppppcVar12 = local_28;
      pbVar4 = local_2c;
      pppppcVar16 = local_30;
      FUN_019abd3c(&local_9c);
      local_94 = 1;
      *local_98 = pppppcVar16;
      local_98[1] = pbVar4;
      local_98[2] = pppppcVar12;
      FUN_0134bd64(local_40,local_3c);
      goto LAB_012ae5d8;
    }
  }
  else {
    uVar15 = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar15,puVar10);
}

