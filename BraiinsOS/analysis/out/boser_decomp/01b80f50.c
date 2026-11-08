// FUN_01b80f50 @ 01b80f50 size=108 calls_out=0 calls_in=1
// strings: 

undefined1 FUN_01b80f50(int *param_1,uint *param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar3 = param_1[1] + *param_1 * 4;
  uVar2 = *(ushort *)(param_1[1] + *param_1 * 4);
  uVar5 = (uint)*(byte *)(iVar3 + 3);
  uVar1 = *(undefined1 *)(iVar3 + 2);
  uVar4 = uVar5 + param_2[1];
  uVar5 = *(uint *)(&DAT_00561bb4 + uVar5 * 4);
  param_2[1] = uVar4;
  *param_1 = (uint)uVar2 + (uVar5 & *param_2 >> (-uVar4 & 0x1f));
  return uVar1;
}

