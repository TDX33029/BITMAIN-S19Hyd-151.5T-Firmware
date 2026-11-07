// FUN_0118f328 @ 0118f328 size=1660 calls_out=8 calls_in=1
// strings: else | else | else

void FUN_0118f328(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int local_14c;
  int local_148;
  undefined **ppuStack_144;
  int iStack_140;
  int iStack_13c;
  int iStack_138;
  int local_134;
  undefined **local_130;
  int local_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  undefined **local_11c;
  int local_118;
  int iStack_114;
  int iStack_110;
  int local_108;
  undefined **local_104;
  int local_100;
  int iStack_fc;
  int iStack_f8;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e0;
  undefined **local_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined1 auStack_c8 [136];
  undefined1 local_40;
  int local_38;
  undefined **local_34;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar11 = *param_3;
  if (iVar11 == 0) {
    *param_1 = 0;
    return;
  }
  local_14c = param_3[1];
  iVar9 = local_14c;
  iVar3 = iVar11;
  do {
    uVar14 = (uint)*(ushort *)(iVar3 + 0x192);
    iVar12 = iVar3 + 0x10c;
    uVar8 = 0xffffffff;
    iVar13 = uVar14 * 0xc;
    do {
      if (iVar13 == 0) goto LAB_0118f3e0;
      uVar7 = *(uint *)(iVar12 + 8);
      uVar6 = uVar7;
      if (3 < uVar7) {
        uVar6 = 4;
      }
      iVar2 = FUN_016dd50a(&DAT_00566d80,*(undefined4 *)(iVar12 + 4),uVar6);
      if (iVar2 == 0) {
        iVar2 = 4 - uVar7;
      }
      iVar13 = iVar13 + -0xc;
      uVar8 = uVar8 + 1;
      iVar12 = iVar12 + 0xc;
    } while ((char)((0 < iVar2) - (iVar2 < 0)) == '\x01');
    uVar14 = uVar8;
    if (0 < iVar2 == iVar2 < 0) {
      iVar3 = iVar3 + uVar8 * 0x18;
      goto LAB_0118f418;
    }
LAB_0118f3e0:
    if (iVar9 == 0) break;
    iVar9 = iVar9 + -1;
    iVar3 = *(int *)(iVar3 + uVar14 * 4 + 0x198);
  } while( true );
  iVar3 = 0;
LAB_0118f418:
  do {
    uVar14 = (uint)*(ushort *)(iVar11 + 0x192);
    iVar13 = iVar11 + 0x10c;
    uVar8 = 0xffffffff;
    iVar9 = uVar14 * 0xc;
    do {
      if (iVar9 == 0) goto LAB_0118f49c;
      uVar7 = *(uint *)(iVar13 + 8);
      uVar6 = uVar7;
      if (3 < uVar7) {
        uVar6 = 4;
      }
      iVar12 = FUN_016dd50a("else",*(undefined4 *)(iVar13 + 4),uVar6);
      if (iVar12 == 0) {
        iVar12 = 4 - uVar7;
      }
      iVar9 = iVar9 + -0xc;
      uVar8 = uVar8 + 1;
      iVar13 = iVar13 + 0xc;
    } while ((char)((0 < iVar12) - (iVar12 < 0)) == '\x01');
    uVar14 = uVar8;
    if (0 < iVar12 == iVar12 < 0) {
      iVar11 = iVar11 + uVar8 * 0x18;
      goto joined_r0x0118f7d4;
    }
LAB_0118f49c:
    if (local_14c == 0) break;
    local_14c = local_14c + -1;
    iVar11 = *(int *)(iVar11 + uVar14 * 4 + 0x198);
  } while( true );
  iVar11 = 0;
joined_r0x0118f7d4:
  if (iVar3 == 0) {
    if (iVar11 == 0) {
      *param_1 = 0;
      return;
    }
    FUN_0119d4b4(auStack_c8,param_2,"if",2);
    uVar1 = FUN_01352d48(local_40,param_4);
    FUN_0125acb4(&local_38,auStack_c8,param_4,uVar1);
    if (local_38 == 0) goto LAB_0118f90c;
    local_e0 = local_38;
    local_dc = local_34;
    local_d8 = local_30;
    iStack_d4 = iStack_2c;
    iStack_d0 = iStack_28;
    FUN_01161600(auStack_c8);
    FUN_0119d4b4(auStack_c8,param_2,"else",4);
    uVar1 = FUN_01352d48(local_40,iVar11);
    FUN_0125acb4(&local_38,auStack_c8,iVar11,uVar1);
    if (local_38 != 0) {
      local_108 = local_30;
      local_104 = (undefined **)iStack_2c;
      local_100 = iStack_28;
      FUN_01161600(auStack_c8);
      local_148 = local_e0;
      ppuStack_144 = local_dc;
      iStack_140 = local_d8;
      iStack_13c = iStack_d4;
      iStack_138 = iStack_d0;
      local_130 = local_34;
      local_12c = local_108;
      iStack_128 = (int)local_104;
      iStack_124 = local_100;
      local_134 = local_38;
      piVar4 = (int *)thunk_FUN_016d4a50(0x28);
      if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x28);
      }
      local_34 = (undefined **)&DAT_01889528;
      *piVar4 = local_148;
      piVar4[1] = (int)ppuStack_144;
      piVar4[2] = iStack_140;
      piVar4[3] = iStack_13c;
      piVar4[4] = iStack_138;
      piVar4[5] = local_134;
      piVar4[6] = (int)local_130;
      piVar4[7] = local_12c;
      piVar4[8] = iStack_128;
      piVar4[9] = iStack_124;
      goto LAB_0118f964;
    }
    FUN_01161600(auStack_c8);
