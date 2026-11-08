// FUN_01a3ae30 @ 01a3ae30 size=236 calls_out=5 calls_in=1
// strings: 

void FUN_01a3ae30(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  uint uVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xc]) {
  case '\0':
    iVar7 = param_2[1];
    *(undefined1 *)(param_2 + 0xb) = 0;
    param_2[7] = 0;
    param_2[8] = 0;
    param_2[9] = iVar7;
    param_2[10] = iVar7;
    param_2[2] = *param_2;
    param_2[3] = iVar7;
    param_2[4] = *param_2 + 8;
    param_2[5] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d2bbd0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d2bbd0);
  }
  uVar3 = FUN_019f9bc4(param_2 + 4,param_3);
  uVar8 = uVar3 & 0xff;
  if (uVar8 == 2) {
    uVar2 = 3;
    uVar5 = 1;
  }
  else {
    FUN_0193c3cc(param_2 + 4);
    if ((uVar3 & 1) == 0) {
      iVar7 = param_2[2];
      uVar8 = param_2[3];
    }
    else {
      piVar4 = (int *)param_2[2];
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      iVar7 = 0;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_01a38efc(param_2[2]);
      }
    }
    uVar2 = 1;
    uVar5 = 0;
    param_1[1] = iVar7;
    param_1[2] = uVar8;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar2;
  *param_1 = uVar5;
  return;
}

