// FUN_0003d390 @ 0003d390  size=152  callers=0
// program: bmminer


void FUN_0003d390(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  do {
    iVar4 = 0;
    uVar5 = FUN_0002a6f0(0);
    while( true ) {
      if ((int)uVar5 != 0) {
        for (iVar3 = 0; iVar1 = FUN_0002aee8((int)uVar5,(int)((ulonglong)uVar5 >> 0x20)),
            iVar3 < iVar1; iVar3 = iVar3 + 1) {
          iVar1 = 0;
          while( true ) {
            uVar5 = CONCAT44(iVar1,iVar3);
            iVar2 = FUN_0002aefc();
            if (iVar2 <= iVar1) break;
            iVar2 = FUN_0002af10();
            if (-1 < iVar2 + -1) {
              *(undefined4 *)(&DAT_000ca664 + (iVar4 * 0x100 + iVar2 + -1) * 4) = 0;
            }
            sleep(1);
            iVar1 = iVar1 + 1;
          }
        }
      }
      iVar4 = iVar4 + 1;
      if (iVar4 == 4) break;
      uVar5 = FUN_0002a6f0(iVar4);
    }
  } while( true );
}

