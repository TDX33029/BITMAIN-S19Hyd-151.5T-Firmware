// FUN_01ab6a58 @ 01ab6a58 size=484 calls_out=5 calls_in=3
// strings: 

undefined4 FUN_01ab6a58(uint *param_1,int *param_2)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_28;
  
  uVar2 = *param_1;
  if (uVar2 < 0x3ffffffe) {
    if (*param_1 == uVar2) {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = uVar2 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_01ab6a94;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(param_1);
LAB_01ab6a94:
  if ((char)param_1[2] == '\0') {
    if (param_1[7] == 0) {
      uVar6 = 0;
    }
    else {
      iVar9 = *param_2;
      iVar8 = param_2[1];
      uVar3 = FUN_01ab2af4(param_1[8],param_1[9],param_1[10],param_1[0xb],iVar9,iVar8);
      uVar2 = uVar3 >> 0x19;
      local_28 = 0;
      while( true ) {
        uVar3 = param_1[5] & uVar3;
        uVar4 = *(uint *)(param_1[4] + uVar3);
        uVar5 = uVar4 ^ uVar2 * 0x1010101;
        uVar5 = ~uVar5 & 0x80808080 & uVar5 + 0xfefefeff;
        while (uVar5 != 0) {
          piVar7 = (int *)((param_1[4] - 0x160) +
                          (uVar3 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                                  (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3)
                          & param_1[5]) * -0x160);
          uVar5 = uVar5 - 1 & uVar5;
          uVar6 = 1;
          if (iVar9 == *piVar7 && iVar8 == piVar7[1]) goto LAB_01ab6b90;
        }
        uVar6 = 0;
        if ((uVar4 & 0x80808080 & uVar4 << 1) != 0) break;
        local_28 = local_28 + 4;
        uVar3 = uVar3 + local_28;
      }
    }
LAB_01ab6b90:
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *param_1 - 1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar2;
  }
  else {
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar8 = FUN_0197ac0c(), iVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_00531614,0xd,&DAT_01d2edb4);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar2 = *param_1 - 1;
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = uVar2;
    uVar6 = 0;
  }
  if ((uVar2 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(param_1);
  }
  return uVar6;
}

