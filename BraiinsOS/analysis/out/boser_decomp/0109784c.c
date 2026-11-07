// FUN_0109784c @ 0109784c size=3188 calls_out=17 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0109784c(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint *param_4,
                 undefined4 param_5,int *param_6)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int *piVar12;
  uint *puVar13;
  int *piVar14;
  undefined1 uVar15;
  undefined8 uVar16;
  int local_38f4;
  int *local_38d0 [5];
  undefined1 local_38bc;
  int *local_38b8;
  undefined4 local_38b4;
  undefined4 uStack_38b0;
  undefined4 uStack_38ac;
  undefined4 uStack_38a8;
  undefined1 local_38a4;
  uint local_38a0;
  int local_389c;
  undefined4 uStack_3898;
  undefined4 uStack_3894;
  undefined4 uStack_3890;
  undefined4 uStack_388c;
  undefined4 local_3888;
  undefined4 uStack_3884;
  undefined4 uStack_3880;
  undefined4 uStack_387c;
  undefined4 uStack_3878;
  undefined4 uStack_3874;
  uint local_3870;
  int iStack_386c;
  undefined4 uStack_3868;
  undefined4 uStack_3864;
  undefined4 uStack_3860;
  undefined4 uStack_385c;
  undefined4 local_3858;
  undefined4 uStack_3854;
  undefined4 uStack_3850;
  undefined4 uStack_384c;
  undefined4 uStack_3848;
  undefined4 uStack_3844;
  uint local_3190;
  uint uStack_318c;
  uint uStack_3188;
  uint local_3180;
  int local_317c;
  uint *local_3178;
  undefined1 *local_3174;
  undefined1 auStack_3170 [24];
  undefined8 local_3158;
  undefined4 local_3148;
  undefined1 local_312b;
  uint local_2a8c;
  undefined4 local_2a88;
  undefined1 local_2a84;
  uint *local_2a80;
  undefined1 *local_2a7c;
  undefined1 auStack_2a78 [1792];
  undefined4 *local_2378 [2];
  undefined1 auStack_2370 [1776];
  undefined4 *local_1c80;
  undefined1 auStack_1c78 [1784];
  int *local_1580;
  int local_157c;
  int **local_1578;
  int *local_1568;
  undefined4 local_1558;
  undefined1 auStack_1554 [76];
  undefined4 local_1508;
  undefined4 local_1504;
  undefined4 local_1500;
  int *local_14f8;
  int local_14f4;
  undefined4 local_e58;
  undefined4 local_e54;
  undefined4 local_e50;
  int *local_e48;
  int local_e44;
  undefined1 auStack_e40 [1792];
  int *local_740 [447];
  undefined1 auStack_41 [29];
  
  uVar4 = *param_4;
  uVar8 = param_4[1];
  uVar15 = param_4[0x12] != 0x80000000;
  if ((uVar4 ^ 3) == 0 && uVar8 == 0) {
    uVar15 = 2;
  }
  FUN_00b33f58(local_38d0,param_6,param_3,uVar15,0);
  puVar11 = (undefined4 *)((uint)local_38d0 | 4);
  puVar5 = (undefined4 *)((uint)&local_1580 | 0x10);
  FUN_01bed4e2(param_1,puVar11,0x10);
  if ((uVar4 ^ 3) == 0 && uVar8 == 0) {
    uVar8 = param_4[3];
    uVar4 = param_4[2];
    do {
      iVar9 = *local_38d0[0];
      bVar2 = (bool)hasExclusiveAccess(local_38d0[0]);
    } while (!bVar2);
    *local_38d0[0] = iVar9 + 1;
    local_3158 = CONCAT44(local_3158._4_4_,(undefined4)local_3158);
    if (iVar9 < 0) goto LAB_0109848c;
    local_38b4 = *puVar11;
    uStack_38b0 = puVar11[1];
    uStack_38ac = puVar11[2];
    uStack_38a8 = puVar11[3];
    local_38b8 = local_38d0[0];
    local_38a4 = local_38bc;
    local_3158 = (**(code **)(uVar8 + 0x14))(uVar4);
    do {
      do {
        local_38a0 = DAT_01d50470;
        local_389c = DAT_01d50474;
        uVar4 = DAT_01d50470 + 1;
        iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar2 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar2);
      bVar2 = DAT_01d50470 == 0;
      bVar3 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar4;
      DAT_01d50474 = iVar9;
    } while (bVar2 && bVar3);
    local_3174 = auStack_41;
    local_312b = 0;
    local_3148 = param_5;
    iVar9 = thunk_FUN_01bee35a();
    puVar13 = (uint *)(iVar9 + 0x20);
    local_3178 = &local_38a0;
    if (*(char *)(iVar9 + 0x58) != '\x01') {
      if (*(char *)(iVar9 + 0x58) == '\x02') {
        uVar15 = 1;
        FUN_00f2ed88(auStack_3170);
        goto LAB_010979ec;
      }
      FUN_019a2bcc(puVar13,&LAB_019efb68);
      *(undefined1 *)(iVar9 + 0x58) = 1;
    }
    FUN_01bed4e2(auStack_2a78,&local_3178,0x50);
    if (0x7ffffffe < *puVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar13 = *puVar13 + 1;
    uVar4 = *(uint *)(iVar9 + 0x24);
    FUN_01bed4e2(local_2378,&local_3178,0x50);
    if (uVar4 == 2) {
      FUN_00f2ed88(auStack_2370);
      uVar15 = 0;
      *puVar13 = *puVar13 - 1;
LAB_010979ec:
      local_1580 = (int *)CONCAT31(local_1580._1_3_,uVar15);
                    /* WARNING: Subroutine does not return */
      FUN_0107998c(&local_1580,&DAT_01c1decc);
    }
    piVar10 = (int *)*local_2378[0];
    iVar6 = local_2378[0][1];
    if ((uVar4 & 1) == 0) {
      piVar14 = *(int **)(iVar9 + 0x28);
      do {
        iVar7 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar7 + 1;
      if (iVar7 < 0) goto LAB_0109848c;
      piVar12 = (int *)piVar14[0x82];
      if (piVar12 != (int *)0x0) {
        do {
          iVar7 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar7 + 1;
        if (iVar7 < 0) goto LAB_0109848c;
        local_38f4 = piVar14[0x83];
      }
      FUN_01bed4e2((uint)local_740 | 4,auStack_3170,0x48);
      FUN_01bed4e2(auStack_e40,local_740,0x4c);
      local_1558 = 0;
      FUN_01bed4e2(auStack_1554,auStack_e40,0x4c);
      local_1578 = (int **)&PTR_LAB_01c1a864;
      puVar5[4] = piVar10;
      puVar5[5] = iVar6;
      local_14f4 = local_38f4;
      *puVar5 = 0;
      puVar5[1] = 0;
      local_1580 = (int *)0xcc;
      local_157c = 0;
      local_1508 = 0;
      local_1504 = 0;
      local_1500 = 0;
      local_740[0] = (int *)0x0;
      local_1568 = piVar14;
      local_14f8 = piVar12;
      iVar7 = FUN_01be5878(local_740,0x20,0xa0);
      piVar12 = local_740[0];
      if ((iVar7 != 0) || (local_740[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0xa0);
      }
      FUN_01bed4e2(local_740[0],&local_1580,0xa0);
      iVar7 = FUN_01a88f0c(piVar14 + 0x40,piVar12,piVar12);
      local_1580 = piVar10;
      local_157c = iVar6;
      if (piVar14[0x80] != 0) {
        (**(code **)(piVar14[0x81] + 0x14))
                  (piVar14[0x80] + (*(int *)(piVar14[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1580);
      }
      if (iVar7 != 0) {
        FUN_019dc904(*(undefined4 *)(iVar9 + 0x28),iVar7);
      }
    }
    else {
      piVar14 = *(int **)(iVar9 + 0x28);
      do {
        iVar9 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar9 + 1;
      if (iVar9 < 0) goto LAB_0109848c;
      piVar12 = (int *)piVar14[0x50];
      if (piVar12 != (int *)0x0) {
        do {
          iVar9 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_0109848c;
        local_38f4 = piVar14[0x51];
      }
      FUN_01bed4e2((uint)local_740 | 4,auStack_3170,0x48);
      FUN_01bed4e2(auStack_e40,local_740,0x4c);
      local_1558 = 0;
      FUN_01bed4e2(auStack_1554,auStack_e40,0x4c);
      local_1578 = (int **)&DAT_01c1a224;
      puVar5[4] = piVar10;
      puVar5[5] = iVar6;
      local_14f4 = local_38f4;
      *puVar5 = 0;
      puVar5[1] = 0;
      local_1580 = (int *)0xcc;
      local_157c = 0;
      local_1508 = 0;
      local_1504 = 0;
      local_1500 = 0;
      local_740[0] = (int *)0x0;
      local_1568 = piVar14;
      local_14f8 = piVar12;
      iVar9 = FUN_01be5878(local_740,0x20,0xa0);
      piVar12 = local_740[0];
      if ((iVar9 != 0) || (local_740[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0xa0);
      }
      FUN_01bed4e2(local_740[0],&local_1580,0xa0);
      iVar9 = FUN_01a89190(piVar14 + 0x14,piVar12,piVar12);
      local_1580 = piVar10;
      local_157c = iVar6;
      if (piVar14[0x4e] != 0) {
        (**(code **)(piVar14[0x4f] + 0x14))
                  (piVar14[0x4e] + (*(int *)(piVar14[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1580);
      }
      if (iVar9 != 0) {
        local_740[0] = (int *)((uint)local_740[0] & 0xffffff00);
        local_1578 = local_740;
        local_1580 = piVar14 + 2;
        local_157c = iVar9;
        FUN_019ee860(&local_1580);
      }
    }
    *puVar13 = *puVar13 - 1;
    if (*piVar12 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar12);
      if (bVar2) {
        *piVar12 = 0x84;
        goto LAB_010983dc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar12[2] + 0x10))(piVar12);
  }
  else {
    uVar4 = param_4[0x15];
    FUN_01098a0c(&local_38a0,param_2);
    local_3870 = local_38a0;
    iStack_386c = local_389c;
    uStack_3868 = uStack_3898;
    uStack_3864 = uStack_3894;
    uStack_3860 = uStack_3890;
    uStack_385c = uStack_388c;
    local_3858 = local_3888;
    uStack_3854 = uStack_3884;
    uStack_3850 = uStack_3880;
    uStack_384c = uStack_387c;
    uStack_3848 = uStack_3878;
    uStack_3844 = uStack_3874;
    local_3190 = param_4[0x12];
    uStack_318c = param_4[0x13];
    uStack_3188 = param_4[0x14];
    do {
      do {
        local_3180 = DAT_01d50470;
        local_317c = DAT_01d50474;
        uVar8 = DAT_01d50470 + 1;
        iVar9 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar2 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar2);
      bVar2 = DAT_01d50470 == 0;
      bVar3 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar8;
      DAT_01d50474 = iVar9;
    } while (bVar2 && bVar3);
    FUN_01bed4e2(&local_3178,&local_3870,0x6ec);
    local_2a7c = auStack_41;
    local_2a80 = &local_3180;
    local_2a84 = 0;
    uVar16 = thunk_FUN_01bee35a(0,0x20);
    puVar13 = (uint *)((int)uVar16 + (int)((ulonglong)uVar16 >> 0x20));
    local_2a88 = param_5;
    local_2a8c = uVar4;
    if ((char)puVar13[0xe] != '\x01') {
      if ((char)puVar13[0xe] == '\x02') {
        uVar15 = 1;
        FUN_010eb9a8(&local_3178);
        goto LAB_01097afc;
      }
      FUN_019a2bcc(puVar13,&LAB_019efb68);
      *(undefined1 *)(puVar13 + 0xe) = 1;
    }
    FUN_01bed4e2(auStack_2a78,&local_3178,0x700);
    if (0x7ffffffe < *puVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar13 = *puVar13 + 1;
    uVar4 = puVar13[1];
    FUN_01bed4e2(local_2378,&local_3178,0x700);
    if (uVar4 == 2) {
      FUN_010eb9a8(local_2378);
      uVar15 = 0;
      *puVar13 = *puVar13 - 1;
LAB_01097afc:
      local_1580 = (int *)CONCAT31(local_1580._1_3_,uVar15);
                    /* WARNING: Subroutine does not return */
      FUN_0107998c(&local_1580,&DAT_01c1debc);
    }
    FUN_01bed4e2(auStack_1c78,&local_3178,0x6f8);
    piVar10 = (int *)*local_1c80;
    iVar9 = local_1c80[1];
    if ((uVar4 & 1) == 0) {
      piVar14 = (int *)puVar13[2];
      do {
        iVar6 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar6 + 1;
      local_3158 = CONCAT44(local_3158._4_4_,(undefined4)local_3158);
      if (iVar6 < 0) goto LAB_0109848c;
      piVar12 = (int *)piVar14[0x82];
      if (piVar12 != (int *)0x0) {
        do {
          iVar6 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar6 + 1;
        local_3158 = CONCAT44(local_3158._4_4_,(undefined4)local_3158);
        if (iVar6 < 0) goto LAB_0109848c;
        local_38f4 = piVar14[0x83];
      }
      FUN_01bed4e2((uint)local_740 | 4,auStack_1c78,0x6f8);
      FUN_01bed4e2(auStack_e40,local_740,0x6fc);
      local_1558 = 0;
      FUN_01bed4e2(auStack_1554,auStack_e40,0x6fc);
      local_1578 = (int **)&PTR_LAB_01c1a8dc;
      puVar5[4] = piVar10;
      puVar5[5] = iVar9;
      local_e44 = local_38f4;
      *puVar5 = 0;
      puVar5[1] = 0;
      local_1580 = (int *)0xcc;
      local_157c = 0;
      local_e58 = 0;
      local_e54 = 0;
      local_e50 = 0;
      local_740[0] = (int *)0x0;
      local_1568 = piVar14;
      local_e48 = piVar12;
      iVar6 = FUN_01be5878(local_740,0x20,0x740);
      piVar12 = local_740[0];
      if ((iVar6 != 0) || (local_740[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x740);
      }
      FUN_01bed4e2(local_740[0],&local_1580,0x740);
      iVar6 = FUN_01a88f0c(piVar14 + 0x40,piVar12,piVar12);
      local_1580 = piVar10;
      local_157c = iVar9;
      if (piVar14[0x80] != 0) {
        (**(code **)(piVar14[0x81] + 0x14))
                  (piVar14[0x80] + (*(int *)(piVar14[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_1580);
      }
      if (iVar6 != 0) {
        FUN_019dc904(puVar13[2],iVar6);
      }
    }
    else {
      piVar14 = (int *)puVar13[2];
      do {
        iVar6 = *piVar14;
        bVar2 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar2);
      *piVar14 = iVar6 + 1;
      local_3158 = CONCAT44(local_3158._4_4_,(undefined4)local_3158);
      if (iVar6 < 0) {
LAB_0109848c:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x109848c);
        (*pcVar1)();
      }
      piVar12 = (int *)piVar14[0x50];
      if (piVar12 != (int *)0x0) {
        do {
          iVar6 = *piVar12;
          bVar2 = (bool)hasExclusiveAccess(piVar12);
        } while (!bVar2);
        *piVar12 = iVar6 + 1;
        local_3158 = CONCAT44(local_3158._4_4_,(undefined4)local_3158);
        if (iVar6 < 0) goto LAB_0109848c;
        local_38f4 = piVar14[0x51];
      }
      FUN_01bed4e2((uint)local_740 | 4,auStack_1c78,0x6f8);
      FUN_01bed4e2(auStack_e40,local_740,0x6fc);
      local_1558 = 0;
      FUN_01bed4e2(auStack_1554,auStack_e40,0x6fc);
      local_1578 = (int **)&DAT_01c19e64;
      puVar5[4] = piVar10;
      puVar5[5] = iVar9;
      local_e44 = local_38f4;
      *puVar5 = 0;
      puVar5[1] = 0;
      local_1580 = (int *)0xcc;
      local_157c = 0;
      local_e58 = 0;
      local_e54 = 0;
      local_e50 = 0;
      local_740[0] = (int *)0x0;
      local_1568 = piVar14;
      local_e48 = piVar12;
      iVar6 = FUN_01be5878(local_740,0x20,0x740);
      piVar12 = local_740[0];
      if ((iVar6 != 0) || (local_740[0] == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x740);
      }
      FUN_01bed4e2(local_740[0],&local_1580,0x740);
      iVar6 = FUN_01a89190(piVar14 + 0x14,piVar12,piVar12);
      local_1580 = piVar10;
      local_157c = iVar9;
      if (piVar14[0x4e] != 0) {
        (**(code **)(piVar14[0x4f] + 0x14))
                  (piVar14[0x4e] + (*(int *)(piVar14[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_1580);
      }
      if (iVar6 != 0) {
        local_740[0] = (int *)((uint)local_740[0] & 0xffffff00);
        local_1578 = local_740;
        local_1580 = piVar14 + 2;
        local_157c = iVar6;
        FUN_019ee860(&local_1580);
      }
    }
    *puVar13 = *puVar13 - 1;
    if (*piVar12 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar12);
      if (bVar2) {
        *piVar12 = 0x84;
        goto LAB_010983dc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar12[2] + 0x10))(piVar12);
  }
LAB_010983dc:
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *param_6;
    bVar2 = (bool)hasExclusiveAccess(param_6);
  } while (!bVar2);
  *param_6 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(param_6);
  }
  if (*param_4 != 3 || param_4[1] != 0) {
    FUN_01098c08(param_4);
  }
  return;
}

