// FUN_012b9450 @ 012b9450 size=168 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_012b9450(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined4 unaff_r11;
  
  puVar5 = (undefined4 *)param_1[1];
  if ((undefined4 *)*param_1 != puVar5) {
    iVar8 = param_1[3];
    iVar1 = param_1[2];
    puVar6 = (undefined4 *)*param_1;
    do {
      uVar3 = *puVar6;
      uVar4 = puVar6[1];
      puVar7 = puVar6 + 2;
      *param_1 = puVar7;
      iVar2 = FUN_012b1930(iVar1 + 0x20,uVar3,uVar4);
      if ((iVar2 != 0) && (iVar2 = FUN_012bf928(iVar2,""), iVar2 != 0)) {
        uVar3 = *puVar6;
        unaff_r11 = puVar6[1];
        iVar2 = FUN_012a4878(*(undefined4 *)(iVar8 + 0x48),*(undefined4 *)(iVar8 + 0x4c),uVar3,
                             unaff_r11);
        if ((iVar2 != 0) && ((*(byte *)(iVar2 + 0x11c) & 4) == 0)) goto LAB_012b94e8;
      }
      puVar6 = puVar7;
    } while (puVar7 != puVar5);
  }
  uVar3 = 0;
LAB_012b94e8:
  return CONCAT44(unaff_r11,uVar3);
}

