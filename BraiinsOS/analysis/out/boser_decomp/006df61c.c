// FUN_006df61c @ 006df61c size=2004 calls_out=24 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006df61c(int *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  char cVar3;
  undefined1 uVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  int local_154;
  int *local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int local_140;
  int *local_13c;
  int local_138;
  undefined4 *puStack_134;
  int local_130;
  int iStack_12c;
  int *piStack_128;
  int iStack_124;
  int local_120;
  int *local_11c;
  int iStack_118;
  undefined4 local_110;
  int *local_10c;
  int local_108;
  undefined4 uStack_104;
  int local_100;
  int *local_fc;
  int iStack_f8;
  undefined4 *puStack_f4;
  int local_f0;
  int iStack_ec;
  int *piStack_e8;
  int iStack_e4;
  int *local_e0;
  int *local_d4;
  undefined1 local_d0;
  int *local_cc;
  int local_c8;
  int *local_c4;
  int *local_c0;
  int iStack_bc;
  undefined4 *puStack_b8;
  int local_b4;
  int iStack_b0;
  int *piStack_ac;
  int iStack_a8;
  int local_a0;
  int *piStack_9c;
  int iStack_98;
  int *local_90;
  int iStack_8c;
  undefined4 *puStack_88;
  int local_84;
  int local_80;
  int *local_7c;
  int local_78;
  undefined4 *puStack_74;
  int local_70;
  int iStack_6c;
  int *piStack_68;
  int iStack_64;
  int *local_60;
  int *piStack_5c;
  int iStack_58;
  undefined4 uStack_54;
  int local_50;
  int *local_4c;
  int local_48;
  undefined4 *puStack_44;
  int local_40;
  int iStack_3c;
  int *piStack_38;
  int iStack_34;
  int local_30;
  int *local_2c;
  int local_28;
  
  uVar10 = param_2[5];
  if (uVar10 < (uint)param_2[4]) {
    do {
      uVar5 = (uint)*(byte *)(param_2[3] + uVar10);
      if ((0x17 < uVar5 - 9) || ((1 << (uVar5 - 9 & 0xff) & 0x800013U) == 0)) {
        if (uVar5 < 0x66) {
          if (uVar5 == 0x22) {
            param_2[2] = 0;
            param_2[5] = uVar10 + 1;
            FUN_019686b4(&local_110,param_2 + 3,param_2);
            if (local_110 == (int *)0x2) {
              *param_1 = (int)local_10c;
              param_1[4] = -0x7ffffff9;
              return;
            }
            if (((uint)local_110 & 1) == 0) {
              FUN_006dff20(&local_150,local_10c,local_108);
            }
            else {
              FUN_006dfea0(&local_150);
            }
            goto LAB_006dfd54;
          }
          if (uVar5 != 0x2d) {
            if (uVar5 != 0x5b) goto LAB_006dfa24;
            cVar3 = (char)param_2[9] + -1;
            *(char *)(param_2 + 9) = cVar3;
            if (cVar3 == '\0') {
              local_110 = (int *)0x18;
              iVar12 = FUN_01964674(param_2,&local_110);
              param_1[4] = -0x7ffffff9;
              *param_1 = iVar12;
              return;
            }
            param_2[5] = uVar10 + 1;
            local_d0 = 1;
            local_154 = 8;
            piVar8 = (int *)((uint)&local_110 | 4);
            local_c8 = 8;
            piVar6 = (int *)((uint)&local_60 | 4);
            iVar12 = 0;
            local_c4 = (int *)0x0;
            local_cc = (int *)0x0;
            local_d4 = param_2;
            goto LAB_006df770;
          }
          param_2[5] = uVar10 + 1;
          uVar9 = 0;
        }
        else {
          if (uVar5 < 0x74) {
            if (uVar5 == 0x66) {
              param_2[5] = uVar10 + 1;
              local_108 = FUN_01964c70(param_2,&DAT_0056efac,4);
              if (local_108 == 0) {
                uVar4 = 0;
                goto LAB_006dfaa4;
              }
              goto LAB_006dfadc;
            }
            if (uVar5 == 0x6e) {
              param_2[5] = uVar10 + 1;
              local_108 = FUN_01964c70(param_2,"ull",3);
              if (local_108 != 0) goto LAB_006dfadc;
              local_140 = -0x80000000;
              goto LAB_006dfd54;
            }
          }
          else {
            if (uVar5 == 0x74) {
              param_2[5] = uVar10 + 1;
              local_108 = FUN_01964c70(param_2,"rue",3);
              if (local_108 != 0) goto LAB_006dfadc;
              uVar4 = 1;
LAB_006dfaa4:
              local_140 = -0x7ffffffd;
              local_150 = (int *)CONCAT31(local_150._1_3_,uVar4);
              goto LAB_006dfd54;
            }
            if (uVar5 == 0x7b) {
              cVar3 = (char)param_2[9] + -1;
              *(char *)(param_2 + 9) = cVar3;
              if (cVar3 == '\0') {
                local_110 = (int *)0x18;
                goto LAB_006df674;
              }
              param_2[5] = uVar10 + 1;
              uVar13 = thunk_FUN_01bee35a(uVar10 + 1,0x2c0);
              puVar11 = (undefined4 *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
              local_c8 = CONCAT31(local_c8._1_3_,1);
              local_cc = param_2;
              if (*(char *)(puVar11 + 4) == '\0') {
                FUN_019ae6ac(&local_110);
                *(undefined1 *)(puVar11 + 4) = 1;
                *puVar11 = local_110;
                puVar11[1] = local_10c;
                puVar11[2] = local_108;
                puVar11[3] = uStack_104;
              }
              local_90 = (int *)*puVar11;
              iStack_8c = puVar11[1];
              puStack_88 = (undefined4 *)puVar11[2];
              local_84 = puVar11[3];
              *puVar11 = (undefined1 *)((int)local_90 + 1);
              puVar11[1] = iStack_8c + (uint)((int *)0xfffffffe < local_90);
              local_78 = 0;
              local_80 = 0;
              local_7c = (int *)&DAT_00000008;
              puStack_74 = &DAT_0056d238;
              local_70 = 0;
              iStack_6c = 0;
              piStack_68 = (int *)0x0;
              goto LAB_006df944;
            }
          }
LAB_006dfa24:
          if (9 < uVar5 - 0x30) {
            local_110 = (int *)&DAT_0000000a;
            piVar8 = (int *)FUN_01964674(param_2,&local_110);
            goto LAB_006dfd98;
          }
          uVar9 = 1;
        }
        FUN_01964ce0(&local_110,param_2,uVar9);
        if (local_110 == (int *)&DAT_00000003 && local_10c == (int *)0x0) goto LAB_006dfadc;
        FUN_006cbcf4(&local_150,&local_110);
        goto LAB_006dfd54;
      }
      uVar10 = uVar10 + 1;
      param_2[5] = uVar10;
    } while (param_2[4] != uVar10);
  }
  local_110 = (int *)0x5;
LAB_006df674:
  local_108 = FUN_01964674(param_2,&local_110);
  goto LAB_006dfadc;
LAB_006df770:
  piVar2 = local_c4;
  FUN_01965170(&local_110,&local_d4);
  if ((char)local_110 == '\x01') goto LAB_006dfb14;
  if (local_110._1_1_ == '\0') {
    local_140 = -0x7ffffffa;
    bVar1 = false;
    local_120 = local_c8;
    local_11c = local_c4;
    local_150 = local_cc;
    goto LAB_006dfb50;
  }
  FUN_006df61c(&local_110,local_d4);
  if (local_100 == -0x7ffffff9) goto LAB_006dfb18;
  local_a0 = *piVar8;
  piStack_9c = (int *)piVar8[1];
  iStack_98 = piVar8[2];
  local_c0 = local_fc;
  iStack_bc = iStack_f8;
  puStack_b8 = puStack_f4;
  local_b4 = local_f0;
  iStack_b0 = iStack_ec;
  piStack_ac = piStack_e8;
  iStack_a8 = iStack_e4;
  local_60 = local_110;
  *piVar6 = local_a0;
  piVar6[1] = (int)piStack_9c;
  piVar6[2] = iStack_98;
  local_50 = local_100;
  local_4c = local_fc;
  local_48 = iStack_f8;
  puStack_44 = puStack_f4;
  local_40 = local_f0;
  iStack_3c = iStack_ec;
  piStack_38 = piStack_e8;
  iStack_34 = iStack_e4;
  local_90 = local_c0;
  iStack_8c = iStack_bc;
  puStack_88 = puStack_b8;
  local_84 = local_b4;
  local_80 = iStack_b0;
  local_7c = piStack_ac;
  local_78 = iStack_a8;
  local_30 = local_a0;
  local_2c = piStack_9c;
  local_28 = iStack_98;
  if (piVar2 == local_cc) {
    FUN_007024f0(&local_cc);
    local_154 = local_c8;
  }
  local_c4 = (int *)((int)piVar2 + 1);
  puVar11 = (undefined4 *)(local_154 + iVar12);
  iVar12 = iVar12 + 0x30;
  *puVar11 = local_60;
  puVar11[1] = piStack_5c;
  puVar11[2] = iStack_58;
  puVar11[3] = uStack_54;
  puVar11[4] = local_50;
  puVar11[5] = local_4c;
  puVar11[6] = local_48;
  puVar11[7] = puStack_44;
  puVar11[8] = local_40;
  puVar11[9] = iStack_3c;
  puVar11[10] = piStack_38;
  puVar11[0xb] = iStack_34;
  goto LAB_006df770;
LAB_006df944:
  FUN_006ccebc(&local_30,&local_cc);
  iVar12 = local_28;
  piVar8 = local_2c;
  if (local_30 == 0) {
    if (local_2c != (int *)0x0) {
      FUN_006ccf54(&local_110,&local_cc);
      if (local_100 != -0x7ffffff9) goto code_r0x006df984;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar8;
        bVar1 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar1);
      *piVar8 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar8,iVar12);
      }
      goto LAB_006dfc38;
    }
    piVar8 = (int *)((uint)&local_90 | 4);
    local_a0 = *piVar8;
    piStack_9c = (int *)piVar8[1];
    iStack_98 = piVar8[2];
    local_c0 = local_7c;
    iStack_bc = local_78;
    puStack_b8 = puStack_74;
    local_b4 = local_70;
    iStack_b0 = iStack_6c;
    piStack_ac = piStack_68;
    iStack_a8 = iStack_64;
    local_150 = local_90;
    local_140 = local_80;
  }
  else {
    local_110 = local_2c;
LAB_006dfc38:
    FUN_006c1408(&local_90);
    local_150 = local_110;
    local_140 = -0x7ffffff9;
  }
  goto LAB_006dfc44;
