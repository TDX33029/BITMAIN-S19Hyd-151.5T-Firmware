// FUN_01b80fc0 @ 01b80fc0 size=100 calls_out=0 calls_in=1
// strings: 

undefined1 FUN_01b80fc0(int *param_1,int *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_1[1] + *param_1 * 4;
  uVar5 = param_2[1];
  uVar2 = *(ushort *)(param_1[1] + *param_1 * 4);
  uVar1 = *(undefined1 *)(iVar3 + 2);
  uVar4 = (uint)*(byte *)(iVar3 + 3);
  param_2[1] = uVar4 + uVar5;
  *param_1 = (uint)uVar2 + ((uint)(*param_2 << (uVar5 & 0x1f)) >> (-uVar4 & 0x1f));
  return uVar1;
}

