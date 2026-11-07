// FUN_00c63f30 @ 00c63f30 size=500 calls_out=2 calls_in=1
// strings: 

void FUN_00c63f30(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 int param_6,int param_7)

{
  char cVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  double dVar9;
  double dVar10;
  undefined8 uVar11;
  undefined4 local_30 [3];
  
  iVar7 = *(int *)(param_2 + 0x14);
  uVar8 = *(uint *)(param_2 + 0x10);
  uVar5 = iVar7 + 1;
  bVar2 = true;
  *(uint *)(param_2 + 0x14) = uVar5;
  if (uVar5 < uVar8) {
    cVar1 = *(char *)(*(int *)(param_2 + 0xc) + uVar5);
    if (cVar1 != '+') {
      if (cVar1 != '-') goto LAB_00c63f8c;
      bVar2 = false;
    }
    uVar5 = iVar7 + 2;
    *(uint *)(param_2 + 0x14) = uVar5;
  }
LAB_00c63f8c:
  if (uVar5 < uVar8) {
    uVar6 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar6;
    uVar5 = *(byte *)(*(int *)(param_2 + 0xc) + uVar5) - 0x30 & 0xff;
    if (uVar5 < 10) {
      if (uVar6 < uVar8) {
        do {
          uVar4 = *(byte *)(*(int *)(param_2 + 0xc) + uVar6) - 0x30 & 0xff;
          if (9 < uVar4) break;
          uVar6 = uVar6 + 1;
          *(uint *)(param_2 + 0x14) = uVar6;
          if ((0xccccccb < (int)uVar5) && ((uVar5 != 0xccccccc || (7 < uVar4)))) {
            if ((param_5 != 0 || param_6 != 0) && (bVar2)) {
              uVar3 = FUN_005b8c9c(param_2,local_30 + 5);
              param_1[1] = uVar3;
              *param_1 = 1;
              return;
            }
            uVar5 = *(uint *)(param_2 + 0x14);
            if (*(uint *)(param_2 + 0x10) <= uVar5) goto LAB_0157b62c;
            goto LAB_0157b60c;
          }
          uVar5 = uVar4 + uVar5 * 10;
        } while (uVar8 != uVar6);
      }
      uVar8 = SignedSaturate(param_7 + uVar5,0x20);
      SignedDoesSaturate(uVar8,0x20);
      uVar5 = SignedSaturate(param_7 - uVar5,0x20);
      SignedDoesSaturate(uVar5,0x20);
      if (bVar2) {
        uVar5 = uVar8;
      }
      dVar9 = (double)FUN_01845f30();
      uVar8 = uVar5;
      if ((int)uVar5 < 0) {
        uVar8 = -uVar5;
      }
      while (0x134 < uVar8) {
        if (dVar9 == 0.0) goto LAB_00c640d4;
        if (uVar5 < 0x80000000) goto LAB_00c640c8;
        dVar9 = dVar9 / 1e+308;
        uVar5 = uVar5 + 0x134;
        uVar8 = uVar5;
        if ((int)uVar5 < 0) {
          uVar8 = -uVar5;
        }
      }
      if ((int)uVar5 < 0) {
        dVar9 = dVar9 / (double)(&DAT_0040ddb8)[uVar8];
      }
      else {
        dVar9 = dVar9 * (double)(&DAT_0040ddb8)[uVar8];
        if (SUB84(dVar9,0) == 0 && ((uint)((ulonglong)dVar9 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_00c640c8:
          local_30[0] = 0xe;
          goto LAB_00c640f8;
        }
      }
LAB_00c640d4:
      *param_1 = 0;
      dVar10 = -dVar9;
      if (param_3 != 0) {
        dVar10 = dVar9;
      }
      *(double *)(param_1 + 2) = dVar10;
      return;
    }
    local_30[0] = 0xd;
  }
  else {
    local_30[0] = 5;
  }
LAB_00c640f8:
  uVar3 = FUN_011b4d78(param_2,local_30);
  *param_1 = 1;
  param_1[1] = uVar3;
  return;
  while( true ) {
    uVar5 = uVar5 + 1;
    *(uint *)(param_2 + 0x14) = uVar5;
    if (*(uint *)(param_2 + 0x10) == uVar5) break;
LAB_0157b60c:
    if (9 < *(byte *)(*(int *)(param_2 + 0xc) + uVar5) - 0x30) break;
  }
LAB_0157b62c:
  uVar11 = 0x8000000000000000;
  if (param_3 != 0) {
    uVar11 = 0;
  }
  *(undefined8 *)(param_1 + 2) = uVar11;
  *param_1 = 0;
  return;
}

