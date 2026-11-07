// FUN_015e35ec @ 015e35ec size=120 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_015e35ec(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  
  if (*(int *)(param_2 + 0x20) != 0) {
    puVar3 = *(undefined4 **)(param_2 + 0x1c);
    puVar4 = puVar3 + *(int *)(param_2 + 0x20) * 2;
    uVar1 = *(uint *)(param_1 + 0x18);
    do {
      uVar5 = *puVar3;
      iVar6 = puVar3[1];
      iVar2 = FUN_015e31b8(param_1,uVar5,iVar6);
      if ((iVar2 != 0) &&
         (iVar2 = (**(code **)(iVar6 + 0x10))(uVar5), uVar1 >> 1 < *(uint *)(iVar2 + 0x18))) {
        return 1;
      }
      puVar3 = puVar3 + 2;
    } while (puVar3 != puVar4);
  }
  return 0;
}

