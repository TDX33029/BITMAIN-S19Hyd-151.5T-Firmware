// FUN_00a6073c @ 00a6073c size=272 calls_out=6 calls_in=3
// strings: 

void FUN_00a6073c(int *param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 local_1c;
  
  local_1c = 0;
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d2ce08);
  }
  piVar3 = param_2 + 2;
  if (*piVar3 != 0x1e || param_2[3] != 0) {
    FUN_00a57840(piVar3);
  }
  FUN_01bed4e2(piVar3,param_3,0x2e0);
  iVar2 = FUN_00a5785c(piVar3);
  if (iVar2 == 0) {
    iVar2 = *piVar3;
    iVar4 = param_2[3];
    *piVar3 = 0x1e;
    param_2[3] = 0;
    if (iVar2 == 0x1e && iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2ce18);
    }
    FUN_01bed4e2(param_1 + 2,param_2 + 4,0x2d8);
    *param_1 = iVar2;
    param_1[1] = iVar4;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
  }
  else {
    *param_1 = 0x1e;
    param_1[1] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *param_2;
      bVar1 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar1);
    *param_2 = iVar2 + -1;
  }
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a96530(param_2);
  }
  FUN_00b9c174(&local_1c);
  return;
}

