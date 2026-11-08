// FUN_01b0643c @ 01b0643c size=172 calls_out=4 calls_in=0
// strings: 

uint FUN_01b0643c(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  iVar1 = FUN_01b063e4();
  if ((iVar1 == 0) && (iVar1 = FUN_01b063e4(param_2), iVar1 == 0)) {
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar5 = *(undefined4 *)(param_2 + 8);
    uVar2 = FUN_01b3b258(uVar6);
    uVar3 = FUN_01b3b258(uVar5);
    iVar1 = FUN_01b2be38(uVar2,uVar3);
    uVar4 = 0;
    if (iVar1 == 0) {
      uVar2 = FUN_01b3b278(uVar6);
      uVar3 = FUN_01b3b278(uVar5);
      iVar1 = FUN_01b2be38(uVar2,uVar3);
      uVar4 = (uint)(iVar1 == 0);
    }
  }
  else {
    uVar4 = 0xfffffffe;
  }
  return uVar4;
}

