// FUN_016eaf4c @ 016eaf4c size=292 calls_out=3 calls_in=1
// strings: 

uint FUN_016eaf4c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  iVar5 = *(int *)(param_1 + 8);
  if (iVar5 == 0) {
    return 0xfffffffe;
  }
  iVar1 = FUN_0172a3d4(iVar5);
  if ((((iVar1 == 0) || (iVar5 = FUN_0172a404(iVar5), iVar5 == 0)) ||
      (iVar5 = *(int *)(param_2 + 8), iVar5 == 0)) ||
     ((iVar1 = FUN_0172a3d4(iVar5), iVar1 == 0 || (iVar5 = FUN_0172a404(iVar5), iVar5 == 0)))) {
    uVar4 = 0xfffffffe;
  }
  else {
    uVar7 = *(undefined4 *)(param_1 + 8);
    uVar6 = *(undefined4 *)(param_2 + 8);
    uVar2 = FUN_0172a3d4(uVar7);
    uVar3 = FUN_0172a3d4(uVar6);
    iVar5 = FUN_01715760(uVar2,uVar3);
    if (iVar5 == 0) {
      uVar2 = FUN_0172a404(uVar7);
      uVar3 = FUN_0172a404(uVar6);
      iVar5 = FUN_01715760(uVar2,uVar3);
      return (uint)(iVar5 == 0);
    }
    uVar4 = 0;
  }
  return uVar4;
}

