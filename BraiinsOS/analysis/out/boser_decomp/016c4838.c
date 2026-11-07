// FUN_016c4838 @ 016c4838 size=152 calls_out=1 calls_in=5
// strings: 

undefined4 FUN_016c4838(int *param_1)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  iVar3 = *param_1;
  if (((*(byte *)(iVar3 + 0x30) & 1) != 0) &&
     (iVar5 = param_1[1], *(uint *)(iVar3 + 0x34) <= *(uint *)(iVar5 + 0x6c))) {
    if ((*(byte *)(iVar3 + 0x38) & 1) == 0) {
      return 1;
    }
    iVar4 = 0;
    if (*(int *)(iVar5 + 0xb0) == 1) {
      uVar2 = *(uint *)(iVar5 + 0xb4);
      uVar6 = *(uint *)(iVar5 + 0xb8);
      iVar4 = uVar2 - uVar6;
      if (uVar2 < uVar6 || iVar4 == 0) {
        iVar4 = uVar6 - uVar2;
      }
    }
    lVar1 = (ulonglong)*(uint *)(iVar5 + 0x94) * (ulonglong)*(uint *)(iVar3 + 0x3c);
    uVar2 = (uint)lVar1;
    if ((int)((ulonglong)lVar1 >> 0x20) != 0) {
      uVar2 = 0xffffffff;
    }
    if ((uint)(iVar4 + *(int *)(iVar5 + 0x70)) < uVar2) {
      return 1;
    }
  }
  FUN_016c393c();
  return 0;
}

