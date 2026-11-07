// FUN_01b8d450 @ 01b8d450 size=112 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b8d450(undefined4 param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  uVar4 = *param_2;
  iVar2 = *(int *)(param_2[2] + param_3 * 8);
  uVar3 = param_2[1];
  uVar1 = uVar4 + *(int *)(param_2[2] + param_3 * 8 + 4) >> 0x10;
  FUN_01b8d328(param_1,uVar4,uVar1);
  *param_2 = (uint)*(ushort *)(uVar3 + (iVar2 + ((int)uVar4 >> (uVar1 & 0xff))) * 2);
  return 0;
}

