// FUN_018e9638 @ 018e9638 size=820 calls_out=12 calls_in=2
// strings: 

void FUN_018e9638(uint param_1,undefined4 param_2,uint *param_3)

{
  undefined1 *puVar1;
  undefined1 uVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined2 *puVar11;
  undefined4 *puVar12;
  int iVar13;
  uint uVar14;
  undefined8 uVar15;
  undefined4 local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 local_60;
  ushort local_4c [8];
  undefined4 local_3c;
  undefined1 local_34 [16];
  
  FUN_0190cfbc(*(undefined2 *)(param_1 + 0x24),*(undefined2 *)(param_1 + 0x26),param_2);
  FUN_01ac6cbc(param_2,param_1 + 0x28,0x20);
  uVar14 = *param_3;
  if ((int)uVar14 < 0) {
    FUN_018e9a0c(param_1 + 0x48,param_2);
  }
  else {
    FUN_01bed93e(&local_70,0,0x24);
    FUN_018e9a0c(&local_70,param_2);
  }
  puVar11 = *(undefined2 **)(param_1 + 4);
  iVar13 = *(int *)(param_1 + 8);
  FUN_01931148(&local_70,&DAT_01d232c0,param_2);
  uVar4 = local_60;
  for (iVar13 = iVar13 << 2; iVar13 != 0; iVar13 = iVar13 + -4) {
    uVar5 = FUN_01908ea8(*puVar11,puVar11[1]);
    local_4c[0] = (ushort)((uVar5 & 0xff) << 8) | (ushort)(uVar5 >> 8) & 0xff;
    FUN_01ac6cbc(uVar4,local_4c,2);
    puVar11 = puVar11 + 2;
  }
  FUN_01931818(&local_70);
  puVar9 = *(undefined1 **)(param_1 + 0x10);
  iVar13 = *(int *)(param_1 + 0x14);
  FUN_01931148(&local_70,&DAT_01d23350,param_2);
  uVar4 = local_60;
  for (iVar13 = iVar13 << 1; iVar13 != 0; iVar13 = iVar13 + -2) {
    uVar2 = *puVar9;
    puVar1 = puVar9 + 1;
    puVar9 = puVar9 + 2;
    FUN_018be47c(uVar2,*puVar1,uVar4);
  }
  FUN_01931818(&local_70);
  if (((int)uVar14 < 0) || (uVar5 = param_3[2], uVar5 == 0)) {
    iVar13 = *(int *)(param_1 + 0x20);
    if (iVar13 != 0) {
      iVar8 = *(int *)(param_1 + 0x1c);
      FUN_01931148(&local_70,&DAT_0056a6b8,param_2);
      for (iVar13 = iVar13 * 0x24; iVar13 != 0; iVar13 = iVar13 + -0x24) {
        FUN_018e9d90(iVar8,local_60);
        iVar8 = iVar8 + 0x24;
      }
      FUN_01931818(&local_70);
    }
    if (-1 < (int)uVar14) {
      FUN_0134aee0(uVar14,param_3[1],2,4);
      return;
    }
  }
  else {
    puVar12 = *(undefined4 **)(param_1 + 0x1c);
    iVar13 = *(int *)(param_1 + 0x20);
    if (iVar13 == 0) {
      bVar3 = false;
    }
    else {
      iVar8 = iVar13 * 0x24;
      param_1 = 0;
      uVar14 = (uint)((ushort *)param_3[1])[1];
      uVar10 = (uint)*(ushort *)param_3[1];
      puVar7 = puVar12;
      do {
        uVar15 = FUN_018e9a80(puVar7);
        if ((((uint)uVar15 & 0xffff) == uVar10) &&
           (uVar10 != 0x2a || ((uint)((ulonglong)uVar15 >> 0x20) & 0xffff) == uVar14)) {
          bVar3 = true;
          uVar14 = param_1 + uVar5;
          goto LAB_018e989c;
        }
        param_1 = param_1 + 1;
        puVar7 = puVar7 + 9;
        iVar8 = iVar8 + -0x24;
      } while (iVar8 != 0);
      bVar3 = false;
    }
LAB_018e989c:
    local_6c = *param_3;
    uStack_68 = param_3[1];
    uStack_64 = param_3[2];
    local_70 = 0x80000015;
    local_34[0] = 0x19;
    FUN_01931148(local_4c,local_34,param_2);
    uVar5 = 0;
    puVar7 = puVar12 + iVar13 * 9;
    while (puVar12 != puVar7) {
      uVar10 = uVar5;
      puVar6 = puVar12;
      while (bVar3) {
        if (param_1 == uVar10) {
          puVar12 = &local_70;
          uVar5 = param_1;
          break;
        }
        if ((uVar5 <= param_1) || (uVar14 <= uVar10)) {
          puVar12 = puVar6;
          uVar5 = uVar10;
          break;
        }
        puVar6 = puVar6 + 9;
        uVar10 = uVar10 + 1;
        if (puVar6 == puVar7) goto LAB_018e9954;
      }
      uVar5 = uVar5 + 1;
      FUN_018e9d90(puVar12,local_3c);
      puVar12 = puVar6 + 9;
    }
LAB_018e9954:
    FUN_01931818(local_4c);
    FUN_018e9bb4(&local_70);
  }
  return;
}

