// FUN_01b6c814 @ 01b6c814 size=732 calls_out=6 calls_in=2
// strings: 

int FUN_01b6c814(undefined4 param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int *piVar5;
  int *piVar4;
  undefined4 unaff_r4;
  undefined1 *puVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  uint uVar7;
  int iVar8;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  iVar1 = FUN_01b6c23c();
  if (param_3 == 0) {
    return iVar1;
  }
  if ((DAT_01d532f0 & 1) != 0) {
    iVar1 = FUN_01b6cc24();
    iVar8 = *(int *)(iVar1 + 400);
    if (iVar8 != 0) {
      uVar7 = 0x20U - iVar8;
      if (param_3 <= 0x20U - iVar8) {
        uVar7 = param_3;
      }
      puVar3 = (undefined1 *)(iVar1 + iVar8 + 0x16f);
      puVar2 = param_2 + uVar7;
      for (; param_2 != puVar2; param_2 = param_2 + 1) {
        puVar3 = puVar3 + 1;
        *puVar3 = *param_2;
      }
      param_3 = param_3 - uVar7;
      *(uint *)(iVar1 + 400) = uVar7 + iVar8;
      if (uVar7 + iVar8 == 0x20) {
        if (param_3 == 0) {
          return 0;
        }
        FUN_01b717d8(iVar1 + 0x30,iVar1 + 0x30,iVar1 + 0x90,&DAT_00561850,unaff_r4,unaff_r5,unaff_r6
                     ,unaff_r7,unaff_r8,unaff_r9,unaff_r11,unaff_lr);
        FUN_01b6cd5c(iVar1 + 0x60,iVar1 + 0x170,0x20);
        piVar4 = (int *)(iVar1 + 0x2c);
        do {
          piVar5 = piVar4 + 1;
          *piVar5 = *piVar5 + piVar4[0xd];
          piVar4 = piVar5;
        } while (piVar5 != (int *)(iVar1 + 0x54));
        *(undefined4 *)(iVar1 + 400) = 0;
      }
    }
    for (; 0x20 < param_3; param_3 = iVar8 + (param_3 - uVar7)) {
      uVar7 = param_3;
      if (0xfffff < param_3) {
        uVar7 = 0x100000;
      }
      iVar8 = FUN_01b713a0(iVar1 + 0x30,iVar1 + 0x90,param_2,uVar7);
      param_2 = param_2 + (uVar7 - iVar8);
    }
    if (param_3 == 0) {
      return 0;
    }
    puVar3 = (undefined1 *)(iVar1 + 0x16f);
    puVar2 = param_2;
    do {
      puVar6 = puVar2 + 1;
      puVar3 = puVar3 + 1;
      *puVar3 = *puVar2;
      puVar2 = puVar6;
    } while (puVar6 != param_2 + param_3);
    *(uint *)(iVar1 + 400) = param_3;
    return 0;
  }
  iVar8 = *(int *)(iVar1 + 0x48);
  if (iVar8 == 0) {
    if (param_3 < 0x10) goto LAB_01b6c924;
LAB_01b6c8e8:
    uVar7 = param_3 & 0xfffffff0;
    param_3 = param_3 & 0xf;
    puVar2 = param_2 + uVar7;
    FUN_01b6c374(iVar1,param_2,uVar7);
  }
  else {
    puVar2 = (undefined1 *)(iVar1 + iVar8 + 0x37);
    uVar7 = 0x10U - iVar8;
    if (param_3 <= 0x10U - iVar8) {
      uVar7 = param_3;
    }
    puVar3 = param_2 + uVar7;
    for (; param_2 != puVar3; param_2 = param_2 + 1) {
      puVar2 = puVar2 + 1;
      *puVar2 = *param_2;
    }
    param_3 = param_3 - uVar7;
    *(uint *)(iVar1 + 0x48) = iVar8 + uVar7;
    if (iVar8 + uVar7 == 0x10) {
      FUN_01b6c374(iVar1,iVar1 + 0x38);
      *(undefined4 *)(iVar1 + 0x48) = 0;
    }
    puVar2 = param_2;
    if (0xf < param_3) goto LAB_01b6c8e8;
  }
  param_2 = puVar2;
  if (param_3 == 0) {
    return 0;
  }
LAB_01b6c924:
  puVar3 = (undefined1 *)(iVar1 + 0x37);
  puVar2 = param_2;
  do {
    puVar6 = puVar2 + 1;
    puVar3 = puVar3 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar6;
  } while (puVar6 != param_2 + param_3);
  *(uint *)(iVar1 + 0x48) = param_3;
  return 0;
}

