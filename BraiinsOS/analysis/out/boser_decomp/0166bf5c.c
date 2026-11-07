// FUN_0166bf5c @ 0166bf5c size=2888 calls_out=31 calls_in=7
// strings: overflow when adding duration to instant

void FUN_0166bf5c(uint *param_1,int param_2,undefined4 *param_3,undefined4 param_4,uint param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint *puVar10;
  int iVar11;
  int *piVar12;
  uint uVar13;
  int *piVar14;
  uint *puVar15;
  undefined1 *puVar16;
  uint uVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  undefined4 uVar21;
  uint *puVar22;
  uint uVar23;
  bool bVar24;
  undefined8 uVar25;
  uint local_110;
  uint local_108;
  uint local_104;
  uint *local_100 [14];
  undefined4 local_c8;
  uint local_c4;
  uint *local_c0;
  undefined4 local_bc;
  uint local_b8;
  uint uStack_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  undefined8 local_88;
  uint uStack_80;
  uint local_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  int local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  undefined4 uStack_4c;
  int local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  int iStack_38;
  uint uStack_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  puVar19 = (uint *)(param_2 + 0x90);
  local_bc = param_3[1];
  uVar21 = *param_3;
  uVar7 = *(uint *)(param_2 + 0x90);
  local_c0 = param_1;
  if ((uVar7 < 0xfffffff0) && ((uVar7 & 8) == 0)) {
    if (*puVar19 != uVar7) {
      ClearExclusiveLocal();
      goto LAB_0166c300;
    }
    bVar24 = (bool)hasExclusiveAccess(puVar19);
    if (!bVar24) goto LAB_0166c300;
    *puVar19 = uVar7 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_0166c300:
    FUN_0164cfdc(puVar19);
  }
  FUN_0165098c(puVar19);
  FUN_0165098c((uint)puVar19 | 1);
  uVar2 = local_bc;
  param_2 = param_2 + 0x98;
  iVar8 = FUN_0166d600(param_2,uVar21,local_bc);
  if (iVar8 != 0) {
    puVar9 = (undefined4 *)FUN_0166d7ac(iVar8,param_4,param_5);
    if (puVar9 != (undefined4 *)0x0) {
      piVar14 = (int *)*puVar9;
      do {
        iVar8 = *piVar14;
        bVar24 = (bool)hasExclusiveAccess(piVar14);
      } while (!bVar24);
      *piVar14 = iVar8 + 1;
      if (-1 < iVar8) {
        *local_c0 = 0x8000000a;
        local_c0[1] = (uint)piVar14;
        FUN_00b92330(puVar19);
        return;
      }
      goto LAB_0166c4d0;
    }
  }
  FUN_00b92330(puVar19);
  uVar7 = *puVar19;
  if ((uVar7 < 0xffffffec) && ((uVar7 & 0xc) == 0)) {
    if (*puVar19 != uVar7) {
      ClearExclusiveLocal();
      goto LAB_0166c33c;
    }
    bVar24 = (bool)hasExclusiveAccess(puVar19);
    if (!bVar24) goto LAB_0166c33c;
    *puVar19 = uVar7 + 0x14;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_0166c33c:
    FUN_0164e28c(puVar19);
  }
  FUN_0165098c(puVar19);
  FUN_0165098c((uint)puVar19 | 1);
  iVar8 = FUN_0166d600(param_2,uVar21,uVar2);
  if (iVar8 == 0) {
LAB_0166c0ec:
    local_c4 = param_5;
    local_c8 = param_4;
    FUN_0166f474(&local_98,param_3,param_4,param_5);
    uVar3 = local_90;
    uVar7 = local_94;
    local_b8 = local_8c;
    uStack_b4 = (uint)local_88;
    uStack_b0 = local_88._4_4_;
    uStack_ac = uStack_80;
    local_a8 = local_7c;
    uStack_a4 = uStack_78;
    uStack_a0 = uStack_74;
    local_9c = uStack_70;
    if (local_98 == 0x8000000a) {
      piVar14 = (int *)thunk_FUN_01be5118(0x30);
      uVar2 = local_bc;
      if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x30);
      }
      *piVar14 = 1;
      piVar14[1] = 1;
      piVar14[2] = uVar7;
      piVar14[3] = uVar3;
      piVar14[4] = local_b8;
      piVar14[5] = uStack_b4;
      piVar14[6] = uStack_b0;
      piVar14[7] = uStack_ac;
      piVar14[8] = local_a8;
      piVar14[9] = uStack_a4;
      piVar14[10] = uStack_a0;
      piVar14[0xb] = local_9c;
      do {
        uVar7 = *puVar19;
        bVar24 = (bool)hasExclusiveAccess(puVar19);
      } while (!bVar24);
      *puVar19 = uVar7 - 0xc;
      DataMemoryBarrier(0xb);
      if ((uVar7 & 0xfffffff0) != 0x10) {
        FUN_0164c85c(puVar19);
      }
      FUN_0166d9a4(&local_60,param_2,uVar21,uVar2);
      uVar7 = local_c4;
      if (local_60 == 0) {
        puVar9 = (undefined4 *)FUN_0166d7ac(local_50 + -0x18,local_c8,local_c4);
        puVar10 = local_c0;
        uVar3 = local_c4;
        if (puVar9 == (undefined4 *)0x0) {
          uVar21 = 0;
          if ((int)uVar7 < 0) {
LAB_0166c358:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar21,uVar7);
          }
          if (uVar7 == 0) {
            uVar13 = 1;
            uVar7 = 0;
          }
          else {
            uVar21 = 1;
            uVar13 = FUN_01298504(local_c4,1);
            uVar7 = uVar3;
            if (uVar13 == 0) goto LAB_0166c358;
          }
          FUN_01bed4e2(uVar13,local_c8,uVar3);
          local_90 = uVar3;
          do {
            iVar8 = *piVar14;
            bVar24 = (bool)hasExclusiveAccess(piVar14);
          } while (!bVar24);
          *piVar14 = iVar8 + 1;
          local_98 = uVar7;
          local_94 = uVar13;
          if (-1 < iVar8) {
            piVar12 = (int *)FUN_0166db9c(local_50 + -0x18,&local_98,piVar14);
            local_88 = CONCAT44(local_88._4_4_,(uint)local_88);
            if (piVar12 != (int *)0x0) {
              DataMemoryBarrier(0xb);
              do {
                iVar8 = *piVar12;
                bVar24 = (bool)hasExclusiveAccess(piVar12);
              } while (!bVar24);
              *piVar12 = iVar8 + -1;
              local_88 = CONCAT44(local_88._4_4_,(uint)local_88);
              if (iVar8 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01670d04();
              }
            }
            goto LAB_0166c3f8;
          }
        }
        else {
          piVar12 = (int *)*puVar9;
          do {
            iVar8 = *piVar12;
            bVar24 = (bool)hasExclusiveAccess(piVar12);
          } while (!bVar24);
          *piVar12 = iVar8 + 1;
          if (-1 < iVar8) {
            *local_c0 = 0x8000000a;
            local_c0[1] = (uint)piVar12;
            FUN_009dd354(puVar19);
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar14;
              bVar24 = (bool)hasExclusiveAccess(piVar14);
            } while (!bVar24);
            *piVar14 = iVar8 + -1;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01670d04(piVar14);
              return;
            }
            return;
          }
        }
      }
      else {
        local_48 = local_60;
        uStack_44 = uStack_5c;
        uStack_40 = uStack_58;
        uStack_3c = uStack_54;
        iStack_38 = local_50;
        uStack_34 = uStack_4c;
        uVar25 = FUN_01347f20();
        DataMemoryBarrier(0xb);
        if (DAT_01d51a20 != '\x02') {
          FUN_01347fb0();
        }
        FUN_0165018c(&local_98,0x10,4,1);
        puVar10 = local_c0;
        local_28 = local_c4;
        uVar21 = 0;
        local_88 = uVar25;
        if ((int)local_c4 < 0) {
LAB_0166c21c:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar21,local_28);
        }
        if (local_c4 == 0) {
          iVar8 = 1;
          uVar7 = 0;
        }
        else {
          uVar21 = 1;
          iVar8 = FUN_01298504(local_c4,1);
          uVar7 = local_28;
          if (iVar8 == 0) goto LAB_0166c21c;
        }
        FUN_01bed4e2(iVar8,local_c8,local_28);
        do {
          iVar11 = *piVar14;
          bVar24 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar24);
        *piVar14 = iVar11 + 1;
        local_30 = uVar7;
        local_2c = iVar8;
        if (-1 < iVar11) {
          piVar12 = (int *)FUN_0166db9c(&local_98,&local_30,piVar14);
          if (piVar12 != (int *)0x0) {
            DataMemoryBarrier(0xb);
            do {
              iVar8 = *piVar12;
              bVar24 = (bool)hasExclusiveAccess(piVar12);
            } while (!bVar24);
            *piVar12 = iVar8 + -1;
            if (iVar8 == 1) {
              DataMemoryBarrier(0xb);
              FUN_01670d04();
            }
          }
          FUN_0166dec8(&local_48,&local_98);
LAB_0166c3f8:
          *puVar10 = 0x8000000a;
          puVar10[1] = (uint)piVar14;
          FUN_009dd354(puVar19);
          return;
        }
      }
