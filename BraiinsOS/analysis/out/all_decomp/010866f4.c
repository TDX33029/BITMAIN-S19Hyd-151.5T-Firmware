// FUN_010866f4 @ 010866f4 size=788 calls_out=3 calls_in=0
// strings: 

void FUN_010866f4(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined1 *puVar6;
  uint extraout_r3;
  uint extraout_r3_00;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  uint local_38;
  uint local_34;
  uint local_30;
  
  iVar1 = ((uint)param_2 % 0x43) * 0x20;
  puVar2 = (uint *)(&DAT_018dc820 + iVar1);
  piVar10 = (int *)(&DAT_018dc824 + iVar1);
  do {
    FUN_015f3b0c(&local_38,1,param_3,param_4);
    uVar5 = local_30;
    uVar9 = local_34;
    uVar4 = local_38;
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    uVar8 = extraout_r3;
    if (*(int *)(&DAT_018dc824 + iVar1) == 1) {
LAB_010867a0:
      do {
        param_4 = uVar8;
        iVar3 = *piVar10;
        bVar13 = (bool)hasExclusiveAccess(piVar10);
        uVar8 = param_4;
      } while (!bVar13);
      *piVar10 = 1;
      DataMemoryBarrier(0xb);
      if (iVar3 == 1) {
        uVar8 = 0;
        do {
          if (uVar8 < 7) {
            uVar11 = 1;
            do {
              uVar12 = uVar11 >> (uVar8 & 0xff);
              uVar11 = uVar11 + 1;
              HintYield();
            } while (uVar12 == 0);
            uVar8 = uVar8 + 1;
          }
          else {
            FUN_016da3a8();
            param_4 = extraout_r3_00;
            if (uVar8 < 0xb) {
              uVar8 = uVar8 + 1;
            }
          }
          do {
            iVar3 = *piVar10;
            bVar13 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar13);
          *piVar10 = 1;
          DataMemoryBarrier(0xb);
        } while (iVar3 == 1);
      }
      DataMemoryBarrier(0xb);
      uVar11 = *param_2;
      uVar12 = param_2[1];
      param_3 = param_2[2];
      DataMemoryBarrier(0xb);
      *piVar10 = iVar3;
    }
    else {
      param_3 = param_2[2];
      param_4 = param_2[3];
      uVar11 = *param_2;
      uVar12 = param_2[1];
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      uVar8 = *puVar2;
      if (*puVar2 != *puVar2 || *(int *)(&DAT_018dc824 + iVar1) != *(int *)(&DAT_018dc824 + iVar1))
      goto LAB_010867a0;
    }
    bVar13 = (int)(uVar9 - (uVar12 + (uVar4 < uVar11))) < 0 ==
             (SBORROW4(uVar9,uVar12) != SBORROW4(uVar9 - uVar12,(uint)(uVar4 < uVar11)));
    if (uVar4 == uVar11 && uVar9 == uVar12) {
      bVar13 = param_3 <= uVar5;
    }
    if (!bVar13) {
      *(undefined1 *)param_1 = 0;
      param_1[2] = (uint)&DAT_3b9aca00;
      return;
    }
    uVar8 = param_2[5];
    uVar7 = uVar4 + param_2[4];
    uVar4 = uVar9 + uVar8 + (uint)CARRY4(uVar4,param_2[4]);
    if ((int)uVar8 < 0 != (int)((uVar9 ^ uVar4) & ~(uVar9 ^ uVar8)) < 0) {
LAB_01086980:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
    }
    puVar6 = (undefined1 *)(param_2[6] + uVar5);
    if (&DAT_3b9aca00 <= puVar6) {
      bVar13 = 0xfffffffe < uVar7;
      uVar7 = uVar7 + 1;
      uVar9 = uVar4 + bVar13;
      if ((int)((uVar4 ^ uVar9) & ~uVar4) < 0) goto LAB_01086980;
      puVar6 = puVar6 + -1000000000;
      uVar4 = uVar9;
    }
    do {
      iVar3 = *piVar10;
      bVar13 = (bool)hasExclusiveAccess(piVar10);
    } while (!bVar13);
    *piVar10 = 1;
    DataMemoryBarrier(0xb);
    if (iVar3 == 1) {
      uVar9 = 0;
      do {
        if (uVar9 < 7) {
          uVar5 = 1;
          do {
            uVar8 = uVar5 >> (uVar9 & 0xff);
            uVar5 = uVar5 + 1;
            HintYield();
          } while (uVar8 == 0);
          uVar9 = uVar9 + 1;
        }
        else {
          FUN_016da3a8();
          if (uVar9 < 0xb) {
            uVar9 = uVar9 + 1;
          }
        }
        do {
          iVar3 = *piVar10;
          bVar13 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar13);
        *piVar10 = 1;
        DataMemoryBarrier(0xb);
      } while (iVar3 == 1);
    }
    DataMemoryBarrier(0xb);
    uVar9 = *param_2 ^ uVar11 | param_2[1] ^ uVar12;
    bVar13 = uVar9 == 0;
    if (bVar13) {
      uVar9 = param_2[2];
    }
    if (bVar13 && uVar9 == param_3) {
      *param_2 = uVar7;
      param_2[1] = uVar4;
      param_2[2] = (uint)puVar6;
      if (iVar3 + 2 == 0) {
        DataMemoryBarrier(0xb);
        *puVar2 = *puVar2 + 1;
      }
      DataMemoryBarrier(0xb);
      *piVar10 = iVar3 + 2;
      *param_1 = uVar11;
      param_1[1] = uVar12;
      param_1[2] = param_3;
      return;
    }
    DataMemoryBarrier(0xb);
    *piVar10 = iVar3;
  } while( true );
}

