// FUN_008743a0 @ 008743a0 size=1692 calls_out=11 calls_in=2
// strings: failed to write frame to transport | failed to write frame to transport

/* WARNING: Removing unreachable block (ram,0x00874674) */
/* WARNING: Type propagation algorithm not settling */

void FUN_008743a0(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  code **ppcVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  code **ppcVar10;
  int iVar11;
  code **ppcVar12;
  int iVar13;
  code **ppcVar14;
  code *pcVar15;
  int *piVar16;
  int iVar17;
  code **ppcVar18;
  code **ppcVar19;
  code **ppcVar20;
  code ***local_74;
  code **local_70;
  code ***local_6c;
  code **local_68;
  uint local_64;
  code **local_60;
  code **local_5c;
  code **local_58;
  uint local_54 [2];
  code *local_4c;
  int local_48;
  int local_44;
  code **local_40;
  code **local_3c;
  code **local_38;
  undefined1 local_34;
  undefined2 uStack_33;
  undefined1 uStack_31;
  code **local_30;
  uint local_2c [2];
  
  iVar17 = *param_2;
  if (iVar17 != -0x80000000) {
    iVar13 = param_2[3];
    piVar16 = (int *)(iVar13 + 0x1c);
    if (*(uint *)(iVar13 + 0x2c) <= *(uint *)(iVar13 + 0x20)) {
      do {
        if (*(int *)(iVar13 + 0x20) == 0) goto LAB_008743d8;
        FUN_007e5554(&local_74,iVar13,param_3,piVar16);
        uVar5 = (uint)local_74 & 0xff;
        if (uVar5 == 5) {
          uVar5 = 6;
          goto LAB_00874698;
        }
        if (uVar5 != 4) {
          local_34 = SUB41(local_70,0);
          uStack_33 = (undefined2)((uint)local_70 >> 8);
          uStack_31 = (undefined1)((uint)local_70 >> 0x18);
          local_38 = (code **)local_74;
          goto joined_r0x00874694;
        }
      } while (local_70 != (code **)0x0);
      FUN_015e79d4(&local_38,0x17,"failed to write frame to transport",0x22);
      uVar5 = (uint)local_38 & 0xff;
joined_r0x00874694:
      if (uVar5 != 5) {
LAB_00874698:
        uVar3 = (undefined1)uVar5;
        if (uVar5 != 6) {
          param_1[7] = uStack_31;
          *(undefined2 *)(param_1 + 5) = uStack_33;
          *(uint *)(param_1 + 1) = CONCAT13(local_34,local_38._1_3_);
          *param_1 = uVar3;
          return;
        }
        goto LAB_00874644;
      }
    }
LAB_008743d8:
    ppcVar19 = (code **)param_2[2];
    iVar4 = param_2[1];
    iVar9 = *(int *)(iVar13 + 0x20);
    iVar11 = *(int *)(iVar13 + 0x24);
    *param_2 = -0x80000000;
    if ((uint)(iVar11 - iVar9) < (int)ppcVar19 + 1U) {
      FUN_00f5f538(piVar16);
      iVar11 = *(int *)(iVar13 + 0x24);
    }
    if (ppcVar19 != (code **)0x0) {
      if (iVar11 == 0) {
        uVar6 = 0;
        if ((int)ppcVar19 < 0) {
LAB_0087465c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar6,ppcVar19);
        }
        ppcVar10 = (code **)thunk_FUN_016d4a50(ppcVar19);
        if (ppcVar10 == (code **)0x0) {
          uVar6 = 1;
          goto LAB_0087465c;
        }
        uVar5 = 0x20 - LZCOUNT((uint)ppcVar19 >> 10);
        if (6 < uVar5) {
          uVar5 = 7;
        }
        local_54[0] = uVar5 << 2 | 1;
        local_5c = (code **)0x0;
        ppcVar12 = ppcVar19;
        iVar9 = iVar4;
        ppcVar14 = ppcVar19;
        ppcVar20 = ppcVar19;
        local_60 = ppcVar10;
        local_58 = ppcVar19;
        do {
          ppcVar18 = (code **)((int)ppcVar20 - (int)local_5c);
          if (ppcVar18 < ppcVar19) {
            FUN_00f5f538(&local_60,ppcVar19);
            ppcVar18 = (code **)((int)local_58 - (int)local_5c);
            ppcVar10 = local_60;
            ppcVar20 = local_58;
          }
          ppcVar2 = local_5c;
          FUN_016dd1aa((int)ppcVar10 + (int)local_5c,iVar9,ppcVar19);
          uVar5 = local_54[0];
          if (ppcVar18 < ppcVar19) {
LAB_008749d0:
            local_74 = (code ***)ppcVar19;
            local_70 = ppcVar18;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0();
          }
          local_5c = (code **)((int)ppcVar2 + (int)ppcVar19);
          if (ppcVar12 < ppcVar19) {
            ppcVar18 = ppcVar12;
            goto LAB_008749d0;
          }
          ppcVar12 = (code **)((int)ppcVar12 - (int)ppcVar19);
          ppcVar14 = (code **)((int)ppcVar14 - (int)ppcVar19);
          iVar9 = iVar9 + (int)ppcVar19;
          ppcVar19 = ppcVar12;
          if (ppcVar14 < ppcVar12) {
            ppcVar19 = ppcVar14;
          }
        } while (ppcVar19 != (code **)0x0);
        if ((local_54[0] & 1) == 0) {
          local_38 = (code **)&DAT_018ad580;
        }
        else {
          local_44 = (int)local_5c + (local_54[0] >> 5);
          local_48 = (int)ppcVar10 - (local_54[0] >> 5);
          local_4c = (code *)((int)ppcVar20 + (local_54[0] >> 5));
          FUN_00f5ef18(&local_38,&local_4c);
          local_40 = (code **)(uVar5 >> 5);
          if (local_30 < local_40) {
            local_6c = &local_3c;
            local_3c = local_30;
            local_68 = (code **)FUN_007883b8;
            local_70 = (code **)FUN_007883b8;
            local_74 = &local_40;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_74,&DAT_018a6700);
          }
          local_5c = (code **)((int)local_30 - (int)local_40);
          ppcVar10 = (code **)((int)local_40 + CONCAT13(uStack_31,CONCAT21(uStack_33,local_34)));
          local_54[0] = local_2c[0];
        }
        local_60 = local_38;
        local_58 = local_5c;
        local_5c = ppcVar10;
        iVar9 = (*local_38[3])(local_54);
        ppcVar10 = local_58;
        ppcVar19 = local_5c;
        local_34 = SUB41(local_5c,0);
        uStack_31 = (undefined1)((uint)local_5c >> 0x18);
        uStack_33 = (undefined2)((uint)local_5c >> 8);
        if (iVar9 == 0) {
          iVar9 = *(int *)(iVar13 + 0x20);
          ppcVar12 = (code **)-iVar9;
          local_64 = local_54[0];
          local_68 = local_58;
          local_6c = (code ***)local_5c;
          local_70 = local_60;
          local_2c[0] = local_54[0];
          local_30 = local_58;
          local_38 = local_60;
          if (ppcVar12 < local_58) {
            FUN_00f5f538(piVar16,local_58);
            iVar9 = *(int *)(iVar13 + 0x20);
            ppcVar12 = (code **)(*(int *)(iVar13 + 0x24) - iVar9);
          }
          FUN_016dd1aa(*piVar16 + iVar9,ppcVar19,ppcVar10);
          if (ppcVar12 < ppcVar10) {
            local_60 = ppcVar10;
            local_5c = ppcVar12;
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_60);
          }
          pcVar15 = local_38[4];
          *(int *)(iVar13 + 0x20) = (int)ppcVar10 + iVar9;
          (*pcVar15)(local_2c,CONCAT13(uStack_31,CONCAT21(uStack_33,local_34)),local_30);
          iVar11 = *(int *)(iVar13 + 0x24);
          goto LAB_008744a4;
        }
        local_2c[0] = local_54[0];
        local_38 = local_60;
        local_30 = local_58;
        (*local_60[2])(&local_70,local_2c);
        local_74 = (code ***)0x0;
        piVar7 = *(int **)(iVar13 + 0x28);
        if (((uint)piVar7 & 1) == 0) {
          DataMemoryBarrier(0xb);
          piVar8 = piVar7 + 4;
          do {
            iVar9 = *piVar8;
            bVar1 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar1);
          *piVar8 = iVar9 + -1;
          if (iVar9 == 1) {
            DataMemoryBarrier(0xb);
            if (*piVar7 != 0) {
              thunk_FUN_016d3fb4(piVar7[1]);
            }
            goto LAB_008749ac;
          }
        }
        else if (&DAT_0000001f < piVar7) {
          piVar7 = (int *)(*piVar16 - ((uint)piVar7 >> 5));
LAB_008749ac:
          thunk_FUN_016d3fb4(piVar7);
        }
        *piVar16 = (int)local_70;
        *(code ****)(iVar13 + 0x20) = local_6c;
        *(code ***)(iVar13 + 0x24) = local_68;
        *(uint *)(iVar13 + 0x28) = local_64;
        iVar11 = *(int *)(iVar13 + 0x24);
      }
      else {
        iVar9 = *(int *)(iVar13 + 0x20);
        ppcVar10 = (code **)(iVar11 - iVar9);
        if (ppcVar10 < ppcVar19) {
          FUN_00f5f538(piVar16,ppcVar19);
          iVar9 = *(int *)(iVar13 + 0x20);
          iVar11 = *(int *)(iVar13 + 0x24);
          ppcVar10 = (code **)(iVar11 - iVar9);
        }
        if (ppcVar10 < ppcVar19) {
          FUN_00f5f538(piVar16,ppcVar19);
          iVar9 = *(int *)(iVar13 + 0x20);
          iVar11 = *(int *)(iVar13 + 0x24);
          ppcVar10 = (code **)(iVar11 - iVar9);
        }
        FUN_016dd1aa(*piVar16 + iVar9,iVar4,ppcVar19);
        if (ppcVar10 < ppcVar19) {
          local_74 = (code ***)ppcVar19;
          goto LAB_008749e0;
        }
        *(int *)(iVar13 + 0x20) = (int)ppcVar19 + iVar9;
      }
    }
