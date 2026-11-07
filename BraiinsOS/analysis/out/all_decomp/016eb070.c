// FUN_016eb070 @ 016eb070 size=132 calls_out=3 calls_in=0
// strings: 

bool FUN_016eb070(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_016eaf4c();
  if (iVar1 == 1) {
    uVar3 = *(undefined4 *)(param_2 + 8);
    uVar2 = FUN_0172a3bc(*(undefined4 *)(param_1 + 8));
    uVar3 = FUN_0172a3bc(uVar3);
    iVar1 = FUN_01715760(uVar2,uVar3);
    return iVar1 == 0;
  }
  return false;
}

