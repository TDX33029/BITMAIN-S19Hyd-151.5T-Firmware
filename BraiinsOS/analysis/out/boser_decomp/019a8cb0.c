// FUN_019a8cb0 @ 019a8cb0 size=4180 calls_out=27 calls_in=2
// strings: internal error: entered unreachable code: the thread info setup logic isn't recursive

/* WARNING: Removing unreachable block (ram,0x019a8d98) */

uint FUN_019a8cb0(int param_1)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  int extraout_r2;
  int iVar13;
  ushort *puVar14;
  int iVar15;
  int extraout_r3;
  int iVar16;
  int iVar17;
  int iVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  undefined *puVar23;
  uint unaff_r7;
  int *unaff_r8;
  undefined4 *unaff_r9;
  int unaff_r10;
  int *piVar24;
  uint uVar25;
  bool bVar26;
  undefined8 uVar27;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int *local_a8;
  int local_a4;
  int local_78;
  uint local_74;
  uint local_70;
  int local_6c;
  uint local_68;
  int *local_64;
  uint local_60;
  int local_44;
  int local_40;
  int local_3c [3];
  undefined4 local_30;
  int *local_2c;
  code *local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_01d51a98 == '\0') {
    return 0;
  }
  if (param_1 != 0) goto LAB_019a9200;
  FUN_01bed93e(&local_68,0,0x24);
  uVar3 = FUN_01bef8f4();
  iVar4 = FUN_01beed1c(uVar3,&local_68);
  if (iVar4 != 0) goto LAB_019a9200;
  local_44 = 0;
  local_40 = FUN_01bee480(&local_68,&local_44);
  if (local_40 == 0) {
    if (local_44 == 0) {
      local_44 = DAT_01d51a9c;
    }
    local_3c[0] = 0;
    local_3c[1] = 0;
    local_3c[2] = FUN_01bee48a(&local_68,local_3c,local_3c + 1);
    iVar7 = local_3c[0];
    iVar4 = local_44;
    if (local_3c[2] != 0) goto LAB_019a8f84;
    local_2c = (int *)FUN_01bee47c(&local_68);
    if (local_2c != (int *)0x0) goto LAB_019a8fa0;
    local_70 = FUN_01be6c3c(0xe0);
    uVar27 = thunk_FUN_01bee35a(local_70,0x240);
    puVar5 = *(uint **)((int)uVar27 + (int)((ulonglong)uVar27 >> 0x20));
    if (puVar5 < &DAT_00000003) {
      ClearExclusiveLocal();
      uVar27 = thunk_FUN_01bee35a(&DAT_01d51ab0,DAT_01d51ab0 | DAT_01d51ab4);
      unaff_r10 = 4;
      unaff_r9 = (undefined4 *)0x0;
      if (((int)((ulonglong)uVar27 >> 0x20) != 0) &&
         (*(int *)((int)uVar27 + 0x238) == extraout_r2 &&
          *(int *)((int)uVar27 + 0x23c) == extraout_r3)) {
        unaff_r9 = (undefined4 *)thunk_FUN_01be5118(4);
        if (unaff_r9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(1,4);
        }
        *unaff_r9 = 0x6e69616d;
      }
    }
    else {
      puVar23 = (undefined *)puVar5[2];
      if (puVar23 == (undefined *)0x0) {
        unaff_r9 = (undefined4 *)0x0;
        ClearExclusiveLocal();
        if ((DAT_01d51ab0 != 0 || DAT_01d51ab4 != 0) &&
           (DAT_01d51ab0 == *puVar5 && DAT_01d51ab4 == puVar5[1])) {
          unaff_r10 = 4;
          puVar23 = &DAT_0056f91c;
          goto LAB_019a8e8c;
        }
      }
      else {
        unaff_r10 = puVar5[3] - 1;
        if (unaff_r10 == 0) {
          unaff_r9 = (undefined4 *)&DAT_00000001;
          unaff_r10 = 0;
        }
        else {
LAB_019a8e8c:
          unaff_r9 = (undefined4 *)FUN_01298504(unaff_r10,1);
          if (unaff_r9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(1,unaff_r10);
          }
        }
        FUN_01bed4e2(unaff_r9,puVar23,unaff_r10);
      }
    }
    local_74 = iVar7 - iVar4;
    unaff_r7 = FUN_01be3244();
    unaff_r8 = &DAT_01d51a88;
    do {
      if (DAT_01d51a88 != 0) {
        ClearExclusiveLocal();
        FUN_0197ade4(&DAT_01d51a88);
        goto LAB_019a8ef0;
      }
      bVar2 = (bool)hasExclusiveAccess(0x1d51a88);
    } while (!bVar2);
    DAT_01d51a88 = 1;
    DataMemoryBarrier(0xb);
LAB_019a8ef0:
    local_6c = iVar7;
    uVar19 = 0;
    if ((DAT_01d51b08 & 0x7fffffff) != 0) goto LAB_019a8fbc;
  }
  else {
    FUN_019abc1c(&local_40,&DAT_00533278,0,&DAT_01d2791c);
LAB_019a8f84:
    FUN_019abc1c(local_3c + 2,&DAT_00533278,0,&DAT_01d2790c);
LAB_019a8fa0:
    FUN_019abc1c(&local_2c,&DAT_00533278,0,&DAT_01d278fc);
LAB_019a8fbc:
    uVar19 = FUN_0197ac0c();
    uVar19 = uVar19 ^ 1;
  }
  iVar4 = unaff_r8[1];
  local_60 = CONCAT31(local_60._1_3_,(char)uVar19);
  local_68 = (uint)((char)iVar4 != '\0');
  do {
    local_64 = unaff_r8;
    if (DAT_01d51a90 != 0) {
      do {
        ClearExclusiveLocal();
        if (DAT_01d51a90 == unaff_r7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("internal error: entered unreachable code: the thread info setup logic isn\'t recursive"
                       ,0xab,&DAT_01d278ec);
        }
        FUN_01bf036a();
        while (DAT_01d51a90 == 0) {
          bVar2 = (bool)hasExclusiveAccess(0x1d51a90);
          if (bVar2) goto LAB_019a8fe0;
        }
      } while( true );
    }
    bVar2 = (bool)hasExclusiveAccess(0x1d51a90);
  } while (!bVar2);
