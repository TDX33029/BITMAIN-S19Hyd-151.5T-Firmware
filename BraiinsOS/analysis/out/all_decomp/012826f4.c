// FUN_012826f4 @ 012826f4 size=292 calls_out=7 calls_in=6
// strings: internal error: entered unreachable code: unparked deadlocked thread!

void FUN_012826f4(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  int iStack_1c;
  
  if ((char)param_1[0xb] == '\0') {
    return;
  }
  iVar3 = param_1[5];
  iVar2 = param_1[6];
  param_1[5] = 3;
  if (iVar3 == 3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_0188ba40);
  }
  iVar1 = param_1[10];
  FUN_0062ac6c(&iStack_38);
  iStack_28 = iStack_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  iStack_1c = iVar1;
  FUN_0128504c(&iStack_38,iVar3,iVar2,&iStack_28);
  if (iStack_38 != -0x80000000) {
    iStack_1c = uStack_2c;
    iStack_28 = iStack_38;
    uStack_24 = uStack_34;
    uStack_20 = uStack_30;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&iStack_28,&DAT_0188ba70);
  }
  FUN_0128686c(iVar3,iVar2);
  *param_1 = 1;
  iVar2 = *param_1;
  DataMemoryBarrier(0xb);
  while (iVar2 != 0) {
    FUN_016d6968(0xf0,param_1,0x80,1);
    iVar2 = *param_1;
    DataMemoryBarrier(0xb);
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa478("internal error: entered unreachable code: unparked deadlocked thread!",0x8b,
               &DAT_0188ba60);
}

