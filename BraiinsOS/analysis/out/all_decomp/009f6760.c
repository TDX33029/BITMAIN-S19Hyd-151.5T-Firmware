// FUN_009f6760 @ 009f6760 size=1596 calls_out=15 calls_in=0
// strings: Unable to allocate another span

/* WARNING: Removing unreachable block (ram,0x009f69bc) */

ulonglong FUN_009f6760(int param_1,uint *param_2)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  undefined *puVar5;
  undefined **ppuVar6;
  uint *puVar7;
  uint extraout_r2;
  int extraout_r3;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  int *piVar17;
  int *piVar18;
  uint uVar19;
  uint *puVar20;
  ulonglong uVar21;
  undefined8 uVar22;
  int local_48;
  uint local_44;
  uint *local_40;
  code *local_3c;
  undefined *local_38;
  undefined1 *local_34;
  uint local_30;
  uint local_28;
  
  uVar2 = *param_2;
  piVar17 = (int *)(param_1 + 0xc);
  if (uVar2 == 1) {
    FUN_016a1584(&local_40,piVar17);
    uVar8 = 0;
    uVar21 = ZEXT48(local_40);
    if (local_40 == (uint *)0x0) {
      ppuVar6 = &local_38;
      goto LAB_009f67c0;
    }
  }
  else {
    uVar8 = 0;
    uVar21 = (ulonglong)uVar2;
    if (uVar2 == 2) {
      ppuVar6 = (undefined **)(param_2 + 2);
LAB_009f67c0:
      uVar21 = FUN_016a1308(piVar17,ppuVar6);
      uVar8 = (undefined4)uVar21;
    }
  }
  uVar22 = thunk_FUN_016de0ee((int)uVar21,0x29c);
  piVar3 = (int *)((int)uVar22 + (int)((ulonglong)uVar22 >> 0x20));
  if (((char)piVar3[2] != '\x01') && (piVar3 = (int *)FUN_009e3840(), piVar3 == (int *)0x0)) {
    local_28 = 0xffffffff;
LAB_009f6cec:
    local_40 = &local_28;
    local_34 = &LAB_00fac484;
    local_3c = (code *)&LAB_00fac484;
    local_38 = &DAT_005675d4;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056cf36,&local_40,&DAT_0186b2bc);
  }
  if (*piVar3 == 1) {
    local_28 = piVar3[1];
    if (*(uint *)(param_1 + 0x10) <= local_28) goto LAB_009f6cec;
  }
  else {
    local_28 = FUN_009ee868();
    if (*(uint *)(param_1 + 0x10) <= local_28) goto LAB_009f6cec;
  }
  uVar2 = local_28;
  puVar20 = *(uint **)(*piVar17 + local_28 * 4);
  if (puVar20 != (uint *)0x0) {
LAB_009f6820:
    if (puVar20[3] != 0) {
      uVar11 = *puVar20;
      uVar14 = puVar20[1];
      piVar3 = (int *)puVar20[2];
      uVar19 = 0;
      piVar18 = piVar3 + puVar20[3] * 5;
      do {
        if (uVar19 == uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar14,uVar14,&DAT_018ae704);
        }
        uVar16 = *(uint *)(uVar11 + uVar19 * 4);
        if ((uint)piVar3[3] <= uVar16) {
          puVar7 = (uint *)(piVar3 + 2);
          do {
            uVar16 = *puVar7;
            bVar1 = (bool)hasExclusiveAccess(puVar7);
          } while (!bVar1);
          *puVar7 = 0x400000;
          DataMemoryBarrier(0xb);
        }
        if (uVar16 != 0x400000) {
          iVar4 = *piVar3;
          if (iVar4 == 0) {
            FUN_009ebac8(piVar3);
            iVar4 = *piVar3;
            if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_0034b589,0x28,&DAT_0186b29c);
            }
          }
          if ((uint)piVar3[1] <= uVar16) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar16,piVar3[1],&DAT_0186b2ac);
          }
          iVar4 = iVar4 + uVar16 * 0x40;
          DataMemoryBarrier(0xb);
          if ((*(uint *)(iVar4 + 0x38) & 0x3ffffffc) == 0) {
            *(undefined4 *)(uVar11 + uVar19 * 4) = *(undefined4 *)(iVar4 + 0x3c);
            *(undefined4 *)(iVar4 + 8) = uVar8;
            *(uint *)(iVar4 + 0x30) = param_2[4];
            uVar22 = thunk_FUN_016de0ee();
            puVar10 = (undefined4 *)((ulonglong)uVar22 >> 0x20);
            uVar8 = *(undefined4 *)((int)uVar22 + 0x80);
            uVar14 = extraout_r2 & 0xc0000000;
            puVar10[3] = (int)(uVar21 >> 0x20);
            uVar12 = *(undefined4 *)((int)uVar22 + 0x84);
            puVar10[4] = 1;
            *puVar10 = uVar8;
            puVar10[1] = uVar12;
            puVar7 = puVar10 + 0xe;
            uVar11 = *puVar7;
            uVar2 = extraout_r3 + uVar16 & 0x3fffff | uVar2 << 0x16;
            if (uVar11 == extraout_r2) {
              DataMemoryBarrier(0xb);
              do {
                bVar1 = (bool)hasExclusiveAccess(puVar7);
                if (bVar1) {
                  *puVar7 = uVar14;
                  DataMemoryBarrier(0xb);
LAB_009f6bec:
                  uVar2 = uVar2 | uVar14;
                  local_44 = (uint)(0xfffffffe < uVar2);
                  puVar10 = *(undefined4 **)(param_1 + 4);
                  if (*(int *)(param_1 + 8) != 0) {
                    puVar15 = puVar10 + *(int *)(param_1 + 8) * 2;
                    local_48 = uVar2 + 1;
                    do {
                      (**(code **)(puVar10[1] + 0x1c))
                                (*puVar10,param_2,&local_48,*(code **)(puVar10[1] + 0x1c),0,0,
                                 piVar17);
                      puVar10 = puVar10 + 2;
                    } while (puVar10 != puVar15);
                  }
                  return (ulonglong)CONCAT14(0xfffffffe < uVar2,uVar2 + 1);
                }
                uVar11 = *puVar7;
              } while (uVar11 == extraout_r2);
            }
            ClearExclusiveLocal();
            DataMemoryBarrier(0xb);
            do {
              if ((uVar11 & 3) == 2) {
                local_28 = 2;
                local_3c = FUN_00facc48;
                local_40 = &local_28;
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_0041504f,&local_40,&DAT_018ae754);
              }
              uVar19 = *puVar7;
              if (*puVar7 == uVar11) {
                DataMemoryBarrier(0xb);
                do {
                  bVar1 = (bool)hasExclusiveAccess(puVar7);
                  if (bVar1) {
                    *puVar7 = extraout_r2 | 3;
                    DataMemoryBarrier(0xb);
                    FUN_009ebe80(puVar20,uVar2 | uVar14);
                    goto LAB_009f6bec;
                  }
                  uVar19 = *puVar7;
                } while (*puVar7 == uVar11);
              }
              uVar11 = uVar19;
              ClearExclusiveLocal();
              DataMemoryBarrier(0xb);
            } while( true );
          }
        }
        piVar3 = piVar3 + 5;
        uVar19 = uVar19 + 1;
      } while (piVar3 != piVar18);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Unable to allocate another span",0x1f,&DAT_0186b5ec);
  }
  puVar5 = (undefined *)thunk_FUN_016d4a50(0x140);
  if (puVar5 == (undefined *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x140);
  }
  iVar4 = 0;
  uVar11 = 0;
  do {
    if (uVar11 == 0) {
      iVar13 = 1;
    }
    else {
      iVar9 = 2;
      iVar13 = 1;
      for (uVar14 = uVar11; ((uVar14 & 1) == 0 || (iVar13 = iVar9 * iVar13, uVar14 != 1));
          uVar14 = uVar14 >> 1) {
        iVar9 = iVar9 * iVar9;
      }
    }
    uVar14 = uVar11 + 1;
    puVar10 = (undefined4 *)(puVar5 + uVar11 * 0x14);
    *puVar10 = 0;
    puVar10[4] = iVar4;
    iVar4 = iVar4 + iVar13 * 0x20;
    puVar10[3] = iVar13 << 5;
    puVar10[2] = 0x400000;
    uVar11 = uVar14;
  } while (uVar14 != 0x10);
  local_40 = (uint *)FUN_016d38c8(1,0x40);
  if (local_40 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x40);
  }
  local_3c = (code *)0x10;
  local_34 = (undefined1 *)0x10;
  local_38 = puVar5;
  local_30 = uVar2;
  puVar20 = (uint *)thunk_FUN_016d4a50(0x14);
  if (puVar20 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *puVar20 = (uint)local_40;
  puVar20[1] = (uint)local_3c;
  puVar20[2] = (uint)local_38;
  puVar20[3] = (uint)local_34;
  puVar20[4] = local_30;
  if (*(uint *)(param_1 + 0x10) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_1 + 0x10),&DAT_0186b2cc);
  }
  piVar3 = (int *)(*piVar17 + uVar2 * 4);
  puVar7 = (uint *)*piVar3;
  if (puVar7 == (uint *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar3);
      if (bVar1) {
        *piVar3 = (int)puVar20;
        DataMemoryBarrier(0xb);
        uVar11 = *(uint *)(param_1 + 0x14);
        puVar7 = (uint *)(param_1 + 0x14);
        DataMemoryBarrier(0xb);
        while (uVar11 < uVar2) {
          uVar14 = *puVar7;
          if (*puVar7 == uVar11) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar7);
              if (bVar1) {
                *puVar7 = uVar2;
                DataMemoryBarrier(0xb);
                goto LAB_009f6820;
              }
              uVar14 = *puVar7;
            } while (*puVar7 == uVar11);
          }
          uVar11 = uVar14;
          ClearExclusiveLocal();
          DataMemoryBarrier(0xb);
        }
        goto LAB_009f6820;
      }
      puVar7 = (uint *)*piVar3;
    } while (puVar7 == (uint *)0x0);
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  local_40 = puVar7;
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_0034b5b1,0x47,&local_40,&DAT_0186b30c,&DAT_0186b2dc);
}

