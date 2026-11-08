// FUN_01ab3a74 @ 01ab3a74 size=1380 calls_out=14 calls_in=2
// strings: page must have been allocated to insert!Current

/* WARNING: Removing unreachable block (ram,0x01ab3df8) */
/* WARNING: Removing unreachable block (ram,0x01ab3ba0) */
/* WARNING: Removing unreachable block (ram,0x01ab3f88) */
/* WARNING: Removing unreachable block (ram,0x01ab3bbc) */
/* WARNING: Removing unreachable block (ram,0x01ab3c20) */
/* WARNING: Removing unreachable block (ram,0x01ab3f90) */
/* WARNING: Removing unreachable block (ram,0x01ab3c38) */

undefined8
FUN_01ab3a74(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
  undefined4 *extraout_r2;
  int iVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 uVar13;
  int *piVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  undefined8 uVar20;
  int *local_60;
  int *local_5c;
  int local_58;
  uint uStack_54;
  undefined1 local_50;
  undefined2 local_4f;
  undefined1 local_4d;
  uint local_4c;
  uint *local_48;
  code *local_44;
  undefined *local_40;
  code *local_3c;
  uint local_38;
  undefined4 local_30;
  uint *local_2c;
  int local_28;
  
  uVar20 = thunk_FUN_01bee35a(param_1,0x29c);
  piVar2 = (int *)((int)uVar20 + (int)((ulonglong)uVar20 >> 0x20));
  if (((char)piVar2[2] == '\x01') || (piVar2 = (int *)FUN_01abe644(), piVar2 != (int *)0x0)) {
    if (*piVar2 == 0) {
      uVar19 = FUN_01ac1a94();
    }
    else {
      uVar19 = piVar2[1];
    }
    local_4c = uVar19;
    if (uVar19 < (uint)param_1[1]) {
      piVar2 = *(int **)(*param_1 + uVar19 * 4);
      if (piVar2 == (int *)0x0) {
        iVar3 = FUN_01298504(0x140,4);
        if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x140);
        }
        iVar8 = 0;
        uVar6 = 0;
        do {
          if (uVar6 == 0) {
            iVar16 = 1;
          }
          else {
            iVar10 = 2;
            iVar16 = 1;
            for (uVar17 = uVar6; ((uVar17 & 1) == 0 || (iVar16 = iVar10 * iVar16, uVar17 != 1));
                uVar17 = uVar17 >> 1) {
              iVar10 = iVar10 * iVar10;
            }
          }
          uVar17 = uVar6 + 1;
          puVar11 = (undefined4 *)(iVar3 + uVar6 * 0x14);
          *puVar11 = 0;
          puVar11[4] = iVar8;
          iVar8 = iVar8 + iVar16 * 0x20;
          puVar11[3] = iVar16 << 5;
          puVar11[2] = 0x400000;
          uVar6 = uVar17;
        } while (uVar17 != 0x10);
        local_28 = 0x10;
        iVar8 = local_28;
        local_30 = 0x10;
        local_40 = (undefined *)0x10;
        local_48 = (uint *)0x10;
        local_44 = (code *)iVar3;
        local_2c = (uint *)iVar3;
        puVar4 = (uint *)thunk_FUN_01be5118(0x40);
        if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(4,0x40);
        }
        iVar16 = 0;
        do {
          puVar4[iVar16] = 0;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0x10);
        local_28 = 0x10;
        local_30 = 0x10;
        local_48 = puVar4;
        local_44 = (code *)local_28;
        local_40 = (undefined *)iVar3;
        local_3c = (code *)iVar8;
        local_38 = uVar19;
        local_2c = puVar4;
        piVar2 = (int *)thunk_FUN_01be5118(0x14);
        if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *piVar2 = (int)local_48;
        piVar2[1] = (int)local_44;
        piVar2[2] = (int)local_40;
        piVar2[3] = (int)local_3c;
        piVar2[4] = local_38;
        if ((uint)param_1[1] <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar19,param_1[1],&DAT_01d2ec70);
        }
        piVar5 = (int *)(*param_1 + uVar19 * 4);
        puVar4 = (uint *)*piVar5;
        if (puVar4 == (uint *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            bVar1 = (bool)hasExclusiveAccess(piVar5);
            if (bVar1) {
              *piVar5 = (int)piVar2;
              bVar1 = true;
              goto LAB_01ab3cb4;
            }
            puVar4 = (uint *)*piVar5;
          } while (puVar4 == (uint *)0x0);
        }
        bVar1 = false;
        ClearExclusiveLocal();
