// FUN_01914544 @ 01914544 size=1660 calls_out=17 calls_in=1
// strings: 

void FUN_01914544(int *param_1,int *param_2,int param_3,int param_4,int param_5,int param_6)

{
  bool bVar1;
  undefined1 uVar2;
  short sVar3;
  undefined *puVar4;
  int *piVar5;
  byte bVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int *piVar13;
  bool bVar14;
  char cVar15;
  undefined1 auStack_248 [32];
  int local_228;
  undefined4 local_220;
  undefined4 local_21c;
  int local_218;
  undefined1 auStack_214 [36];
  char local_1f0;
  undefined4 local_1e8 [17];
  undefined1 auStack_1a4 [52];
  int local_170;
  undefined4 uStack_16c;
  int iStack_168;
  int local_160;
  int local_15c;
  int iStack_158;
  int iStack_154;
  int local_150;
  int local_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [20];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int local_9c;
  int local_98;
  int local_94;
  int iStack_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int local_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  undefined4 local_64;
  int local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  iVar8 = *(int *)(param_5 + 0x18);
  iVar9 = *(int *)(param_5 + 0x1c);
  iVar11 = *(int *)(param_5 + 0x20);
  param_2[8] = *(int *)(param_5 + 0x14);
  param_2[9] = iVar8;
  param_2[10] = iVar9;
  param_2[0xb] = iVar11;
  iVar8 = *(int *)(param_5 + 0x28);
  iVar9 = *(int *)(param_5 + 0x2c);
  iVar11 = *(int *)(param_5 + 0x30);
  param_2[0xc] = *(int *)(param_5 + 0x24);
  param_2[0xd] = iVar8;
  param_2[0xe] = iVar9;
  param_2[0xf] = iVar11;
  if ((param_6 != 0) && (param_2[0xe] == 0x4e574f44 && param_2[0xf] == 0x1445247)) {
    local_e8 = CONCAT22(local_e8._2_2_,4);
    local_15c = 0xd0001;
    local_160 = -0x7fffffff;
    FUN_018f1fc4(param_3,&local_160,*(char *)(param_3 + 0x31) == '\x02');
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = (int)&DAT_8000001c;
    bVar6 = 1;
    *(undefined1 *)(param_3 + 0x255) = 1;
LAB_01914a80:
    piVar5 = (int *)param_2[0x28];
    DataMemoryBarrier(0xb);
    do {
      iVar8 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar8 + -1;
    if (iVar8 == 1) {
      DataMemoryBarrier(0xb);
      FUN_018fa168(param_2[0x28]);
    }
    if ((bool)(bVar6 & param_2[0x19] != -0x80000000)) {
      FUN_0190ebd8(param_2 + 0x10);
    }
    if (((char)param_2[0x29] == '\0') && (param_2[0x2a] != -0x80000000)) {
      FUN_0134bd64(param_2[0x2a],param_2[0x2b]);
    }
    FUN_01902274(param_2 + 0x2e);
    return;
  }
  iVar9 = *(int *)(param_5 + 4);
  iVar11 = *(int *)(param_5 + 8);
  iVar8 = iVar11 * 0x14;
  if (iVar11 != 0) {
    iVar10 = iVar8;
    iVar12 = iVar9;
    do {
      sVar3 = FUN_018eb4c8(iVar12);
      if (sVar3 == 0x15) {
        cVar15 = '\x01';
        *(undefined1 *)(param_2 + 0x35) = 1;
        goto LAB_019146bc;
      }
      iVar12 = iVar12 + 0x14;
      iVar10 = iVar10 + -0x14;
    } while (iVar10 != 0);
  }
  cVar15 = '\0';
  *(undefined1 *)(param_2 + 0x35) = 0;
  if (*(char *)(param_2[0x28] + 0xb7) != '\0') {
    local_1e8[0] = 0x80000002;
    FUN_018f1eac(&local_160,param_3,6,local_1e8);
    bVar6 = 1;
    *param_1 = local_160;
    param_1[1] = local_15c;
    param_1[2] = iStack_158;
    param_1[3] = iStack_154;
    param_1[4] = local_150;
    param_1[5] = local_14c;
    param_1[6] = iStack_148;
    param_1[7] = iStack_144;
    goto LAB_01914a80;
  }
LAB_019146bc:
  if (iVar11 == 0) {
    bVar14 = false;
    bVar1 = false;
  }
  else {
    iVar10 = iVar9;
    iVar11 = iVar8;
    do {
      iVar11 = iVar11 + -0x14;
      sVar3 = FUN_018eb4c8(iVar10);
      if (sVar3 == 0x17) break;
      iVar10 = iVar10 + 0x14;
    } while (iVar11 != 0);
    bVar1 = sVar3 == 0x17;
    do {
      iVar8 = iVar8 + -0x14;
      sVar3 = FUN_018eb4c8(iVar9);
      bVar14 = sVar3 == 5;
      if (sVar3 == 5) break;
      iVar9 = iVar9 + 0x14;
    } while (iVar8 != 0);
  }
  if (param_2[0x19] != -0x80000000) {
    piVar5 = param_2 + 0x10;
    FUN_01bed4e2(auStack_248,piVar5,0x60);
    puVar7 = (undefined4 *)(param_5 + 0x34);
    iVar8 = FUN_018ed954(auStack_214,puVar7);
    if (iVar8 != 0) {
      uVar2 = 0x2c;
      if ((*(short *)(local_218 + 0x28) != *(short *)(param_4 + 0x28)) ||
         (((*(short *)(local_218 + 0x28) == 0x178 &&
           (*(short *)(local_218 + 0x2a) != *(short *)(param_4 + 0x2a))) ||
          (uVar2 = 0x2d, local_1f0 != (char)param_2[0x35])))) {
        *(undefined1 *)(param_1 + 1) = uVar2;
        *param_1 = (int)&DAT_8000001c;
        FUN_0190ebd8(auStack_248);
        bVar6 = 0;
        goto LAB_01914a80;
      }
      FUN_018f3704(local_1e8,param_2,param_4,local_220,local_21c);
      iVar8 = *(int *)(param_2[0x28] + 0x90);
      (**(code **)(iVar8 + 0x10))
                (*(int *)(param_2[0x28] + 0x8c) + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8,
                 &DAT_0052348e,0xd,(uint)local_1e8 | 4,0x20,auStack_1a4,0x30);
      FUN_018f2ddc(param_3,local_1e8);
      FUN_018e307c(&local_160,*(undefined4 *)(local_228 + 0xc),*(undefined4 *)(local_228 + 0x10));
      FUN_018eb5a8(&local_170,&local_160);
      local_160 = local_170;
      local_15c = uStack_16c;
      iStack_158 = iStack_168;
      piVar13 = (int *)(param_3 + 0x228);
      if (*piVar13 != -0x80000000) {
        FUN_0190f040(piVar13);
      }
      *piVar13 = local_160;
      *(int *)(param_3 + 0x22c) = local_15c;
      *(int *)(param_3 + 0x230) = iStack_158;
      *(undefined1 *)(param_3 + 0x25d) = 2;
      if (bVar1) {
        iVar8 = param_2[0x28];
        FUN_01bed4e2(&uStack_dc,local_1e8,0x74);
        FUN_01bed4e2(&local_160,piVar5,0x60);
        local_100 = *puVar7;
        local_fc = *(undefined4 *)(param_5 + 0x38);
        local_f8 = *(undefined4 *)(param_5 + 0x3c);
        uStack_f4 = *(undefined4 *)(param_5 + 0x40);
        local_f0 = *(undefined4 *)(param_5 + 0x44);
        uStack_ec = *(undefined4 *)(param_5 + 0x48);
        local_e8 = *(undefined4 *)(param_5 + 0x4c);
        uStack_e4 = *(undefined4 *)(param_5 + 0x50);
        uStack_e0 = *(undefined4 *)(param_5 + 0x54);
        local_64 = param_2[0x29];
        local_60 = param_2[0x2a];
        local_5c = param_2[0x2b];
        iStack_58 = param_2[0x2c];
        iStack_54 = param_2[0x2d];
        local_50 = param_2[0x2e];
        iStack_4c = param_2[0x2f];
        local_48 = param_2[0x30];
        local_44 = param_2[0x31];
        iStack_40 = param_2[0x32];
        local_3c = param_2[0x33];
        iStack_38 = param_2[0x34];
        local_34 = CONCAT22(local_34._2_2_,0x100);
        local_34 = CONCAT31(local_34._1_3_,(char)param_2[0x35]);
        local_68 = iVar8;
        iVar8 = FUN_01912810(0x130);
        FUN_01bed4e2(iVar8,&local_160,0x130);
        puVar4 = &DAT_01d251ec;
      }
      else {
        iVar8 = param_2[0x28];
        FUN_01bed4e2(auStack_d4,local_1e8,0x74);
        FUN_01bed4e2(&iStack_158,piVar5,0x60);
        local_f8 = *puVar7;
        uStack_f4 = *(undefined4 *)(param_5 + 0x38);
        local_f0 = *(undefined4 *)(param_5 + 0x3c);
        uStack_ec = *(undefined4 *)(param_5 + 0x40);
        local_e8 = *(undefined4 *)(param_5 + 0x44);
        uStack_e4 = *(undefined4 *)(param_5 + 0x48);
        uStack_e0 = *(undefined4 *)(param_5 + 0x4c);
        uStack_dc = *(undefined4 *)(param_5 + 0x50);
        uStack_d8 = *(undefined4 *)(param_5 + 0x54);
        local_5c = param_2[0x29];
        iStack_58 = param_2[0x2a];
        iStack_54 = param_2[0x2b];
        local_50 = param_2[0x2c];
        iStack_4c = param_2[0x2d];
        local_2c = (undefined1)param_2[0x35];
        local_48 = param_2[0x2e];
        local_44 = param_2[0x2f];
        iStack_40 = param_2[0x30];
        local_3c = param_2[0x31];
        iStack_38 = param_2[0x32];
        local_34 = param_2[0x33];
        iStack_30 = param_2[0x34];
        local_2b = 1;
        local_160 = 0;
        local_60 = iVar8;
        iVar8 = FUN_01912810(0x138);
        FUN_01bed4e2(iVar8,&local_160,0x138);
        puVar4 = &DAT_01d25110;
      }
      *param_1 = -0x7fffffd7;
      param_1[1] = iVar8;
      goto LAB_01914a5c;
    }
    FUN_0190ebd8(auStack_248);
    cVar15 = (char)param_2[0x35];
  }
  local_9c = param_2[0x28];
  *(undefined1 *)(param_3 + 0x25d) = 0;
  local_c0 = *(undefined4 *)(param_5 + 0x34);
  uStack_bc = *(undefined4 *)(param_5 + 0x38);
  uStack_b8 = *(undefined4 *)(param_5 + 0x3c);
  uStack_b4 = *(undefined4 *)(param_5 + 0x40);
  local_b0 = *(undefined4 *)(param_5 + 0x44);
  uStack_ac = *(undefined4 *)(param_5 + 0x48);
  uStack_a8 = *(undefined4 *)(param_5 + 0x4c);
  uStack_a4 = *(undefined4 *)(param_5 + 0x50);
  uStack_a0 = *(undefined4 *)(param_5 + 0x54);
  local_94 = param_2[0x29];
  iStack_90 = param_2[0x2a];
  iStack_8c = param_2[0x2b];
  iStack_88 = param_2[0x2c];
  iStack_84 = param_2[0x2d];
  local_160 = *param_2;
  local_15c = param_2[1];
  iStack_158 = param_2[2];
  iStack_154 = param_2[3];
  local_150 = param_2[4];
  local_14c = param_2[5];
  iStack_148 = param_2[6];
  iStack_144 = param_2[7];
  iStack_140 = param_2[8];
  iStack_13c = param_2[9];
  local_138 = param_2[10];
  iStack_134 = param_2[0xb];
  iStack_130 = param_2[0xc];
  iStack_12c = param_2[0xd];
  iStack_128 = param_2[0xe];
  iStack_124 = param_2[0xf];
  local_80 = param_2[0x2e];
  iStack_7c = param_2[0x2f];
  iStack_78 = param_2[0x30];
  local_74 = param_2[0x31];
  iStack_70 = param_2[0x32];
  iStack_6c = param_2[0x33];
  local_68 = param_2[0x34];
  local_fc = 0x80000000;
  local_64 = CONCAT22(CONCAT11(local_64._3_1_,bVar1),CONCAT11(bVar14,cVar15));
  local_98 = param_4;
  iVar8 = thunk_FUN_01be5118(0x100);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x100);
  }
  FUN_01bed4e2(iVar8,&local_160,0x100);
  puVar4 = &DAT_01d2523c;
  *param_1 = -0x7fffffd7;
  param_1[1] = iVar8;
LAB_01914a5c:
  param_1[2] = (int)puVar4;
  return;
}

