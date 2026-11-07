// FUN_014f9708 @ 014f9708 size=280 calls_out=1 calls_in=4
// strings: 

undefined8 FUN_014f9708(int param_1,uint param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  bool bVar11;
  undefined8 uVar12;
  
  uVar5 = *(undefined4 *)(param_1 + 8);
  uVar1 = param_2 + 0x37 & 0xff;
  uVar8 = 0;
  uVar10 = param_2 + 0x57 & 0xff;
  uVar7 = 0;
  do {
    uVar9 = *(undefined4 *)(param_1 + 8);
    uVar12 = FUN_014f96bc(param_1);
    puVar3 = (undefined1 *)((ulonglong)uVar12 >> 0x20);
    puVar2 = (undefined1 *)uVar12;
    if (puVar2 == &DAT_00110000) {
LAB_014f975c:
      bVar11 = false;
      *(undefined4 *)(param_1 + 8) = uVar9;
    }
    else {
      puVar3 = puVar2 + -0x30;
      if (((uint)puVar3 & 0xff) < 10) {
LAB_014f9774:
        bVar11 = true;
      }
      else {
        uVar6 = 0;
        if ((param_2 & 0xff) < 0xb) goto LAB_014f975c;
        uVar4 = (uint)puVar2 & 0xff;
        bVar11 = uVar4 == 0x61;
        if (0x60 < uVar4) {
          uVar6 = (uint)puVar2 & 0xff;
          bVar11 = uVar10 == uVar6;
        }
        if ((0x60 < uVar4 && uVar6 <= uVar10) && !bVar11) {
          puVar3 = puVar2 + -0x57;
          goto LAB_014f9774;
        }
        bVar11 = 0x40 < uVar4 && uVar4 < uVar1;
        puVar3 = puVar2 + -0x37;
        if (0x40 >= uVar4 || uVar1 <= uVar4) {
          *(undefined4 *)(param_1 + 8) = uVar9;
        }
      }
    }
    if (!bVar11) {
      if (uVar8 != 0) {
        uVar9 = 1;
        goto LAB_014f9814;
      }
      break;
    }
    if (param_3 <= uVar8) break;
    uVar8 = uVar8 + 1;
    uVar7 = uVar7 * (param_2 & 0xff) + ((uint)puVar3 & 0xff);
  } while (uVar7 < param_4);
  uVar9 = 0;
  *(undefined4 *)(param_1 + 8) = uVar5;
LAB_014f9814:
  return CONCAT44(uVar7,uVar9);
}

