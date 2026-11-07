// FUN_01bc782c @ 01bc782c size=124 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01bc782c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 + 4);
  uVar5 = *(undefined4 *)(param_1 + 200);
  uVar2 = param_2 - iVar4;
  for (uVar3 = *(uint *)(param_1 + 0x1c); uVar3 < uVar2; uVar3 = uVar3 + iVar1) {
    iVar1 = FUN_01bc0b90(param_1,iVar4 + uVar3,param_3,uVar2,uVar5,0);
  }
  *(uint *)(param_1 + 0x1c) = uVar2;
  return 0;
}