LAB_01ab3cb4:
        DataMemoryBarrier(0xb);
        if (!bVar1) {
          local_48 = puVar4;
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00531574,0x47,&local_48,&DAT_01d2ec90,&DAT_01d2ec50);
        }
        uVar6 = param_1[2];
        puVar4 = (uint *)(param_1 + 2);
        DataMemoryBarrier(0xb);
        do {
          if (uVar19 <= uVar6) break;
          uVar17 = *puVar4;
          if (uVar17 == uVar6) {
            DataMemoryBarrier(0xb);
            do {
              bVar1 = (bool)hasExclusiveAccess(puVar4);
              if (bVar1) {
                *puVar4 = uVar19;
                bVar1 = true;
                uVar6 = uVar17;
                goto LAB_01ab3d0c;
              }
              uVar17 = *puVar4;
            } while (uVar17 == uVar6);
          }
          bVar1 = false;
          ClearExclusiveLocal();
          uVar6 = uVar17;
LAB_01ab3d0c:
          DataMemoryBarrier(0xb);
        } while (!bVar1);
      }
      piVar12 = (int *)piVar2[2];
      iVar8 = piVar2[3];
      iVar16 = *piVar2;
      iVar10 = piVar2[1];
      piVar5 = piVar12;
      iVar3 = 0;
      do {
        do {
          iVar18 = iVar3;
          piVar14 = piVar5;
          if (piVar14 == piVar12 + iVar8 * 5) {
            uVar15 = 0;
            goto LAB_01ab3e34;
          }
          if (iVar18 == iVar10) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(iVar10,iVar10,&DAT_01d2ec80);
          }
          uVar6 = *(uint *)(iVar16 + iVar18 * 4);
          if ((uint)piVar14[3] <= uVar6) {
            puVar4 = (uint *)(piVar14 + 2);
            do {
              uVar6 = *puVar4;
              bVar1 = (bool)hasExclusiveAccess(puVar4);
            } while (!bVar1);
            *puVar4 = 0x400000;
            DataMemoryBarrier(0xb);
          }
          piVar5 = piVar14 + 5;
          iVar3 = iVar18 + 1;
        } while (uVar6 == 0x400000);
        local_58 = *piVar14;
        if (local_58 == 0) {
          FUN_01ac1dfc(piVar14);
          local_58 = *piVar14;
          if (local_58 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("page must have been allocated to insert!Current",0x28,&DAT_01d2f36c);
          }
        }
        if ((uint)piVar14[1] <= uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar6,piVar14[1],&DAT_01d2f37c);
        }
        local_58 = local_58 + uVar6 * 0x40;
        iVar7 = piVar14[4];
        uStack_54 = *(uint *)(local_58 + 0x38);
        DataMemoryBarrier(0xb);
      } while ((uStack_54 & 0x3ffffffc) != 0);
      *(undefined4 *)(iVar16 + iVar18 * 4) = *(undefined4 *)(local_58 + 0x3c);
      local_4d = 0;
      local_4f = 0;
      *(undefined4 *)(local_58 + 8) = param_3;
      *(undefined4 *)(local_58 + 0xc) = param_4;
      uVar20 = thunk_FUN_01bee35a(param_4,uStack_54 & 0xc0000000 | iVar7 + uVar6 & 0x3fffffff);
      uVar13 = *(undefined4 *)((int)uVar20 + 0x60);
      uVar15 = 1;
      extraout_r2[0xc] = param_5;
      uVar9 = *(undefined4 *)((int)uVar20 + 100);
      *extraout_r2 = uVar13;
      piVar14 = (int *)((uint)((ulonglong)uVar20 >> 0x20) & 0xc03fffff | uVar19 << 0x16);
      extraout_r2[4] = 1;
      extraout_r2[1] = uVar9;
      local_50 = 0;
      local_60 = piVar14;
      local_5c = piVar2;
      FUN_01ab4080(&local_60);
LAB_01ab3e34:
      return CONCAT44(piVar14,uVar15);
    }
  }
  else {
    local_4c = 0xffffffff;
  }
  local_48 = &local_4c;
  local_3c = FUN_012fd02c;
  local_44 = FUN_012fd02c;
  local_40 = &DAT_0056d360;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_0059adf6,&local_48,&DAT_01d2ec60);
}

