// FUN_0118d7ec @ 0118d7ec size=1412 calls_out=23 calls_in=1
// strings: $recursiveRef | $recursiveRef | location must start with resource_base

void FUN_0118d7ec(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int *piVar13;
  undefined4 uVar14;
  int *piVar15;
  undefined *puVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  uint local_16c;
  int local_158 [14];
  undefined4 local_120;
  undefined4 uStack_11c;
  int *piStack_118;
  undefined *local_110;
  undefined *local_10c;
  int *local_108;
  int iStack_104;
  int local_100;
  int local_fc;
  int iStack_f8;
  int iStack_f4;
  int iStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined *local_d8;
  int *local_d4;
  undefined8 local_d0;
  int *local_c8;
  uint local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *local_a0;
  uint local_9c;
  int *local_98;
  uint local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  int *piStack_80;
  undefined1 auStack_7c [44];
  undefined1 local_50;
  int local_48;
  undefined4 local_44;
  undefined8 local_34;
  int *local_2c;
  uint local_28;
  
  if (*param_4 != '\x03') {
    puVar16 = (undefined *)
              FUN_011ea9f8(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                           "$recursiveRef",0xd,param_4);
    puVar8 = (undefined4 *)0x0;
    goto LAB_0118dce8;
  }
  uVar10 = *(uint *)(param_2 + 0x3c);
  uVar11 = *(uint *)(param_2 + 0x44);
  if (uVar10 < uVar11) {
LAB_0118dd2c:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("location must start with resource_base",0x26,&DAT_0188af28);
  }
  uVar5 = *(undefined4 *)(param_4 + 0xc);
  uVar9 = *(undefined4 *)(param_4 + 8);
  iVar12 = *(int *)(param_2 + 0x38) + 8;
  iVar6 = thunk_FUN_016dd50a(*(int *)(param_2 + 0x40) + 8,iVar12,uVar11);
  if (iVar6 != 0) goto LAB_0118dd2c;
  uVar17 = FUN_011e1508(iVar12 + uVar11,uVar10 - uVar11);
  uVar14 = (undefined4)((ulonglong)uVar17 >> 0x20);
  piVar13 = (int *)uVar17;
  uVar17 = FUN_0123ab30(piVar13,uVar14,"$recursiveRef",0xd);
  piVar7 = (int *)uVar17;
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar13,uVar14);
  }
  uVar14 = *(undefined4 *)(param_2 + 0x50);
  piVar13 = *(int **)(param_2 + 0x54);
  do {
    iVar6 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar6 + 1;
  if (iVar6 < 0) goto LAB_0118dd70;
  local_110 = (undefined *)piVar13[3];
  local_10c = (undefined *)piVar13[4];
  local_108 = (int *)piVar13[5];
  iStack_104 = piVar13[6];
  local_100 = piVar13[7];
  local_fc = piVar13[8];
  iStack_f8 = piVar13[9];
  iStack_f4 = piVar13[10];
  iStack_f0 = piVar13[0xb];
  FUN_0134831c(&local_d8,uVar14,&local_110,uVar9,uVar5);
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar13;
    bVar2 = (bool)hasExclusiveAccess(piVar13);
  } while (!bVar2);
  *piVar13 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_013532e4(piVar13);
  }
  piVar13 = local_d4;
  if (local_d8 == (undefined *)0x8000000a) {
    uVar11 = local_d4[4];
    uVar10 = local_d4[6];
    if (local_d4[8] != 0) {
      uVar10 = local_d4[8];
    }
    if (uVar10 == uVar11) {
LAB_0118da04:
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar6 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_0118dd70;
      uVar18 = CONCAT44(DAT_018da8b8,DAT_018da8b4);
    }
    else {
      uVar10 = uVar10 + 1;
      if ((uVar11 < uVar10) ||
         ((uVar10 != 0 && uVar10 < uVar11 && (*(char *)(local_d4[3] + uVar10) < -0x40)))) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac();
      }
      if ((uVar11 == uVar10) || (*(char *)(local_d4[3] + uVar10) != '/')) goto LAB_0118da04;
      uVar18 = FUN_011e1508();
    }
    local_16c = (uint)((ulonglong)uVar18 >> 0x20);
    piVar15 = (int *)uVar18;
    FUN_012633f8(&local_110,param_2,uVar9,uVar5);
    puVar16 = local_10c;
    if (local_110 == (undefined *)0x1) {
LAB_0118dc48:
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar15;
        bVar2 = (bool)hasExclusiveAccess(piVar15);
      } while (!bVar2);
      *piVar15 = iVar6 + -1;
      bVar2 = true;
      puVar8 = (undefined4 *)0x0;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piVar15,local_16c);
      }
    }
    else {
      if (local_10c == (undefined *)0x0) {
        FUN_01265564(local_158,param_2,uVar9,uVar5);
        if (local_158[0] == -0x7ffffff6) {
          FUN_012643bc(&local_d8,param_2);
          uVar10 = local_c4;
          piVar4 = local_d4;
          if (local_d8 == (undefined *)0x8000000a) {
            uVar5 = *(undefined4 *)(param_2 + 0x4c);
            local_120 = (int *)local_d0;
            uStack_11c = local_d0._4_4_;
            piStack_118 = local_c8;
            FUN_01348cc4(&local_110,uVar5,local_c4 & 0xff,local_d4);
            do {
              iVar6 = *piVar15;
              bVar2 = (bool)hasExclusiveAccess(piVar15);
            } while (!bVar2);
            *piVar15 = iVar6 + 1;
            if (iVar6 < 0) {
LAB_0118dd70:
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x118dd70);
              (*pcVar1)();
            }
            uVar9 = *(undefined4 *)(param_2 + 0x48);
            do {
              iVar6 = *piVar15;
              bVar2 = (bool)hasExclusiveAccess(piVar15);
            } while (!bVar2);
            *piVar15 = iVar6 + 1;
            if (iVar6 < 0) goto LAB_0118dd70;
            FUN_0119dc58(auStack_7c,param_2 + 0x5c);
            local_88 = local_120;
            uStack_84 = uStack_11c;
            piStack_80 = piStack_118;
            local_d8 = local_110;
            local_d4 = (int *)local_10c;
            local_d0._0_4_ = local_108;
            local_d0._4_4_ = iStack_104;
            local_c8 = (int *)local_100;
            local_c4 = local_fc;
            iStack_c0 = iStack_f8;
            iStack_bc = iStack_f4;
            iStack_b8 = iStack_f0;
            local_b4 = local_ec;
            uStack_b0 = uStack_e8;
            uStack_ac = uStack_e4;
            uStack_a8 = uStack_e0;
            uStack_a4 = uStack_dc;
            local_50 = (undefined1)uVar10;
            local_94 = local_16c;
            local_9c = local_16c;
            local_a0 = piVar15;
            local_98 = piVar15;
            local_90 = uVar9;
            local_8c = uVar5;
            FUN_0125b034(&local_48,&local_d8,piVar4,piVar13);
            local_28 = local_16c;
            local_2c = piVar15;
            local_34 = uVar17;
            if (local_48 == 0) {
              FUN_011eabec(&local_34);
              puVar16 = (undefined *)FUN_011f0ab8(local_44);
              puVar8 = (undefined4 *)0x0;
            }
            else {
              puVar8 = (undefined4 *)FUN_011eac58(&local_34,&local_48);
              puVar16 = &DAT_0188a290;
            }
            FUN_01161600(&local_d8);
            goto LAB_0118dce8;
          }
          puVar16 = (undefined *)FUN_011e9f60(&local_d8);
        }
        else {
          puVar16 = (undefined *)FUN_011e9f60(local_158);
        }
        goto LAB_0118dc48;
      }
      local_c4 = local_16c;
      local_d4 = local_108;
      local_d8 = local_10c;
      local_c8 = piVar15;
      local_d0 = uVar17;
      puVar8 = (undefined4 *)thunk_FUN_016d4a50(0x18);
      if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x18);
      }
      bVar2 = false;
      puVar16 = &DAT_0188a290;
      *puVar8 = local_d8;
      puVar8[1] = local_d4;
      *(undefined8 *)(puVar8 + 2) = local_d0;
      puVar8[4] = local_c8;
      puVar8[5] = local_c4;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar6 = *piVar13;
      bVar3 = (bool)hasExclusiveAccess(piVar13);
    } while (!bVar3);
    *piVar13 = iVar6 + -1;
    if (iVar6 == 1) {
      DataMemoryBarrier(0xb);
      FUN_013532e4(piVar13);
    }
    if (!bVar2) goto LAB_0118dce8;
  }
  else {
    puVar16 = (undefined *)FUN_011e9f60(&local_d8);
    puVar8 = (undefined4 *)0x0;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar6 = *piVar7;
    bVar2 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar2);
  *piVar7 = iVar6 + -1;
  if (iVar6 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(piVar7,(int)((ulonglong)uVar17 >> 0x20));
  }
LAB_0118dce8:
  param_1[2] = puVar16;
  *param_1 = 1;
  param_1[1] = puVar8;
  return;
}

