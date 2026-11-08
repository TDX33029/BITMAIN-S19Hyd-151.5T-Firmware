// FUN_013b78b0 @ 013b78b0 size=172 calls_out=2 calls_in=1
// strings: 

void FUN_013b78b0(int param_1,uint param_2,int param_3,uint param_4,uint param_5)

{
  uint uVar1;
  int *piVar2;
  
  if (param_1 == 1) {
    return;
  }
  uVar1 = (param_5 & 0x7ffffff) >> (param_2 & 0x1f);
  if (param_4 <= (param_5 & 0x7ffffff) >> (param_2 & 0x1f)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar1,param_4,&DAT_01893ae0);
  }
  piVar2 = (int *)(param_3 + uVar1 * 8);
  uVar1 = piVar2[1];
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(0,0,&DAT_018942e8);
  }
  if ((*(byte *)(*piVar2 + 8) & 2) == 0) {
    return;
  }
  if (uVar1 < 0xd) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0xd,uVar1,uVar1,&DAT_018942f8);
  }
  if (uVar1 - 0xd < 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,4,uVar1 - 0xd,&DAT_01892db0);
  }
  return;
}

