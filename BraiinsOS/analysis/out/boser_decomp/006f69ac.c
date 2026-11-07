// FUN_006f69ac @ 006f69ac size=436 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_006f69ac(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  uint *puVar6;
  uint uVar7;
  byte *pbVar9;
  byte *pbVar8;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  bool bVar13;
  
  iVar2 = 0;
  if (*(byte *)((int)param_1 + 0x25) == 2) {
    return 0x200000000;
  }
  if ((*(byte *)((int)param_1 + 0x25) & 1) == 0) {
    if ((byte *)param_1[6] != (byte *)param_1[7]) {
      uVar11 = param_1[3] & 0x1ffffff0;
      pbVar9 = (byte *)param_1[6];
      pbVar12 = (byte *)param_1[8];
      do {
        pbVar8 = pbVar9 + 1;
        uVar7 = (uint)*pbVar9;
        if (0x7fffffff < (uint)(int)(char)*pbVar9) {
          if (uVar7 < 0xe0) {
            uVar7 = pbVar9[1] & 0x3f | (uVar7 & 0x1f) << 6;
            pbVar8 = pbVar9 + 2;
          }
          else {
            uVar4 = pbVar9[2] & 0x3f | (pbVar9[1] & 0x3f) << 6;
            if (uVar7 < 0xf0) {
              uVar7 = uVar4 | (uVar7 & 0x1f) << 0xc;
              pbVar8 = pbVar9 + 3;
            }
            else {
              pbVar8 = pbVar9 + 4;
              uVar7 = pbVar9[3] & 0x3f | uVar4 << 6 | (uVar7 & 7) << 0x12;
            }
          }
        }
        pbVar5 = pbVar8 + ((int)pbVar12 - (int)pbVar9);
        iVar3 = param_1[2];
        uVar4 = uVar11;
        while (uVar4 != 0) {
          iVar10 = 0;
          bVar13 = false;
          do {
            iVar1 = iVar10 * 4;
            iVar10 = iVar10 + 1;
            bVar13 = (bool)(bVar13 | *(uint *)(iVar3 + iVar1) == uVar7);
          } while (iVar10 != 0x10);
          uVar4 = uVar4 - 0x10;
          iVar3 = iVar3 + 0x40;
          if (bVar13) goto LAB_006f6b3c;
        }
        iVar3 = (param_1[3] & 0xfU) << 2;
        puVar6 = (uint *)(param_1[2] + uVar11 * 4);
        while (iVar3 != 0) {
          uVar4 = *puVar6;
          iVar3 = iVar3 + -4;
          puVar6 = puVar6 + 1;
          if (uVar4 == uVar7) goto LAB_006f6b3c;
        }
        pbVar9 = pbVar8;
        pbVar12 = pbVar5;
      } while (pbVar8 != (byte *)param_1[7]);
      param_1[6] = (int)pbVar8;
      param_1[8] = (int)pbVar5;
    }
    iVar10 = *param_1;
    *(undefined1 *)((int)param_1 + 0x25) = 1;
    iVar3 = param_1[1] - iVar10;
    if ((char)param_1[9] != '\0' || param_1[1] != iVar10) goto LAB_006f6b54;
  }
  iVar3 = 2;
  *(undefined1 *)((int)param_1 + 0x25) = 2;
LAB_006f6b58:
  return CONCAT44(iVar3,iVar2);
LAB_006f6b3c:
  iVar10 = *param_1;
  param_1[6] = (int)pbVar8;
  param_1[8] = (int)pbVar5;
  iVar3 = (int)pbVar12 - iVar10;
  *param_1 = (int)pbVar5;
LAB_006f6b54:
  iVar2 = param_1[4] + iVar10;
  goto LAB_006f6b58;
}

