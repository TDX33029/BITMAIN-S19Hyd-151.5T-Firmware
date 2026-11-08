// FUN_0128ebec @ 0128ebec size=92 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0128ebec(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  
  iVar1 = 0;
  uVar4 = 0xc;
  do {
    iVar5 = iVar1 + (uVar4 >> 1);
    uVar4 = uVar4 - (uVar4 >> 1);
    puVar2 = (uint *)(param_1 + iVar5 * 8);
    uVar3 = puVar2[1];
    bVar6 = param_3 < *puVar2;
    if ((int)(param_4 - (uVar3 + bVar6)) < 0 ==
        (SBORROW4(param_4,uVar3) != SBORROW4(param_4 - uVar3,(uint)bVar6))) {
      iVar1 = iVar5;
    }
  } while (1 < uVar4);
  puVar2 = (uint *)(param_1 + iVar1 * 8);
  uVar4 = *puVar2;
  uVar3 = puVar2[1];
  if ((int)(uVar3 - (param_4 + (uVar4 < param_3))) < 0 !=
      (SBORROW4(uVar3,param_4) != SBORROW4(uVar3 - param_4,(uint)(uVar4 < param_3)))) {
    iVar1 = iVar1 + 1;
  }
  return CONCAT44(iVar1,(uint)(uVar4 != param_3 || uVar3 != param_4));
}

