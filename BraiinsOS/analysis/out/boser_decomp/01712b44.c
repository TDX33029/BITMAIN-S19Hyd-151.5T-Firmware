// FUN_01712b44 @ 01712b44 size=208 calls_out=4 calls_in=2
// strings: 

undefined8 FUN_01712b44(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  bVar3 = param_1[2] != 0;
  iVar1 = 0;
  if (bVar3) {
    iVar1 = param_1[3];
  }
  if (bVar3 && iVar1 != 0) {
    FUN_01702f28();
  }
  param_1[2] = 1;
  param_1[3] = param_2;
  iVar1 = FUN_017cbfe4(param_1 + 2);
  if (iVar1 == 0) {
    iVar1 = param_1[2];
    param_2 = param_1[3];
    param_1[2] = 0;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *param_1;
      bVar3 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar3);
    *param_1 = iVar1 + -1;
    uVar2 = 1;
  }
  else {
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *param_1;
      bVar3 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar3);
    *param_1 = iVar1 + -1;
    uVar2 = 0;
  }
  if (iVar1 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0170357c(param_1);
  }
  return CONCAT44(param_2,uVar2);
}

