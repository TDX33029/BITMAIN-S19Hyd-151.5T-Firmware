// FUN_0160d0d8 @ 0160d0d8 size=444 calls_out=6 calls_in=1
// strings: 

undefined8 FUN_0160d0d8(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  if (param_2 != 0) {
    uVar9 = 0;
    if (param_3 < 0) {
LAB_0160d0fc:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar9,param_3);
    }
    if (param_3 == 0) {
      iVar2 = 1;
      iVar10 = 0;
    }
    else {
      uVar9 = 1;
      iVar2 = FUN_01298504(param_3,1);
      iVar10 = param_3;
      if (iVar2 == 0) goto LAB_0160d0fc;
    }
    FUN_01bed4e2(iVar2,param_2,param_3);
    if (param_1[3] != 0) {
      uVar3 = FUN_01adafd4(param_1[4],param_1[5],param_1[6],param_1[7],iVar2,param_3);
      uVar1 = uVar3 >> 0x19;
      iVar11 = *param_1;
      uVar8 = param_1[1];
      iVar12 = 0;
      while( true ) {
        uVar3 = uVar8 & uVar3;
        uVar4 = *(uint *)(iVar11 + uVar3);
        uVar5 = uVar4 ^ uVar1 * 0x1010101;
        for (uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5
            ) {
          uVar6 = uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                         (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) & uVar8;
          iVar7 = iVar11 + -0x18 + uVar6 * -0x18;
          if ((param_3 == *(int *)(iVar7 + 8)) &&
             (iVar7 = thunk_FUN_01bed842(iVar2,*(undefined4 *)(iVar7 + 4),param_3), iVar7 == 0)) {
            FUN_019bb7e0(iVar10,iVar2);
            param_1 = (int *)(iVar11 + uVar6 * -0x18 + -8);
            goto LAB_0160d288;
          }
        }
        if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
        iVar12 = iVar12 + 4;
        uVar3 = uVar3 + iVar12;
      }
    }
    FUN_019bb7e0(iVar10,iVar2);
  }
  param_1 = param_1 + 10;
LAB_0160d288:
  return *(undefined8 *)param_1;
}