LAB_019a8fe0:
  DataMemoryBarrier(0xb);
  iVar7 = (int)local_70 >> 0x1f;
  DAT_01d51a90 = unaff_r7;
  if (DAT_01d51a7c != (int *)0x0) {
    uVar6 = DAT_01d51a80;
    piVar24 = DAT_01d51a7c;
    do {
      uVar1 = *(ushort *)((int)piVar24 + 0x13a);
      uVar20 = (uint)uVar1;
      iVar13 = uVar20 << 2;
      iVar16 = 0x43;
      do {
        iVar9 = iVar16;
        if (iVar13 == 0) {
          uVar25 = uVar20;
          goto LAB_019a907c;
        }
        iVar13 = iVar13 + -4;
        bVar26 = unaff_r7 < (uint)piVar24[iVar9];
        bVar2 = !bVar26 && unaff_r7 != piVar24[iVar9];
        iVar16 = iVar9 + 1;
      } while ((char)(bVar2 - bVar26) == '\x01');
      if (bVar2 == bVar26) {
        piVar24 = piVar24 + (iVar9 + -0x43) * 6;
        *piVar24 = local_70;
        piVar24[1] = iVar7;
        iVar7 = piVar24[2];
        iVar13 = piVar24[3];
        piVar24[2] = (int)unaff_r9;
        piVar24[3] = unaff_r10;
        piVar24[4] = local_74;
        piVar24[5] = local_6c;
        if (iVar7 != 0 && iVar13 != 0) {
          thunk_FUN_01be4678();
        }
        goto LAB_019a916c;
      }
      uVar25 = iVar9 - 0x43;
LAB_019a907c:
      if (uVar6 == 0) goto LAB_019a92c0;
      uVar6 = uVar6 - 1;
      piVar24 = (int *)piVar24[uVar25 + 0x50];
    } while( true );
  }
  piVar24 = (int *)thunk_FUN_01be5118(0x140);
  if (piVar24 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x140);
  }
  *(undefined2 *)((int)piVar24 + 0x13a) = 1;
  piVar24[0x43] = unaff_r7;
  piVar24[0x42] = 0;
  *piVar24 = local_70;
  piVar24[1] = iVar7;
  piVar24[2] = (int)unaff_r9;
  piVar24[3] = unaff_r10;
  piVar24[4] = local_74;
  piVar24[5] = local_6c;
  DAT_01d51a80 = 0;
  DAT_01d51a7c = piVar24;
  goto LAB_019a9154;
