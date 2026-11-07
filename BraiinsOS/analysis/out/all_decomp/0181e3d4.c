// FUN_0181e3d4 @ 0181e3d4 size=236 calls_out=0 calls_in=7
// strings: 

ulonglong FUN_0181e3d4(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar5;
  undefined4 *puVar4;
  undefined1 *puVar6;
  undefined4 *puVar7;
  
  if (param_3 == 0) {
    return CONCAT44(param_2,param_1);
  }
  if ((param_3 - 1 < 6) || ((uint)((int)param_1 + (-1 - (int)param_2)) < 3)) {
    puVar6 = (undefined1 *)((int)param_1 + -1);
    puVar4 = param_2;
    do {
      puVar7 = (undefined4 *)((int)puVar4 + 1);
      puVar6 = puVar6 + 1;
      *puVar6 = *(undefined1 *)puVar4;
      puVar4 = puVar7;
    } while ((undefined4 *)((int)param_2 + param_3) != puVar7);
    return 0;
  }
  uVar1 = param_3 & 0xfffffffc;
  puVar3 = (undefined4 *)((int)param_2 + uVar1);
  puVar4 = param_2;
  puVar7 = param_1;
  do {
    puVar5 = puVar4 + 1;
    *puVar7 = *puVar4;
    puVar4 = puVar5;
    puVar7 = puVar7 + 1;
  } while (puVar3 != puVar5);
  if (param_3 == uVar1) {
    return CONCAT44(puVar3,param_3) & 0xfffffffffffffffc;
  }
  iVar2 = (int)param_1 + uVar1;
  *(undefined1 *)(param_1 + (param_3 >> 2)) = *(undefined1 *)(param_2 + (param_3 >> 2));
  if (param_3 - uVar1 == 1) {
    return CONCAT44(puVar3,iVar2);
  }
  *(undefined1 *)(iVar2 + 1) = *(undefined1 *)((int)puVar3 + 1);
  if (param_3 - uVar1 != 2) {
    *(undefined1 *)(iVar2 + 2) = *(undefined1 *)((int)puVar3 + 2);
  }
  return 0;
}

