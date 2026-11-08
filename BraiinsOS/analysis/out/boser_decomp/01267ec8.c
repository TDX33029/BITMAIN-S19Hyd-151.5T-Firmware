// FUN_01267ec8 @ 01267ec8 size=512 calls_out=6 calls_in=2
// strings: 

void FUN_01267ec8(uint *param_1,int *param_2,undefined4 *param_3)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int local_30;
  
  uVar2 = *param_1;
  if (uVar2 < 0x3ffffffe) {
    if (*param_1 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar2 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_01267f08;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(param_1);
LAB_01267f08:
  if ((char)param_1[2] == '\0') {
    if (param_1[7] != 0) {
      iVar8 = *param_2;
      iVar9 = param_2[1];
      uVar3 = FUN_01ab2af4(param_1[8],param_1[9],param_1[10],param_1[0xb],iVar8,iVar9);
      uVar2 = uVar3 >> 0x19;
      uVar5 = param_1[4];
      local_30 = 0;
      while( true ) {
        uVar3 = param_1[5] & uVar3;
        uVar10 = *(uint *)(uVar5 + uVar3);
        uVar6 = uVar10 ^ uVar2 * 0x1010101;
        uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
        while (uVar6 != 0) {
          uVar4 = uVar3 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                         (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                  param_1[5];
          piVar7 = (int *)((uVar5 - 0x160) + uVar4 * -0x160);
          uVar6 = uVar6 - 1 & uVar6;
          if (iVar8 == *piVar7 && iVar9 == piVar7[1]) {
            FUN_01ab498c(uVar4 * -0x160 + uVar5 + -0x158,*param_3);
            goto LAB_01268010;
          }
        }
        if ((uVar10 & 0x80808080 & uVar10 << 1) != 0) break;
        local_30 = local_30 + 4;
        uVar3 = uVar3 + local_30;
      }
    }
LAB_01268010:
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar2 - 1;
    if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
      FUN_019a33c4(param_1);
    }
  }
  else {
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar8 = FUN_0197ac0c(), iVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_00531614,0xd,&DAT_01c253b4);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *param_1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar2 - 1;
    if ((uVar2 - 1 & 0xbfffffff) == 0x80000000) {
      FUN_019a33c4(param_1);
      return;
    }
  }
  return;
}

