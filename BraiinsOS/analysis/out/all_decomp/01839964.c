// FUN_01839964 @ 01839964 size=1088 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_01839964(int param_1,undefined4 *param_2,undefined1 *param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  
  iVar4 = *(int *)(param_1 + 400);
  iVar7 = param_1 + (-param_1 & 0xfU);
  iVar6 = iVar7 + 0x30;
  if (iVar4 == 0) goto LAB_01839bd4;
  puVar5 = (undefined1 *)(0x20 - iVar4);
  if (param_3 <= (undefined1 *)(0x20 - iVar4)) {
    puVar5 = param_3;
  }
  if (puVar5 == (undefined1 *)0x0) goto LAB_01839a9c;
  if (puVar5 + -1 < (undefined1 *)0x6) {
LAB_01839d50:
    puVar3 = (undefined1 *)((int)param_2 + -1);
    puVar9 = puVar3 + (int)puVar5;
    puVar8 = (undefined1 *)(param_1 + iVar4 + 0x16f);
    do {
      puVar3 = puVar3 + 1;
      puVar8 = puVar8 + 1;
      *puVar8 = *puVar3;
    } while (puVar3 != puVar9);
  }
  else {
    iVar1 = param_1 + iVar4 + 0x170;
    if ((iVar1 - (int)param_2) - 1U < 3) goto LAB_01839d50;
    *(undefined4 *)(param_1 + iVar4 + 0x170) = *param_2;
    uVar2 = (uint)puVar5 >> 2;
    if (uVar2 == 1) {
      puVar8 = (undefined1 *)0x5;
      *(undefined1 *)(param_1 + iVar4 + 0x174) = *(undefined1 *)(param_2 + 1);
      uVar2 = 4;
LAB_01839a7c:
      puVar3 = (undefined1 *)(uVar2 + 2);
      puVar8[param_1 + iVar4 + 0x170] = *(undefined1 *)((int)param_2 + (int)puVar8);
      if (puVar3 < puVar5) {
        puVar3[param_1 + iVar4 + 0x170] = *(undefined1 *)((int)param_2 + (int)puVar3);
      }
    }
    else {
      *(undefined4 *)(iVar1 + 4) = param_2[1];
      if ((((uVar2 != 2) && (*(undefined4 *)(iVar1 + 8) = param_2[2], uVar2 != 3)) &&
          (*(undefined4 *)(iVar1 + 0xc) = param_2[3], uVar2 != 4)) &&
         (((*(undefined4 *)(iVar1 + 0x10) = param_2[4], uVar2 != 5 &&
           (*(undefined4 *)(iVar1 + 0x14) = param_2[5], uVar2 != 6)) &&
          (*(undefined4 *)(iVar1 + 0x18) = param_2[6], uVar2 != 7)))) {
        *(undefined4 *)(iVar1 + 0x1c) = param_2[7];
      }
      if (((uint)puVar5 & 3) != 0) {
        uVar2 = (uint)puVar5 & 0xfffffffc;
        puVar8 = (undefined1 *)(uVar2 + 1);
        *(undefined1 *)(param_1 + iVar4 + uVar2 + 0x170) = *(undefined1 *)((int)param_2 + uVar2);
        if (puVar8 < puVar5) goto LAB_01839a7c;
      }
    }
  }
