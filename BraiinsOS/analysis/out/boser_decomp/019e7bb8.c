// FUN_019e7bb8 @ 019e7bb8 size=1584 calls_out=15 calls_in=4
// strings: assertion failed: inner.last_write_err.is_none()

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019e7bb8(uint *param_1,int param_2,undefined4 param_3,int param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  undefined *****pppppuVar5;
  undefined ****ppppuVar6;
  undefined ****ppppuVar7;
  char cVar8;
  undefined1 uVar9;
  int iVar10;
  uint uVar11;
  int *piVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  undefined4 uVar19;
  int iVar20;
  int *piVar21;
  int iVar22;
  int *piVar23;
  ulonglong uVar24;
  int *local_128;
  int local_100;
  int iStack_fc;
  int local_f8;
  int local_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int *local_e0;
  uint local_dc;
  int local_d8;
  undefined4 uStack_d4;
  int *local_d0;
  int *local_cc;
  undefined8 local_c8;
  undefined *****local_c0;
  undefined ****local_bc;
  undefined ****local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  int *local_a8;
  int *local_a4;
  uint local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined ****local_94;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int *local_60;
  int *local_5c;
  undefined ****local_40;
  undefined1 uStack_3c;
  undefined2 local_3b;
  undefined1 local_39;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  piVar21 = (int *)(param_2 + 0x18);
  iVar10 = *(int *)(param_4 + 4);
  iVar14 = *(int *)(param_4 + 8);
  piVar18 = *(int **)(param_2 + 0x3c);
  uVar11 = iVar10 - iVar14;
  if (*(uint *)(param_2 + 0x38) < uVar11) {
    uVar11 = *(uint *)(param_2 + 0x38);
  }
  piVar17 = (int *)(param_2 + 0x1c);
  piVar12 = (int *)((uint)&local_40 | 4);
  piVar15 = (int *)((uint)&local_100 | 4);
  cVar8 = *(char *)(param_2 + 0x30);
  uVar24 = CONCAT44(local_c8._4_4_,(undefined4)local_c8);
  do {
    while (iVar13 = *piVar21, local_c8 = uVar24, iVar13 == -0x7fffffff) {
      iVar13 = *piVar17;
      FUN_019edf98(&local_c0,iVar13,param_3);
      uVar19 = local_b4;
      ppppuVar7 = local_b8;
      ppppuVar6 = local_bc;
      pppppuVar5 = local_c0;
      if (local_c0 == (undefined *****)0x4) {
        FUN_019ecf50(param_1,local_b0,local_ac);
        return;
      }
      if (local_c0 == (undefined *****)0x5) {
        uVar9 = 5;
        goto LAB_019e806c;
      }
      iVar22 = (int)local_c0 - 2;
      if (local_c0 < (undefined ****)0x2) {
        iVar22 = 2;
      }
      local_d8 = local_b0;
      uStack_d4 = local_ac;
      local_d0 = local_a8;
      local_cc = local_a4;
      if (iVar22 == 1) {
        if (((uint)local_bc & 0xff) == 4) {
          if (local_a8 != local_a4) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_0056b0a8,0x20,&DAT_01d29344);
          }
          FUN_019e6988(0x80000001,iVar13);
          *piVar21 = local_d8;
          *(undefined4 *)(param_2 + 0x1c) = uStack_d4;
          *(int **)(param_2 + 0x20) = local_d0;
          *(int **)(param_2 + 0x24) = local_cc;
          uVar24 = local_c8;
        }
        else {
          local_bc = local_b8;
          local_c0 = (undefined *****)ppppuVar6;
          if (cVar8 != '*') {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec("assertion failed: inner.last_write_err.is_none()",0x30,&DAT_01d29354);
          }
          cVar8 = FUN_005ef5e8(&local_c0);
          *(char *)(param_2 + 0x30) = cVar8;
          FUN_019e6988(0x80000001,iVar13);
          *piVar21 = local_d8;
          *(undefined4 *)(param_2 + 0x1c) = uStack_d4;
          *(int **)(param_2 + 0x20) = local_d0;
          *(int **)(param_2 + 0x24) = local_cc;
          FUN_0069263c(ppppuVar6,ppppuVar7);
          uVar24 = local_c8;
        }
      }
      else {
        if (iVar22 != 2) {
          if (((uint)local_bc & 0xff) != 4) {
            if (local_a8 != local_a4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_0056b0a8,0x20,&DAT_01d29334);
            }
            FUN_019e6988(0x80000001,iVar13);
            *piVar21 = local_d8;
            *(undefined4 *)(param_2 + 0x1c) = uStack_d4;
            *(int **)(param_2 + 0x20) = local_d0;
            *(int **)(param_2 + 0x24) = local_cc;
            *param_1 = (uint)ppppuVar6;
            param_1[1] = (uint)ppppuVar7;
            return;
          }
          FUN_019e6c44(&local_d8,param_4);
          FUN_019e6988(0x80000001,iVar13);
          *piVar21 = local_d8;
          *(undefined4 *)(param_2 + 0x1c) = uStack_d4;
          *(int **)(param_2 + 0x20) = local_d0;
          *(int **)(param_2 + 0x24) = local_cc;
LAB_019e8060:
          uVar9 = 4;
LAB_019e806c:
          *(undefined1 *)param_1 = uVar9;
          return;
        }
        if (local_a8 != local_a4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_0056b0a8,0x20,&DAT_01d29364);
        }
        FUN_019e6988(0x80000001,iVar13);
        *piVar21 = local_d8;
        *(undefined4 *)(param_2 + 0x1c) = uStack_d4;
        *(int **)(param_2 + 0x20) = local_d0;
        *(int **)(param_2 + 0x24) = local_cc;
        if (((uint)pppppuVar5 & 1) == 0) {
          *(undefined *****)(param_2 + 0x28) = ppppuVar7;
          *(undefined4 *)(param_2 + 0x2c) = uVar19;
        }
        else {
          FUN_0069263c(ppppuVar6,ppppuVar7);
        }
        uVar24 = local_c8;
      }
    }
    *piVar21 = -0x80000000;
    if (iVar13 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d29314);
    }
    iVar22 = *(int *)(param_2 + 0x20);
    iVar20 = *(int *)(param_2 + 0x24);
    *piVar15 = *piVar17;
    piVar15[1] = iVar22;
    piVar15[2] = iVar20;
    local_100 = iVar13;
    if ((local_f8 != local_f4) || (iVar10 == iVar14)) {
      FUN_019e6c44(&local_100,param_4);
      *piVar21 = local_100;
      *(int *)(param_2 + 0x1c) = iStack_fc;
      *(int *)(param_2 + 0x20) = local_f8;
      *(int *)(param_2 + 0x24) = local_f4;
      goto LAB_019e8060;
    }
    do {
      iVar22 = *piVar18;
      bVar2 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar2);
    *piVar18 = iVar22 + 1;
    if (iVar22 < 0) goto LAB_019e81f8;
    iStack_ec = iStack_fc;
    iStack_e8 = local_f8;
    iStack_e4 = local_f4;
    local_f0 = iVar13;
    local_e0 = piVar18;
    local_dc = uVar11;
    uVar24 = FUN_019ef7f4(&DAT_01d29324);
    iVar13 = (int)(uVar24 >> 0x20);
    iVar22 = 0x218;
    if ((uVar24 & 1) != 0) {
      iVar22 = 0x148;
    }
    uVar19 = *(undefined4 *)(iVar13 + iVar22);
    do {
      do {
        iVar22 = DAT_01d50474;
        uVar4 = DAT_01d50470;
        uVar16 = DAT_01d50470 + 1;
        iVar20 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
        bVar2 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar2);
      bVar2 = DAT_01d50470 == 0;
      bVar3 = DAT_01d50474 == 0;
      DAT_01d50470 = uVar16;
      DAT_01d50474 = iVar20;
    } while (bVar2 && bVar3);
    iVar20 = 0x200;
    if ((uVar24 & 1) != 0) {
      iVar20 = 0x138;
    }
    iVar13 = iVar13 + iVar20;
    piVar23 = *(int **)(iVar13 + 8);
    if (piVar23 != (int *)0x0) {
      do {
        iVar20 = *piVar23;
        bVar2 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar2);
      *piVar23 = iVar20 + 1;
      if (iVar20 < 0) {
LAB_019e81f8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x19e81f8);
        local_c8 = uVar24;
        (*pcVar1)();
      }
      local_128 = *(int **)(iVar13 + 0xc);
      do {
        iVar13 = *piVar23;
        bVar2 = (bool)hasExclusiveAccess(piVar23);
      } while (!bVar2);
      *piVar23 = iVar13 + 1;
      if (iVar13 < 0) goto LAB_019e81f8;
    }
    *piVar12 = local_f0;
    piVar12[1] = iStack_ec;
    piVar12[2] = iStack_e8;
    piVar12[3] = iStack_e4;
    piVar12[4] = (int)local_e0;
    piVar12[5] = local_dc;
    local_94 = local_40;
    uStack_8c = uStack_38;
    local_88 = local_34;
    uStack_84 = uStack_30;
    uStack_80 = uStack_2c;
    uStack_7c = uStack_28;
    local_98 = 0;
    *(undefined4 *)((uint)&local_c0 | 0x10) = 0;
    ((undefined4 *)((uint)&local_c0 | 0x10))[1] = 0;
    local_a0 = uVar4;
    iStack_9c = iVar22;
    local_bc = (undefined ****)0x0;
    local_b8 = (undefined ****)&PTR_FUN_01d29ba8;
    local_68 = 0;
    local_c0 = (undefined *****)0xcc;
    local_a4 = local_128;
    local_5c = local_128;
    local_6c = 0;
    local_70 = 0;
    local_40 = (undefined ****)0x0;
    local_a8 = piVar23;
    local_60 = piVar23;
    local_c8 = uVar24;
    iVar13 = FUN_01be5878(&local_40,0x20,0x80);
    ppppuVar6 = local_40;
    if ((iVar13 != 0) || (local_40 == (undefined ****)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x80);
    }
    FUN_01bed4e2(local_40,&local_c0,0x80);
    FUN_019f02d4(&local_c0,uVar19,ppppuVar6,1,uVar24);
    if (((uint)local_c0 & 0xfe) != 4) {
      uStack_3c = SUB41(local_bc,0);
      local_39 = (undefined1)((uint)local_bc >> 0x18);
      local_3b = (undefined2)((uint)local_bc >> 8);
      local_40 = (undefined ****)local_c0;
      local_bc = (undefined ****)FUN_019a7d7c;
      local_c0 = &local_40;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005ab28b,&local_c0,&DAT_01d29324);
    }
    FUN_00668d74(&local_c8);
    FUN_019e6988(0x80000000,*piVar17);
    *piVar17 = (int)ppppuVar6;
    *piVar21 = -0x7fffffff;
    uVar24 = local_c8;
  } while( true );
}

