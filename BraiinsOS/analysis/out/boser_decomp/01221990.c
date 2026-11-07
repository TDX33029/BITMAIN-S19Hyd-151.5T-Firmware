// FUN_01221990 @ 01221990 size=724 calls_out=2 calls_in=4
// strings: 

void FUN_01221990(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (param_2[7] == 2) {
LAB_01221a34:
    if ((*param_2 != 1) || (puVar3 = (uint *)FUN_012209b0(param_2 + 1), puVar3 == (uint *)0x0))
    goto LAB_01221b10;
  }
  else {
    iVar5 = param_2[8];
    puVar3 = (uint *)param_2[9];
    puVar9 = (uint *)param_2[10];
    while( true ) {
      if (puVar3 != (uint *)0x0) {
        puVar8 = (uint *)0x0;
        if (puVar3 != puVar9) {
          puVar8 = puVar3 + 0xc;
        }
        param_2[9] = (int)puVar8;
        if (puVar3 != puVar9) goto LAB_01221a50;
      }
      bVar10 = (param_2[7] & 1U) != 0;
      if (bVar10) {
        param_2[8] = 0;
      }
      if (!bVar10 || iVar5 == 0) break;
      puVar3 = *(uint **)(iVar5 + 4);
      iVar5 = *(int *)(iVar5 + 8);
      param_2[9] = (int)puVar3;
      puVar9 = puVar3 + iVar5 * 0xc;
      param_2[10] = (int)puVar9;
      iVar5 = 0;
    }
    puVar3 = (uint *)param_2[0xb];
    if (puVar3 == (uint *)0x0) {
LAB_01221a2c:
      param_2[7] = 2;
      goto LAB_01221a34;
    }
    puVar9 = (uint *)0x0;
    if (puVar3 != (uint *)param_2[0xc]) {
      puVar9 = puVar3 + 0xc;
    }
    param_2[0xb] = (int)puVar9;
    if (puVar3 == (uint *)param_2[0xc]) goto LAB_01221a2c;
  }
LAB_01221a50:
  do {
    if ((*puVar3 & 1) != 0) {
      uVar11 = *(undefined8 *)(puVar3 + 2);
      goto LAB_01221b40;
    }
    if (param_2[7] == 2) {
LAB_01221af4:
      if (*param_2 != 1) break;
      puVar3 = (uint *)FUN_012209b0(param_2 + 1);
    }
    else {
      iVar5 = param_2[8];
      puVar3 = (uint *)param_2[9];
      puVar9 = (uint *)param_2[10];
      while( true ) {
        if (puVar3 != (uint *)0x0) {
          puVar8 = (uint *)0x0;
          if (puVar3 != puVar9) {
            puVar8 = puVar3 + 0xc;
          }
          param_2[9] = (int)puVar8;
          if (puVar3 != puVar9) goto LAB_01221b08;
        }
        bVar10 = (param_2[7] & 1U) != 0;
        if (bVar10) {
          param_2[8] = 0;
        }
        if (!bVar10 || iVar5 == 0) break;
        iVar6 = *(int *)(iVar5 + 8);
        puVar3 = *(uint **)(iVar5 + 4);
        param_2[9] = (int)puVar3;
        puVar9 = puVar3 + iVar6 * 0xc;
        param_2[10] = (int)puVar9;
        iVar5 = 0;
      }
      puVar3 = (uint *)param_2[0xb];
      if (puVar3 == (uint *)0x0) {
LAB_01221af0:
        param_2[7] = 2;
        goto LAB_01221af4;
      }
      puVar9 = (uint *)0x0;
      if (puVar3 != (uint *)param_2[0xc]) {
        puVar9 = puVar3 + 0xc;
      }
      param_2[0xb] = (int)puVar9;
      if (puVar3 == (uint *)param_2[0xc]) goto LAB_01221af0;
    }
LAB_01221b08:
  } while (puVar3 != (uint *)0x0);
LAB_01221b10:
  *param_1 = 0;
  param_1[1] = 0;
  FUN_00f80320(param_2,&DAT_01c2458c);
  return;
LAB_01221b40:
  if (param_2[7] == 2) {
LAB_01221bcc:
    if ((*param_2 != 1) || (puVar3 = (uint *)FUN_012209b0(param_2 + 1), puVar3 == (uint *)0x0)) {
      FUN_00f80320(param_2,&DAT_01c2458c);
      *param_1 = 1;
      param_1[1] = 0;
      *(undefined8 *)(param_1 + 2) = uVar11;
      return;
    }
  }
  else {
    iVar5 = param_2[8];
    puVar3 = (uint *)param_2[9];
    puVar9 = (uint *)param_2[10];
    while( true ) {
      if (puVar3 != (uint *)0x0) {
        puVar8 = (uint *)0x0;
        if (puVar3 != puVar9) {
          puVar8 = puVar3 + 0xc;
        }
        param_2[9] = (int)puVar8;
        if (puVar3 != puVar9) goto LAB_01221be8;
      }
      bVar10 = (param_2[7] & 1U) != 0;
      if (bVar10) {
        param_2[8] = 0;
      }
      if (!bVar10 || iVar5 == 0) break;
      iVar6 = *(int *)(iVar5 + 8);
      puVar3 = *(uint **)(iVar5 + 4);
      param_2[9] = (int)puVar3;
      puVar9 = puVar3 + iVar6 * 0xc;
      param_2[10] = (int)puVar9;
      iVar5 = 0;
    }
    puVar3 = (uint *)param_2[0xb];
    if (puVar3 == (uint *)0x0) {
LAB_01221bc8:
      param_2[7] = 2;
      goto LAB_01221bcc;
    }
    puVar9 = (uint *)0x0;
    if (puVar3 != (uint *)param_2[0xc]) {
      puVar9 = puVar3 + 0xc;
    }
    param_2[0xb] = (int)puVar9;
    if (puVar3 == (uint *)param_2[0xc]) goto LAB_01221bc8;
  }
LAB_01221be8:
  if ((*puVar3 & 1) != 0) {
    uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar12 = *(undefined8 *)(puVar3 + 2);
    uVar7 = (uint)((ulonglong)uVar12 >> 0x20);
    uVar1 = (int)uVar4 >> 0x1f;
    uVar4 = uVar1 >> 1 ^ uVar4;
    uVar2 = (int)uVar7 >> 0x1f;
    uVar7 = uVar2 >> 1 ^ uVar7;
    bVar10 = (((uint)((byte)((longlong)uVar12 >> 0x3f) & 1) << 0x1f | uVar2 >> 1) ^ (uint)uVar12) <
             (((uint)((byte)((longlong)uVar11 >> 0x3f) & 1) << 0x1f | uVar1 >> 1) ^ (uint)uVar11);
    if ((int)(uVar7 - (uVar4 + bVar10)) < 0 !=
        (SBORROW4(uVar7,uVar4) != SBORROW4(uVar7 - uVar4,(uint)bVar10))) {
      uVar12 = uVar11;
    }
    uVar11 = uVar12;
  }
  goto LAB_01221b40;
}

