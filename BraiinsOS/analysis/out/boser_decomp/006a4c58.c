// FUN_006a4c58 @ 006a4c58 size=116 calls_out=2 calls_in=17
// strings: 

void FUN_006a4c58(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  
  uVar4 = FUN_00700b14();
  iVar2 = (int)((ulonglong)uVar4 >> 0x20);
  iVar1 = (int)uVar4;
  if ((iVar1 != 0) && (iVar3 = iVar2 + -1, iVar3 != 0)) {
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar1,0,0,0xffffffff,&DAT_01c05d40);
    }
    if (*(char *)(iVar1 + iVar3) < -0x40) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar1,iVar2,0,iVar3,&DAT_01c05d40);
    }
  }
  return;
}

