// FUN_01bd5ac8 @ 01bd5ac8 size=276 calls_out=1 calls_in=3
// strings: 

undefined8 FUN_01bd5ac8(int param_1,undefined1 *param_2,uint param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = 0;
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  uVar6 = param_1 + 0x3fU & 0xffffffc0;
  iVar3 = *(int *)(uVar6 + 0x48);
  if (iVar3 == 0) {
    if (param_3 < 0x10) goto LAB_01bd5b90;
LAB_01bd5b58:
    uVar7 = param_3 & 0xfffffff0;
    param_3 = param_3 & 0xf;
    puVar2 = param_2 + uVar7;
    FUN_01bd5660(uVar6,param_2,uVar7,uVar4);
  }
  else {
    puVar2 = (undefined1 *)(iVar3 + uVar6 + 0x37);
    uVar4 = 0x10U - iVar3;
    if (param_3 <= 0x10U - iVar3) {
      uVar4 = param_3;
    }
    puVar1 = param_2 + uVar4;
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      puVar2 = puVar2 + 1;
      *puVar2 = *param_2;
    }
    param_3 = param_3 - uVar4;
    *(uint *)(uVar6 + 0x48) = iVar3 + uVar4;
    if (iVar3 + uVar4 == 0x10) {
      FUN_01bd5660(uVar6,uVar6 + 0x38);
      uVar4 = 0;
      *(undefined4 *)(uVar6 + 0x48) = 0;
    }
    puVar2 = param_2;
    if (0xf < param_3) goto LAB_01bd5b58;
  }
  param_2 = puVar2;
  if (param_3 == 0) {
    return 0;
  }
LAB_01bd5b90:
  puVar1 = (undefined1 *)(uVar6 + 0x37);
  puVar2 = param_2;
  do {
    puVar5 = puVar2 + 1;
    puVar1 = puVar1 + 1;
    *puVar1 = *puVar2;
    puVar2 = puVar5;
  } while (puVar5 != param_2 + param_3);
  *(uint *)(uVar6 + 0x48) = param_3;
  return 0;
}

