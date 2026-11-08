// FUN_0190b348 @ 0190b348 size=84 calls_out=1 calls_in=3
// strings: 

void FUN_0190b348(int param_1)

{
  int iVar1;
  int iVar2;
  int extraout_r1;
  int iVar3;
  int unaff_r7;
  undefined8 uVar4;
  
  uVar4 = FUN_0190b310();
  iVar1 = (int)((ulonglong)uVar4 >> 0x20);
  iVar3 = 0;
  do {
    iVar2 = iVar3;
    if (iVar1 == iVar2) goto LAB_0190b37c;
    iVar3 = iVar2 + 1;
  } while (*(char *)((int)uVar4 + iVar2) == '\0');
  unaff_r7 = iVar2;
LAB_0190b37c:
  FUN_0190b310(param_1);
  iVar3 = extraout_r1;
  if (iVar1 != iVar2) {
    iVar3 = unaff_r7;
  }
  *(int *)(param_1 + 0xc) = iVar3 + *(int *)(param_1 + 0xc);
  return;
}

