// FUN_01540c30 @ 01540c30 size=184 calls_out=2 calls_in=0
// strings: 

void FUN_01540c30(undefined4 param_1,uint param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar1 = *param_3;
  iVar2 = param_3[2];
  if ((uint)(iVar1 - iVar2) < 2) {
    FUN_0154e5f8(param_3,iVar2,2,1,1);
    iVar1 = *param_3;
    iVar2 = param_3[2];
  }
  iVar3 = param_3[1];
  iVar4 = iVar2 + 2;
  param_3[2] = iVar4;
  *(ushort *)(iVar3 + iVar2) = (ushort)((param_2 << 0x18) >> 0x10) | (ushort)(param_2 >> 8) & 0xff;
  if ((uint)(iVar1 - iVar4) < param_2) {
    FUN_0154e5f8(param_3,iVar4,param_2,1,1);
    iVar3 = param_3[1];
    iVar4 = param_3[2];
  }
  FUN_016dd1aa(iVar3 + iVar4,param_1,param_2);
  param_3[2] = iVar4 + param_2;
  return;
}