LAB_0166c4d0:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x166c4d0);
      (*pcVar1)();
    }
    local_c0[0xb] = local_6c;
    local_c0[0xc] = uStack_68;
    local_c0[0xd] = uStack_64;
    local_c0[1] = local_94;
    local_c0[2] = local_90;
    local_c0[3] = local_8c;
    local_c0[4] = (uint)local_88;
    local_c0[5] = local_88._4_4_;
    local_c0[6] = uStack_80;
    local_c0[7] = local_7c;
    local_c0[8] = uStack_78;
    local_c0[9] = uStack_74;
    local_c0[10] = uStack_70;
    uVar7 = local_98;
  }
  else {
    puVar10 = (uint *)FUN_0166d7ac(iVar8,param_4,param_5);
    if (puVar10 == (uint *)0x0) goto LAB_0166c0ec;
    piVar14 = (int *)*puVar10;
    do {
      iVar8 = *piVar14;
      bVar24 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar24);
    *piVar14 = iVar8 + 1;
    if (iVar8 < 0) goto LAB_0166c4d0;
    local_c0[1] = (uint)piVar14;
    uVar7 = 0x8000000a;
  }
  *local_c0 = uVar7;
  FUN_01650a90();
  FUN_01650a90((uint)puVar19 | 1);
  uVar7 = *puVar19;
  if ((uVar7 & 1) == 0) {
    if (*puVar19 == uVar7) {
      DataMemoryBarrier(0xb);
      bVar24 = (bool)hasExclusiveAccess(puVar19);
      if (bVar24) {
        *puVar19 = uVar7 - 0x14;
        return;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  uVar7 = *puVar19;
  while ((uVar7 & 1) == 0) {
    uVar3 = *puVar19;
    if (uVar3 == uVar7) {
      DataMemoryBarrier(0xb);
      bVar24 = (bool)hasExclusiveAccess(puVar19);
      if (bVar24) {
        *puVar19 = uVar7 - 0x14;
      }
    }
    else {
      bVar24 = false;
      ClearExclusiveLocal();
    }
    uVar7 = uVar3;
    if (bVar24) {
      return;
    }
  }
LAB_0164dd3c:
  DataMemoryBarrier(0xb);
  piVar14 = DAT_01d519e4;
  if (DAT_01d519e4 == (int *)0x0) {
    piVar14 = (int *)FUN_016518b8();
  }
  uVar7 = (uint)((int)puVar19 * -0x61c88647) >> (-piVar14[2] & 0x1fU);
  if ((uint)piVar14[1] <= (uint)((int)puVar19 * -0x61c88647) >> (-piVar14[2] & 0x1fU)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar7,piVar14[1],&DAT_01d068e8);
  }
  puVar22 = (uint *)(*piVar14 + uVar7 * 0x40);
  puVar10 = puVar22 + 6;
  if (*puVar10 == 0) {
    bVar24 = (bool)hasExclusiveAccess(puVar10);
    if (!bVar24) goto LAB_0164ddd8;
    *puVar10 = 1;
    DataMemoryBarrier(0xb);
  }
  else {
    ClearExclusiveLocal();
LAB_0164ddd8:
    FUN_01652ed8(puVar10);
  }
  if (DAT_01d519e4 != piVar14) {
    DataMemoryBarrier(0xb);
    do {
      uVar7 = *puVar10;
      bVar24 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar24);
    *puVar10 = uVar7 - 1;
    if ((3 < uVar7) && ((uVar7 & 2) == 0)) {
      FUN_01652d70(puVar10);
    }
    goto LAB_0164dd3c;
  }
  uVar7 = puVar22[7];
  local_108 = 0;
  uStack_a4 = 0;
  if (uVar7 == 0) {
    uVar3 = 0;
    local_110 = 0;
    uVar7 = 0;
  }
  else {
    puVar4 = (uint *)((uint)&local_108 | 4);
    uVar3 = 0;
    local_110 = 0;
    uVar13 = 0;
    puVar20 = puVar22 + 7;
    do {
      puVar5 = (uint *)(uVar7 + 8);
      uVar23 = *puVar5;
      if (*(uint **)(uVar7 + 4) == puVar19) {
        if ((uVar3 & 8) != 0) {
          local_110 = 1;
          break;
        }
        uVar18 = *(uint *)(uVar7 + 0x10);
        if ((uVar3 & 4) == 0 || (uVar18 & 0xc) == 0) {
          *puVar20 = uVar23;
          if (puVar22[8] == uVar7) {
            puVar22[8] = uVar13;
          }
          if (uStack_a4 < 9) {
            uVar17 = 8;
            uVar6 = uStack_a4;
            puVar5 = puVar4;
            puVar15 = &uStack_a4;
          }
          else {
            uVar6 = local_104;
            puVar5 = local_100[0];
            puVar15 = puVar4;
            uVar17 = uStack_a4;
          }
          if (uVar6 == uVar17) {
            FUN_0164ff80(&local_108);
            uVar6 = local_104;
            puVar5 = local_100[0];
            puVar15 = puVar4;
          }
          uVar3 = uVar18 + uVar3;
          puVar5[uVar6 * 3] = uVar7;
          (puVar5 + uVar6 * 3)[1] = 0;
          *puVar15 = *puVar15 + 1;
          uVar7 = uVar13;
          puVar5 = puVar20;
        }
        else {
          local_110 = 1;
        }
      }
      uVar13 = uVar7;
      puVar20 = puVar5;
      uVar7 = uVar23;
    } while (uVar23 != 0);
    if (uStack_a4 < 9) {
      uVar7 = uStack_a4;
    }
    else {
      uVar7 = local_104;
    }
  }
  uVar13 = uStack_a4;
  if (uVar7 != 0) {
    FUN_019ac130(&local_98,1);
    uVar7 = *puVar22;
    uVar23 = puVar22[1];
    bVar24 = (int)(uVar23 - (local_94 + (uVar7 < local_98))) < 0 !=
             (SBORROW4(uVar23,local_94) != SBORROW4(uVar23 - local_94,(uint)(uVar7 < local_98)));
    if (local_98 == uVar7 && local_94 == uVar23) {
      bVar24 = puVar22[2] < local_90;
    }
    if (bVar24) {
      uVar7 = puVar22[4] ^ puVar22[4] << 0xd;
      uVar7 = uVar7 ^ uVar7 >> 0x11;
      uVar7 = uVar7 ^ uVar7 << 5;
      puVar22[4] = uVar7;
      puVar16 = (undefined1 *)(uVar7 + (short)(uVar7 / 1000000) * -1000000 + local_90);
      if (&DAT_3b9aca00 <= puVar16) {
        bVar24 = 0xfffffffe < local_98;
        local_98 = local_98 + 1;
        uVar7 = local_94 + bVar24;
        if ((int)((local_94 ^ uVar7) & ~local_94) < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
        }
        puVar16 = puVar16 + -1000000000;
        local_94 = uVar7;
      }
      puVar22[2] = (uint)puVar16;
      *puVar22 = local_98;
      puVar22[1] = local_94;
      uVar7 = *puVar19;
      do {
        uVar23 = (uVar3 - 0x14) + uVar7;
        if (uVar23 < uVar7 - 0x14) goto LAB_0164e024;
        uVar18 = *puVar19;
        if (uVar18 == uVar7) {
          bVar24 = (bool)hasExclusiveAccess(puVar19);
          if (bVar24) {
            *puVar19 = uVar23 & 0xfffffffe | local_110;
          }
        }
        else {
          bVar24 = false;
          ClearExclusiveLocal();
        }
        uVar7 = uVar18;
      } while (!bVar24);
      uVar21 = 1;
      goto LAB_0164e06c;
    }
  }
  uVar7 = *puVar19;
LAB_0164e024:
  do {
    uVar3 = *puVar19;
    if (uVar3 == uVar7) {
      bVar24 = (bool)hasExclusiveAccess(puVar19);
      if (bVar24) {
        *puVar19 = (uVar7 & 0xfffffffe) + (local_110 | 0xffffffec);
      }
    }
    else {
      bVar24 = false;
      ClearExclusiveLocal();
    }
    uVar7 = uVar3;
  } while (!bVar24);
  uVar21 = 0;
LAB_0164e06c:
  if (uVar13 < 9) {
    local_100[0] = (uint *)((uint)&local_108 | 4);
  }
  else {
    uVar13 = local_104;
  }
  if (uVar13 != 0) {
    puVar19 = local_100[0] + uVar13 * 3;
    do {
      *(undefined4 *)(*local_100[0] + 0xc) = uVar21;
      puVar9 = (undefined4 *)*local_100[0];
      DataMemoryBarrier(0xb);
      *puVar9 = 0;
      local_100[0][1] = 1;
      local_100[0][2] = (uint)puVar9;
      local_100[0] = local_100[0] + 3;
    } while (local_100[0] != puVar19);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar7 = *puVar10;
    bVar24 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar24);
  *puVar10 = uVar7 - 1;
  if ((3 < uVar7) && ((uVar7 & 2) == 0)) {
    FUN_01652d70(puVar10);
  }
  uVar7 = 0;
  puVar19 = &local_9c;
  if (uStack_a4 < 9) {
    puVar19 = &uStack_a0;
  }
  uStack_a0 = uStack_a4;
  uVar3 = uStack_a4;
  if (8 < uStack_a4) {
    uVar3 = local_104;
  }
  local_9c = local_104;
  *puVar19 = 0;
  local_98 = local_108;
  local_94 = local_9c;
  FUN_01bed4e2(&local_90,local_100,0x5c);
  local_30 = 0;
  uStack_34 = uStack_a0;
  local_2c = uVar3;
  if (uVar3 != 0) {
    if (uStack_a0 < 9) {
      local_90 = (uint)&local_98 | 4;
    }
    piVar14 = (int *)(local_90 + 4);
    do {
      uVar7 = uVar7 + 1;
      local_30 = uVar7;
      if (*piVar14 == 2) break;
      FUN_01be6c3c(0xf0,piVar14[1],0x81,1);
      piVar14 = piVar14 + 3;
    } while (uVar3 != uVar7);
  }
  FUN_0164cc64(&local_98);
  return;
}

