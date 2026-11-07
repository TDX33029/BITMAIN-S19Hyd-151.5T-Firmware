// FUN_0107fbd4 @ 0107fbd4 size=192 calls_out=3 calls_in=1
// strings: 

void FUN_0107fbd4(int *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined1 auStack_108 [232];
  
  uVar3 = ((uint)(param_3 - param_2) >> 3) * 0x4f72c235;
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < uVar3) {
    FUN_01098228(param_1,iVar2,uVar3,4,0xe8);
    iVar2 = param_1[2];
  }
  if (param_2 != param_3) {
    iVar1 = iVar2 * 0xe8 + param_1[1];
    do {
      FUN_01093360(auStack_108,param_2);
      FUN_016dd1aa(iVar1,auStack_108,0xe8);
      param_2 = param_2 + 0xe8;
      iVar1 = iVar1 + 0xe8;
      iVar2 = iVar2 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_1[2] = iVar2;
  return;
}