LAB_019a92c0:
  puVar14 = (ushort *)((int)piVar24 + 0x13a);
  if (uVar20 < 0xb) {
    puVar5 = (uint *)(piVar24 + uVar25 + 0x43);
    if (uVar25 < uVar20) {
      FUN_01bed864(puVar5 + 1,puVar5,(uVar20 - uVar25) * 4);
      piVar24[uVar25 + 0x43] = unaff_r7;
      FUN_01bed864(piVar24 + uVar25 * 6 + 6,piVar24 + uVar25 * 6,(uVar20 - uVar25) * 0x18);
    }
    else {
      *puVar5 = unaff_r7;
    }
    piVar24 = piVar24 + uVar25 * 6;
    *piVar24 = local_70;
    piVar24[1] = iVar7;
    piVar24[2] = (int)unaff_r9;
    piVar24[3] = unaff_r10;
    piVar24[4] = local_74;
    piVar24[5] = local_6c;
    *puVar14 = uVar1 + 1;
  }
  else {
    if (uVar25 < 5) {
      uVar6 = 4;
      bVar2 = false;
    }
    else if (uVar25 == 5) {
      bVar2 = false;
      uVar6 = 5;
    }
    else {
      if (uVar25 == 6) {
        uVar6 = 5;
        uVar25 = 0;
      }
      else {
        uVar25 = uVar25 - 7;
        uVar6 = 6;
      }
      bVar2 = true;
    }
    piVar8 = (int *)thunk_FUN_01be5118(0x140);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x140);
    }
    piVar8[0x42] = 0;
    uVar20 = (uint)*puVar14 + ~uVar6;
    piVar10 = piVar24 + uVar6 * 6;
    iVar13 = piVar10[2];
    iVar16 = piVar10[3];
    *(short *)((int)piVar8 + 0x13a) = (short)uVar20;
    if (0xb < uVar20) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,uVar20,0xb,&DAT_01d27f54);
    }
    iVar12 = piVar24[uVar6 + 0x43];
    iVar21 = *piVar10;
    iVar17 = piVar10[1];
    iVar18 = piVar10[4];
    iVar9 = piVar10[5];
    FUN_01bed4e2(piVar8 + 0x43,piVar24 + uVar6 + 0x44,uVar20 * 4);
    FUN_01bed4e2(piVar8,piVar24 + (uVar6 + 1) * 6,uVar20 * 0x18);
    *puVar14 = (ushort)uVar6;
    piVar10 = piVar8;
    if (!bVar2) {
      piVar10 = piVar24;
    }
    puVar5 = (uint *)(piVar10 + uVar25 + 0x43);
    uVar1 = *(ushort *)((int)piVar10 + 0x13a);
    if (uVar25 < uVar1) {
      iVar15 = uVar1 - uVar25;
      FUN_01bed864(puVar5 + 1,puVar5,iVar15 * 4);
      piVar10[uVar25 + 0x43] = unaff_r7;
      FUN_01bed864(piVar10 + uVar25 * 6 + 6,piVar10 + uVar25 * 6,iVar15 * 0x18);
    }
    else {
      *puVar5 = unaff_r7;
    }
    piVar22 = piVar10 + uVar25 * 6;
    *piVar22 = local_70;
    piVar22[1] = iVar7;
    piVar22[4] = local_74;
    piVar22[3] = unaff_r10;
    piVar22[2] = (int)unaff_r9;
    *(ushort *)((int)piVar10 + 0x13a) = uVar1 + 1;
    piVar10 = (int *)piVar24[0x42];
    piVar22[5] = local_6c;
    if (piVar10 == (int *)0x0) {
      local_74 = 0;
    }
    else {
      local_74 = 0;
      iVar7 = iVar9;
      local_b8 = iVar12;
      local_b4 = iVar21;
      local_b0 = iVar17;
      local_ac = iVar18;
      local_a8 = piVar8;
      local_a4 = iVar13;
      local_78 = iVar16;
      do {
        piVar22 = piVar10;
        puVar14 = (ushort *)((int)piVar22 + 0x13a);
        uVar20 = (uint)*puVar14;
        uVar6 = (uint)*(ushort *)(piVar24 + 0x4e);
        if (uVar20 < 0xb) {
          if (uVar6 < uVar20) {
            FUN_01bed864(piVar22 + uVar6 + 0x44,piVar22 + uVar6 + 0x43,(uVar20 - uVar6) * 4);
            piVar22[uVar6 + 0x43] = local_b8;
            FUN_01bed864(piVar22 + (uVar6 + 1) * 6,piVar22 + uVar6 * 6,(uVar20 - uVar6) * 0x18);
          }
          else {
            piVar22[uVar6 + 0x43] = local_b8;
          }
          piVar24 = piVar22 + uVar6 * 6;
          *piVar24 = local_b4;
          piVar24[2] = local_a4;
          piVar24[3] = local_78;
          piVar24[1] = local_b0;
          piVar24[4] = local_ac;
          piVar24[5] = iVar7;
          if (uVar6 < uVar20) {
            FUN_01bed864(piVar22 + uVar6 + 0x52,piVar22 + uVar6 + 0x51,(uVar20 - uVar6) * 4);
          }
          piVar22[uVar6 + 0x51] = (int)local_a8;
          *puVar14 = (ushort)(uVar20 + 1);
          if (uVar6 + 1 < uVar20 + 2) {
            do {
              iVar7 = piVar22[uVar6 + 0x51];
              uVar6 = uVar6 + 1;
              *(short *)(iVar7 + 0x138) = (short)uVar6;
              *(int **)(iVar7 + 0x108) = piVar22;
            } while (uVar20 + 1 != uVar6);
          }
          goto LAB_019a9154;
        }
        if (uVar6 < 5) {
          local_70 = 4;
          bVar2 = false;
        }
        else if (uVar6 == 5) {
          bVar2 = false;
          local_70 = 5;
        }
        else {
          if (uVar6 == 6) {
            uVar6 = 0;
            local_70 = 5;
          }
          else {
            uVar6 = uVar6 - 7;
            local_70 = 6;
          }
          bVar2 = true;
        }
        piVar8 = (int *)thunk_FUN_01be5118(0x170);
        if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(8,0x170);
        }
        piVar8[0x42] = 0;
        uVar25 = (uint)*puVar14 + ~local_70;
        piVar24 = piVar22 + local_70 * 6;
        iVar13 = piVar24[2];
        iVar16 = piVar24[3];
        *(ushort *)((int)piVar8 + 0x13a) = (ushort)uVar25;
        if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar25,0xb,&DAT_01d27f54);
        }
        iVar12 = piVar22[local_70 + 0x43];
        iVar21 = *piVar24;
        iVar17 = piVar24[1];
        iVar18 = piVar24[4];
        iVar9 = piVar24[5];
        FUN_01bed4e2(piVar8 + 0x43,piVar22 + local_70 + 0x44,uVar25 * 4);
        FUN_01bed4e2(piVar8,piVar22 + (local_70 + 1) * 6,uVar25 * 0x18);
        *puVar14 = (ushort)local_70;
        uVar25 = (uint)*(ushort *)((int)piVar8 + 0x13a);
        iVar15 = uVar25 + 1;
        if (0xb < uVar25) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,iVar15,0xc,&DAT_01d27f64);
        }
        if (uVar20 - local_70 != iVar15) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d27f44);
        }
        local_74 = local_74 + 1;
        FUN_01bed4e2(piVar8 + 0x50,piVar22 + local_70 + 0x51,iVar15 * 4);
        uVar20 = 0;
        do {
          iVar15 = (piVar8 + 0x50)[uVar20];
          *(short *)(iVar15 + 0x138) = (short)uVar20;
          *(int **)(iVar15 + 0x108) = piVar8;
          if (uVar25 <= uVar20) break;
          uVar20 = uVar20 + 1;
        } while (uVar20 <= uVar25);
        piVar24 = piVar8;
        if (!bVar2) {
          piVar24 = piVar22;
        }
        uVar20 = (uint)*(ushort *)((int)piVar24 + 0x13a);
        if (uVar6 < uVar20) {
          FUN_01bed864(piVar24 + uVar6 + 0x44);
          piVar24[uVar6 + 0x43] = local_b8;
          piVar10 = piVar24 + uVar6 * 6;
          FUN_01bed864(piVar24 + (uVar6 + 1) * 6,piVar10,(uVar20 - uVar6) * 0x18);
          piVar24[uVar6 * 6] = local_b4;
          piVar10[1] = local_b0;
          piVar10[2] = local_a4;
          piVar10[4] = local_ac;
          piVar10[5] = iVar7;
          piVar10[3] = local_78;
          FUN_01bed864(piVar24 + uVar6 + 0x52,piVar24 + uVar6 + 0x51,(uVar20 - uVar6) * 4);
        }
        else {
          piVar24[uVar6 + 0x43] = local_b8;
          piVar10 = piVar24 + uVar6 * 6;
          *piVar10 = local_b4;
          piVar10[1] = local_b0;
          piVar10[2] = local_a4;
          piVar10[4] = local_ac;
          piVar10[3] = local_78;
          piVar10[5] = iVar7;
        }
        *(ushort *)((int)piVar24 + 0x13a) = (ushort)(uVar20 + 1);
        piVar24[uVar6 + 0x51] = (int)local_a8;
        if (uVar6 + 1 < uVar20 + 2) {
          do {
            uVar25 = uVar6 + 1;
            iVar7 = piVar24[uVar6 + 0x51];
            *(short *)(iVar7 + 0x138) = (short)uVar25;
            *(int **)(iVar7 + 0x108) = piVar24;
            uVar6 = uVar25;
          } while (uVar20 + 1 != uVar25);
        }
        piVar10 = (int *)piVar22[0x42];
        iVar7 = iVar9;
        piVar24 = piVar22;
        local_b8 = iVar12;
        local_b4 = iVar21;
        local_b0 = iVar17;
        local_ac = iVar18;
        local_a8 = piVar8;
        local_a4 = iVar13;
        local_78 = iVar16;
      } while ((int *)piVar22[0x42] != (int *)0x0);
    }
    uVar6 = DAT_01d51a80;
    piVar24 = DAT_01d51a7c;
    if (DAT_01d51a7c == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27ee4);
    }
    piVar10 = (int *)thunk_FUN_01be5118(0x170);
    if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x170);
    }
    piVar10[0x42] = 0;
    piVar10[0x50] = (int)piVar24;
    *(undefined2 *)((int)piVar10 + 0x13a) = 0;
    if (0xfffffffe < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d27f14);
    }
    *(undefined2 *)(piVar24 + 0x4e) = 0;
    piVar24[0x42] = (int)piVar10;
    DAT_01d51a7c = piVar10;
    DAT_01d51a80 = uVar6 + 1;
    if (local_74 != uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d27f04);
    }
    *(undefined2 *)((int)piVar10 + 0x13a) = 1;
    *piVar10 = iVar21;
    piVar10[1] = iVar17;
    piVar10[2] = iVar13;
    piVar10[4] = iVar18;
    *(undefined2 *)(piVar8 + 0x4e) = 1;
    piVar10[0x43] = iVar12;
    piVar10[0x51] = (int)piVar8;
    piVar8[0x42] = (int)piVar10;
    piVar10[3] = iVar16;
    piVar10[5] = iVar9;
  }
