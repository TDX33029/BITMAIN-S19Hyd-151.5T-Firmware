// FUN_01606604 @ 01606604 size=112 calls_out=0 calls_in=1
// strings: 

void FUN_01606604(int param_1,int param_2,byte param_3)

{
  ushort uVar1;
  short *psVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  
  puVar3 = (uint *)(param_2 + 0x10000);
  uVar6 = *puVar3;
  uVar1 = *(ushort *)(param_2 + 0x10004);
  iVar4 = *(int *)(param_2 + 0x10008);
  iVar5 = *(int *)(param_2 + 0x1000c);
  *(byte *)(param_2 + (uVar6 & 0xffff)) = param_3;
  iVar5 = iVar5 + -1;
  *(byte *)(param_2 + (uint)uVar1) = *(byte *)(param_2 + (uint)uVar1) >> 1;
  *puVar3 = uVar6 + 1;
  *(int *)(param_2 + 0x10008) = iVar4 + 1;
  *(int *)(param_2 + 0x1000c) = iVar5;
  if (iVar5 == 0) {
    *puVar3 = uVar6 + 2;
    *(undefined4 *)(param_2 + 0x1000c) = 8;
    *(uint *)(param_2 + 0x10004) = uVar6 + 1;
  }
  psVar2 = (short *)(param_1 + (uint)param_3 * 2);
  *psVar2 = *psVar2 + 1;
  return;
}

