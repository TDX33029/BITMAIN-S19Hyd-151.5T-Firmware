// FUN_0134ab40 @ 0134ab40 size=76 calls_out=2 calls_in=1
// strings: 

longlong FUN_0134ab40(undefined4 param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  
  while( true ) {
    uVar1 = FUN_01be34a6(param_1,0x80000);
    if (uVar1 < 0x80000000) {
      return (ulonglong)uVar1 << 0x20;
    }
    piVar2 = (int *)FUN_01be3244();
    iVar3 = *piVar2;
    if (iVar3 < 1) break;
    if (iVar3 != 4) {
LAB_0134ab7c:
      return CONCAT44(iVar3,1);
    }
  }
  iVar3 = -0x7fffffff;
  goto LAB_0134ab7c;
}

