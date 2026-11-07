// FUN_006e05dc @ 006e05dc size=432 calls_out=3 calls_in=18
// strings: 

uint FUN_006e05dc(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  
  uVar8 = param_1[6];
  uVar9 = 0;
  if (uVar8 != 0) {
    if (uVar8 == 1) {
      iVar10 = param_1[5];
      if (param_3 == *(int *)(iVar10 + 0xbc)) {
        iVar2 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar10 + 0xb8),param_3);
        uVar9 = 0;
        if (iVar2 == 0) {
LAB_006e0634:
          if (uVar8 <= uVar9) {
            puVar6 = &DAT_01d2c084;
LAB_006e0780:
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar9,uVar8,puVar6);
          }
          uVar9 = iVar10 + uVar9 * 0xc0;
        }
      }
    }
    else {
      uVar3 = FUN_01a60560(*param_1,param_1[1],param_1[2],param_1[3],param_2,param_3);
      uVar1 = uVar3 >> 0x19;
      iVar10 = param_1[5];
      uVar7 = param_1[8];
      iVar2 = param_1[7];
      iVar11 = 0;
      while( true ) {
        uVar3 = uVar7 & uVar3;
        uVar12 = *(uint *)(iVar2 + uVar3);
        uVar9 = uVar12 ^ uVar1 * 0x1010101;
        for (uVar5 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5
            ) {
          uVar9 = *(uint *)(iVar2 + -4 +
                           (uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                                   (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3
                                    ) & uVar7) * -4);
          if (uVar8 <= uVar9) {
            puVar6 = &DAT_01d307c8;
            goto LAB_006e0780;
          }
          iVar4 = iVar10 + uVar9 * 0xc0;
          if ((param_3 == *(int *)(iVar4 + 0xbc)) &&
             (iVar4 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar4 + 0xb8),param_3), iVar4 == 0)
             ) goto LAB_006e0634;
        }
        uVar9 = 0;
        if ((uVar12 & 0x80808080 & uVar12 << 1) != 0) break;
        iVar11 = iVar11 + 4;
        uVar3 = iVar11 + uVar3;
      }
    }
  }
  return uVar9;
}

