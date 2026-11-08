// FUN_01bd82c4 @ 01bd82c4 size=384 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_01bd82c4(int param_1,undefined1 *param_2,uint param_3,undefined4 param_4)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint uVar3;
  int *piVar5;
  int *piVar4;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  
  iVar9 = *(int *)(param_1 + 400);
  iVar7 = param_1 + (-param_1 & 0xfU);
  iVar8 = iVar7 + 0x30;
  if (iVar9 != 0) {
    uVar3 = 0x20U - iVar9;
    if (param_3 <= 0x20U - iVar9) {
      uVar3 = param_3;
    }
    puVar1 = param_2 + uVar3;
    puVar2 = (undefined1 *)(param_1 + iVar9 + 0x16f);
    for (; param_2 != puVar1; param_2 = param_2 + 1) {
      puVar2 = puVar2 + 1;
      *puVar2 = *param_2;
    }
    param_3 = param_3 - uVar3;
    *(uint *)(param_1 + 400) = uVar3 + iVar9;
    if (uVar3 + iVar9 == 0x20) {
      if (param_3 == 0) {
        return 0;
      }
      FUN_01bd8bf8(iVar8,iVar8,iVar7 + 0x90,&DAT_00564ab0,param_4);
      FUN_01bd7f98(iVar7 + 0x60,param_1 + 0x170,0x20);
      piVar4 = (int *)(iVar7 + 0x2c);
      do {
        piVar5 = piVar4 + 1;
        *piVar5 = *piVar5 + piVar4[0xd];
        piVar4 = piVar5;
      } while (piVar5 != (int *)(iVar7 + 0x54));
      *(undefined4 *)(param_1 + 400) = 0;
    }
  }
  for (; 0x20 < param_3; param_3 = iVar9 + (param_3 - uVar3)) {
    uVar3 = param_3;
    if (0xfffff < param_3) {
      uVar3 = 0x100000;
    }
    iVar9 = FUN_01bd87c0(iVar8,iVar7 + 0x90,param_2,uVar3);
    param_2 = param_2 + (uVar3 - iVar9);
  }
  if (param_3 == 0) {
    return 0;
  }
  puVar2 = (undefined1 *)(param_1 + 0x16f);
  puVar1 = param_2;
  do {
    puVar6 = puVar1 + 1;
    puVar2 = puVar2 + 1;
    *puVar2 = *puVar1;
    puVar1 = puVar6;
  } while (puVar6 != param_2 + param_3);
  *(uint *)(param_1 + 400) = param_3;
  return 0;
}