code_r0x006df984:
  local_60 = local_110;
  piStack_5c = local_10c;
  iStack_58 = local_108;
  uStack_54 = uStack_104;
  local_50 = local_100;
  FUN_007017f4(&local_110,&local_90,piVar8,iVar12,&local_60);
  if (local_100 != -0x7ffffff9) {
    FUN_00db19c4(&local_110);
  }
  goto LAB_006df944;
LAB_006dfc44:
  *(char *)(param_2 + 9) = (char)param_2[9] + '\x01';
  piVar8 = (int *)((uint)&local_60 | 4);
  *piVar8 = local_a0;
  piVar8[1] = (int)piStack_9c;
  piVar8[2] = iStack_98;
  local_60 = local_150;
  local_50 = local_140;
  local_e0 = (int *)FUN_019650c4(param_2);
  piVar8 = (int *)((uint)&local_110 | 4);
  *piVar8 = local_a0;
  piVar8[1] = (int)piStack_9c;
  piVar8[2] = iStack_98;
  local_fc = local_c0;
  iStack_f8 = iStack_bc;
  puStack_f4 = puStack_b8;
  local_f0 = local_b4;
  iStack_ec = iStack_b0;
  piStack_e8 = piStack_ac;
  iStack_e4 = iStack_a8;
  local_110 = local_150;
  local_100 = local_140;
  if (local_140 == -0x7ffffff9) {
LAB_006dfcd4:
    local_140 = -0x7ffffff9;
    local_150 = local_110;
    if (local_e0 != (int *)0x0) {
      FUN_006c7e7c();
    }
  }
  else if (local_e0 == (int *)0x0) {
    piVar8 = (int *)((uint)&local_150 | 4);
    *piVar8 = local_a0;
    piVar8[1] = (int)piStack_9c;
    piVar8[2] = iStack_98;
    local_13c = local_c0;
    local_138 = iStack_bc;
    puStack_134 = puStack_b8;
    local_130 = local_b4;
    iStack_12c = iStack_b0;
    piStack_128 = piStack_ac;
    iStack_124 = iStack_a8;
  }
  else {
LAB_006dfd00:
    local_140 = -0x7ffffff9;
    local_150 = local_e0;
    FUN_006dd0fc(&local_110);
  }
  goto LAB_006dfd54;
