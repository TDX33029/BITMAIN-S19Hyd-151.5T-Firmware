// FUN_0131c8c0 @ 0131c8c0 size=1740 calls_out=10 calls_in=3
// strings: overflow when adding duration to instant

void FUN_0131c8c0(uint *param_1)

{
  int *piVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  undefined4 in_stack_00000000;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint *local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  uint local_84 [2];
  uint local_7c;
  uint *local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint local_58;
  uint local_54;
  uint *local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  uVar5 = *param_1;
  local_b4 = uVar5 & 0xfffffffc;
  if (uVar5 < 0xfffffffc) {
    puVar7 = &local_b4;
    puVar16 = (undefined4 *)&DAT_0056d568;
LAB_0131cf10:
                    /* WARNING: Subroutine does not return */
    FUN_01304210(0,puVar7,puVar16,0);
  }
  local_b0 = uVar5 & 3;
  if (local_b0 != 3) {
    if (local_b0 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01304210(1,&local_b0,&DAT_00533278,0);
    }
    uVar3 = *param_1;
    if (uVar3 == uVar5) {
      DataMemoryBarrier(0xb);
      do {
        bVar18 = (bool)hasExclusiveAccess(param_1);
        if (bVar18) {
          *param_1 = 0;
          bVar18 = true;
          goto LAB_0131c934;
        }
        uVar3 = *param_1;
      } while (uVar3 == uVar5);
    }
    bVar18 = false;
    ClearExclusiveLocal();
LAB_0131c934:
    if (bVar18) {
      if (local_b0 != 1) {
LAB_0131c95c:
        DataMemoryBarrier(0xb);
        piVar1 = DAT_01d519e4;
        if (DAT_01d519e4 == (int *)0x0) {
          piVar1 = (int *)FUN_016518b8();
        }
        uVar3 = piVar1[1];
        uVar5 = (uint)((int)param_1 * -0x61c88647) >> (-piVar1[2] & 0x1fU);
        if (uVar3 <= (uint)((int)param_1 * -0x61c88647) >> (-piVar1[2] & 0x1fU)) goto LAB_0131cf70;
        puVar15 = (uint *)(*piVar1 + uVar5 * 0x40);
        puVar7 = puVar15 + 6;
        if (*puVar7 == 0) {
          bVar18 = (bool)hasExclusiveAccess(puVar7);
          if (!bVar18) goto LAB_0131c9f8;
          *puVar7 = 1;
          DataMemoryBarrier(0xb);
        }
        else {
          ClearExclusiveLocal();
LAB_0131c9f8:
          FUN_01652ed8(puVar7);
        }
        if (DAT_01d519e4 != piVar1) {
          DataMemoryBarrier(0xb);
          do {
            uVar5 = *puVar7;
            bVar18 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar18);
          *puVar7 = uVar5 - 1;
          if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
            FUN_01652d70(puVar7);
          }
          goto LAB_0131c95c;
        }
        puVar4 = puVar15 + 7;
        puVar13 = (uint *)*puVar4;
        if (puVar13 == (uint *)0x0) {
LAB_0131cd70:
          DataMemoryBarrier(0xb);
          do {
            uVar5 = *puVar7;
            bVar18 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar18);
          *puVar7 = uVar5 - 1;
          if (uVar5 < 4) {
            return;
          }
          if ((uVar5 & 2) == 0) {
            FUN_01652d70(puVar7);
            return;
          }
          return;
        }
        puVar2 = (uint *)0x0;
        if ((uint *)puVar13[1] != param_1) {
          do {
            puVar2 = puVar13;
            puVar13 = (uint *)puVar2[2];
            if (puVar13 == (uint *)0x0) goto LAB_0131cd70;
          } while ((uint *)puVar13[1] != param_1);
          puVar4 = puVar2 + 2;
        }
        uVar5 = puVar13[2];
        *puVar4 = uVar5;
        if ((uint *)puVar15[8] == puVar13) {
          puVar15[8] = (uint)puVar2;
        }
        else {
          while( true ) {
            if (uVar5 != 0) {
              puVar2 = *(uint **)(uVar5 + 4);
            }
            if (uVar5 == 0 || puVar2 == param_1) break;
            uVar5 = *(uint *)(uVar5 + 8);
          }
        }
        FUN_019ac130(&local_58,1);
        uVar3 = *puVar15;
        uVar5 = puVar15[1];
        bVar18 = (int)(uVar5 - (local_54 + (uVar3 < local_58))) < 0 !=
                 (SBORROW4(uVar5,local_54) != SBORROW4(uVar5 - local_54,(uint)(uVar3 < local_58)));
        if (local_58 == uVar3 && local_54 == uVar5) {
          bVar18 = puVar15[2] < local_50;
        }
        if (bVar18) {
          uVar5 = puVar15[4] ^ puVar15[4] << 0xd;
          uVar5 = uVar5 ^ uVar5 >> 0x11;
          uVar5 = uVar5 ^ uVar5 << 5;
          puVar15[4] = uVar5;
          puVar6 = (undefined1 *)(uVar5 + (short)(uVar5 / 1000000) * -1000000 + (int)local_50);
          if (&DAT_3b9aca00 <= puVar6) {
            bVar18 = 0xfffffffe < local_58;
            local_58 = local_58 + 1;
            uVar5 = local_54 + bVar18;
            if ((int)((local_54 ^ uVar5) & ~local_54) < 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
            }
            puVar6 = puVar6 + -1000000000;
            local_54 = uVar5;
          }
          *puVar15 = local_58;
          puVar15[1] = local_54;
          puVar15[2] = (uint)puVar6;
        }
        puVar13[3] = 0;
        DataMemoryBarrier(0xb);
        *puVar13 = 0;
        DataMemoryBarrier(0xb);
        do {
          uVar5 = *puVar7;
          bVar18 = (bool)hasExclusiveAccess(puVar7);
        } while (!bVar18);
        *puVar7 = uVar5 - 1;
        if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
          FUN_01652d70(puVar7);
        }
        software_interrupt(0);
        FUN_01be3b5a(puVar13,0x81,1,in_stack_00000000);
        return;
      }
      goto LAB_0131ca38;
    }
    if (uVar3 != 0xffffffff) {
      puVar7 = &local_ac;
      puVar16 = &DAT_0056d238;
      local_ac = uVar3;
      goto LAB_0131cf10;
    }
    local_ac = 0xffffffff;
  }
  DataMemoryBarrier(0xb);
  *param_1 = 2;
  local_b0 = 1;
