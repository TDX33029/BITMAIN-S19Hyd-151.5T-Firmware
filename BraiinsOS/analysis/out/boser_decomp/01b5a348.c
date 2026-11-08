// FUN_01b5a348 @ 01b5a348 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_01b5a348(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined8 uVar3;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = FUN_01b4d438(param_2,iVar2);
  uVar1 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    iVar2 = FUN_01b5a258(param_2 + 0x10,iVar2 + 0x5c);
    uVar1 = 0;
    if (iVar2 != 0) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0(0,uVar1);
}