LAB_0118f958:
    piVar5 = &local_e0;
LAB_0118f95c:
    FUN_0115ccf0(piVar5);
  }
  else {
    if (iVar11 == 0) {
      FUN_0119d4b4(auStack_c8,param_2,"if",2);
      uVar1 = FUN_01352d48(local_40,param_4);
      FUN_0125acb4(&local_38,auStack_c8,param_4,uVar1);
      if (local_38 != 0) {
        local_e0 = local_38;
        local_dc = local_34;
        local_d8 = local_30;
        iStack_d4 = iStack_2c;
        iStack_d0 = iStack_28;
        FUN_01161600(auStack_c8);
        FUN_0119d4b4(auStack_c8,param_2,&DAT_00566d80,4);
        uVar1 = FUN_01352d48(local_40,iVar3);
        FUN_0125acb4(&local_38,auStack_c8,iVar3,uVar1);
        if (local_38 != 0) {
          local_108 = local_30;
          local_104 = (undefined **)iStack_2c;
          local_100 = iStack_28;
          FUN_01161600(auStack_c8);
          piVar10 = &local_148;
          local_148 = local_e0;
          ppuStack_144 = local_dc;
          iStack_140 = local_d8;
          iStack_13c = iStack_d4;
          iStack_138 = iStack_d0;
          local_130 = local_34;
          local_12c = local_108;
          iStack_128 = (int)local_104;
          iStack_124 = local_100;
          local_134 = local_38;
          piVar5 = (int *)thunk_FUN_016d4a50(0x28);
          if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0x28);
          }
          local_34 = &PTR_FUN_01889548;
          piVar4 = piVar5;
LAB_0118f7a0:
          iVar11 = piVar10[1];
          iVar9 = piVar10[2];
          iVar3 = piVar10[3];
          iVar13 = piVar10[4];
          *piVar5 = *piVar10;
          piVar5[1] = iVar11;
          piVar5[2] = iVar9;
          piVar5[3] = iVar3;
          piVar5[4] = iVar13;
          iVar11 = piVar10[6];
          iVar9 = piVar10[7];
          iVar3 = piVar10[8];
          iVar13 = piVar10[9];
          piVar5[5] = piVar10[5];
          piVar5[6] = iVar11;
          piVar5[7] = iVar9;
          piVar5[8] = iVar3;
          piVar5[9] = iVar13;
          goto LAB_0118f964;
        }
        FUN_01161600(auStack_c8);
        goto LAB_0118f958;
      }
    }
    else {
      FUN_0119d4b4(auStack_c8,param_2,"if",2);
      uVar1 = FUN_01352d48(local_40,param_4);
      FUN_0125acb4(&local_38,auStack_c8,param_4,uVar1);
      if (local_38 != 0) {
        local_108 = local_38;
        local_104 = local_34;
        local_100 = local_30;
        iStack_fc = iStack_2c;
        iStack_f8 = iStack_28;
        FUN_01161600(auStack_c8);
        FUN_0119d4b4(auStack_c8,param_2,&DAT_00566d80,4);
        uVar1 = FUN_01352d48(local_40,iVar3);
        FUN_0125acb4(&local_38,auStack_c8,iVar3,uVar1);
        if (local_38 == 0) {
          FUN_01161600(auStack_c8);
        }
        else {
          local_dc = local_34;
          local_e0 = local_38;
          local_d8 = local_30;
          iStack_d4 = iStack_2c;
          iStack_d0 = iStack_28;
          FUN_01161600(auStack_c8);
          FUN_0119d4b4(auStack_c8,param_2,"else",4);
          uVar1 = FUN_01352d48(local_40,iVar11);
          FUN_0125acb4(&local_38,auStack_c8,iVar11,uVar1);
          if (local_38 != 0) {
            local_f0 = local_30;
            iStack_ec = iStack_2c;
            iStack_e8 = iStack_28;
            FUN_01161600(auStack_c8);
            local_148 = local_108;
            ppuStack_144 = local_104;
            iStack_140 = local_100;
            iStack_13c = iStack_fc;
            iStack_138 = iStack_f8;
            local_134 = local_e0;
            local_130 = local_dc;
            local_12c = local_d8;
            iStack_128 = iStack_d4;
            iStack_124 = iStack_d0;
            local_11c = local_34;
            local_118 = local_f0;
            iStack_114 = iStack_ec;
            iStack_110 = iStack_e8;
            local_120 = local_38;
            piVar4 = (int *)thunk_FUN_016d4a50(0x3c);
            if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0x3c);
            }
            piVar10 = &local_134;
            local_34 = (undefined **)&DAT_01889568;
            *piVar4 = local_148;
            piVar4[1] = (int)ppuStack_144;
            piVar4[2] = iStack_140;
            piVar4[3] = iStack_13c;
            piVar4[4] = iStack_138;
            piVar5 = piVar4 + 5;
            goto LAB_0118f7a0;
          }
          FUN_01161600(auStack_c8);
          FUN_0115ccf0(&local_e0);
        }
        piVar5 = &local_108;
        goto LAB_0118f95c;
      }
    }
LAB_0118f90c:
    FUN_01161600(auStack_c8);
  }
  piVar4 = (int *)0x0;
LAB_0118f964:
  param_1[1] = piVar4;
  param_1[2] = local_34;
  *param_1 = 1;
  return;
}

