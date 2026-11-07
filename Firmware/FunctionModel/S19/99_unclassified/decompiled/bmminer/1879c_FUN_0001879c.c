// FUN_0001879c @ 0001879c  size=100  callers=1
// program: bmminer


int FUN_0001879c(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  
  iVar4 = 0;
  iVar2 = -0x7f;
  do {
    uVar5 = FUN_000201d8(iVar4,param_2);
    param_2 = (uint)((ulonglong)uVar5 >> 0x20);
    if ((int)uVar5 != 0) {
      uVar3 = 0;
      while( true ) {
        iVar1 = FUN_000200d8();
        param_2 = uVar3 & 0xff;
        if (iVar1 <= (int)uVar3) break;
        iVar1 = FUN_000186d0(iVar4);
        uVar3 = uVar3 + 1;
        if (iVar2 < iVar1) {
          iVar2 = iVar1;
        }
        iVar2 = (int)(short)iVar2;
      }
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 != 4);
  return iVar2;
}

