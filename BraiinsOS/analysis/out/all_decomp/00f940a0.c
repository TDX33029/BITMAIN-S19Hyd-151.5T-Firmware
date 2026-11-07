// FUN_00f940a0 @ 00f940a0 size=900 calls_out=8 calls_in=0
// strings: 

void FUN_00f940a0(uint *param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  double *pdVar16;
  undefined4 extraout_s1;
  double dVar17;
  uint local_80;
  uint local_78;
  uint local_74;
  uint local_68;
  uint local_64;
  int local_60;
  uint local_5c;
  int local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  undefined4 *local_44;
  uint local_40;
  
  uVar14 = 0;
  iVar15 = 8;
  local_5c = 0;
  local_60 = 8;
  local_64 = 0;
  do {
    uVar2 = local_64;
    do {
      piVar10 = param_4;
      if (piVar10 == param_5) {
        local_50 = local_64;
        iVar9 = iVar15 + uVar14 * 0x18;
        iVar6 = iVar15;
        local_58 = iVar15;
        local_54 = iVar15;
        local_4c = iVar9;
        if (uVar14 == 0) {
          local_40 = 0;
          local_44 = (undefined4 *)&DAT_00000004;
          local_48 = 0;
          iVar9 = 0;
        }
        else {
          local_44 = (undefined4 *)thunk_FUN_016d4a50(uVar14 * 0xc);
          if (local_44 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,uVar14 * 0xc);
          }
          iVar12 = uVar14 * 0x18;
          local_40 = (iVar12 - 0x18U) / 0x18 + 1;
          puVar4 = local_44;
          do {
            uVar7 = *(undefined4 *)(iVar6 + 0xc);
            iVar12 = iVar12 + -0x18;
            puVar1 = (undefined4 *)(iVar6 + 8);
            uVar11 = *(undefined4 *)(iVar6 + 0x10);
            iVar6 = iVar6 + 0x18;
            *puVar4 = *puVar1;
            puVar4[1] = uVar7;
            puVar4[2] = uVar11;
            puVar4 = puVar4 + 3;
          } while (iVar12 != 0);
          iVar9 = ((uint)(iVar9 - iVar6) >> 3) * -0x55555555;
          local_48 = uVar14;
        }
        piVar10 = (int *)(iVar6 + 8);
        for (; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (*piVar10 != 0) {
            thunk_FUN_016d3fb4(piVar10[1]);
          }
          piVar10 = piVar10 + 6;
        }
        if (uVar2 != 0) {
          thunk_FUN_016d3fb4(iVar15);
        }
        *param_1 = local_48;
        param_1[1] = (uint)local_44;
        param_1[2] = local_40;
        return;
      }
      param_4 = piVar10 + 4;
    } while (*piVar10 != 1);
    FUN_006008c8(&local_48,piVar10[1],piVar10[2]);
    uVar2 = local_40;
    puVar4 = local_44;
    local_68 = (uint)local_44;
    uVar13 = local_48;
    if (local_48 == 0x80000000) {
      uVar7 = 0;
      if ((int)local_40 < 0) {
LAB_00f94424:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,local_78);
      }
      if (local_40 == 0) {
        uVar13 = 0;
        local_78 = 1;
      }
      else {
        local_78 = thunk_FUN_016d4a50(local_40);
        if (local_78 == 0) {
          uVar7 = 1;
          local_78 = uVar2;
          goto LAB_00f94424;
        }
        uVar13 = uVar2;
      }
      FUN_016dd1aa(local_78,puVar4,uVar2);
      local_68 = local_78;
    }
    uVar7 = FUN_016232c0(param_2,param_3,local_68,uVar2);
    dVar17 = (double)CONCAT44(extraout_s1,uVar7);
    if (0.7 < dVar17) {
      uVar7 = 0;
      if ((int)uVar2 < 0) {
LAB_00f94400:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,local_74);
      }
      uVar8 = 0;
      if (uVar2 == 0) {
        local_74 = 1;
        local_80 = 0;
      }
      else {
        local_74 = thunk_FUN_016d4a50(uVar2);
        if (local_74 == 0) {
          uVar7 = 1;
          local_74 = uVar2;
          goto LAB_00f94400;
        }
        local_80 = uVar2;
      }
      FUN_016dd1aa(local_74,local_68,uVar2);
      uVar3 = 0;
      if (uVar14 != 0) {
        if (uVar14 != 1) {
          uVar8 = 0;
          uVar3 = uVar14;
          do {
            uVar5 = uVar8 + (uVar3 >> 1);
            uVar3 = uVar3 - (uVar3 >> 1);
            if (*(double *)(iVar15 + uVar5 * 0x18) <= dVar17) {
              uVar8 = uVar5;
            }
          } while (1 < uVar3);
        }
        if (*(double *)(iVar15 + uVar8 * 0x18) <= dVar17) {
          uVar8 = uVar8 + 1;
        }
        uVar3 = uVar8;
      }
      if (uVar14 == local_64) {
        FUN_00f98e48(&local_64);
        iVar15 = local_60;
      }
      pdVar16 = (double *)(iVar15 + uVar3 * 0x18);
      if (uVar3 < uVar14) {
        FUN_016dd52c(pdVar16 + 3,pdVar16,(uVar14 - uVar3) * 0x18);
      }
      uVar14 = uVar14 + 1;
      *(uint *)(pdVar16 + 1) = local_80;
      *(uint *)((int)pdVar16 + 0xc) = local_74;
      *(uint *)(pdVar16 + 2) = uVar2;
      *pdVar16 = dVar17;
      local_5c = uVar14;
    }
    if (uVar13 != 0) {
      thunk_FUN_016d3fb4(local_68);
    }
  } while( true );
}