LAB_01839a9c:
  param_3 = param_3 + -(int)puVar5;
  param_2 = (undefined4 *)((int)param_2 + (int)puVar5);
  *(undefined1 **)(param_1 + 400) = puVar5 + iVar4;
  if (puVar5 + iVar4 != (undefined1 *)0x20) goto LAB_01839bd4;
  if (param_3 == (undefined1 *)0x0) {
    return 0;
  }
  FUN_0183a638(iVar6,iVar6,iVar7 + 0x90,&DAT_00563ce0,param_4);
  FUN_01838f34(iVar7 + 0x60,param_1 + 0x170,0x20);
  *(int *)(iVar7 + 0x30) = *(int *)(iVar7 + 0x30) + *(int *)(iVar7 + 0x60);
  *(int *)(iVar7 + 0x34) = *(int *)(iVar7 + 0x34) + *(int *)(iVar7 + 100);
  *(int *)(iVar7 + 0x38) = *(int *)(iVar7 + 0x38) + *(int *)(iVar7 + 0x68);
  *(int *)(iVar7 + 0x3c) = *(int *)(iVar7 + 0x3c) + *(int *)(iVar7 + 0x6c);
  *(int *)(iVar7 + 0x40) = *(int *)(iVar7 + 0x40) + *(int *)(iVar7 + 0x70);
  *(int *)(iVar7 + 0x44) = *(int *)(iVar7 + 0x44) + *(int *)(iVar7 + 0x74);
  *(int *)(iVar7 + 0x48) = *(int *)(iVar7 + 0x48) + *(int *)(iVar7 + 0x78);
  *(int *)(iVar7 + 0x4c) = *(int *)(iVar7 + 0x4c) + *(int *)(iVar7 + 0x7c);
  *(int *)(iVar7 + 0x50) = *(int *)(iVar7 + 0x50) + *(int *)(iVar7 + 0x80);
  *(int *)(iVar7 + 0x54) = *(int *)(iVar7 + 0x54) + *(int *)(iVar7 + 0x84);
  *(undefined4 *)(param_1 + 400) = 0;
  if ((undefined1 *)0x20 < param_3) {
    do {
      puVar5 = param_3;
      if ((undefined1 *)0xfffff < param_3) {
        puVar5 = (undefined1 *)0x100000;
      }
      iVar4 = FUN_0183a200(iVar6,iVar7 + 0x90,param_2,puVar5);
      param_3 = param_3 + (iVar4 - (int)puVar5);
      param_2 = (undefined4 *)((int)param_2 + ((int)puVar5 - iVar4));
LAB_01839bd4:
    } while ((undefined1 *)0x20 < param_3);
    if (param_3 == (undefined1 *)0x0) {
      return 0;
    }
  }
  puVar5 = (undefined1 *)(param_1 + 0x16f);
  if ((param_3 + -1 < (undefined1 *)0x6) || ((uint)((int)puVar5 - (int)param_2) < 3)) {
    puVar8 = (undefined1 *)((int)param_2 + -1);
    do {
      puVar3 = puVar8 + (2 - (int)param_2);
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
      *puVar5 = *puVar8;
    } while (puVar3 < param_3);
    *(undefined1 **)(param_1 + 400) = param_3;
    return 0;
  }
  uVar2 = (uint)param_3 >> 2;
  *(undefined4 *)(param_1 + 0x170) = *param_2;
  if (uVar2 == 1) {
    uVar2 = 4;
    puVar5 = (undefined1 *)0x5;
    *(undefined1 *)(param_1 + 0x174) = *(undefined1 *)(param_2 + 1);
  }
  else {
    *(undefined4 *)(param_1 + 0x174) = param_2[1];
    if (((((uVar2 != 2) && (*(undefined4 *)(param_1 + 0x178) = param_2[2], uVar2 != 3)) &&
         (*(undefined4 *)(param_1 + 0x17c) = param_2[3], uVar2 != 4)) &&
        ((*(undefined4 *)(param_1 + 0x180) = param_2[4], uVar2 != 5 &&
         (*(undefined4 *)(param_1 + 0x184) = param_2[5], uVar2 != 6)))) &&
       (*(undefined4 *)(param_1 + 0x188) = param_2[6], uVar2 == 8)) {
      *(undefined4 *)(param_1 + 0x18c) = param_2[7];
      goto LAB_01839c94;
    }
    uVar2 = (uint)param_3 & 0xfffffffc;
    if (((uint)param_3 & 3) == 0) goto LAB_01839c94;
    *(undefined1 *)(param_1 + uVar2 + 0x170) = *(undefined1 *)((int)param_2 + uVar2);
    puVar5 = (undefined1 *)(uVar2 + 1);
    if (param_3 <= puVar5) goto LAB_01839c94;
  }
  puVar8 = (undefined1 *)(uVar2 + 2);
  puVar5[param_1 + 0x170] = *(undefined1 *)((int)param_2 + (int)puVar5);
  if (puVar8 < param_3) {
    puVar8[param_1 + 0x170] = *(undefined1 *)((int)param_2 + (int)puVar8);
    *(undefined1 **)(param_1 + 400) = param_3;
    return 0;
  }
LAB_01839c94:
  *(undefined1 **)(param_1 + 400) = param_3;
  return 0;
}

