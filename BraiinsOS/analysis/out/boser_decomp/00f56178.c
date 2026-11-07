// FUN_00f56178 @ 00f56178 size=2332 calls_out=32 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00f56178(int param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  int *******pppppppiVar6;
  uint uVar7;
  undefined4 *puVar8;
  int *piVar9;
  int *****pppppiVar10;
  int ******ppppppiVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  int *****pppppiVar15;
  int ******ppppppiVar16;
  int *******pppppppiVar17;
  undefined1 uVar18;
  int *******pppppppiVar19;
  uint *puVar20;
  uint uVar21;
  int *******pppppppiVar22;
  int *****pppppiVar23;
  int *******pppppppiVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  int *******local_c8;
  int *******local_c4;
  int *******local_c0;
  int *******pppppppiStack_bc;
  int *******pppppppiStack_b8;
  int *******pppppppiStack_b4;
  int *******local_b0;
  int *******local_ac;
  int *******local_a8;
  int *******local_a0;
  int *******local_9c;
  int *******local_98;
  int *******local_94;
  int *******local_90;
  int *******pppppppiStack_8c;
  int *local_88;
  undefined4 local_78;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int *local_48;
  int iStack_44;
  int *******local_40;
  int *******pppppppiStack_3c;
  int *******local_38;
  int *******local_34;
  int *******local_30;
  undefined1 uStack_25;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  pppppppiVar24 = (int *******)((uint)&local_a0 | 0x10);
  pppppppiVar19 = (int *******)(param_1 + 0x18);
  uVar25 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  uVar12 = (undefined4)((ulonglong)uVar25 >> 0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x5d)) {
  case 0:
    uVar5 = *(undefined4 *)(param_1 + 0x34);
    uVar13 = *(undefined4 *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_1 + 0x40);
    *(undefined1 *)(param_1 + 0x5c) = 1;
    *pppppppiVar19 = *(int *******)(param_1 + 0x44);
    *(undefined4 *)(param_1 + 0x1c) = *(undefined4 *)(param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x20) = *(undefined4 *)(param_1 + 0x4c);
    *(undefined4 *)(param_1 + 0x24) = *(undefined4 *)(param_1 + 0x50);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x58);
    do {
      do {
        pppppppiVar22 = DAT_01d50474;
        ppppppiVar11 = DAT_01d50470;
        ppppppiVar16 = (int ******)((int)DAT_01d50470 + 1);
        pppppppiVar17 =
             (int *******)((int)DAT_01d50474 + (uint)((int ******)0xfffffffe < DAT_01d50470));
        bVar2 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar2);
      bVar2 = DAT_01d50470 == (int ******)0x0;
      bVar3 = DAT_01d50474 == (int *******)0x0;
      DAT_01d50470 = ppppppiVar16;
      DAT_01d50474 = pppppppiVar17;
    } while (bVar2 && bVar3);
    uVar26 = thunk_FUN_01bee35a(&DAT_01d50470,0x20);
    puVar20 = (uint *)((int)uVar26 + (int)((ulonglong)uVar26 >> 0x20));
    if ((char)puVar20[0xe] != '\x01') {
      if ((char)puVar20[0xe] == '\x02') {
        uVar18 = 1;
        FUN_01139b38(uVar13,uVar5);
        goto LAB_00f5626c;
      }
      FUN_019a2bcc(puVar20,&LAB_019efb68);
      *(undefined1 *)(puVar20 + 0xe) = 1;
    }
    if (0x7ffffffe < *puVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar20 = *puVar20 + 1;
    if (puVar20[1] == 2) {
      FUN_01139b38(uVar13,uVar5);
      uVar18 = 0;
      *puVar20 = *puVar20 - 1;
LAB_00f5626c:
      local_a0 = (int *******)CONCAT31(local_a0._1_3_,uVar18);
                    /* WARNING: Subroutine does not return */
      FUN_0107998c(&local_a0,&DAT_01c196e4);
    }
    local_70 = uVar13;
    local_6c = uVar5;
    if ((puVar20[1] & 1) == 0) {
      piVar9 = (int *)puVar20[2];
      do {
        iVar14 = *piVar9;
        iStack_44 = iVar14 + 1;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iStack_44;
      if (iVar14 < 0) goto LAB_00f56a98;
      local_48 = (int *)piVar9[0x82];
      if (local_48 != (int *)0x0) {
        do {
          iVar14 = *local_48;
          bVar2 = (bool)hasExclusiveAccess(local_48);
        } while (!bVar2);
        *local_48 = iVar14 + 1;
        if (iVar14 < 0) goto LAB_00f56a98;
        iStack_44 = piVar9[0x83];
      }
      local_98 = (int *******)&PTR_LAB_01c1a47c;
      local_40 = (int *******)0x0;
      *pppppppiVar24 = (int ******)0x0;
      pppppppiVar24[1] = (int ******)0x0;
      pppppppiVar24[4] = ppppppiVar11;
      pppppppiVar24[5] = (int ******)pppppppiVar22;
      local_78 = 0;
      local_9c = (int *******)0x0;
      local_a0 = (int *******)0xcc;
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      local_88 = piVar9;
      iVar14 = FUN_01be5878(&local_40,0x20,0x60);
      pppppppiVar17 = local_40;
      if ((iVar14 != 0) || (local_40 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x60);
      }
      FUN_01bed4e2(local_40,&local_a0,0x60);
      iVar14 = FUN_01a88f0c(piVar9 + 0x40,pppppppiVar17,pppppppiVar17);
      local_a0 = (int *******)ppppppiVar11;
      local_9c = pppppppiVar22;
      if (piVar9[0x80] != 0) {
        (**(code **)(piVar9[0x81] + 0x14))
                  (piVar9[0x80] + (*(int *)(piVar9[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
      }
      if (iVar14 != 0) {
        FUN_019dc904(puVar20[2],iVar14);
      }
    }
    else {
      piVar9 = (int *)puVar20[2];
      do {
        iVar14 = *piVar9;
        iStack_44 = iVar14 + 1;
        bVar2 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar2);
      *piVar9 = iStack_44;
      if (iVar14 < 0) {
LAB_00f56a98:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xf56a98);
        (*pcVar1)();
      }
      local_48 = (int *)piVar9[0x50];
      if (local_48 != (int *)0x0) {
        do {
          iVar14 = *local_48;
          bVar2 = (bool)hasExclusiveAccess(local_48);
        } while (!bVar2);
        *local_48 = iVar14 + 1;
        if (iVar14 < 0) goto LAB_00f56a98;
        iStack_44 = piVar9[0x51];
      }
      *pppppppiVar24 = (int ******)0x0;
      pppppppiVar24[1] = (int ******)0x0;
      pppppppiVar24[4] = ppppppiVar11;
      pppppppiVar24[5] = (int ******)pppppppiVar22;
      pppppppiVar24 = (int *******)&local_40;
      local_98 = (int *******)&DAT_01c1a364;
      local_40 = (int *******)0x0;
      local_78 = 0;
      local_9c = (int *******)0x0;
      local_a0 = (int *******)0xcc;
      local_50 = 0;
      local_54 = 0;
      local_58 = 0;
      local_88 = piVar9;
      iVar14 = FUN_01be5878(pppppppiVar24,0x20,0x60);
      pppppppiVar17 = local_40;
      if ((iVar14 != 0) || (local_40 == (int *******)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x60);
      }
      FUN_01bed4e2(local_40,&local_a0,0x60);
      pppppppiVar6 = (int *******)FUN_01a89190(piVar9 + 0x14,pppppppiVar17,pppppppiVar17);
      local_9c = pppppppiVar22;
      if (piVar9[0x4e] != 0) {
        local_a0 = (int *******)ppppppiVar11;
        (**(code **)(piVar9[0x4f] + 0x14))
                  (piVar9[0x4e] + (*(int *)(piVar9[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_a0);
      }
      if (pppppppiVar6 != (int *******)0x0) {
        local_40 = (int *******)((uint)local_40 & 0xffffff00);
        local_a0 = (int *******)(piVar9 + 2);
        local_9c = pppppppiVar6;
        local_98 = pppppppiVar24;
        FUN_019ee860(&local_a0);
      }
    }
    uVar7 = *puVar20;
    *(int ********)(param_1 + 0x3c) = pppppppiVar17;
    *puVar20 = uVar7 - 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c196f4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c196f4);
  }
  local_a0 = (int *******)&DAT_00000009;
  uVar7 = FUN_019ec670(param_2);
  if ((uVar7 & 0xff) == 2) {
    uVar21 = 0;
  }
  else {
    if ((uVar7 & 1) != 0) {
      if (local_a0 != (int *******)&DAT_00000009) {
        FUN_00f26d54(&local_a0);
      }
      goto LAB_00f56640;
    }
    uVar21 = (uVar7 & 0xffffff) >> 8;
    pppppppiVar24 = (int *******)((uVar7 & 0xffffff) >> 0x10);
  }
  (**(code **)(*(int *)(*(int *)(param_1 + 0x3c) + 8) + 0xc))
            (*(int *)(param_1 + 0x3c),&local_a0,param_2);
  local_c8 = local_a0;
  puVar8 = (undefined4 *)((uint)&local_a0 | 4);
  local_40 = (int *******)*puVar8;
  pppppppiStack_3c = (int *******)puVar8[1];
  local_38 = (int *******)puVar8[2];
  local_34 = (int *******)puVar8[3];
  local_30 = (int *******)puVar8[4];
  if (local_a0 != (int *******)&DAT_00000009) {
    uVar21 = 0;
  }
  FUN_019edbc4(uVar21,pppppppiVar24);
  if (local_c8 == (int *******)&DAT_00000009) {
LAB_00f56640:
    *(undefined1 *)(param_1 + 0x5d) = 3;
    FUN_019ec558((int)uVar25,uVar12);
    return 1;
  }
  puVar8 = (undefined4 *)((uint)&local_c8 | 4);
  *puVar8 = local_40;
  puVar8[1] = pppppppiStack_3c;
  puVar8[2] = local_38;
  puVar8[3] = local_34;
  puVar8[4] = local_30;
  piVar9 = *(int **)(param_1 + 0x3c);
  if (*piVar9 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar2 = (bool)hasExclusiveAccess(piVar9);
    if (!bVar2) goto LAB_00f566a4;
    *piVar9 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00f566a4:
    (**(code **)(*(int *)(*(int *)(param_1 + 0x3c) + 8) + 0x10))();
  }
  if (local_c8 == (int *******)&DAT_00000006) {
    local_9c = (int *******)FUN_00667a08;
    local_a0 = (int *******)&local_b0;
    local_b0 = local_c4;
    FUN_00664898(&local_40,&DAT_00531476,&local_a0);
    local_a0 = local_40;
    local_9c = pppppppiStack_3c;
    local_98 = local_38;
    local_40 = (int *******)CONCAT31(local_40._1_3_,4);
    local_94 = pppppppiVar19;
    local_90 = (int *******)&local_40;
    FUN_00ab3338((*pppppppiVar19)[2],&local_a0);
    (*(code *)**local_b0)();
  }
  else {
    if (local_c8 == (int *******)&DAT_00000007) {
      bVar4 = 1;
      if (*(char *)(param_1 + 0x2c) == '\x02') {
        pppppiVar15 = (*pppppppiVar19)[2];
        pppppiVar23 = pppppiVar15 + 0x26;
        FUN_00a981d4(pppppiVar23);
        if ((uint)-(int)pppppiVar15[0x29] < (uint)(pppppiVar15[0x28] < (int ****)0x3)) {
          iVar14 = thunk_FUN_01bed842(pppppiVar15 + 0x2e,param_1 + 0x1c,0x10);
          if ((iVar14 == 0) && (*(char *)((int)pppppiVar15 + 0xca) == *(char *)(param_1 + 0x2c))) {
            *(char *)(pppppiVar15 + 0x2a) = *(char *)((int)pppppiVar15 + 0xca);
            pppppiVar15[0x28] = (int ****)0x8;
            pppppiVar15[0x29] = (int ****)0x0;
            FUN_01bed4e2((int)pppppiVar15 + 0xa9,param_1 + 0x1c,0x10);
            pppppiVar10 = pppppiVar15 + 0x34;
            DataMemoryBarrier(0xb);
            do {
              bVar2 = (bool)hasExclusiveAccess(pppppiVar10);
            } while (!bVar2);
            *pppppiVar10 = (int ****)((int)*pppppiVar10 + 2);
            FUN_009dd354(pppppiVar23);
            iVar14 = 0;
            do {
              FUN_019e03e8((int)pppppiVar15 + iVar14 + 8);
              iVar14 = iVar14 + 0x10;
            } while (iVar14 != 0x80);
            goto LAB_00f56958;
          }
        }
        FUN_009dd354(pppppiVar23);
      }
      goto LAB_00f56958;
    }
    if (local_c8 != (int *******)&DAT_00000008) {
      local_a0 = local_c8;
      local_9c = local_c4;
      local_98 = local_c0;
      local_94 = pppppppiStack_bc;
      local_90 = pppppppiStack_b8;
      pppppppiStack_8c = pppppppiStack_b4;
      local_a8 = (int *******)0x0;
      local_ac = (int *******)&DAT_00000001;
      local_b0 = (int *******)0x0;
      iVar14 = FUN_00ab1b78(&local_a0,&local_b0,&DAT_01c1929c);
      if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c19344,&DAT_01d30334);
      }
      local_40 = local_b0;
      pppppppiStack_3c = local_ac;
      local_38 = local_a8;
      local_b0 = (int *******)((uint)local_b0 & 0xffffff00);
      local_34 = pppppppiVar19;
      local_30 = (int *******)&local_b0;
      FUN_00ab3338((*pppppppiVar19)[2],&local_40);
      FUN_00f26d88(&local_a0);
      bVar4 = 0;
      goto LAB_00f56958;
    }
    local_40 = local_c0;
    pppppppiStack_3c = pppppppiStack_bc;
    local_38 = pppppppiStack_b8;
    local_34 = pppppppiStack_b4;
    local_9c = (int *******)FUN_019edb04;
    local_a0 = (int *******)&local_40;
    FUN_00664898(&local_b0,&DAT_0058e2aa,&local_a0);
    local_a0 = local_b0;
    local_9c = local_ac;
    local_98 = local_a8;
    local_b0 = (int *******)CONCAT31(local_b0._1_3_,4);
    local_94 = pppppppiVar19;
    local_90 = (int *******)&local_b0;
    FUN_00ab3338((*pppppppiVar19)[2],&local_a0);
    if (local_38 != (int *******)0x0) {
      FUN_00f80320(local_38,local_34);
    }
  }
  bVar4 = 1;
LAB_00f56958:
  piVar9 = *(int **)(param_1 + 0x38);
  *(undefined1 *)(param_1 + 0x5c) = 0;
  DataMemoryBarrier(0xb);
  *(undefined1 *)(piVar9 + 2) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar14 = *piVar9;
    bVar2 = (bool)hasExclusiveAccess(piVar9);
  } while (!bVar2);
  *piVar9 = iVar14 + -1;
  if (iVar14 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc();
  }
  if (local_c8 != (int *******)&DAT_00000008 && (bool)(bVar4 & local_c8 < &DAT_00000006)) {
    FUN_00f26d88(&local_c8);
  }
  ppppppiVar11 = *pppppppiVar19;
  DataMemoryBarrier(0xb);
  do {
    pppppiVar15 = *ppppppiVar11;
    bVar2 = (bool)hasExclusiveAccess(ppppppiVar11);
  } while (!bVar2);
  *ppppppiVar11 = (int *****)((int)pppppiVar15 + -1);
  if (pppppiVar15 == (int *****)0x1) {
    DataMemoryBarrier(0xb);
    FUN_0121cce0(*pppppppiVar19);
  }
  *(undefined2 *)(param_1 + 0x5c) = 0x100;
  FUN_019ec558((int)uVar25,uVar12);
  local_a0 = (int *******)0x2;
  FUN_00f319bc(param_1,&local_a0);
  return 0;
}

