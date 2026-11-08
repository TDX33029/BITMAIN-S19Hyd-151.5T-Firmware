// FUN_00c7f834 @ 00c7f834 size=1236 calls_out=9 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_00c7f834(undefined1 *param_1,int param_2,int *param_3)

{
  bool bVar1;
  code **ppcVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  code **ppcVar8;
  int iVar9;
  code **ppcVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  code **ppcVar14;
  code **ppcVar15;
  code **ppcVar16;
  code **ppcVar17;
  code **local_74;
  code **local_70;
  code **local_6c;
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
  code **local_34;
  code **local_30;
  uint local_2c [2];
  
  ppcVar16 = (code **)param_3[2];
  iVar13 = *param_3;
  iVar9 = *(int *)(param_2 + 0x24);
  piVar11 = (int *)(param_2 + 0x1c);
  iVar3 = param_3[1];
  if ((uint)(iVar9 - *(int *)(param_2 + 0x20)) < (int)ppcVar16 + 1U) {
    FUN_00f5f538(piVar11);
    iVar9 = *(int *)(param_2 + 0x24);
  }
  if (ppcVar16 != (code **)0x0) {
    if (iVar9 == 0) {
      uVar4 = 0;
      if ((int)ppcVar16 < 0) {
LAB_00c7f998:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar4,ppcVar16);
      }
      ppcVar8 = (code **)thunk_FUN_016d4a50(ppcVar16);
      if (ppcVar8 == (code **)0x0) {
        uVar4 = 1;
        goto LAB_00c7f998;
      }
      uVar5 = 0x20 - LZCOUNT((uint)ppcVar16 >> 10);
      if (6 < uVar5) {
        uVar5 = 7;
      }
      local_54[0] = uVar5 << 2 | 1;
      local_5c = (code **)0x0;
      iVar9 = iVar3;
      ppcVar14 = ppcVar16;
      ppcVar15 = ppcVar16;
      ppcVar17 = ppcVar16;
      local_60 = ppcVar8;
      local_58 = ppcVar16;
      do {
        ppcVar10 = (code **)((int)ppcVar17 - (int)local_5c);
        if (ppcVar10 < ppcVar16) {
          FUN_00f5f538(&local_60,ppcVar16);
          ppcVar10 = (code **)((int)local_58 - (int)local_5c);
          ppcVar8 = local_60;
          ppcVar17 = local_58;
        }
        ppcVar2 = local_5c;
        FUN_016dd1aa((int)ppcVar8 + (int)local_5c,iVar9,ppcVar16);
        uVar5 = local_54[0];
        if (ppcVar10 < ppcVar16) {
LAB_00c7fc88:
          local_74 = ppcVar16;
          local_70 = ppcVar10;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0();
        }
        local_5c = (code **)((int)ppcVar2 + (int)ppcVar16);
        if (ppcVar14 < ppcVar16) {
          ppcVar10 = ppcVar14;
          goto LAB_00c7fc88;
        }
        ppcVar14 = (code **)((int)ppcVar14 - (int)ppcVar16);
        ppcVar15 = (code **)((int)ppcVar15 - (int)ppcVar16);
        iVar9 = iVar9 + (int)ppcVar16;
        ppcVar16 = ppcVar14;
        if (ppcVar15 < ppcVar14) {
          ppcVar16 = ppcVar15;
        }
      } while (ppcVar16 != (code **)0x0);
      if ((local_54[0] & 1) == 0) {
        local_38 = (code **)&DAT_018ad580;
      }
      else {
        local_44 = (int)local_5c + (local_54[0] >> 5);
        local_48 = (int)ppcVar8 - (local_54[0] >> 5);
        local_4c = (code *)((int)ppcVar17 + (local_54[0] >> 5));
        FUN_00f5ef18(&local_38,&local_4c);
        local_40 = (code **)(uVar5 >> 5);
        if (local_30 < local_40) {
          local_6c = (code **)&local_3c;
          local_3c = local_30;
          local_68 = (code **)FUN_007883b8;
          local_70 = (code **)FUN_007883b8;
          local_74 = (code **)&local_40;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_00584155,&local_74,&DAT_018a6700);
        }
        local_5c = (code **)((int)local_30 - (int)local_40);
        ppcVar8 = (code **)((int)local_34 + (int)local_40);
        local_54[0] = local_2c[0];
      }
      local_60 = local_38;
      local_58 = local_5c;
      local_5c = ppcVar8;
      iVar9 = (*local_38[3])(local_54);
      ppcVar8 = local_58;
      ppcVar16 = local_5c;
      if (iVar9 == 0) {
        iVar9 = *(int *)(param_2 + 0x20);
        ppcVar14 = (code **)-iVar9;
        local_64 = local_54[0];
        local_68 = local_58;
        local_6c = local_5c;
        local_70 = local_60;
        local_2c[0] = local_54[0];
        local_30 = local_58;
        local_34 = local_5c;
        local_38 = local_60;
        if (ppcVar14 < local_58) {
          FUN_00f5f538(piVar11,local_58);
          iVar9 = *(int *)(param_2 + 0x20);
          ppcVar14 = (code **)(*(int *)(param_2 + 0x24) - iVar9);
        }
        FUN_016dd1aa(*piVar11 + iVar9,ppcVar16,ppcVar8);
        if (ppcVar14 < ppcVar8) {
          local_60 = ppcVar8;
          local_5c = ppcVar14;
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_60);
        }
        *(int *)(param_2 + 0x20) = (int)ppcVar8 + iVar9;
        (*local_38[4])(local_2c,local_34,local_30);
        iVar9 = *(int *)(param_2 + 0x24);
        goto LAB_00c7f910;
      }
      local_2c[0] = local_54[0];
      local_38 = local_60;
      local_34 = local_5c;
      local_30 = local_58;
      (*local_60[2])(&local_70,local_2c);
      local_74 = (code **)0x0;
      piVar6 = *(int **)(param_2 + 0x28);
      if (((uint)piVar6 & 1) == 0) {
        piVar7 = piVar6 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar9 = *piVar7;
          bVar1 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar1);
        *piVar7 = iVar9 + -1;
        if (iVar9 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar6 != 0) {
            thunk_FUN_016d3fb4(piVar6[1]);
          }
          goto LAB_00c7fc64;
        }
      }
      else if (&DAT_0000001f < piVar6) {
        piVar6 = (int *)(*piVar11 - ((uint)piVar6 >> 5));
LAB_00c7fc64:
        thunk_FUN_016d3fb4(piVar6);
      }
      *piVar11 = (int)local_70;
      *(code ***)(param_2 + 0x20) = local_6c;
      *(code ***)(param_2 + 0x24) = local_68;
      *(uint *)(param_2 + 0x28) = local_64;
      iVar9 = *(int *)(param_2 + 0x24);
    }
    else {
      iVar12 = *(int *)(param_2 + 0x20);
      ppcVar8 = (code **)(iVar9 - iVar12);
      if (ppcVar8 < ppcVar16) {
        FUN_00f5f538(piVar11,ppcVar16);
        iVar12 = *(int *)(param_2 + 0x20);
        iVar9 = *(int *)(param_2 + 0x24);
        ppcVar8 = (code **)(iVar9 - iVar12);
      }
      if (ppcVar8 < ppcVar16) {
        FUN_00f5f538(piVar11,ppcVar16);
        iVar12 = *(int *)(param_2 + 0x20);
        iVar9 = *(int *)(param_2 + 0x24);
        ppcVar8 = (code **)(iVar9 - iVar12);
      }
      FUN_016dd1aa(*piVar11 + iVar12,iVar3,ppcVar16);
      if (ppcVar8 < ppcVar16) {
        local_74 = ppcVar16;
        goto LAB_00c7fcac;
      }
      *(int *)(param_2 + 0x20) = (int)ppcVar16 + iVar12;
    }
  }
LAB_00c7f910:
  iVar12 = *(int *)(param_2 + 0x20);
  if (iVar9 == iVar12) {
    FUN_00f5f538(piVar11,1);
    iVar9 = *(int *)(param_2 + 0x20);
    iVar12 = *(int *)(param_2 + 0x24);
    *(undefined1 *)(*(int *)(param_2 + 0x1c) + iVar9) = 10;
    if (iVar12 == iVar9) {
      ppcVar8 = (code **)0x0;
      local_74 = (code **)0x1;
LAB_00c7fcac:
      local_70 = ppcVar8;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0();
    }
    *(int *)(param_2 + 0x20) = iVar9 + 1;
  }
  else {
    *(undefined1 *)(*piVar11 + iVar12) = 10;
    *(int *)(param_2 + 0x20) = iVar12 + 1;
  }
  if (iVar13 != 0) {
    thunk_FUN_016d3fb4(iVar3);
  }
  *param_1 = 5;
  return;
}