LAB_006dfb14:
  local_110 = local_10c;
LAB_006dfb18:
  FUN_006f66dc(&local_cc);
  local_140 = -0x7ffffff9;
  bVar1 = true;
  local_150 = local_110;
LAB_006dfb50:
  *(char *)(param_2 + 9) = (char)param_2[9] + '\x01';
  *piVar6 = local_120;
  piVar6[1] = (int)local_11c;
  piVar6[2] = iStack_118;
  local_60 = local_150;
  local_50 = local_140;
  local_e0 = (int *)FUN_01964fb0(param_2);
  *piVar8 = local_120;
  piVar8[1] = (int)local_11c;
  piVar8[2] = iStack_118;
  local_110 = local_150;
  local_100 = local_140;
  if (bVar1) goto LAB_006dfcd4;
  if (local_e0 != (int *)0x0) goto LAB_006dfd00;
  piVar8 = (int *)((uint)&local_150 | 4);
  *piVar8 = local_120;
  piVar8[1] = (int)local_11c;
  piVar8[2] = iStack_118;
LAB_006dfd54:
  if (local_140 == -0x7ffffff9) {
    piVar8 = local_150;
LAB_006dfd98:
    local_108 = FUN_01966f00(piVar8,param_2);
LAB_006dfadc:
    *param_1 = local_108;
    param_1[4] = -0x7ffffff9;
  }
  else {
    *param_1 = (int)local_150;
    param_1[1] = iStack_14c;
    param_1[2] = iStack_148;
    param_1[3] = iStack_144;
    param_1[4] = local_140;
    param_1[5] = (int)local_13c;
    param_1[6] = local_138;
    param_1[7] = (int)puStack_134;
    param_1[8] = local_130;
    param_1[9] = iStack_12c;
    param_1[10] = (int)piStack_128;
    param_1[0xb] = iStack_124;
  }
  return;
}

