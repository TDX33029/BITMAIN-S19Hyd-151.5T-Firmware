// FUN_007150a8 @ 007150a8 size=248 calls_out=5 calls_in=2
// strings: 

void FUN_007150a8(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  undefined8 local_18;
  
  piVar3 = (int *)thunk_FUN_016d4a50(8);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  piVar4 = (int *)*param_1;
  *piVar3 = 1;
  piVar3[1] = 1;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar2 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar2);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*param_1,param_1[1]);
  }
  *param_1 = piVar3;
  param_1[1] = &DAT_01859d74;
  if (param_1[4] != 0) {
    do {
      iVar5 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar5 + 1;
    if (iVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x71519c);
      (*pcVar1)();
    }
    local_18 = FUN_0074e5c4(param_1 + 4,piVar3,&DAT_01859d74);
    if ((int)local_18 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0033ffa8,0x21,&local_18,&DAT_01859970,&DAT_01859df4);
    }
  }
  return;
}

