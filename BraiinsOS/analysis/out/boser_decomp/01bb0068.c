// FUN_01bb0068 @ 01bb0068 size=524 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_01bb0068(int param_1,uint *param_2)

{
  longlong lVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  
  iVar8 = *(int *)(param_1 + 100);
  uVar3 = *(undefined4 *)(param_1 + 200);
  uVar9 = *(uint *)(param_1 + 0xbc);
  iVar4 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(param_1 + 0xc0);
  iVar7 = *(int *)(param_1 + 0x5c);
  for (uVar10 = *(uint *)(param_1 + 0x1c); uVar10 < (uint)((int)param_2 - iVar4);
      uVar10 = uVar10 + 1) {
    iVar12 = iVar4 + uVar10;
    switch(uVar3) {
    case 5:
      lVar1 = (ulonglong)*(uint *)(iVar4 + uVar10) * 0xbb000000;
      uVar11 = *(int *)(iVar12 + 4) * -0x45000000 + *(uint *)(iVar4 + uVar10) * -0x30e44324 +
               (int)((ulonglong)lVar1 >> 0x20);
      uVar11 = (uint)lVar1 >> (0x40U - iVar2 & 0xff) | uVar11 << (iVar2 - 0x20U & 0xff) |
               uVar11 >> (0x20U - iVar2 & 0xff);
      goto LAB_01bb012c;
    case 6:
      uVar11 = *(uint *)(iVar4 + uVar10);
      iVar12 = *(int *)(iVar12 + 4);
      uVar5 = 0xbf9b0000;
      iVar13 = uVar11 * -0x30e44324;
      break;
    case 7:
      uVar11 = *(uint *)(iVar4 + uVar10);
      iVar12 = *(int *)(iVar12 + 4);
      uVar5 = 0xbfa56300;
      iVar13 = uVar11 * -0x30e44324;
      break;
    case 8:
      uVar11 = *(uint *)(iVar4 + uVar10);
      iVar12 = *(int *)(iVar12 + 4);
      uVar5 = 0xb7a56463;
      iVar13 = uVar11 * -0x30e44324;
      break;
    default:
      uVar11 = (uint)(*(int *)(iVar4 + uVar10) * -0x61c8864f) >> (0x20U - iVar2 & 0xff);
      goto LAB_01bb012c;
    }
    uVar6 = uVar5 * iVar12 + iVar13 + (int)((ulonglong)uVar5 * (ulonglong)uVar11 >> 0x20);
    uVar11 = (uint)((ulonglong)uVar5 * (ulonglong)uVar11) >> (0x40U - iVar2 & 0xff) |
             uVar6 << (iVar2 - 0x20U & 0xff) | uVar6 >> (0x20U - iVar2 & 0xff);
LAB_01bb012c:
    *(undefined4 *)(iVar8 + (~(-1 << (uVar9 & 0xff)) & uVar10) * 4) =
         *(undefined4 *)(iVar7 + uVar11 * 4);
    *(uint *)(iVar7 + uVar11 * 4) = uVar10;
  }
  *(int *)(param_1 + 0x1c) = (int)param_2 - iVar4;
  switch(uVar3) {
  case 5:
    uVar10 = *param_2;
    uVar9 = 0xbb000000;
    uVar11 = param_2[1];
    break;
  case 6:
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar9 = 0xbf9b0000;
    break;
  case 7:
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar9 = 0xbfa56300;
    break;
  case 8:
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar9 = 0xb7a56463;
    break;
  default:
    uVar9 = *param_2 * -0x61c8864f >> (0x20U - iVar2 & 0xff);
    goto LAB_01bb01f4;
  }
  uVar11 = uVar9 * uVar11 + uVar10 * -0x30e44324 +
           (int)((ulonglong)uVar9 * (ulonglong)uVar10 >> 0x20);
  uVar9 = (uint)((ulonglong)uVar9 * (ulonglong)uVar10) >> (0x40U - iVar2 & 0xff) |
          uVar11 << (iVar2 - 0x20U & 0xff) | uVar11 >> (0x20U - iVar2 & 0xff);
LAB_01bb01f4:
  return *(undefined4 *)(iVar7 + uVar9 * 4);
}

