// FUN_00e91af8 @ 00e91af8 size=176 calls_out=6 calls_in=0
// strings: 

void FUN_00e91af8(int *param_1,char *param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  if (*param_2 != '\0') {
    if (*param_2 == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187ace0);
    }
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187ace0);
  }
  DataMemoryBarrier(0xb);
  if (DAT_018daf08 != 2) {
    FUN_00f15154();
  }
  iVar2 = DAT_018daf04;
  uVar1 = DAT_018daf00;
  iVar3 = 1;
  if ((DAT_018daf04 != 0) && (iVar3 = thunk_FUN_016d4a50(DAT_018daf04), iVar3 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar2);
  }
  FUN_016dd1aa(iVar3,uVar1,iVar2);
  *param_1 = iVar2;
  param_1[1] = iVar3;
  param_1[2] = iVar2;
  *param_2 = '\x01';
  return;
}

