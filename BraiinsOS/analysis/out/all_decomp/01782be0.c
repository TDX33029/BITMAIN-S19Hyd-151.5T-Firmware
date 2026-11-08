// FUN_01782be0 @ 01782be0 size=280 calls_out=6 calls_in=0
// strings: 

undefined8 FUN_01782be0(void)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined1 auStack_b8 [156];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  DAT_018dffb0 = 2;
  DAT_018dffac = 0;
  uVar1 = FUN_01782bc0(&PTR_018bc3f4,0);
  iVar2 = FUN_016daa90(uVar1,auStack_b8);
  if (iVar2 == 0) {
    DAT_018dffb0 = 0;
    uVar1 = FUN_01782bc0();
    iVar2 = FUN_016d2e2a(uVar1,0);
    if (iVar2 != -1) {
      iVar3 = FUN_016d69b4(0,4,1,1,iVar2);
      FUN_016dffb2(iVar2);
      if (iVar3 != -1) {
        DAT_018dffb0 = 1;
        DAT_018dffac = iVar3;
      }
    }
  }
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

