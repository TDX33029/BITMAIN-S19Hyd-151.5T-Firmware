// FUN_00a3a0e4 @ 00a3a0e4 size=416 calls_out=4 calls_in=0
// strings: 

bool FUN_00a3a0e4(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint unaff_r4;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int local_28;
  
  puVar3 = (undefined4 *)FUN_00a359d4();
  if (puVar3 != (undefined4 *)0x0) {
    unaff_r4 = puVar3[6];
  }
  bVar2 = false;
  if (puVar3 != (undefined4 *)0x0 && unaff_r4 != 0) {
    if (unaff_r4 == 1) {
      if (param_3 == *(int *)(puVar3[5] + 0xd4)) {
        iVar4 = thunk_FUN_01bed842(param_2,*(undefined4 *)(puVar3[5] + 0xd0),param_3);
        bVar2 = iVar4 == 0;
      }
    }
    else {
      uVar5 = FUN_01a9c24c(*puVar3,puVar3[1],puVar3[2],puVar3[3],param_2,param_3);
      uVar1 = uVar5 >> 0x19;
      iVar4 = puVar3[7];
      iVar11 = puVar3[5];
      uVar9 = puVar3[8];
      local_28 = 0;
      while( true ) {
        uVar5 = uVar9 & uVar5;
        uVar10 = *(uint *)(iVar4 + uVar5);
        uVar6 = uVar10 ^ uVar1 * 0x1010101;
        for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6
            ) {
          uVar7 = *(uint *)(iVar4 + -4 +
                           (uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                                   (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3
                                    ) & uVar9) * -4);
          if (unaff_r4 <= uVar7) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar7,unaff_r4,&DAT_01d307c8);
          }
          iVar8 = uVar7 * 0xd8 + iVar11;
          if ((param_3 == *(int *)(iVar8 + 0xd4)) &&
             (iVar8 = thunk_FUN_01bed842(param_2,*(undefined4 *)(iVar8 + 0xd0),param_3), iVar8 == 0)
             ) {
            return true;
          }
        }
        bVar2 = false;
        if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
        local_28 = local_28 + 4;
        uVar5 = local_28 + uVar5;
      }
    }
  }
  return bVar2;
}

