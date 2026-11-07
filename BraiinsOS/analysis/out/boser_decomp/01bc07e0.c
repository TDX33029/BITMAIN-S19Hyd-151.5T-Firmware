// FUN_01bc07e0 @ 01bc07e0 size=108 calls_out=0 calls_in=3
// strings: 

undefined4 FUN_01bc07e0(int param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  
  iVar2 = *param_3;
  iVar4 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 0x60);
  uVar3 = (int)param_3 - iVar4;
  uVar1 = 0x20 - *(int *)(param_1 + 0x20);
  for (uVar5 = *param_2; uVar5 < uVar3; uVar5 = uVar5 + 1) {
    *(uint *)(iVar6 + ((uint)(*(int *)(iVar4 + uVar5) * 0x35a7bd00) >> (uVar1 & 0xff)) * 4) = uVar5;
  }
  *param_2 = uVar3;
  return *(undefined4 *)(iVar6 + ((uint)(iVar2 * 0x35a7bd00) >> (uVar1 & 0xff)) * 4);
}

