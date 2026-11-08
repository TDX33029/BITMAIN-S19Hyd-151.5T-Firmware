// FUN_012857e8 @ 012857e8 size=592 calls_out=1 calls_in=1
// strings: 

void FUN_012857e8(int *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int local_1c;
  byte *local_18;
  uint local_14;
  
  iVar3 = *param_2;
  iVar7 = param_2[1];
  iVar1 = iVar3 + iVar7;
  if (iVar7 == 0) {
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      if (*(byte *)(iVar3 + iVar5) - 0x3a < 0xfffffff6) {
        iVar6 = iVar7 - iVar5;
        iVar1 = iVar3 + iVar5;
        goto LAB_01285844;
      }
      iVar5 = iVar5 + 1;
    } while (iVar7 != iVar5);
    iVar6 = 0;
    iVar5 = iVar7;
  }
LAB_01285844:
  *param_2 = iVar1;
  param_2[2] = param_2[2] + iVar5;
  param_2[1] = iVar6;
  FUN_012fbd94(&local_1c,iVar3,iVar5);
  if (local_1c == 1) {
    *param_1 = (int)local_18;
    param_1[1] = local_14;
    iVar1 = 0x3b9aca0f;
    goto LAB_012859fc;
  }
  if (local_14 != 0) {
    if (local_14 == 1) {
      bVar4 = *local_18;
      uVar2 = 1;
      if (bVar4 == 0x2b || bVar4 == 0x2d) goto LAB_012859f0;
    }
    else {
      bVar4 = *local_18;
    }
    if (bVar4 == 0x2d) {
      iVar1 = local_14 - 1;
      local_18 = local_18 + 1;
      if (local_14 < 9) {
        if (iVar1 == 0) goto LAB_01285998;
        iVar3 = 0;
        do {
          bVar4 = *local_18;
          if (9 < bVar4 - 0x30) goto LAB_012859ec;
          local_18 = local_18 + 1;
          iVar1 = iVar1 + -1;
          iVar3 = iVar3 * 10 - (bVar4 - 0x30);
        } while (iVar1 != 0);
      }
      else {
        iVar3 = 0;
        do {
          iVar7 = (int)((longlong)iVar3 * 10);
          if ((int)((ulonglong)((longlong)iVar3 * 10) >> 0x20) != iVar7 >> 0x1f) {
            uVar2 = 3;
            goto LAB_01285a1c;
          }
          uVar8 = *local_18 - 0x30;
          if (9 < uVar8) goto LAB_012859ec;
          iVar3 = iVar7 - uVar8;
          if (SBORROW4(iVar7,uVar8)) {
            uVar2 = 3;
            goto LAB_012859f0;
          }
          iVar1 = iVar1 + -1;
          local_18 = local_18 + 1;
        } while (iVar1 != 0);
      }
    }
    else {
      if (bVar4 == 0x2b) {
        local_14 = local_14 - 1;
        local_18 = local_18 + 1;
      }
      if (7 < local_14) {
        iVar3 = 0;
LAB_01285964:
        iVar1 = (int)((longlong)iVar3 * 10);
        if ((int)((ulonglong)((longlong)iVar3 * 10) >> 0x20) != iVar1 >> 0x1f) {
          uVar2 = 2;
LAB_01285a1c:
          if (9 < *local_18 - 0x30) {
            uVar2 = 1;
          }
          goto LAB_012859f0;
        }
        uVar8 = *local_18 - 0x30;
        if (9 < uVar8) goto LAB_012859ec;
        iVar3 = iVar1 + uVar8;
        if (!SCARRY4(iVar1,uVar8)) goto code_r0x01285988;
        uVar2 = 2;
        goto LAB_012859f0;
      }
      if (local_14 == 0) {
LAB_01285998:
        iVar3 = 0;
      }
      else {
        iVar3 = 0;
        do {
          bVar4 = *local_18;
          if (9 < bVar4 - 0x30) goto LAB_012859ec;
          local_18 = local_18 + 1;
          local_14 = local_14 - 1;
          iVar3 = (bVar4 - 0x30) + iVar3 * 10;
        } while (local_14 != 0);
      }
    }
LAB_012859d8:
    *param_1 = iVar3;
    iVar1 = 0x3b9aca10;
    goto LAB_012859fc;
  }
  uVar2 = 0;
LAB_012859f0:
  *(undefined1 *)param_1 = uVar2;
  iVar1 = 0x3b9aca08;
LAB_012859fc:
  param_1[2] = iVar1;
  return;
code_r0x01285988:
  local_14 = local_14 - 1;
  local_18 = local_18 + 1;
  if (local_14 == 0) goto LAB_012859d8;
  goto LAB_01285964;
LAB_012859ec:
  uVar2 = 1;
  goto LAB_012859f0;
}

