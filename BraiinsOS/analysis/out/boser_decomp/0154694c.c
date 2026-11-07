// FUN_0154694c @ 0154694c size=1544 calls_out=24 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0154694c(undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
                 undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *unaff_r4;
  int *piVar11;
  int unaff_r5;
  undefined4 unaff_r6;
  uint uVar12;
  int iVar13;
  int unaff_r11;
  undefined8 uVar14;
  undefined8 uVar15;
  int *local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  int *local_128;
  int *local_124;
  int *local_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  uint uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int *local_f0;
  int *local_ec;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_60;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int local_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  
  iVar13 = *(int *)(param_2 + 0x84);
  if (*(int *)(iVar13 + 8) == 0) {
    unaff_r4 = (int *)(iVar13 + 0xc);
    iVar5 = 0;
    *(undefined4 *)(iVar13 + 0x14) = 0;
    *(undefined4 *)(iVar13 + 8) = 0xffffffff;
    unaff_r5 = param_4;
    unaff_r6 = param_3;
    unaff_r11 = param_2;
    if (*unaff_r4 == 0) goto LAB_01546f20;
  }
  else {
    FUN_01306fc8(&DAT_01cfbd60);
LAB_01546f20:
    FUN_01af7b44(unaff_r4,0,1,1,1);
    iVar5 = *(int *)(iVar13 + 0x14);
  }
  iVar10 = *(int *)(unaff_r11 + 0x3c);
  *(undefined1 *)(*(int *)(iVar13 + 0x10) + iVar5) = 0x23;
  *(undefined4 *)(iVar13 + 0x14) = 1;
  if (iVar10 != 0) {
    FUN_016702b8(*(int *)(unaff_r11 + 0x38) + 8,iVar10,unaff_r4);
  }
  piVar11 = *(int **)(unaff_r11 + 0x54);
  do {
    iVar5 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar5 + 1;
  if (iVar5 < 0) goto LAB_01546f50;
  local_48 = piVar11[3];
  local_44 = piVar11[4];
  local_40 = piVar11[5];
  iStack_3c = piVar11[6];
  iStack_38 = piVar11[7];
  local_34 = piVar11[8];
  iStack_30 = piVar11[9];
  iStack_2c = piVar11[10];
  iStack_28 = piVar11[0xb];
  FUN_0166bf5c(&local_f0,*(undefined4 *)(unaff_r11 + 0x50),&local_48,*(undefined4 *)(iVar13 + 0x10),
               *(undefined4 *)(iVar13 + 0x14));
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670d04(piVar11);
  }
  piVar11 = local_ec;
  *(undefined4 *)(iVar13 + 0x14) = 0;
  local_128 = local_f0;
  local_124 = local_ec;
  local_120 = (int *)local_e8;
  uStack_11c = local_e8._4_4_;
  local_118 = (undefined4)local_e0;
  uStack_114 = local_e0._4_4_;
  uStack_110 = uStack_d8;
  uStack_10c = uStack_d4;
  uStack_108 = uStack_d0;
  local_104 = local_cc;
  uStack_100 = uStack_c8;
  uStack_fc = uStack_c4;
  uStack_f8 = uStack_c0;
  uStack_f4 = uStack_bc;
  *(int *)(iVar13 + 8) = *(int *)(iVar13 + 8) + 1;
  if (local_f0 != (int *)0x8000000a) {
    uVar9 = FUN_01545ee0(&local_128);
    param_1[2] = uVar9;
    *param_1 = 1;
    param_1[1] = 0;
    return;
  }
  FUN_01571584(&local_f0,*(undefined4 *)(unaff_r11 + 0x50),*(undefined4 *)(unaff_r11 + 0x54),
               unaff_r6,unaff_r5);
  piVar3 = local_ec;
  if (local_f0 == (int *)0x8000000a) {
    if ((local_ec == piVar11) ||
       ((iVar13 = local_ec[4], iVar13 == piVar11[4] &&
        (iVar5 = thunk_FUN_01bed842(local_ec[3],piVar11[3],iVar13), iVar5 == 0)))) {
LAB_01546c7c:
      *param_1 = 0;
    }
    else {
      if (unaff_r5 == 0) {
        local_e8._0_4_ = piVar3 + 5;
        local_f0 = (int *)piVar3[3];
        local_ec = (int *)iVar13;
        uVar14 = FUN_0134384c(&local_f0);
        iVar13 = (int)((ulonglong)uVar14 >> 0x20);
        local_f0 = (int *)piVar11[3];
        local_ec = (int *)piVar11[4];
        local_e8._0_4_ = piVar11 + 5;
        uVar15 = FUN_0134384c(&local_f0);
        if ((iVar13 == (int)((ulonglong)uVar15 >> 0x20)) &&
           (iVar13 = thunk_FUN_01bed842((int)uVar14,(int)uVar15,iVar13), iVar13 == 0))
        goto LAB_01546c7c;
      }
      uVar14 = FUN_01572f20(unaff_r11);
      uVar9 = (undefined4)((ulonglong)uVar14 >> 0x20);
      piVar6 = (int *)uVar14;
      uVar14 = FUN_015345a4(piVar6,uVar9,param_5,param_6);
      piVar7 = (int *)uVar14;
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar6;
        bVar2 = (bool)hasExclusiveAccess(piVar6);
      } while (!bVar2);
      *piVar6 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar6,uVar9);
      }
      uVar15 = FUN_01546690(piVar3 + 2);
      piVar6 = (int *)uVar15;
      FUN_01571650(&local_128,unaff_r11,unaff_r6,unaff_r5);
      if (local_128 == (int *)&DAT_00000001) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = local_124;
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar13 + -1;
      }
      else {
        if (local_124 != (int *)0x0) {
          local_f0 = local_124;
          local_ec = local_120;
          local_e8 = uVar14;
          local_e0 = uVar15;
          puVar8 = (undefined4 *)thunk_FUN_01be5118(0x18);
          if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x18);
          }
          *puVar8 = local_f0;
          puVar8[1] = local_ec;
          *(undefined8 *)(puVar8 + 2) = local_e8;
          *(undefined8 *)(puVar8 + 4) = local_e0;
          param_1[1] = puVar8;
          param_1[2] = &DAT_01cfb74c;
          *param_1 = 1;
          goto LAB_01546eb4;
        }
        FUN_01572f88(&local_f0,unaff_r11,unaff_r6,unaff_r5);
        if (local_f0 == (int *)0x8000000a) {
          FUN_01671400(&local_f0,(undefined4 *)(unaff_r11 + 0x50),unaff_r6,unaff_r5);
          piVar4 = local_ec;
          if (local_f0 == (int *)0x8000000a) {
            local_138 = (int *)local_e8;
            uStack_134 = local_e8._4_4_;
            uStack_130 = (undefined4)local_e0;
            uVar12 = local_e0._4_4_ & 0xff;
            FUN_0166c584(&local_128,*(undefined4 *)(unaff_r11 + 0x4c),uVar12,local_ec);
            do {
              iVar13 = *piVar6;
              bVar2 = (bool)hasExclusiveAccess(piVar6);
            } while (!bVar2);
            *piVar6 = iVar13 + 1;
            if (iVar13 < 0) {
LAB_01546f50:
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x1546f50);
              (*pcVar1)();
            }
            FUN_01571d9c(&local_f0,unaff_r11,&local_138,uVar12,&local_128,uVar15);
            FUN_0156b060(&local_48,&local_f0,piVar4,piVar3);
            local_58 = uVar14;
            local_50 = uVar15;
            FUN_01547110(&local_60,&local_48,&local_58);
            if (local_60 == 0) {
              local_5c = FUN_01594a60();
            }
            *param_1 = 1;
            param_1[1] = local_60;
            param_1[2] = local_5c;
            FUN_014ff9e0(&local_f0);
            DataMemoryBarrier(0xb);
            do {
              iVar13 = *piVar11;
              bVar2 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar2);
            *piVar11 = iVar13 + -1;
            goto LAB_01546ef8;
          }
          uVar9 = FUN_01545ee0(&local_f0);
        }
        else {
          uVar9 = FUN_01545ee0(&local_f0);
        }
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = uVar9;
        DataMemoryBarrier(0xb);
        do {
          iVar13 = *piVar6;
          bVar2 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar2);
        *piVar6 = iVar13 + -1;
      }
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar6,(int)((ulonglong)uVar15 >> 0x20));
      }
      DataMemoryBarrier(0xb);
      do {
        iVar13 = *piVar7;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar13 + -1;
      if (iVar13 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar7,(int)((ulonglong)uVar14 >> 0x20));
      }
    }
LAB_01546eb4:
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar13 + -1;
    if (iVar13 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01670d04(piVar3);
    }
  }
  else {
    uVar9 = FUN_01545ee0(&local_f0);
    *param_1 = 1;
    param_1[1] = 0;
    param_1[2] = uVar9;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = iVar13 + -1;
LAB_01546ef8:
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01670d04(piVar11);
  }
  return;
}

