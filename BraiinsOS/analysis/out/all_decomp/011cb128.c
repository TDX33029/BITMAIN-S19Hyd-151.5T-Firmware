// FUN_011cb128 @ 011cb128 size=540 calls_out=5 calls_in=1
// strings: 

void FUN_011cb128(int *param_1,undefined4 param_2,undefined4 param_3,int *param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  undefined4 *puVar4;
  int iVar5;
  
  bVar3 = FUN_012372e0(param_2,param_3);
  if (bVar3 == 0) {
    do {
      iVar5 = *param_4;
      bVar2 = (bool)hasExclusiveAccess(param_4);
    } while (!bVar2);
    *param_4 = iVar5 + 1;
    if (-1 < iVar5) {
      DataMemoryBarrier(0xb);
      if (DAT_018da8bc != 0) {
        FUN_0120d52c();
      }
      do {
        iVar5 = *DAT_018da8b4;
        bVar2 = (bool)hasExclusiveAccess(DAT_018da8b4);
      } while (!bVar2);
      *DAT_018da8b4 = iVar5 + 1;
      if (-1 < iVar5) {
        iVar5 = FUN_011f07a8(param_4,param_5,param_4,param_5,DAT_018da8b4,DAT_018da8b8,param_6,
                             &DAT_0038bd72);
        *param_1 = 0;
        param_1[1] = iVar5;
        return;
      }
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x11cb374);
    (*pcVar1)();
  }
  puVar4 = (undefined4 *)thunk_FUN_016d4a50(8);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(LZCOUNT((uint)(byte)((((((((bVar3 & 1) << 1 | bVar3 >> 1 & 1) << 1 | bVar3 >> 2 & 1) << 1 |
                                 bVar3 >> 3 & 1) << 1 | bVar3 >> 4 & 1) << 1 | bVar3 >> 5 & 1) << 1
                              | bVar3 >> 6 & 1) << 1 | bVar3 >> 7) << 0x18)) {
  case 1:
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar4 = param_4;
    puVar4[1] = param_5;
    *param_1 = (int)puVar4;
    param_1[1] = (int)&DAT_0188a044;
    return;
  case 2:
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar4 = param_4;
    puVar4[1] = param_5;
    *param_1 = (int)puVar4;
    param_1[1] = (int)&DAT_0188a064;
    return;
  case 3:
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar4 = param_4;
    puVar4[1] = param_5;
    *param_1 = (int)puVar4;
    param_1[1] = (int)&DAT_0188a084;
    return;
  case 4:
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar4 = param_4;
    puVar4[1] = param_5;
    *param_1 = (int)puVar4;
    param_1[1] = (int)&DAT_0188a0a4;
    return;
  case 5:
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar4 = param_4;
    puVar4[1] = param_5;
    *param_1 = (int)puVar4;
    param_1[1] = (int)&DAT_0188a0c4;
    return;
  case 6:
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar4 = param_4;
    puVar4[1] = param_5;
    *param_1 = (int)puVar4;
    param_1[1] = (int)&DAT_0188a0e4;
    return;
  }
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar4 = param_4;
  puVar4[1] = param_5;
  *param_1 = (int)puVar4;
  param_1[1] = (int)&DAT_0188a024;
  return;
}

