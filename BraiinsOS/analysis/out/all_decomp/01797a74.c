// FUN_01797a74 @ 01797a74 size=424 calls_out=0 calls_in=2
// strings: 

undefined8 FUN_01797a74(int *param_1,int *param_2,uint param_3,uint param_4)

{
  ushort *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  
  iVar2 = param_2[1];
  iVar3 = param_2[2];
  iVar4 = param_2[3];
  *param_1 = *param_2;
  param_1[1] = iVar2;
  param_1[2] = iVar3;
  param_1[3] = iVar4;
  iVar4 = *param_2 + param_3 * 8;
  iVar2 = param_2[5];
  iVar3 = param_2[6];
  iVar5 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar2;
  param_1[6] = iVar3;
  param_1[7] = iVar5;
  iVar2 = param_2[9];
  iVar3 = param_2[10];
  param_1[8] = param_2[8];
  param_1[9] = iVar2;
  param_1[10] = iVar3;
  if (param_3 == 0) {
    if (param_2[9] == 0) goto LAB_01797acc;
    uVar6 = param_2[10];
LAB_01797be8:
    if (uVar6 <= param_4) {
      param_1[10] = param_1[10] - param_3;
      goto LAB_01797acc;
    }
  }
  else {
    iVar2 = *param_1;
    if (iVar2 == iVar4) {
      iVar3 = 0;
    }
    else {
      iVar5 = iVar4 - iVar2;
      iVar3 = 0;
      uVar6 = 0;
      do {
        puVar1 = (ushort *)(iVar2 + 4);
        bVar7 = param_1[10] == uVar6;
        iVar2 = iVar2 + 8;
        uVar6 = uVar6 + 1;
        iVar3 = iVar3 + (uint)*puVar1;
        if ((bVar7) && (param_1[9] == 1)) {
          iVar3 = iVar3 + 0x10000;
        }
      } while (uVar6 < (uint)(iVar5 >> 3));
    }
    param_1[2] = param_1[2] + iVar3;
    if (param_2[9] == 0) goto LAB_01797acc;
    uVar6 = param_2[10];
    if (param_3 <= uVar6) goto LAB_01797be8;
  }
  param_1[9] = 0;
LAB_01797acc:
  *param_1 = iVar4;
  iVar2 = *param_2;
  iVar3 = iVar2 + param_4 * 8;
  param_1[1] = iVar3;
  if (param_4 != param_2[1] - iVar2 >> 3) {
    if (iVar3 == iVar4) {
      iVar2 = 0;
    }
    else {
      iVar3 = iVar3 - iVar4;
      iVar2 = 0;
      uVar6 = 0;
      do {
        puVar1 = (ushort *)(iVar4 + 4);
        bVar7 = param_1[10] == uVar6;
        iVar4 = iVar4 + 8;
        uVar6 = uVar6 + 1;
        iVar2 = iVar2 + (uint)*puVar1;
        if ((bVar7) && (param_1[9] == 1)) {
          iVar2 = iVar2 + 0x10000;
        }
      } while (uVar6 < (uint)(iVar3 >> 3));
    }
    param_1[3] = param_1[2] + iVar2;
  }
  param_1[4] = param_1[4] + param_3;
  param_1[5] = param_1[5] + param_3;
  param_1[6] = param_1[6] + param_3;
  return 0;
}

