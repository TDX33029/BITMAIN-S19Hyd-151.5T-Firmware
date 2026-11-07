// FUN_00039b04 @ 00039b04  size=136  callers=1
// program: bmminer


void FUN_00039b04(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_0002a544();
  uVar4 = FUN_0002a574();
  iVar2 = DAT_000be5f8;
  if (DAT_000be5f8 != param_1) {
    iVar5 = FUN_00098658(uVar3,uVar4);
    iVar1 = (iVar5 * iVar2 + 99) / 100;
    iVar5 = (param_1 * iVar5 + 99) / 100;
    if (param_1 < iVar2) {
      iVar6 = iVar5;
    }
    else {
      iVar6 = iVar1;
      iVar1 = iVar5;
    }
    FUN_00039950(iVar6,iVar1,iVar2 <= param_1);
  }
  DAT_000be5f8 = param_1;
  return;
}

