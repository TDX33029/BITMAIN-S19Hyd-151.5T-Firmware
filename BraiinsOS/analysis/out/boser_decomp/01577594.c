// FUN_01577594 @ 01577594 size=60 calls_out=1 calls_in=0
// strings: 

int FUN_01577594(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  iVar1 = *(int *)(param_1 + 4);
  uVar2 = *(int *)(param_1 + 0xc) - iVar1;
  uVar3 = param_2;
  if (uVar2 >> 2 <= param_2) {
    uVar3 = uVar2 >> 2;
  }
  *(uint *)(param_1 + 4) = iVar1 + uVar3 * 4;
  FUN_01574958(iVar1,uVar3);
  return param_2 - uVar3;
}

