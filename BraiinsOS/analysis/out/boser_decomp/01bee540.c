// FUN_01bee540 @ 01bee540 size=82 calls_out=1 calls_in=4
// strings: 

void FUN_01bee540(void)

{
  bool bVar1;
  int iVar2;
  undefined4 in_r3;
  int iVar3;
  undefined4 in_cr0;
  undefined4 in_cr13;
  
  iVar3 = coprocessor_movefromRt(0xf,0,3,in_cr13,in_cr0);
  iVar3 = *(int *)(iVar3 + -0x60);
  if (iVar3 == DAT_01d53490) {
    DAT_01d53c10 = DAT_01d53c10 + 1;
    return;
  }
  do {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(0x1d53490);
      iVar2 = DAT_01d53490;
      if (DAT_01d53490 != 0) goto LAB_01bee56a;
      bVar1 = (bool)hasExclusiveAccess(0x1d53490);
    } while (!bVar1);
    iVar2 = 0;
    DAT_01d53490 = iVar3;
LAB_01bee56a:
    DataMemoryBarrier(0x1b);
    if (iVar2 == 0) {
      return;
    }
    FUN_01bee22c(&DAT_01d53490,&DAT_01d53c14,iVar2,0,in_r3);
  } while( true );
}