LAB_008744a4:
    iVar9 = *(int *)(iVar13 + 0x20);
    if (iVar11 == iVar9) {
      FUN_00f5f538(piVar16,1);
      iVar9 = *(int *)(iVar13 + 0x20);
      iVar11 = *(int *)(iVar13 + 0x24);
      *(undefined1 *)(*(int *)(iVar13 + 0x1c) + iVar9) = 10;
      if (iVar11 == iVar9) {
        ppcVar10 = (code **)0x0;
        local_74 = (code ***)0x1;
LAB_008749e0:
        local_70 = ppcVar10;
                    /* WARNING: Subroutine does not return */
        FUN_00f600c0();
      }
    }
    else {
      *(undefined1 *)(*piVar16 + iVar9) = 10;
    }
    *(int *)(iVar13 + 0x20) = iVar9 + 1;
    if (iVar17 != 0) {
      thunk_FUN_016d3fb4(iVar4);
    }
  }
  iVar17 = param_2[3];
  do {
    if (*(int *)(iVar17 + 0x20) == 0) goto LAB_00874640;
    FUN_007e5554(&local_74,iVar17,param_3,iVar17 + 0x1c);
    uVar5 = (uint)local_74 & 0xff;
    if (uVar5 == 5) {
      uVar5 = 6;
      goto LAB_008745fc;
    }
    if (uVar5 != 4) {
      local_34 = SUB41(local_70,0);
      uStack_33 = (undefined2)((uint)local_70 >> 8);
      uStack_31 = (undefined1)((uint)local_70 >> 0x18);
      local_38 = (code **)local_74;
      goto joined_r0x0087463c;
    }
  } while (local_70 != (code **)0x0);
  FUN_015e79d4(&local_38,0x17,"failed to write frame to transport",0x22);
  uVar5 = (uint)local_38 & 0xff;
joined_r0x0087463c:
  if (uVar5 == 5) {
LAB_00874640:
    uVar3 = 5;
  }
  else {
LAB_008745fc:
    uVar3 = (undefined1)uVar5;
    if (uVar5 != 6) {
      *(uint *)(param_1 + 4) = CONCAT13(uStack_31,CONCAT21(uStack_33,local_34));
      *(uint *)(param_1 + 1) = CONCAT13(local_34,local_38._1_3_);
      *param_1 = uVar3;
      return;
    }
  }
LAB_00874644:
  *param_1 = uVar3;
  return;
}

