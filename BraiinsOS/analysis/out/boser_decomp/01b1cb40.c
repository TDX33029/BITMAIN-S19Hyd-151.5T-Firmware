// FUN_01b1cb40 @ 01b1cb40 size=92 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01b1cb40(int param_1,int param_2,int param_3)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  do {
    lVar1 = (longlong)*(int *)(param_2 + iVar4 * 4) * (longlong)*(int *)(param_3 + iVar4 * 4);
    uVar3 = (uint)lVar1;
    lVar2 = (longlong)(int)(uVar3 * 0x3802001) * -0x7fe001;
    *(uint *)(param_1 + iVar4 * 4) =
         (int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar2 >> 0x20) +
         (uint)CARRY4((uint)lVar2,uVar3);
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x100);
  return 0;
}

