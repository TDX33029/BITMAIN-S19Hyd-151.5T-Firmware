// FUN_00018758 @ 00018758  size=68  callers=0
// program: bmminer


int FUN_00018758(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = 0xff;
  uVar3 = 0;
  while( true ) {
    iVar1 = FUN_000200d8();
    if (iVar1 <= (int)uVar3) break;
    iVar1 = FUN_000186d0(param_1,uVar3 & 0xff);
    if (iVar1 <= iVar2) {
      iVar2 = iVar1;
    }
    iVar2 = (int)(short)iVar2;
    uVar3 = uVar3 + 1;
  }
  return iVar2;
}

