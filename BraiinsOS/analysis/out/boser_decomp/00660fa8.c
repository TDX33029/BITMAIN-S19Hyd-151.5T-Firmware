// FUN_00660fa8 @ 00660fa8 size=1360 calls_out=17 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00660fa8(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  undefined1 *puVar4;
  int *piVar5;
  uint *puVar6;
  undefined *puVar7;
  undefined4 uVar8;
  uint *puVar9;
  uint uVar10;
  undefined *puVar11;
  int iVar12;
  uint *puVar13;
  int iVar14;
  undefined4 *******pppppppuVar15;
  uint uVar16;
  undefined4 *******pppppppuVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined *local_a8;
  undefined4 *******local_a0;
  int *piStack_9c;
  undefined4 *******pppppppuStack_98;
  undefined4 *******local_94;
  uint *local_90;
  uint local_8c;
  int local_88;
  int local_84;
  int local_80;
  undefined4 *******local_78;
  int *local_74;
  undefined4 *******local_70;
  int *piStack_6c;
  undefined4 *******pppppppuStack_68;
  undefined4 *******pppppppuStack_64;
  undefined4 *******local_60;
  uint *local_5c;
  undefined4 *******local_58;
  int *local_54;
  undefined4 *******local_50;
  undefined4 *******local_4c;
  uint *local_48;
  uint uStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 *******local_30;
  int *local_2c;
  undefined4 *******local_28;
  
  if ((*(char *)(param_2 + 0x29) != '\0') ||
     (pppppppuVar17 = *(undefined4 ********)(param_2 + 8), pppppppuVar17 == (undefined4 *******)0x0)
     ) {
    *param_1 = 0x80000000;
    return;
  }
  iVar19 = *(int *)(param_2 + 4);
  iVar14 = (int)pppppppuVar17 * 0xc;
  local_74 = (int *)FUN_01298504(iVar14,4);
  if (local_74 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,iVar14);
  }
  pppppppuVar15 = (undefined4 *******)0x0;
  piVar3 = local_74;
  local_78 = pppppppuVar17;
  do {
    if (iVar14 == 0) break;
    FUN_015e8ad4(&local_60,*(undefined4 *)(iVar19 + 4),*(undefined4 *)(iVar19 + 8));
    pppppppuVar15 = (undefined4 *******)((int)pppppppuVar15 + 1);
    iVar14 = iVar14 + -0xc;
    iVar19 = iVar19 + 0xc;
    *piVar3 = (int)local_60;
    piVar3[1] = (int)local_5c;
    piVar3[2] = (int)local_58;
    piVar3 = piVar3 + 3;
  } while (pppppppuVar17 != pppppppuVar15);
  local_30 = local_78;
  local_2c = local_74;
  local_70 = pppppppuVar17;
  local_28 = pppppppuVar17;
  FUN_01299464(&local_60,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  local_88 = *(int *)(param_2 + 0x18);
  local_84 = *(int *)(param_2 + 0x1c);
  local_a0 = local_30;
  piStack_9c = local_2c;
  pppppppuStack_98 = local_28;
  local_94 = local_60;
  local_90 = local_5c;
  local_8c = (uint)local_58;
  local_80 = CONCAT31(local_80._1_3_,*(char *)(param_2 + 0x24));
  if (*(char *)(param_2 + 0x24) == '\x01') {
    local_78 = &local_a0;
    if (1 < local_58) {
      local_60 = &local_78;
      if (local_58 < 0x15) {
        iVar14 = 4;
        do {
          FUN_00660818(local_5c,(int)local_5c + iVar14,&local_78);
          iVar14 = iVar14 + 4;
        } while ((int)local_58 * 4 != iVar14);
      }
      else {
        FUN_0066376c(local_5c,local_58,&local_60);
      }
    }
  }
  else if (1 < local_58) {
    if (local_58 < 0x15) {
      puVar9 = local_5c + 1;
      iVar14 = 0;
      puVar6 = puVar9;
      do {
        uVar20 = puVar6[-1];
        uVar16 = *puVar6;
        if (uVar16 < uVar20) {
          iVar19 = iVar14;
          do {
            *(uint *)((int)puVar9 + iVar19) = uVar20;
            if (iVar19 == 0) {
              puVar13 = local_5c;
              goto LAB_00661490;
            }
            iVar12 = iVar19 + -4;
            uVar20 = *(uint *)((int)puVar9 + iVar19 + -8);
            iVar19 = iVar12;
          } while (uVar16 < uVar20);
          puVar13 = (uint *)((int)puVar9 + iVar12);
LAB_00661490:
          *puVar13 = uVar16;
        }
        puVar6 = puVar6 + 1;
        iVar14 = iVar14 + 4;
      } while (puVar6 != local_5c + (int)local_58);
    }
    else {
      FUN_006631b4(local_5c);
    }
  }
  local_58 = local_a0;
  local_54 = piStack_9c;
  local_50 = pppppppuStack_98;
  local_4c = local_94;
  local_48 = local_90;
  uStack_44 = local_8c;
  iStack_40 = local_88;
  iStack_3c = local_84;
  iStack_38 = local_80;
  local_5c = (uint *)&DAT_00000001;
  local_60 = (undefined4 *******)&DAT_00000001;
  piVar3 = (int *)thunk_FUN_01be5118(0x2c);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2c);
  }
  *piVar3 = (int)local_60;
  piVar3[1] = (int)local_5c;
  piVar3[2] = (int)local_58;
  piVar3[3] = (int)local_54;
  piVar3[4] = (int)local_50;
  piVar3[5] = (int)local_4c;
  piVar3[6] = (int)local_48;
  piVar3[7] = uStack_44;
  piVar3[8] = iStack_40;
  piVar3[9] = iStack_3c;
  piVar3[10] = iStack_38;
  uVar16 = piVar3[4];
  if (uVar16 == 0) {
    uVar8 = 0x25;
    puVar11 = &DAT_01c03d48;
    puVar7 = &DAT_003d40ee;
LAB_00661430:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(puVar7,uVar8,puVar11);
  }
  pppppppuVar15 = (undefined4 *******)piVar3[8];
  pppppppuVar17 = pppppppuVar15;
  if (pppppppuVar15 != (undefined4 *******)&DAT_00000001) {
    if (pppppppuVar15 == (undefined4 *******)0x0) {
      uVar8 = 0x1f;
      puVar11 = &DAT_01c03d58;
      puVar7 = &DAT_003d4113;
      goto LAB_00661430;
    }
    puVar4 = (undefined1 *)((int)pppppppuVar15 + -1);
    pppppppuVar17 = (undefined4 *******)&DAT_00000001;
    do {
      puVar4 = puVar4 + -1;
      pppppppuVar17 = (undefined4 *******)((int)pppppppuVar17 << 1);
    } while (puVar4 != (undefined1 *)0x0);
  }
  do {
    iVar14 = *piVar3;
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = iVar14 + 1;
  if (iVar14 < 0) {
LAB_006614ec:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x6614ec);
    (*pcVar1)();
  }
  piVar5 = (int *)thunk_FUN_01be5118(0x300);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x300);
  }
  local_30 = (undefined4 *******)&DAT_00000040;
  iVar14 = -0x2f4;
  do {
    iVar19 = iVar14 + 0xc;
    *(undefined4 *)((int)piVar5 + iVar14 + 0x2f4) = 0;
    *(undefined4 *)((int)piVar5 + iVar14 + 0x2f8) = 4;
    *(undefined4 *)((int)piVar5 + iVar14 + 0x2fc) = 0;
    iVar14 = iVar19;
  } while (iVar19 != 0);
  piVar5[0xbe] = 4;
  piVar5[0xbf] = 0;
  piVar5[0xbd] = 0;
  local_28 = (undefined4 *******)&DAT_00000040;
  local_60 = (undefined4 *******)&DAT_00000040;
  local_58 = (undefined4 *******)&DAT_00000040;
  local_a8 = &DAT_01c03cc8;
  local_5c = (uint *)piVar5;
  local_54 = piVar3;
  local_50 = pppppppuVar15;
  local_4c = pppppppuVar17;
  local_2c = piVar5;
  for (uVar20 = 0; uVar20 < uVar16; uVar20 = uVar20 + 1) {
    uVar10 = piVar3[7];
    uVar18 = uVar20;
    if ((uint)piVar3[7] <= uVar20) {
LAB_006614b4:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar18,uVar10,local_a8);
    }
    uVar18 = *(uint *)(piVar3[6] + uVar20 * 4);
    if (uVar16 <= uVar18) {
      local_a8 = &DAT_01c03cf8;
      uVar10 = uVar16;
      goto LAB_006614b4;
    }
    iVar14 = piVar3[3] + uVar18 * 0xc;
    pppppppuVar17 = *(undefined4 ********)(iVar14 + 8);
    if (pppppppuVar17 < local_50) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_50,pppppppuVar17,&DAT_01c03d68);
    }
    uVar16 = FUN_006602d8(&local_60,*(undefined4 *)(iVar14 + 4));
    pppppppuVar17 = (undefined4 *******)(uVar16 & 0x3f);
    if (local_58 <= pppppppuVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(pppppppuVar17,local_58,&DAT_01c03d78);
    }
    piVar5 = (int *)(local_5c + (int)pppppppuVar17 * 3);
    iVar14 = piVar5[2];
    if (iVar14 == *piVar5) {
      FUN_015f5ab8(piVar5);
    }
    puVar6 = (uint *)(piVar5[1] + iVar14 * 8);
    *puVar6 = uVar16;
    puVar6[1] = uVar18;
    piVar5[2] = iVar14 + 1;
    uVar16 = piVar3[4];
  }
  local_78 = local_60;
  local_74 = (int *)local_5c;
  local_70 = local_58;
  piStack_6c = local_54;
  pppppppuStack_68 = local_50;
  pppppppuStack_64 = local_4c;
  if ((*(byte *)(param_2 + 0x26) & 1) == 0) {
    do {
      iVar14 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar14 + 1;
    if (iVar14 < 0) goto LAB_006614ec;
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00660248(piVar3);
    }
    *param_1 = 0x80000000;
    FUN_00661660(&local_78);
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00660248(piVar3);
    }
  }
  else {
    *param_1 = local_60;
    param_1[1] = local_5c;
    param_1[2] = local_58;
    param_1[3] = local_54;
    param_1[4] = local_50;
    param_1[5] = local_4c;
    param_1[6] = piVar3;
    FUN_01bed93e(param_1 + 7,0,0x14);
  }
  return;
}

