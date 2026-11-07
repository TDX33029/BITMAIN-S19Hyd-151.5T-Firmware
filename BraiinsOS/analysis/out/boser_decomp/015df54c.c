// FUN_015df54c @ 015df54c size=128 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_015df54c(int param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  bool bVar7;
  
  uVar6 = 0;
  if ((param_2 == param_4) && (uVar6 = 1, param_2 != 0)) {
    iVar5 = 0;
    do {
      iVar2 = param_3 + iVar5;
      iVar1 = param_1 + iVar5;
      iVar3 = *(int *)(iVar2 + 0xc);
      iVar4 = *(int *)(iVar1 + 0xc);
      bVar7 = iVar4 != iVar3;
      if (!bVar7) {
        iVar3 = *(int *)(iVar1 + 8);
        iVar4 = *(int *)(iVar2 + 8);
      }
      if ((bVar7 || iVar3 != iVar4) ||
         (iVar4 = thunk_FUN_01bed842(*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar2 + 4)),
         iVar4 != 0)) {
        return 0;
      }
      iVar5 = iVar5 + 0x10;
    } while (param_2 * 0x10 != iVar5);
  }
  return uVar6;
}

