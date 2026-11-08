// FUN_011d5250 @ 011d5250 size=428 calls_out=0 calls_in=0
// strings: 

longlong FUN_011d5250(uint *param_1,char *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  bool bVar13;
  undefined8 uVar14;
  
  uVar1 = 1;
  if (*param_2 != '\x04') {
LAB_011d53c4:
    return CONCAT44(param_2,uVar1);
  }
  if (*(int *)(param_2 + 0xc) == 0) {
    uVar9 = 0;
    uVar11 = 0;
  }
  else {
    iVar8 = *(int *)(param_2 + 8);
    uVar10 = param_1[4];
    uVar9 = 0;
    iVar2 = iVar8 + *(int *)(param_2 + 0xc) * 0x18;
    uVar3 = param_1[2];
    uVar11 = 0;
    uVar4 = param_1[3];
    do {
      uVar6 = *(uint *)(uVar10 + 8);
      uVar5 = 1;
      if ((int)uVar6 < 0) {
        uVar5 = uVar6 ^ 0x80000000;
      }
      if (uVar5 == 0) {
        if (*(int *)(uVar10 + 0xc) != 0) {
          uVar14 = (**(code **)(*(int *)(uVar10 + 0x10) + 0x10))
                             (*(int *)(uVar10 + 0xc),iVar8,param_3);
          uVar6 = (uint)((ulonglong)uVar14 >> 0x20);
          if ((int)uVar14 == 0) goto LAB_011d52d0;
        }
LAB_011d52b4:
        bVar13 = 0xfffffffe < uVar9;
        uVar9 = uVar9 + 1;
        uVar11 = uVar11 + bVar13;
        if (uVar4 <= uVar11 && (uint)(uVar9 <= uVar3) <= uVar4 - uVar11) {
          return (ulonglong)uVar6 << 0x20;
        }
      }
      else if (uVar5 == 1) {
        uVar6 = *(uint *)(uVar10 + 0x10);
        puVar7 = *(undefined4 **)(uVar10 + 0xc);
        iVar12 = uVar6 << 5;
        do {
          if (iVar12 == 0) goto LAB_011d52b4;
          uVar14 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar8,param_3);
          uVar6 = (uint)((ulonglong)uVar14 >> 0x20);
          iVar12 = iVar12 + -0x20;
          puVar7 = puVar7 + 8;
        } while ((int)uVar14 != 0);
      }
      else {
        uVar6 = *(uint *)(uVar10 + 0x14);
        puVar7 = *(undefined4 **)(uVar10 + 0x10);
        iVar12 = uVar6 << 5;
        do {
          if (iVar12 == 0) goto LAB_011d52b4;
          uVar14 = (**(code **)(puVar7[1] + 0x10))(*puVar7,iVar8,param_3);
          uVar6 = (uint)((ulonglong)uVar14 >> 0x20);
          iVar12 = iVar12 + -0x20;
          puVar7 = puVar7 + 8;
        } while ((int)uVar14 != 0);
      }
LAB_011d52d0:
      iVar8 = iVar8 + 0x18;
    } while (iVar8 != iVar2);
    uVar1 = 0;
    param_2 = (char *)(uVar4 - (uVar11 + (uVar9 > uVar3)));
    if (uVar4 <= uVar11 && (uint)(uVar9 <= uVar3) <= uVar4 - uVar11) goto LAB_011d53c4;
  }
  uVar3 = param_1[1];
  return CONCAT44(uVar3,(uint)(uVar3 < uVar11 || uVar11 - uVar3 < (uint)(*param_1 <= uVar9)));
}