LAB_0131ca38:
  uVar11 = ((uint)param_1 | 1) * -0x61c88647;
  do {
    DataMemoryBarrier(0xb);
    piVar1 = DAT_01d519e4;
    if (DAT_01d519e4 == (int *)0x0) {
      piVar1 = (int *)FUN_016518b8();
    }
    uVar3 = piVar1[1];
    uVar5 = uVar11 >> (-piVar1[2] & 0x1fU);
    if (uVar3 <= uVar11 >> (-piVar1[2] & 0x1fU)) {
LAB_0131cf70:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar5,uVar3,&DAT_01d068e8);
    }
    iVar14 = *piVar1 + uVar5 * 0x40;
    puVar7 = (uint *)(iVar14 + 0x18);
    if (*puVar7 == 0) {
      bVar18 = (bool)hasExclusiveAccess(puVar7);
      if (!bVar18) goto LAB_0131caf0;
      *puVar7 = 1;
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_0131caf0:
      FUN_01652ed8(puVar7);
    }
    if (DAT_01d519e4 == piVar1) {
      puVar16 = *(undefined4 **)(iVar14 + 0x1c);
      local_a8 = 0;
      local_84[0] = 0;
      if (puVar16 != (undefined4 *)0x0) {
        puVar15 = (uint *)((uint)&local_a8 | 4);
        puVar17 = (undefined4 *)0x0;
        puVar9 = (undefined4 *)(iVar14 + 0x1c);
        do {
          puVar10 = puVar16 + 2;
          puVar12 = (undefined4 *)*puVar10;
          if (puVar16[1] == ((uint)param_1 | 1)) {
            *puVar9 = puVar12;
            if (*(undefined4 **)(iVar14 + 0x20) == puVar16) {
              *(undefined4 **)(iVar14 + 0x20) = puVar17;
            }
            puVar16[3] = 0;
            DataMemoryBarrier(0xb);
            *puVar16 = 0;
            if (local_84[0] < 9) {
              uVar3 = 8;
              uVar5 = local_84[0];
              puVar13 = puVar15;
              puVar4 = local_84;
            }
            else {
              uVar5 = local_a4;
              puVar13 = local_a0;
              puVar4 = puVar15;
              uVar3 = local_84[0];
            }
            if (uVar5 == uVar3) {
              FUN_0131cfe0(&local_a8);
              uVar5 = local_a4;
              puVar13 = local_a0;
              puVar4 = puVar15;
            }
            puVar13[uVar5] = (uint)puVar16;
            *puVar4 = *puVar4 + 1;
            puVar10 = puVar9;
          }
          else {
            puVar17 = puVar16;
          }
          puVar9 = puVar10;
          puVar16 = puVar12;
        } while (puVar12 != (undefined4 *)0x0);
      }
      DataMemoryBarrier(0xb);
      do {
        uVar5 = *puVar7;
        bVar18 = (bool)hasExclusiveAccess(puVar7);
      } while (!bVar18);
      *puVar7 = uVar5 - 1;
      if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
        FUN_01652d70(puVar7);
      }
      if (local_84[0] < 9) {
        uVar3 = 0;
        puVar7 = &local_7c;
        uVar5 = local_84[0];
      }
      else {
        puVar7 = &local_58;
        uVar5 = local_a4;
        uVar3 = local_a8;
      }
      uStack_60 = uStack_88;
      uStack_64 = uStack_8c;
      uStack_68 = uStack_90;
      local_6c = local_94;
      uStack_70 = uStack_98;
      uStack_74 = uStack_9c;
      local_78 = local_a0;
      local_7c = local_84[0];
      local_58 = local_a4;
      *puVar7 = 0;
      uVar11 = local_7c;
      local_54 = local_58;
      local_50 = local_78;
      uStack_4c = uStack_74;
      uStack_48 = uStack_70;
      local_44 = local_6c;
      uStack_40 = uStack_68;
      uStack_3c = uStack_64;
      uStack_38 = uStack_60;
      local_34 = local_7c;
      local_58 = uVar3;
      local_2c = uVar5;
      if (uVar5 != 0) {
        uVar3 = 0;
        puVar7 = local_78;
        if (local_7c < 9) {
          puVar7 = (uint *)((uint)&local_58 | 4);
        }
        do {
          uVar8 = uVar3 + 1;
          local_30 = uVar8;
          FUN_01be6c3c(0xf0,puVar7[uVar3],0x81,1);
          uVar3 = uVar8;
        } while (uVar5 != uVar8);
      }
      if (8 < uVar11) {
        FUN_0134c054(uVar11,local_50,4,4);
      }
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar7;
      bVar18 = (bool)hasExclusiveAccess(puVar7);
    } while (!bVar18);
    *puVar7 = uVar5 - 1;
    if ((3 < uVar5) && ((uVar5 & 2) == 0)) {
      FUN_01652d70(puVar7);
    }
  } while( true );
}

