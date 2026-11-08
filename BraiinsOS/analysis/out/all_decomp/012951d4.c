// FUN_012951d4 @ 012951d4 size=576 calls_out=3 calls_in=3
// strings: 

void FUN_012951d4(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_2) {
  case 0:
    iVar9 = *(int *)(param_2 + 4);
    if (iVar9 == 1) goto LAB_0129525c;
    if (iVar9 == 2) goto LAB_01295314;
    if (iVar9 == 0xd) goto LAB_0129525c;
    goto LAB_01295218;
  case 1:
    bVar1 = param_2[1];
    break;
  case 2:
    bVar1 = *(byte *)(*(int *)(param_2 + 4) + 8);
    break;
  case 3:
    if (*param_2 < 3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_0188bc90);
    }
    puVar3 = *(undefined4 **)(param_2 + 4);
    cVar2 = *(char *)(puVar3 + 2);
    puVar13 = (undefined4 *)*puVar3;
    iVar9 = puVar3[1];
    thunk_FUN_016d3fb4();
    (**(code **)(iVar9 + 0x1c))(&local_30,puVar13);
    if ((local_30 != -0x61f8d5f7 || iStack_28 != -0x385618b) ||
        (iStack_2c != 0x5e7d18f6 || iStack_24 != 0x3a820102)) {
      FUN_012958c8(param_1 + 4,cVar2,puVar13,iVar9);
      *param_1 = 0x80000003;
      param_1[1] = 0x80000000;
      return;
    }
    if (cVar2 == '\0') {
      uVar4 = 0x80000001;
    }
    else {
      if (cVar2 != '\x01') {
        uVar7 = (uint)*(byte *)(puVar13 + 3);
        bVar14 = uVar7 == 0;
        if (bVar14) {
          uVar7 = puVar13[4];
        }
        if (bVar14 && uVar7 == 3) {
          uVar4 = *puVar13;
          uVar6 = puVar13[1];
          uVar8 = puVar13[2];
          *param_1 = 0x80000001;
          param_1[1] = uVar4;
          param_1[2] = uVar6;
          param_1[3] = uVar8;
          thunk_FUN_016d3fb4(puVar13);
          return;
        }
        uVar4 = puVar13[3];
        uVar8 = puVar13[4];
        uVar10 = puVar13[2];
        uVar6 = *puVar13;
        uVar11 = puVar13[1];
        *param_1 = 0x80000003;
        param_1[1] = uVar6;
        param_1[2] = uVar11;
        param_1[3] = uVar10;
        param_1[4] = uVar4;
        param_1[5] = uVar8;
        thunk_FUN_016d3fb4(puVar13);
        return;
      }
      uVar4 = 0x80000000;
    }
    puVar3 = (undefined4 *)puVar13[4];
    cVar2 = *(char *)(puVar13 + 3);
    uVar6 = *puVar13;
    uVar8 = puVar13[1];
    uVar10 = puVar13[2];
    *param_1 = uVar4;
    param_1[1] = uVar6;
    param_1[2] = uVar8;
    param_1[3] = uVar10;
    if (cVar2 == '\x03') {
      uVar4 = *puVar3;
      puVar12 = (undefined4 *)puVar3[1];
      pcVar5 = (code *)*puVar12;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar4);
      }
      if (puVar12[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      thunk_FUN_016d3fb4(puVar3);
    }
    thunk_FUN_016d3fb4(puVar13);
    return;
  }
  if (bVar1 == 0) {
LAB_01295314:
    *param_1 = 0x80000001;
    param_1[1] = 0x80000000;
    return;
  }
  if (bVar1 == 1) {
LAB_0129525c:
    *param_1 = 0x80000000;
    param_1[1] = 0x80000000;
    return;
  }
LAB_01295218:
  uVar6 = *(undefined4 *)param_2;
  uVar4 = *(undefined4 *)(param_2 + 4);
  *param_1 = 0x80000003;
  param_1[4] = uVar6;
  param_1[1] = 0x80000000;
  param_1[5] = uVar4;
  return;
}

