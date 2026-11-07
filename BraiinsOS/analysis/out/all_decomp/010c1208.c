// FUN_010c1208 @ 010c1208 size=2368 calls_out=15 calls_in=1
// strings: pong received implies ping_sent_at | bdp enabled implies bytes

/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8 FUN_010c1208(uint *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  bool bVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  char *pcVar10;
  undefined1 extraout_r1;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined *puVar15;
  undefined1 uVar16;
  uint uVar17;
  int *piVar18;
  int *piVar19;
  undefined1 *puVar20;
  uint uVar21;
  uint uVar22;
  undefined1 *puVar23;
  uint *puVar24;
  uint uVar25;
  uint uVar26;
  bool bVar27;
  uint in_fpscr;
  double dVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  uint local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  undefined4 local_50;
  uint local_4c;
  undefined1 *local_48;
  undefined4 local_40;
  uint local_3c;
  uint local_38;
  undefined1 *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar22 = param_1[0x1c];
  piVar18 = (int *)(uVar22 + 8);
  do {
    if (*piVar18 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar18);
      goto LAB_010c1250;
    }
    bVar3 = (bool)hasExclusiveAccess(piVar18);
  } while (!bVar3);
  *piVar18 = 1;
  DataMemoryBarrier(0xb);
LAB_010c1250:
  local_70 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar2 = *(char *)(uVar22 + 0xc);
  }
  else {
    local_70 = FUN_015bf3f8();
    local_70 = local_70 ^ 1;
    cVar2 = *(char *)(uVar22 + 0xc);
  }
  if (cVar2 != '\0') {
    uVar22 = local_3c >> 8;
    local_3c = CONCAT31((int3)uVar22,(char)local_70);
    local_40 = piVar18;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_01884cb0,&DAT_01884cc0);
  }
  if (*(int *)(uVar22 + 0x48) == 0) {
    FUN_015f3b0c(&local_40,1);
  }
  else {
    (**(code **)(*(int *)(uVar22 + 0x4c) + 0x14))
              (&local_40,
               *(int *)(uVar22 + 0x48) + (*(int *)(*(int *)(uVar22 + 0x4c) + 8) - 1U & 0xfffffff8) +
               8);
  }
  uVar4 = local_38;
  uVar21 = local_3c;
  uVar9 = (uint)local_40;
  puVar24 = param_1 + 10;
  uVar25 = *(uint *)param_1[0x1c];
  if ((undefined1 *)param_1[0xc] != &DAT_3b9aca00) {
    FUN_010c1be8(puVar24,uVar25 < 3,uVar22 + 0x10);
    FUN_010c1dc4(puVar24,param_2,uVar25 < 3,uVar22 + 0x10);
  }
  if (*(undefined1 **)(uVar22 + 0x20) == &DAT_3b9aca00) {
    uVar5 = 2;
LAB_010c134c:
    if (((local_70 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
      *(undefined1 *)(uVar22 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar18;
      bVar3 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar3);
    *piVar18 = 0;
  }
  else {
    iVar13 = *(int *)(uVar22 + 0x50);
    piVar6 = (int *)*param_2;
    piVar19 = (int *)(iVar13 + 0x20);
    do {
      iVar12 = *piVar19;
      if (iVar12 != 0) {
        ClearExclusiveLocal();
        DataMemoryBarrier(0xb);
        if (iVar12 != 2) goto LAB_010c13d4;
        iVar12 = piVar6[1];
        puVar8 = (undefined4 *)(*piVar6 + 8);
        goto LAB_010c14c8;
      }
      bVar3 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar3);
    *piVar19 = 1;
    DataMemoryBarrier(0xb);
LAB_010c13d4:
    if (iVar12 == 0) {
      if (*(undefined4 **)(iVar13 + 0x18) == (undefined4 *)0x0) {
        iVar12 = piVar6[1];
LAB_010c1430:
        uVar31 = (**(code **)*piVar6)(iVar12);
        if (*(int *)(iVar13 + 0x18) != 0) {
          (**(code **)(*(int *)(iVar13 + 0x18) + 0xc))(*(undefined4 *)(iVar13 + 0x1c));
        }
        *(undefined8 *)(iVar13 + 0x18) = uVar31;
        iVar12 = *piVar19;
      }
      else {
        iVar12 = piVar6[1];
        if (*(int *)(iVar13 + 0x1c) != iVar12 ||
            *(undefined4 **)(iVar13 + 0x18) != (undefined4 *)*piVar6) goto LAB_010c1430;
        iVar12 = *piVar19;
      }
      if (iVar12 == 1) {
        DataMemoryBarrier(0xb);
        do {
          bVar3 = (bool)hasExclusiveAccess(piVar19);
          if (bVar3) {
            *piVar19 = 0;
            DataMemoryBarrier(0xb);
            iVar12 = *(int *)(iVar13 + 8);
            goto joined_r0x010c1530;
          }
        } while (*piVar19 == 1);
      }
      ClearExclusiveLocal();
      DataMemoryBarrier(0xb);
      iVar7 = *(int *)(iVar13 + 0x18);
      iVar12 = *(int *)(iVar13 + 0x1c);
      *(undefined4 *)(iVar13 + 0x18) = 0;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018576f8);
      }
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar3);
      *piVar19 = 0;
      DataMemoryBarrier(0xb);
      puVar8 = (undefined4 *)(iVar7 + 4);
LAB_010c14c8:
      (*(code *)*puVar8)(iVar12);
    }
    iVar12 = *(int *)(iVar13 + 8);
joined_r0x010c1530:
    if (iVar12 == 3) {
      piVar6 = (int *)(iVar13 + 8);
      DataMemoryBarrier(0xb);
      do {
        bVar3 = (bool)hasExclusiveAccess(piVar6);
        if (bVar3) {
          *piVar6 = 0;
          goto LAB_010c1540;
        }
        iVar12 = *piVar6;
      } while (iVar12 == 3);
    }
    ClearExclusiveLocal();
LAB_010c1540:
    DataMemoryBarrier(0xb);
    if (iVar12 == 3) {
LAB_010c15d8:
      puVar20 = *(undefined1 **)(uVar22 + 0x20);
      if (puVar20 == &DAT_3b9aca00) {
        uVar5 = 0x22;
        puVar15 = &DAT_01884cd0;
        pcVar10 = "pong received implies ping_sent_at";
LAB_010c1b50:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(pcVar10,uVar5,puVar15);
      }
      *(undefined1 **)(uVar22 + 0x20) = &DAT_3b9aca00;
      local_50 = *(uint *)(uVar22 + 0x18);
      local_4c = *(uint *)(uVar22 + 0x1c);
      local_5c = uVar21;
      local_60 = uVar9;
      local_58 = uVar4;
      local_48 = puVar20;
      FUN_015f3c24(&local_40,&local_60,&local_50);
      uVar5 = local_30;
      puVar20 = local_34;
      uVar14 = local_38;
      uVar17 = (uint)local_40;
      if ((undefined1 *)param_1[0xc] != &DAT_3b9aca00) {
        if (*(undefined1 **)(uVar22 + 0x40) != &DAT_3b9aca00) {
          if (*(int *)(uVar22 + 0x48) == 0) {
            FUN_015f3b0c(&local_40,1);
          }
          else {
            (**(code **)(*(int *)(uVar22 + 0x4c) + 0x14))
                      (&local_40,
                       *(int *)(uVar22 + 0x48) +
                       (*(int *)(*(int *)(uVar22 + 0x4c) + 8) - 1U & 0xfffffff8) + 8);
          }
          *(uint *)(uVar22 + 0x40) = local_38;
          *(int **)(uVar22 + 0x38) = local_40;
          *(uint *)(uVar22 + 0x3c) = local_3c;
        }
        FUN_010c1be8(puVar24,uVar25 < 3,uVar22 + 0x10);
        FUN_010c1dc4(puVar24,param_2,uVar25 < 3,uVar22 + 0x10);
      }
      puVar23 = (undefined1 *)param_1[2];
      if (puVar23 == &DAT_3b9aca00) goto LAB_010c1a20;
      if (*(int *)(uVar22 + 0x10) == 0) {
        uVar5 = 0x19;
        puVar15 = &DAT_01884ce0;
        pcVar10 = "bdp enabled implies bytes";
        goto LAB_010c1b50;
      }
      uVar26 = *(uint *)(uVar22 + 0x14);
      *(undefined4 *)(uVar22 + 0x10) = 1;
      *(undefined4 *)(uVar22 + 0x14) = 0;
      uVar25 = param_1[8];
      if (uVar25 == 0x1000000) {
LAB_010c1804:
        uVar17 = *param_1;
        uVar25 = param_1[1];
        if (-uVar25 < (uint)(uVar17 < 10)) {
          uVar14 = param_1[9];
          param_1[9] = uVar14 + 1;
          if (uVar14 + 1 < 2) {
            bVar3 = false;
            puVar20 = puVar23;
          }
          else {
            bVar3 = false;
            param_1[9] = 0;
            uVar14 = uVar17 * 4;
            uVar26 = uVar17 >> 0x1e;
            uVar1 = (uint)(ZEXT48(puVar23) * 0x44b82fa1 >> 0x3a);
            uVar17 = uVar14 + uVar1;
            *param_1 = uVar17;
            uVar25 = (uVar25 << 2 | uVar26) + (uint)CARRY4(uVar14,uVar1);
            param_1[1] = uVar25;
            puVar20 = (undefined1 *)
                      ((int)puVar23 * 4 +
                      (uint)((ulonglong)(((uint)puVar23 & 0x3fffffff) >> 7) * 0x44b83 >> 0x27) *
                      -1000000000);
            param_1[2] = (uint)puVar20;
          }
          goto LAB_010c1934;
        }
        uVar14 = uVar21 + uVar25 + (uint)CARRY4(uVar9,uVar17);
        bVar3 = false;
        if ((int)uVar25 < 0 != (int)((uVar21 ^ uVar14) & ~(uVar21 ^ uVar25)) < 0) goto LAB_010c1984;
      }
      else {
        dVar29 = (double)FUN_01845f30(uVar14,puVar20);
        dVar30 = *(double *)(param_1 + 6);
        dVar28 = (double)VectorUnsignedToFloat(uVar5,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        dVar28 = dVar28 / 1000000000.0 + dVar29;
        if (uVar17 != 0) {
          dVar28 = 0.0;
        }
        dVar29 = dVar30 + (dVar28 - dVar30) * 0.125;
        if (dVar30 == 0.0) {
          dVar29 = dVar28;
        }
        dVar28 = (double)VectorUnsignedToFloat(uVar26,(byte)((in_fpscr & 0xfffffff) >> 0x16) & 3);
        dVar28 = dVar28 / (dVar29 * 1.5);
        *(double *)(param_1 + 6) = dVar29;
        if ((dVar28 < *(double *)(param_1 + 4)) ||
           (*(double *)(param_1 + 4) = dVar28, uVar26 < (uVar25 << 1) / 3)) goto LAB_010c1804;
        puVar24 = (uint *)&DAT_01000000;
        if (uVar26 << 1 < 0x1000000) {
          puVar24 = (uint *)(uVar26 << 1);
        }
        param_1[8] = (uint)puVar24;
        param_1[9] = 0;
        puVar20 = (undefined1 *)((uint)puVar23 >> 1);
        if ((*param_1 & 1) != 0) {
          puVar20 = (undefined1 *)(((uint)puVar23 >> 1) + 500000000);
        }
        uVar25 = param_1[1] >> 1;
        uVar17 = (uint)((byte)param_1[1] & 1) << 0x1f | *param_1 >> 1;
        bVar3 = true;
        *param_1 = uVar17;
        param_1[1] = uVar25;
        param_1[2] = (uint)puVar20;
LAB_010c1934:
        uVar14 = uVar21 + uVar25 + (uint)CARRY4(uVar9,uVar17);
        puVar23 = puVar20;
        if ((int)((uVar21 ^ uVar14) & ~(uVar21 ^ uVar25)) < 0) goto LAB_010c1984;
      }
      uVar9 = uVar9 + uVar17;
      puVar23 = puVar23 + uVar4;
      uVar21 = uVar14;
      if ((undefined1 *)0x3b9ac9ff < puVar23) {
        bVar27 = 0xfffffffe < uVar9;
        uVar9 = uVar9 + 1;
        uVar21 = uVar14 + bVar27;
        if ((int)((uVar14 ^ uVar21) & ~uVar14) < 0) {
LAB_010c1984:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
        }
        puVar23 = puVar23 + -1000000000;
      }
      *(undefined1 **)(uVar22 + 0x30) = puVar23;
      *(uint *)(uVar22 + 0x28) = uVar9;
      uVar5 = 0;
      *(uint *)(uVar22 + 0x2c) = uVar21;
      if (bVar3) goto LAB_010c134c;
    }
    else if (iVar12 == 4) {
      uVar17 = local_50 >> 0x10;
      local_50 = CONCAT22((short)uVar17,0xb01);
      FUN_0102e79c(&local_40,&local_50);
      uVar17 = (uint)local_40 & 0xff;
      puVar20 = &DAT_3b9aca00;
      if (uVar17 == 3) goto LAB_010c15d8;
      if (uVar17 == 4) goto LAB_010c1584;
      uVar11 = local_40._1_1_;
      uVar16 = (undefined1)local_40;
      if (uVar17 != 0) {
        puVar20 = local_34;
        if (uVar17 == 1) {
          local_64 = local_2c;
          local_68 = local_30;
          uVar16 = 1;
        }
        else {
          if (local_3c == 0x80000000) {
            local_60 = CONCAT31(CONCAT21(local_60._2_2_,local_40._1_1_),1);
            local_38 = 1;
          }
          else {
            local_50 = local_3c;
            local_4c = local_38;
            local_48 = local_34;
            FUN_01650c14(&local_60,local_40._1_1_,&local_50);
            local_38 = local_5c;
            uVar11 = extraout_r1;
          }
          local_3c = local_60;
          uVar16 = 4;
        }
      }
      local_2c = local_64;
      local_30 = local_68;
      local_40 = (int *)CONCAT31(CONCAT21(local_40._2_2_,uVar11),uVar16);
      local_34 = puVar20;
      FUN_014ed8bc(&local_40);
    }
    else {
LAB_010c1584:
      if ((((undefined1 *)param_1[0xc] != &DAT_3b9aca00) && (0x3b9aca01 < param_1[0x14])) &&
         (iVar13 = (**(code **)(param_1[0x17] + 0xc))(param_1[0x16],param_2), iVar13 == 0)) {
        FUN_010c2110(puVar24);
        uVar5 = 1;
        param_1[0xc] = (uint)&DAT_3b9aca00;
        *(undefined1 *)(uVar22 + 0x54) = 1;
        goto LAB_010c134c;
      }
    }
LAB_010c1a20:
    if (((local_70 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
      *(undefined1 *)(uVar22 + 0xc) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar13 = *piVar18;
      bVar3 = (bool)hasExclusiveAccess(piVar18);
    } while (!bVar3);
    *piVar18 = 0;
    uVar5 = 2;
  }
  if (iVar13 == 2) {
    FUN_016d6968(0xf0,piVar18,0x81,1);
    return CONCAT44(puVar24,uVar5);
  }
  return CONCAT44(puVar24,uVar5);
}

