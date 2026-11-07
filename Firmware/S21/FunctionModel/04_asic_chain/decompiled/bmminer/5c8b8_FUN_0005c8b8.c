// FUN_0005c8b8 @ 0005c8b8  size=172  callers=2
// program: bmminer


int FUN_0005c8b8(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  char acStack_2010 [8196];
  
  iVar1 = FUN_0002a514();
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    iVar4 = 0;
    piVar3 = (int *)(param_2 + param_1 * 0x400 + -4);
    do {
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 1;
      iVar5 = iVar5 + *piVar3;
    } while (iVar1 != iVar4);
  }
  uVar2 = FUN_0002a514();
  iVar1 = FUN_000983e0(iVar5,uVar2);
  if (4 < DAT_000be63c) {
    snprintf(acStack_2010,0x2000,"chain = %d, freq_avg = %d\n",param_1,iVar1);
    FUN_0004948c(4,acStack_2010,0);
  }
  return iVar1;
}

