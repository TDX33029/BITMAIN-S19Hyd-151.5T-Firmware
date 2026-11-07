// FUN_019bcb90 @ 019bcb90 size=1172 calls_out=17 calls_in=2
// strings: taskW

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_019bcb90(uint param_1,int param_2,uint param_3,byte *param_4,undefined4 *param_5,int *param_6)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint *puVar5;
  int iVar6;
  byte bVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  bool bVar16;
  undefined8 uVar17;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  undefined8 local_dc;
  uint local_d4;
  undefined1 auStack_d0 [12];
  int local_c4;
  int *local_c0;
  undefined1 local_bc;
  undefined4 *local_b8;
  uint local_b4;
  undefined4 *local_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_9c;
  undefined8 *local_94;
  uint *local_90;
  undefined4 *local_8c;
  int *local_88;
  undefined1 local_84;
  uint local_80;
  byte *local_7c;
  undefined4 *local_78;
  uint local_74;
  undefined4 *local_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  undefined4 *local_48;
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  
  FUN_019a6924(&local_80,param_5);
  if ((local_80 & 0xff) == 4) {
    uVar13 = 0;
    if (((uint)local_7c & 0xf000) == 0x4000) {
      FUN_019a66e4(&local_e8,*(undefined4 *)(param_5[6] + 0xc),*(undefined4 *)(param_5[6] + 0x10),
                   *param_5,param_5[1] + -1);
      uVar2 = local_e0;
      uVar11 = local_e4;
      uVar17 = FUN_019b00d0(local_e4,local_e0);
      iVar6 = (int)((ulonglong)uVar17 >> 0x20);
      iVar14 = (int)uVar17;
      if (param_1 == 0 || iVar14 == 0) {
        bVar16 = param_1 == 0 && iVar14 == 0;
        if (param_1 != 0 || iVar14 != 0) {
          bVar16 = iVar14 == 0;
        }
        if (!bVar16) goto LAB_019bcc74;
      }
      else {
        if (iVar6 == param_2) {
          iVar3 = thunk_FUN_01bed842(iVar14,param_1,param_2);
          if (iVar3 == 0) goto LAB_019bcdb0;
        }
LAB_019bcc74:
        local_dc = uVar17;
        FUN_006643f0(&local_80,iVar14,iVar6);
        if (local_78 != (undefined4 *)0x0) {
          if (local_78 == (undefined4 *)0x1) {
            bVar7 = *local_7c;
            if (bVar7 == 0x2b || bVar7 == 0x2d) goto LAB_019bcda0;
          }
          else {
            bVar7 = *local_7c;
          }
          puVar4 = local_78;
          pbVar8 = local_7c;
          if (bVar7 == 0x2b) {
            pbVar8 = local_7c + 1;
            puVar4 = (undefined4 *)((int)local_78 + -1);
          }
          if (puVar4 < (undefined4 *)0x9) {
            uVar9 = 0;
            for (; puVar4 != (undefined4 *)0x0; puVar4 = (undefined4 *)((int)puVar4 + -1)) {
              bVar7 = *pbVar8;
              if (9 < bVar7 - 0x30) goto LAB_019bcda0;
              pbVar8 = pbVar8 + 1;
              uVar9 = (bVar7 - 0x30) + uVar9 * 10;
            }
LAB_019bcd08:
            local_d4 = uVar9;
            if (local_80 != 0x80000000) {
              FUN_0134bd64();
            }
            FUN_019a66e4(auStack_d0,uVar11,uVar2,"taskW",4);
            FUN_019cad90(&local_c4,auStack_d0);
            if (local_c4 == 0) {
              uVar17 = thunk_FUN_01bee35a(0,0x2c0);
              puVar5 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
              if ((char)puVar5[4] == '\0') {
                FUN_019ae6ac(&local_80);
                *puVar5 = local_80;
                puVar5[1] = (uint)local_7c;
                puVar5[2] = (uint)local_78;
                puVar5[3] = local_74;
                *(undefined1 *)(puVar5 + 4) = 1;
              }
              local_a8 = *puVar5;
              uStack_a4 = puVar5[1];
              uStack_a0 = puVar5[2];
              local_9c = puVar5[3];
              *puVar5 = local_a8 + 1;
              puVar5[1] = uStack_a4 + (0xfffffffe < local_a8);
              local_b8 = &DAT_0056d238;
              local_b4 = 0;
              local_b0 = (undefined4 *)0x0;
              uStack_ac = 0;
              local_8c = &param_6;
              local_90 = &local_d4;
              local_94 = &local_dc;
              local_84 = local_bc;
              puVar5 = (uint *)((uint)&local_48 | 4);
              local_88 = local_c0;
              while( true ) {
                FUN_019bb288(&local_80,&local_88);
                if ((local_80 & 1) == 0) break;
                if (local_78 == (undefined4 *)0x0) {
                  FUN_0069263c(local_74 & 0xff,local_70);
                }
                else {
                  uVar11 = *local_90;
                  uVar15 = *(undefined4 *)local_94;
                  uVar13 = *(undefined4 *)((int)local_94 + 4);
                  *puVar5 = local_74;
                  puVar5[1] = (uint)local_70;
                  puVar5[2] = uStack_6c;
                  puVar5[3] = local_68;
                  puVar5[4] = uStack_64;
                  puVar5[5] = uStack_60;
                  puVar5[6] = local_5c;
                  local_48 = local_78;
                  uVar11 = FUN_019bcb90(uVar15,uVar13,1,uVar11,&local_48,*local_8c);
                  if ((uVar11 & 1) != 0) {
                    FUN_019c923c(&local_b8);
                  }
                }
              }
              DataMemoryBarrier(0xb);
              do {
                iVar14 = *local_88;
                bVar16 = (bool)hasExclusiveAccess(local_88);
              } while (!bVar16);
              *local_88 = iVar14 + -1;
              if (iVar14 == 1) {
                DataMemoryBarrier(0xb);
                FUN_019ad05c(local_88);
              }
              local_48 = local_b0;
              uStack_44 = uStack_ac;
              uStack_40 = local_a8;
              uStack_3c = uStack_a4;
              uStack_38 = uStack_a0;
              uStack_34 = local_9c;
              param_1 = local_b4;
              puVar4 = local_b8;
              local_78 = local_b8;
              if (local_c4 != 0) goto LAB_019bcf5c;
            }
            else {
              puVar4 = (undefined4 *)0x0;
LAB_019bcf5c:
              FUN_019bd120(&local_c4);
              local_78 = puVar4;
            }
            piVar1 = param_6;
            local_58 = local_e8;
            uStack_54 = local_e4;
            uStack_50 = local_e0;
            local_70 = local_48;
            uStack_6c = uStack_44;
            local_68 = uStack_40;
            uStack_64 = uStack_3c;
            uStack_60 = uStack_38;
            local_5c = uStack_34;
            iVar14 = param_6[2];
            local_4c = local_d4;
            local_80 = param_3;
            local_7c = param_4;
            local_74 = param_1;
            if (iVar14 == *param_6) {
              FUN_019cacf8(param_6);
            }
            puVar5 = (uint *)(piVar1[1] + iVar14 * 0x38);
            *puVar5 = local_80;
            puVar5[1] = (uint)local_7c;
            puVar5[2] = (uint)local_78;
            puVar5[3] = local_74;
            puVar5[4] = (uint)local_70;
            puVar5[5] = uStack_6c;
            puVar5[6] = local_68;
            puVar5[7] = uStack_64;
            puVar5[8] = uStack_60;
            puVar5[9] = local_5c;
            puVar5[10] = local_58;
            puVar5[0xb] = uStack_54;
            puVar5[0xc] = uStack_50;
            puVar5[0xd] = local_4c;
            uVar13 = 1;
            piVar1[2] = iVar14 + 1;
            param_1 = local_d4;
            goto LAB_019bcdc0;
          }
          uVar9 = 0;
          while( true ) {
            if (puVar4 == (undefined4 *)0x0) goto LAB_019bcd08;
            uVar10 = (uint)((ulonglong)uVar9 * 10);
            if ((int)((ulonglong)uVar9 * 10 >> 0x20) != 0) break;
            uVar12 = *pbVar8 - 0x30;
            uVar9 = uVar12 + uVar10;
            if ((9 < uVar12) ||
               (puVar4 = (undefined4 *)((int)puVar4 + -1), pbVar8 = pbVar8 + 1,
               CARRY4(uVar12,uVar10))) break;
          }
        }
LAB_019bcda0:
        if (local_80 != 0x80000000) {
          FUN_0134bd64();
        }
      }
LAB_019bcdb0:
      FUN_0134bd64(local_e8,uVar11);
      goto LAB_019bcdc0;
    }
  }
  else {
    FUN_0069263c(local_80 & 0xff,local_7c);
  }
  uVar13 = 0;
LAB_019bcdc0:
  FUN_019db4b0(param_5);
  return CONCAT44(param_1,uVar13);
}

