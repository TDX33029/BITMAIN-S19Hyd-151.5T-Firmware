// FUN_01a4b568 @ 01a4b568 size=428 calls_out=5 calls_in=8
// strings: 

void FUN_01a4b568(undefined4 *param_1,undefined4 *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int local_3c;
  
  uVar7 = *(undefined4 *)(param_3 + 4);
  iVar12 = *(int *)(param_3 + 8);
  uVar1 = FUN_0133db9c(*param_2,param_2[1],param_2[2],param_2[3],uVar7,iVar12);
  iVar2 = param_2[5];
  uVar13 = param_2[6];
  iVar6 = param_2[7];
  uVar9 = param_2[8];
  local_3c = 0;
  uVar5 = uVar1;
  do {
    uVar5 = uVar9 & uVar5;
    uVar11 = *(uint *)(iVar6 + uVar5);
    uVar3 = uVar11 ^ (uVar1 >> 0x19) * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar8 = uVar5 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                     (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) & uVar9;
      uVar10 = *(uint *)(iVar6 + -4 + uVar8 * -4);
      if (uVar13 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,uVar13,&DAT_01d307c8);
      }
      iVar4 = iVar2 + uVar10 * 0xc0;
      if ((iVar12 == *(int *)(iVar4 + 0x78)) &&
         (iVar4 = thunk_FUN_01bed842(uVar7,*(undefined4 *)(iVar4 + 0x74),iVar12), iVar4 == 0)) {
        param_1[3] = uVar8;
        *param_1 = 0x80000000;
        param_1[1] = param_2 + 4;
        param_1[2] = uVar10;
        FUN_01a49de4(param_3);
        return;
      }
    }
    if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) {
      FUN_01bed4e2(param_1,param_3,0x48);
      param_1[0x12] = param_2 + 4;
      param_1[0x13] = uVar1;
      return;
    }
    local_3c = local_3c + 4;
    uVar5 = local_3c + uVar5;
  } while( true );
}

