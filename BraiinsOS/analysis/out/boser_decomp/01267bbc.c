// FUN_01267bbc @ 01267bbc size=612 calls_out=9 calls_in=2
// strings: 

void FUN_01267bbc(uint *param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  uint uVar12;
  int local_2c;
  
  uVar3 = *param_1;
  if (uVar3 < 0x3ffffffe) {
    if (*param_1 == uVar3) {
      bVar2 = (bool)hasExclusiveAccess(param_1);
      if (bVar2) {
        *param_1 = uVar3 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_01267bf8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(param_1);
LAB_01267bf8:
  if ((char)param_1[2] == '\0') {
    if (param_1[7] != 0) {
      iVar9 = *param_2;
      iVar8 = param_2[1];
      uVar4 = FUN_01ab2af4(param_1[8],param_1[9],param_1[10],param_1[0xb],iVar9,iVar8);
      uVar3 = uVar4 >> 0x19;
      uVar12 = param_1[4];
      local_2c = 0;
      while( true ) {
        uVar4 = param_1[5] & uVar4;
        uVar7 = *(uint *)(uVar12 + uVar4);
        uVar10 = uVar7 ^ uVar3 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar6 = uVar4 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                         (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) &
                  param_1[5];
          piVar11 = (int *)((uVar12 - 0x160) + uVar6 * -0x160);
          uVar10 = uVar10 - 1 & uVar10;
          if (iVar9 == *piVar11 && iVar8 == piVar11[1]) {
            piVar11 = (int *)FUN_01ac25d8(param_1 + 0x18);
            if (*piVar11 != 0) {
              FUN_01306fc8(&DAT_01c25394);
                    /* WARNING: Does not return */
              pcVar1 = (code *)software_udf(0xfdee,0x1267dd4);
              (*pcVar1)();
            }
            *piVar11 = -1;
            uVar5 = FUN_01ab49f0(uVar6 * -0x160 + uVar12 + -0x158);
            iVar8 = piVar11[3];
            if (iVar8 == piVar11[1]) {
              FUN_01a54b48();
            }
            *(undefined4 *)(piVar11[2] + iVar8 * 4) = uVar5;
            piVar11[3] = iVar8 + 1;
            *piVar11 = *piVar11 + 1;
            goto LAB_01267d58;
          }
        }
        if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
        local_2c = local_2c + 4;
        uVar4 = uVar4 + local_2c;
      }
    }
LAB_01267d58:
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = uVar3 - 1;
    if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) {
      FUN_019a33c4(param_1);
    }
  }
  else {
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar8 = FUN_0197ac0c(), iVar8 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_00531614,0xd,&DAT_01c253a4);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar3 = *param_1;
      bVar2 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar2);
    *param_1 = uVar3 - 1;
    if ((uVar3 - 1 & 0xbfffffff) == 0x80000000) {
      FUN_019a33c4(param_1);
      return;
    }
  }
  return;
}

