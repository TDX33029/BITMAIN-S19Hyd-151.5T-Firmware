// FUN_0155a880 @ 0155a880 size=104 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_0155a880(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  
  iVar2 = *(int *)(param_1 + 4);
  puVar8 = *(undefined4 **)(param_1 + 0xc);
  uVar4 = (int)puVar8 - iVar2;
  uVar1 = uVar4 >> 2;
  uVar5 = uVar1;
  if (param_2 < uVar4 >> 2) {
    uVar5 = param_2;
  }
  iVar6 = uVar5 + 1;
  puVar7 = (undefined4 *)(iVar2 + uVar5 * 4);
  *(undefined4 **)(param_1 + 4) = puVar7;
  while (iVar6 = iVar6 + -1, iVar6 != 0) {
    FUN_0155a450(iVar2);
    iVar2 = iVar2 + 4;
  }
  uVar3 = 0;
  if ((param_2 <= uVar1) && (puVar7 != puVar8)) {
    uVar3 = *puVar7;
    *(undefined4 **)(param_1 + 4) = puVar7 + 1;
  }
  return uVar3;
}

