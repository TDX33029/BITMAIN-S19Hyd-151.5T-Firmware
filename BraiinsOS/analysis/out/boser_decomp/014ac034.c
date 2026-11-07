// FUN_014ac034 @ 014ac034 size=876 calls_out=7 calls_in=1
// strings: 

void FUN_014ac034(int *param_1,int *param_2)

{
  uint uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int local_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  int iStack_144;
  int iStack_140;
  int iStack_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int local_124;
  int iStack_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int local_110;
  int iStack_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  int iStack_f0;
  int iStack_ec;
  int iStack_e8;
  int local_e4;
  int iStack_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined4 local_48 [9];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xb]) {
  case '\0':
    param_2[9] = param_2[8];
    piVar9 = (int *)param_2[10];
    if (piVar9[3] != 0) {
      cVar2 = *(char *)((int)param_2 + 0x2d);
      iVar13 = param_2[6];
      iVar11 = param_2[7];
      uVar4 = FUN_01a60560(piVar9[4],piVar9[5],piVar9[6],piVar9[7],iVar13,iVar11);
      uVar1 = uVar4 >> 0x19;
      iVar10 = *piVar9;
      uVar12 = piVar9[1];
      iVar15 = 0;
      while( true ) {
        uVar4 = uVar12 & uVar4;
        uVar14 = *(uint *)(iVar10 + uVar4);
        uVar5 = uVar14 ^ uVar1 * 0x1010101;
        uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
        while( true ) {
          if (uVar5 == 0) break;
          uVar6 = uVar4 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar12
          ;
          puVar7 = (undefined4 *)(iVar10 + -0x1c + uVar6 * -0x1c);
          if (iVar11 == puVar7[1]) {
            iVar8 = thunk_FUN_01bed842(iVar13,*puVar7);
            if (iVar8 == 0) {
              iVar10 = iVar10 + uVar6 * -0x1c;
              if (cVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x014ac258. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&DAT_014ac25c + *(int *)(&DAT_014ac25c + *(int *)(iVar10 + -0x14) * 4)))
                          ();
                return;
              }
              if (*(int *)(iVar10 + -8) == 0) {
                *param_2 = 2;
              }
              else {
                (**(code **)(*(int *)(iVar10 + -4) + 0x14))
                          (param_2,*(int *)(iVar10 + -8),iVar13,iVar11,param_2 + 9);
                if (*param_2 != 2) {
                  iVar10 = param_2[1];
                  iVar11 = param_2[2];
                  iVar13 = param_2[3];
                  iVar15 = param_2[4];
                  iVar8 = param_2[5];
                  piVar9 = (int *)((uint)&local_138 | 4);
                  *piVar9 = *param_2;
                  piVar9[1] = iVar10;
                  piVar9[2] = iVar11;
                  piVar9[3] = iVar13;
                  piVar9[4] = iVar15;
                  piVar9[5] = iVar8;
                  goto LAB_014ac358;
                }
              }
                    /* WARNING: Could not recover jumptable at 0x014ac3a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&DAT_014ac3ac + *(int *)(&DAT_014ac3ac + *(int *)(iVar10 + -0x14) * 4)))();
              return;
            }
          }
          uVar5 = uVar5 - 1 & uVar5;
        }
        if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) break;
        iVar15 = iVar15 + 4;
        uVar4 = uVar4 + iVar15;
      }
    }
    local_48[0] = 0;
    FUN_014a5cd0(&local_178,local_48);
    piVar9 = (int *)((uint)&local_138 | 4);
    *piVar9 = local_178;
    piVar9[1] = iStack_174;
    piVar9[2] = iStack_170;
    piVar9[3] = iStack_16c;
    piVar9[4] = iStack_168;
    piVar9[5] = local_164;
    goto LAB_014ac358;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01cf95a4);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01cf95a4);
  case '\x03':
    (**(code **)(param_2[0xd] + 0xc))(&local_178,param_2[0xc]);
    if (local_178 == 3) {
      *param_1 = 2;
      uVar3 = 3;
      goto LAB_014ac388;
    }
    local_138 = local_178;
    iStack_134 = iStack_174;
    iStack_130 = iStack_170;
    iStack_12c = iStack_16c;
    iStack_128 = iStack_168;
    local_124 = local_164;
    iStack_120 = iStack_160;
    iStack_11c = iStack_15c;
    iStack_118 = iStack_158;
    iStack_114 = iStack_154;
    local_110 = local_150;
    iStack_10c = iStack_14c;
    iStack_108 = iStack_148;
    iStack_104 = iStack_144;
    iStack_100 = iStack_140;
    iStack_fc = iStack_13c;
    FUN_01139b38(param_2[0xc],param_2[0xd]);
    break;
  case '\x04':
    (**(code **)(param_2[0xd] + 0xc))(&local_178,param_2[0xc]);
    if (local_178 == 3) {
      *param_1 = 2;
      uVar3 = 4;
      goto LAB_014ac388;
    }
    local_138 = local_178;
    iStack_134 = iStack_174;
    iStack_130 = iStack_170;
    iStack_12c = iStack_16c;
    iStack_128 = iStack_168;
    local_124 = local_164;
    iStack_120 = iStack_160;
    iStack_11c = iStack_15c;
    iStack_118 = iStack_158;
    iStack_114 = iStack_154;
    local_110 = local_150;
    iStack_10c = iStack_14c;
    iStack_108 = iStack_148;
    iStack_104 = iStack_144;
    iStack_100 = iStack_140;
    iStack_fc = iStack_13c;
    FUN_01139b38(param_2[0xc],param_2[0xd]);
  }
  if (local_138 == 2) {
LAB_014ac358:
    FUN_014a5080(&local_f8,(uint)&local_138 | 4);
  }
  else {
    local_f8 = local_138;
    iStack_f4 = iStack_134;
    iStack_f0 = iStack_130;
    iStack_ec = iStack_12c;
    iStack_e8 = iStack_128;
    local_e4 = local_124;
    iStack_e0 = iStack_120;
    iStack_dc = iStack_11c;
    iStack_d8 = iStack_118;
    iStack_d4 = iStack_114;
    local_d0 = local_110;
    iStack_cc = iStack_10c;
    iStack_c8 = iStack_108;
    iStack_c4 = iStack_104;
    iStack_c0 = iStack_100;
    iStack_bc = iStack_fc;
  }
  *param_1 = local_f8;
  param_1[1] = iStack_f4;
  param_1[2] = iStack_f0;
  param_1[3] = iStack_ec;
  param_1[4] = iStack_e8;
  param_1[5] = local_e4;
  param_1[6] = iStack_e0;
  param_1[7] = iStack_dc;
  param_1[8] = iStack_d8;
  param_1[9] = iStack_d4;
  uVar3 = 1;
  param_1[10] = local_d0;
  param_1[0xb] = iStack_cc;
  param_1[0xc] = iStack_c8;
  param_1[0xd] = iStack_c4;
  param_1[0xe] = iStack_c0;
  param_1[0xf] = iStack_bc;
LAB_014ac388:
  *(undefined1 *)(param_2 + 0xb) = uVar3;
  return;
}

