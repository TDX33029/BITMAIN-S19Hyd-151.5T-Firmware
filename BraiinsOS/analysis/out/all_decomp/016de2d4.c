// FUN_016de2d4 @ 016de2d4 size=82 calls_out=1 calls_in=4
// strings: 

void FUN_016de2d4(void)

{
  bool bVar1;
  int iVar2;
  undefined4 in_r3;
  int iVar3;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar3 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  iVar3 = *(int *)(iVar3 + -0x60);
  if (iVar3 == DAT_018dda28) {
    DAT_018de1a8 = DAT_018de1a8 + 1;
    return;
  }
  do {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(0x18dda28);
      iVar2 = DAT_018dda28;
      if (DAT_018dda28 != 0) goto LAB_016de2fe;
      bVar1 = (bool)hasExclusiveAccess(0x18dda28);
    } while (!bVar1);
    iVar2 = 0;
    DAT_018dda28 = iVar3;
LAB_016de2fe:
    DataMemoryBarrier(0x1b);
    if (iVar2 == 0) {
      return;
    }
    FUN_016ddfc0(&DAT_018dda28,&DAT_018de1ac,iVar2,0,in_r3);
  } while( true );
}

