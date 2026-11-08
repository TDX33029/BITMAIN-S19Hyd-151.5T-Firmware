// FUN_00fc8130 @ 00fc8130 size=384 calls_out=1 calls_in=2
// strings: i32isize!

void FUN_00fc8130(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  bool bVar12;
  
  if (*param_2 != -0x7fffffff) {
    FUN_00fc0dd4(param_1 + 1);
    *(undefined1 *)(param_1 + 9) = 0;
    *param_1 = 8;
    return;
  }
  cVar1 = (char)param_2[4];
  if (cVar1 == '\0') {
    if (param_2[3] == 0) {
      uVar11 = 0;
      iVar2 = 0;
    }
    else {
      iVar9 = param_2[3] * 4;
      if (iVar9 - 9U < 0xfffffffb) goto LAB_00fc8284;
      uVar11 = 0;
      iVar2 = 0;
      uVar10 = 0;
      puVar6 = (uint *)param_2[2];
      do {
        uVar4 = *puVar6;
        uVar3 = uVar10 & 0xff;
        uVar7 = (uVar10 & 0xff) - 0x20;
        uVar10 = uVar10 + 0x20;
        uVar8 = uVar4 >> (0x20 - uVar3 & 0xff);
        if (-1 < (int)uVar7) {
          uVar8 = uVar4 << (uVar7 & 0xff);
        }
        uVar4 = uVar4 << uVar3;
        if (-1 < (int)uVar7) {
          uVar4 = 0;
        }
        bVar12 = CARRY4(uVar4,uVar11);
        uVar11 = uVar4 + uVar11;
        iVar2 = uVar8 + iVar2 + (uint)bVar12;
        iVar9 = iVar9 + -4;
        puVar6 = puVar6 + 1;
      } while (iVar9 != 0);
      if (iVar2 < 0) goto LAB_00fc8284;
    }
    uVar10 = -uVar11;
    uVar11 = -(iVar2 + (uint)(uVar11 != 0));
  }
  else {
    uVar10 = 0;
    iVar2 = 1;
    if (cVar1 != '\x01') {
      iVar2 = param_2[3];
    }
    if (cVar1 == '\x01' || iVar2 == 0) goto LAB_00fc8160;
    iVar2 = iVar2 * 4;
    if (iVar2 - 9U < 0xfffffffb) goto LAB_00fc8284;
    uVar11 = 0;
    uVar8 = 0;
    puVar6 = (uint *)param_2[2];
    do {
      uVar7 = *puVar6;
      uVar5 = uVar8 & 0xff;
      uVar3 = (uVar8 & 0xff) - 0x20;
      uVar8 = uVar8 + 0x20;
      uVar4 = uVar7 >> (0x20 - uVar5 & 0xff);
      if (-1 < (int)uVar3) {
        uVar4 = uVar7 << (uVar3 & 0xff);
      }
      uVar7 = uVar7 << uVar5;
      if (-1 < (int)uVar3) {
        uVar7 = 0;
      }
      bVar12 = CARRY4(uVar7,uVar10);
      uVar10 = uVar7 + uVar10;
      uVar11 = uVar4 + uVar11 + (uint)bVar12;
      iVar2 = iVar2 + -4;
      puVar6 = puVar6 + 1;
    } while (iVar2 != 0);
    if (0x7fffffff < uVar11) goto LAB_00fc8284;
  }
  if (uVar11 + (0x7fffffff < uVar10) != 0) {
LAB_00fc8284:
    FUN_00fc0dd4(param_1 + 1);
    param_1[9] = "i32isize!";
    param_1[10] = 3;
    *param_1 = 9;
    return;
  }
LAB_00fc8160:
  *param_1 = 0x10;
  param_1[1] = uVar10;
  return;
}

