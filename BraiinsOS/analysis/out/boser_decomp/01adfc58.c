// FUN_01adfc58 @ 01adfc58 size=744 calls_out=4 calls_in=2
// strings: 

undefined4 FUN_01adfc58(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint *puVar19;
  uint *puVar20;
  int iVar21;
  uint uVar22;
  int local_58;
  
  iVar14 = param_1[3];
  uVar15 = 0;
  if (iVar14 == param_2[3]) {
    puVar18 = (uint *)*param_1;
    iVar16 = *param_2;
    puVar20 = puVar18 + 1;
    iVar2 = param_2[4];
    iVar3 = param_2[5];
    iVar4 = param_2[6];
    iVar5 = param_2[7];
    uVar6 = param_2[1];
    iVar21 = iVar14;
    uVar7 = ~*puVar18 & 0x80808080;
switchD_01adfe5c_caseD_0:
    if (iVar21 == 0) {
      uVar15 = 1;
    }
    else {
      puVar19 = puVar20;
      if (uVar7 == 0) {
        do {
          puVar20 = puVar19 + 1;
          uVar7 = *puVar19;
          puVar18 = puVar18 + -0x28;
          puVar19 = puVar20;
        } while ((uVar7 & 0x80808080) == 0x80808080);
        uVar7 = uVar7 & 0x80808080 ^ 0x80808080;
      }
      uVar15 = 0;
      if (iVar14 != 0) {
        uVar13 = uVar7 - 1 & uVar7;
        iVar21 = iVar21 + -1;
        uVar1 = (uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                              (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3;
        uVar22 = puVar18[uVar1 * -10 + -8];
        uVar8 = puVar18[uVar1 * -10 + -9];
        uVar9 = FUN_01adafd4(iVar2,iVar3,iVar4,iVar5,uVar8,uVar22);
        uVar7 = uVar9 >> 0x19;
        local_58 = 0;
        while( true ) {
          uVar9 = uVar6 & uVar9;
          uVar17 = *(uint *)(iVar16 + uVar9);
          uVar10 = uVar17 ^ uVar7 * 0x1010101;
          uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
          while (uVar10 != 0) {
            uVar11 = uVar9 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                            (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                     uVar6;
            uVar10 = uVar10 - 1 & uVar10;
            iVar12 = iVar16 + -0x28 + uVar11 * -0x28;
            if ((uVar22 == *(uint *)(iVar12 + 8)) &&
               (iVar12 = thunk_FUN_01bed842(uVar8,*(undefined4 *)(iVar12 + 4),uVar22), iVar12 == 0))
            {
              iVar12 = iVar16 + uVar11 * -0x28;
              if ((char)puVar18[uVar1 * -10 + -6] != *(char *)(iVar12 + -0x18)) {
                return 0;
              }
              uVar7 = uVar13;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch((char)puVar18[uVar1 * -10 + -6]) {
              case '\0':
                goto switchD_01adfe5c_caseD_0;
              case '\x01':
                if (*(char *)((int)puVar18 + uVar1 * -0x28 + -0x17) != *(char *)(iVar12 + -0x17)) {
                  return 0;
                }
                goto switchD_01adfe5c_caseD_0;
              case '\x02':
                if (puVar18[uVar1 * -10 + -4] != *(uint *)(iVar12 + -0x10)) {
                  return 0;
                }
                if (puVar18[uVar1 * -10 + -4] == 2) {
                  if (*(double *)(puVar18 + uVar1 * -10 + -2) != *(double *)(iVar12 + -8)) {
                    return 0;
                  }
                }
                else if (puVar18[uVar1 * -10 + -2] != *(uint *)(iVar12 + -8) ||
                         puVar18[uVar1 * -10 + -1] != *(uint *)(iVar12 + -4)) {
                  return 0;
                }
                goto switchD_01adfe5c_caseD_0;
              case '\x03':
                if (puVar18[uVar1 * -10 + -3] != *(uint *)(iVar12 + -0xc)) {
                  return 0;
                }
                iVar12 = thunk_FUN_01bed842(puVar18[uVar1 * -10 + -4],
                                            *(undefined4 *)(iVar12 + -0x10));
                if (iVar12 != 0) {
                  return 0;
                }
                goto switchD_01adfe5c_caseD_0;
              case '\x04':
                iVar12 = FUN_01ae1940(puVar18[uVar1 * -10 + -4],puVar18[uVar1 * -10 + -3],
                                      *(undefined4 *)(iVar12 + -0x10),*(undefined4 *)(iVar12 + -0xc)
                                     );
                break;
              case '\x05':
                iVar12 = FUN_01ad9898(puVar18 + uVar1 * -10 + -5,iVar12 + -0x14);
              }
              if (iVar12 == 0) {
                return 0;
              }
              goto switchD_01adfe5c_caseD_0;
            }
          }
          uVar15 = 0;
          if ((uVar17 & 0x80808080 & uVar17 << 1) != 0) break;
          local_58 = local_58 + 4;
          uVar9 = uVar9 + local_58;
        }
      }
    }
  }
  return uVar15;
}

