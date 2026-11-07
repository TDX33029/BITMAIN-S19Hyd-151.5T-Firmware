// FUN_0157fa7c @ 0157fa7c size=864 calls_out=2 calls_in=0
// strings: 

void FUN_0157fa7c(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined4 uStack_50;
  undefined1 auStack_4c [16];
  undefined2 local_3c [12];
  
  param_1 = (int *)*param_1;
  uVar11 = *param_2;
  iVar9 = param_2[1];
  puVar1 = (uint *)(param_1 + 2);
  if (*param_1 == 0) {
    uVar8 = *puVar1;
    uVar6 = param_1[3];
    uVar12 = *(undefined8 *)puVar1;
    iVar3 = 0x14;
    if (uVar6 == 0 && (9999 < uVar8) <= uVar6) {
      if ((uint)(uVar8 < 100) <= -uVar6) goto LAB_0157fd5c;
LAB_0157fc60:
      uVar8 = (uint)((ulonglong)uVar12 >> 0x20);
      uVar6 = (uint)uVar12;
      iVar5 = iVar3;
      if (uVar8 == 0 && (9 < uVar6) <= uVar8) {
LAB_0157fdac:
        iVar3 = iVar5 + -1;
        auStack_4c[iVar5 + -1] = (byte)uVar6 | 0x30;
        goto LAB_0157fdbc;
      }
    }
    else {
      iVar5 = 0;
      uStack_50 = uVar11;
      uVar12 = *(undefined8 *)puVar1;
      do {
        iVar3 = iVar5;
        iVar2 = (int)((ulonglong)uVar12 >> 0x20);
        uVar4 = (uint)uVar12;
        uVar12 = FUN_01846088(uVar4,iVar2,10000,0);
        uVar8 = (uint)uVar12;
        uVar10 = uVar4 + uVar8 * -10000;
        uVar6 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_3c + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
        *(undefined2 *)((int)local_3c + iVar3 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar10 + uVar6 * -100 & 0xffff) * 2);
        iVar5 = iVar3 + -4;
      } while ((uint)(uVar4 < 100000000) <= (uint)-iVar2);
      iVar3 = iVar3 + 0x10;
      uVar11 = uStack_50;
      if ((uint)-(int)((ulonglong)uVar12 >> 0x20) < (uint)(uVar8 < 100)) goto LAB_0157fc60;
LAB_0157fd5c:
      iVar5 = iVar3 + -2;
      uVar6 = (uint)((short)((uVar8 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(auStack_4c + iVar3 + -2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar8 + uVar6 * -100 & 0xffff) * 2);
      if (uVar6 < 10) goto LAB_0157fdac;
    }
    iVar3 = iVar5 + -2;
    *(undefined2 *)(auStack_4c + iVar5 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
    goto LAB_0157fdbc;
  }
  if (*param_1 != 1) {
    iVar3 = FUN_016d1b20((int)*(undefined8 *)puVar1,auStack_4c);
    (**(code **)(iVar9 + 0xc))(uVar11,auStack_4c,iVar3 - (int)auStack_4c);
    return;
  }
  uVar10 = param_1[3];
  uVar8 = (int)uVar10 >> 0x1f;
  iVar3 = 0x14;
  uVar6 = (*puVar1 ^ uVar8) - uVar8;
  uVar8 = (uVar10 ^ uVar8) - (uVar8 + ((*puVar1 ^ uVar8) < uVar8));
  uVar12 = CONCAT44(uVar8,uVar6);
  if (uVar8 == 0 && (9999 < uVar6) <= uVar8) {
    if ((uint)(uVar6 < 100) <= -uVar8) goto LAB_0157fcd4;
LAB_0157fb74:
    uVar6 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar8 = (uint)uVar12;
    iVar5 = iVar3;
    if (uVar6 != 0 || uVar6 < (9 < uVar8)) goto LAB_0157fb84;
LAB_0157fd1c:
    iVar2 = iVar5 + -1;
    auStack_4c[iVar5 + -1] = (byte)uVar8 | 0x30;
  }
  else {
    iVar5 = 0;
    uStack_50 = uVar11;
    do {
      iVar3 = iVar5;
      iVar2 = (int)((ulonglong)uVar12 >> 0x20);
      uVar7 = (uint)uVar12;
      uVar12 = FUN_01846088(uVar7,iVar2,10000,0);
      uVar6 = (uint)uVar12;
      uVar4 = uVar7 + uVar6 * -10000;
      uVar8 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_3c + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar8 * 2);
      *(undefined2 *)((int)local_3c + iVar3 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar4 + uVar8 * -100 & 0xffff) * 2);
      iVar5 = iVar3 + -4;
    } while ((uint)(uVar7 < 100000000) <= (uint)-iVar2);
    iVar3 = iVar3 + 0x10;
    uVar11 = uStack_50;
    if ((uint)-(int)((ulonglong)uVar12 >> 0x20) < (uint)(uVar6 < 100)) goto LAB_0157fb74;
LAB_0157fcd4:
    iVar5 = iVar3 + -2;
    uVar8 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)(auStack_4c + iVar3 + -2) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar6 + uVar8 * -100 & 0xffff) * 2);
    if (uVar8 < 10) goto LAB_0157fd1c;
LAB_0157fb84:
    iVar2 = iVar5 + -2;
    *(undefined2 *)(auStack_4c + iVar5 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar8 * 2);
  }
  iVar3 = iVar2;
  if (0x7fffffff < uVar10) {
    iVar3 = iVar2 + -1;
    auStack_4c[iVar2 + -1] = 0x2d;
  }
LAB_0157fdbc:
  (**(code **)(iVar9 + 0xc))(uVar11,auStack_4c + iVar3,0x14 - iVar3);
  return;
}

