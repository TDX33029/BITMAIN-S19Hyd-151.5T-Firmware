// FUN_016caef4 @ 016caef4 size=556 calls_out=2 calls_in=1
// strings: 

void FUN_016caef4(uint *param_1,int *param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  int local_40;
  
  uVar12 = 0;
  if (*param_2 == 1) {
    iVar14 = param_2[5];
    uVar8 = param_2[1];
    if ((uVar8 < *(uint *)(iVar14 + 0x1c)) &&
       (piVar10 = (int *)(*(int *)(iVar14 + 0x18) + uVar8 * 0x20), piVar10[3] != 0)) {
      uVar4 = FUN_01a9c24c(piVar10[4],piVar10[5],piVar10[6],piVar10[7],param_3,param_4);
      uVar7 = uVar4 >> 0x19;
      iVar9 = *piVar10;
      uVar11 = piVar10[1];
      local_40 = 0;
      while( true ) {
        uVar4 = uVar11 & uVar4;
        uVar13 = *(uint *)(iVar9 + uVar4);
        uVar12 = uVar13 ^ uVar7 * 0x1010101;
        uVar12 = ~uVar12 & 0x80808080 & uVar12 + 0xfefefeff;
        while (uVar12 != 0) {
          uVar5 = uVar12 >> 8;
          uVar1 = uVar12 >> 0x10;
          uVar2 = uVar12 >> 0x18;
          uVar3 = uVar12 << 0x18;
          uVar12 = uVar12 - 1 & uVar12;
          uVar5 = uVar4 + ((uint)LZCOUNT(uVar3 | (uVar5 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                         uVar2) >> 3) & uVar11;
          piVar10 = (int *)(iVar9 + -0xc + uVar5 * -0xc);
          if ((param_4 == piVar10[1]) &&
             (iVar6 = thunk_FUN_01bed842(param_3,*piVar10 + 8,param_4), iVar6 == 0)) {
            uVar7 = *(uint *)(iVar9 + uVar5 * -0xc + -4);
            if (*(uint *)(iVar14 + 0x10) == 1) {
              if ((int)uVar7 < 0) {
                uVar12 = 0;
                goto LAB_016cb114;
              }
              uVar4 = uVar7 << 1;
              uVar8 = uVar7 << 1 | 1;
            }
            else {
              uVar12 = 0;
              if ((*(uint *)(iVar14 + 0x10) <= uVar8) ||
                 (piVar10 = (int *)(*(int *)(iVar14 + 0xc) + uVar8 * 8), iVar14 = *piVar10,
                 (uint)(piVar10[1] - iVar14) >> 1 < uVar7)) goto LAB_016cb114;
              uVar4 = (iVar14 + uVar7 * 2) - 2;
              if (uVar7 == 0) {
                uVar4 = uVar8 << 1;
              }
              uVar8 = uVar4 + 1;
            }
            uVar12 = 0;
            if (uVar4 < (uint)param_2[4]) {
              iVar14 = *(int *)(param_2[3] + uVar4 * 4);
              if ((iVar14 != 0) && (uVar8 < (uint)param_2[4])) {
                iVar9 = *(int *)(param_2[3] + uVar8 * 4);
                bVar15 = iVar9 != 0;
                if (bVar15) {
                  uVar4 = iVar9 - 1;
                }
                uVar12 = (uint)bVar15;
                if (bVar15) {
                  param_1[1] = iVar14 - 1;
                  param_1[2] = uVar4;
                }
              }
            }
            goto LAB_016cb114;
          }
        }
        uVar12 = 0;
        if ((uVar13 & 0x80808080 & uVar13 << 1) != 0) break;
        local_40 = local_40 + 4;
        uVar4 = uVar4 + local_40;
      }
    }
  }
LAB_016cb114:
  *param_1 = uVar12;
  return;
}

