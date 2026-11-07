// FUN_01220b60 @ 01220b60 size=544 calls_out=3 calls_in=3
// strings: 

void FUN_01220b60(undefined4 *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  piVar3 = (int *)FUN_01220064(param_2);
  if (piVar3[7] != 2) {
    iVar6 = piVar3[8];
    iVar4 = piVar3[9];
    iVar9 = piVar3[10];
    while( true ) {
      if (iVar4 != 0) {
        iVar8 = 0;
        if (iVar4 != iVar9) {
          iVar8 = iVar4 + 0x30;
        }
        piVar3[9] = iVar8;
        if (iVar4 != iVar9) goto LAB_01220c2c;
      }
      bVar10 = (piVar3[7] & 1U) != 0;
      if (bVar10) {
        piVar3[8] = 0;
      }
      if (!bVar10 || iVar6 == 0) break;
      iVar4 = *(int *)(iVar6 + 4);
      iVar6 = *(int *)(iVar6 + 8);
      piVar3[9] = iVar4;
      iVar9 = iVar4 + iVar6 * 0x30;
      piVar3[10] = iVar9;
      iVar6 = 0;
    }
    iVar4 = piVar3[0xb];
    if (iVar4 != 0) {
      iVar6 = 0;
      if (iVar4 != piVar3[0xc]) {
        iVar6 = iVar4 + 0x30;
      }
      piVar3[0xb] = iVar6;
      if (iVar4 != piVar3[0xc]) goto LAB_01220c2c;
    }
    piVar3[7] = 2;
  }
  if ((*piVar3 != 1) || (iVar4 = FUN_012209b0(piVar3 + 1), iVar4 == 0)) {
    *param_1 = 0;
    param_1[1] = 0;
    FUN_00f80320(piVar3,&DAT_01c2458c);
    return;
  }
LAB_01220c2c:
  uVar11 = *(undefined8 *)(iVar4 + 0x10);
  do {
    if (piVar3[7] == 2) {
LAB_01220cc8:
      if ((*piVar3 != 1) || (iVar4 = FUN_012209b0(piVar3 + 1), iVar4 == 0)) {
        FUN_00f80320(piVar3,&DAT_01c2458c);
        *param_1 = 1;
        param_1[1] = 0;
        *(undefined8 *)(param_1 + 2) = uVar11;
        return;
      }
    }
    else {
      iVar6 = piVar3[8];
      iVar4 = piVar3[9];
      iVar9 = piVar3[10];
      while( true ) {
        if (iVar4 != 0) {
          iVar8 = 0;
          if (iVar4 != iVar9) {
            iVar8 = iVar4 + 0x30;
          }
          piVar3[9] = iVar8;
          if (iVar4 != iVar9) goto LAB_01220ce4;
        }
        bVar10 = (piVar3[7] & 1U) != 0;
        if (bVar10) {
          piVar3[8] = 0;
        }
        if (!bVar10 || iVar6 == 0) break;
        iVar9 = *(int *)(iVar6 + 8);
        iVar4 = *(int *)(iVar6 + 4);
        piVar3[9] = iVar4;
        iVar9 = iVar4 + iVar9 * 0x30;
        piVar3[10] = iVar9;
        iVar6 = 0;
      }
      iVar4 = piVar3[0xb];
      if (iVar4 == 0) {
LAB_01220cc4:
        piVar3[7] = 2;
        goto LAB_01220cc8;
      }
      iVar6 = 0;
      if (iVar4 != piVar3[0xc]) {
        iVar6 = iVar4 + 0x30;
      }
      piVar3[0xb] = iVar6;
      if (iVar4 == piVar3[0xc]) goto LAB_01220cc4;
    }
LAB_01220ce4:
    uVar12 = *(undefined8 *)(iVar4 + 0x10);
    uVar5 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar1 = (int)uVar5 >> 0x1f;
    uVar5 = uVar1 >> 1 ^ uVar5;
    uVar2 = (int)uVar7 >> 0x1f;
    uVar7 = uVar2 >> 1 ^ uVar7;
    bVar10 = (((uint)((byte)((longlong)uVar12 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar12) <
             (((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar11);
    if ((int)(uVar7 - (uVar5 + bVar10)) < 0 !=
        (SBORROW4(uVar7,uVar5) != SBORROW4(uVar7 - uVar5,(uint)bVar10))) {
      uVar12 = uVar11;
    }
    uVar11 = uVar12;
  } while( true );
}

