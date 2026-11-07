// FUN_006e0288 @ 006e0288 size=412 calls_out=3 calls_in=1
// strings: 

bool FUN_006e0288(undefined4 *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int local_2c;
  
  uVar8 = param_1[6];
  bVar2 = false;
  if (uVar8 != 0) {
    iVar9 = param_1[5];
    if (uVar8 == 1) {
      if (param_3 == *(int *)(iVar9 + 8)) {
        iVar9 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar9 + 4),param_3);
        bVar2 = iVar9 == 0;
      }
    }
    else {
      uVar3 = FUN_01a60560(*param_1,param_1[1],param_1[2],param_1[3],param_2,param_3);
      uVar1 = uVar3 >> 0x19;
      iVar10 = param_1[7];
      uVar7 = param_1[8];
      local_2c = 0;
      while( true ) {
        uVar3 = uVar7 & uVar3;
        uVar11 = *(uint *)(iVar10 + uVar3);
        uVar4 = uVar11 ^ uVar1 * 0x1010101;
        for (uVar4 = ~uVar4 & 0x80808080 & uVar4 + 0xfefefeff; uVar4 != 0; uVar4 = uVar4 - 1 & uVar4
            ) {
          uVar5 = *(uint *)(iVar10 + -4 +
                           (uVar3 + ((uint)LZCOUNT(uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 |
                                                   (uVar4 >> 0x10 & 0xff) << 8 | uVar4 >> 0x18) >> 3
                                    ) & uVar7) * -4);
          if (uVar8 <= uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar5,uVar8,&DAT_01d307c8);
          }
          iVar6 = uVar5 * 0x54 + iVar9;
          if ((param_3 == *(int *)(iVar6 + 8)) &&
             (iVar6 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar6 + 4),param_3), iVar6 == 0)) {
            return true;
          }
        }
        bVar2 = false;
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        local_2c = local_2c + 4;
        uVar3 = local_2c + uVar3;
      }
    }
  }
  return bVar2;
}