LAB_019a9154:
  DAT_01d51a84 = DAT_01d51a84 + 1;
LAB_019a916c:
  DataMemoryBarrier(0xb);
  DAT_01d51a90 = 0;
  if ((char)iVar4 == '\0') {
    if (((uVar19 == 0) && ((DAT_01d51b08 & 0x7fffffff) != 0)) &&
       (iVar4 = FUN_0197ac0c(), iVar4 == 0)) {
      *(undefined1 *)(unaff_r8 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *unaff_r8;
      bVar2 = (bool)hasExclusiveAccess(unaff_r8);
    } while (!bVar2);
    *unaff_r8 = 0;
  }
  else {
    if (((uVar19 == 0) && ((DAT_01d51b08 & 0x7fffffff) != 0)) &&
       (iVar4 = FUN_0197ac0c(), iVar4 == 0)) {
      *(undefined1 *)(unaff_r8 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *unaff_r8;
      bVar2 = (bool)hasExclusiveAccess(unaff_r8);
    } while (!bVar2);
    *unaff_r8 = 0;
  }
  if (iVar4 == 2) {
    FUN_01be6c3c(0xf0,&DAT_01d51a88,0x81,1);
  }
LAB_019a9200:
  local_60 = 0;
  local_64 = (int *)0x0;
  local_68 = 0;
  FUN_01bea926(0,&local_68);
  uVar19 = 0;
  if (((uint)local_64 & 2) != 0) {
    uVar19 = FUN_01be65d0(0x33);
    iVar4 = DAT_01d51a9c;
    if (uVar19 < 0x2001) {
      uVar19 = 0x2000;
    }
    iVar7 = FUN_01be6c88(0,uVar19 + DAT_01d51a9c,3,0x20022,0xffffffff);
    if (iVar7 == -1) {
      puVar11 = (undefined4 *)FUN_01be3244();
      local_30 = *puVar11;
      local_2c = local_3c + 2;
      local_3c[2] = local_3c[2] & 0xffffff00;
      local_28 = FUN_019a7d7c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b1de8,&local_2c,&DAT_01d2793c);
    }
    iVar13 = FUN_01be6d14(iVar7,iVar4,0);
    if (iVar13 != 0) {
      puVar11 = (undefined4 *)FUN_01be3244();
      local_30 = *puVar11;
      local_2c = local_3c + 2;
      local_3c[2] = local_3c[2] & 0xffffff00;
      local_28 = FUN_019a7d7c;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b10c0,&local_2c,&DAT_01d2792c);
    }
    local_68 = iVar7 + iVar4;
    local_64 = (int *)0x0;
    local_60 = uVar19;
    FUN_01bea926(&local_68,0);
    uVar19 = local_68;
  }
  return uVar19;
}

