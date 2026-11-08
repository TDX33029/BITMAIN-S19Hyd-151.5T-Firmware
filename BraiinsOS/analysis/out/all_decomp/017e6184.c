// FUN_017e6184 @ 017e6184 size=964 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_017e6184(int param_1,uint *param_2)

{
  uint uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint local_2c;
  
  iVar3 = *(int *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 0x1c);
  uVar11 = (int)param_2 - iVar3;
  iVar9 = *(int *)(param_1 + 200);
  iVar4 = *(int *)(param_1 + 0x5c);
  iVar5 = *(int *)(param_1 + 0xc0);
  if (uVar7 < uVar11) {
    uVar12 = ~(-1 << (*(uint *)(param_1 + 0xbc) & 0xff));
    iVar8 = *(int *)(param_1 + 100);
    if (iVar9 == 5) {
      local_2c = 0x40 - iVar5;
      do {
        lVar2 = (ulonglong)*(uint *)(iVar3 + uVar7) * 0xbb000000;
        uVar6 = *(int *)(iVar3 + uVar7 + 4) * -0x45000000 + *(uint *)(iVar3 + uVar7) * -0x30e44324 +
                (int)((ulonglong)lVar2 >> 0x20);
        uVar6 = (uint)lVar2 >> (local_2c & 0xff) | uVar6 << (iVar5 - 0x20U & 0xff) |
                uVar6 >> (0x20U - iVar5 & 0xff);
        *(undefined4 *)(iVar8 + (uVar12 & uVar7) * 4) = *(undefined4 *)(iVar4 + uVar6 * 4);
        *(uint *)(iVar4 + uVar6 * 4) = uVar7;
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
      *(uint *)(param_1 + 0x1c) = uVar11;
LAB_017e6434:
      uVar7 = 0xbb000000;
      uVar11 = *param_2;
      uVar6 = param_2[1];
      goto LAB_017e6320;
    }
    if (iVar9 == 6) {
      local_2c = 0x40 - iVar5;
      do {
        lVar2 = (ulonglong)*(uint *)(iVar3 + uVar7) * 0xbf9b0000;
        uVar6 = *(int *)(iVar3 + uVar7 + 4) * -0x40650000 + *(uint *)(iVar3 + uVar7) * -0x30e44324 +
                (int)((ulonglong)lVar2 >> 0x20);
        uVar6 = (uint)lVar2 >> (local_2c & 0xff) | uVar6 << (iVar5 - 0x20U & 0xff) |
                uVar6 >> (0x20U - iVar5 & 0xff);
        *(undefined4 *)(iVar8 + (uVar12 & uVar7) * 4) = *(undefined4 *)(iVar4 + uVar6 * 4);
        *(uint *)(iVar4 + uVar6 * 4) = uVar7;
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
      *(uint *)(param_1 + 0x1c) = uVar11;
      goto LAB_017e6414;
    }
    if (iVar9 == 7) {
      local_2c = 0x40 - iVar5;
      do {
        lVar2 = (ulonglong)*(uint *)(iVar3 + uVar7) * 0xbfa56300;
        uVar6 = *(int *)(iVar3 + uVar7 + 4) * -0x405a9d00 + *(uint *)(iVar3 + uVar7) * -0x30e44324 +
                (int)((ulonglong)lVar2 >> 0x20);
        uVar6 = (uint)lVar2 >> (local_2c & 0xff) | uVar6 << (iVar5 - 0x20U & 0xff) |
                uVar6 >> (0x20U - iVar5 & 0xff);
        *(undefined4 *)(iVar8 + (uVar12 & uVar7) * 4) = *(undefined4 *)(iVar4 + uVar6 * 4);
        *(uint *)(iVar4 + uVar6 * 4) = uVar7;
        uVar7 = uVar7 + 1;
      } while (uVar11 != uVar7);
      *(uint *)(param_1 + 0x1c) = uVar11;
      goto LAB_017e6374;
    }
    puVar10 = (uint *)(iVar3 + uVar7);
    if (iVar9 != 8) {
      uVar6 = 0x20 - iVar5;
      while( true ) {
        uVar1 = *puVar10 * -0x61c8864f >> (uVar6 & 0xff);
        *(undefined4 *)(iVar8 + (uVar12 & uVar7) * 4) = *(undefined4 *)(iVar4 + uVar1 * 4);
        *(uint *)(iVar4 + uVar1 * 4) = uVar7;
        uVar7 = uVar7 + 1;
        if (uVar11 == uVar7) break;
        puVar10 = (uint *)(iVar3 + uVar7);
      }
      *(uint *)(param_1 + 0x1c) = uVar11;
      goto LAB_017e62ac;
    }
    local_2c = 0x40 - iVar5;
    while( true ) {
      lVar2 = (ulonglong)*puVar10 * 0xb7a56463;
      uVar6 = puVar10[1] * -0x485a9b9d + *puVar10 * -0x30e44324 + (int)((ulonglong)lVar2 >> 0x20);
      uVar6 = (uint)lVar2 >> (local_2c & 0xff) | uVar6 << (iVar5 - 0x20U & 0xff) |
              uVar6 >> (0x20U - iVar5 & 0xff);
      *(undefined4 *)(iVar8 + (uVar12 & uVar7) * 4) = *(undefined4 *)(iVar4 + uVar6 * 4);
      *(uint *)(iVar4 + uVar6 * 4) = uVar7;
      uVar7 = uVar7 + 1;
      if (uVar11 == uVar7) break;
      puVar10 = (uint *)(iVar3 + uVar7);
    }
    *(uint *)(param_1 + 0x1c) = uVar11;
  }
  else {
    *(uint *)(param_1 + 0x1c) = uVar11;
    switch(iVar9) {
    case 5:
      local_2c = 0x40 - iVar5;
      goto LAB_017e6434;
    case 6:
      local_2c = 0x40 - iVar5;
LAB_017e6414:
      uVar7 = 0xbf9b0000;
      uVar11 = *param_2;
      uVar6 = param_2[1];
      goto LAB_017e6320;
    case 7:
      local_2c = 0x40 - iVar5;
LAB_017e6374:
      uVar7 = 0xbfa56300;
      uVar11 = *param_2;
      uVar6 = param_2[1];
      goto LAB_017e6320;
    case 8:
      local_2c = 0x40 - iVar5;
      break;
    default:
      uVar6 = 0x20 - iVar5;
LAB_017e62ac:
      return *(undefined4 *)(iVar4 + (*param_2 * -0x61c8864f >> (uVar6 & 0xff)) * 4);
    }
  }
  uVar7 = 0xb7a56463;
  uVar11 = *param_2;
  uVar6 = param_2[1];
LAB_017e6320:
  uVar6 = uVar7 * uVar6 + uVar11 * -0x30e44324 + (int)((ulonglong)uVar7 * (ulonglong)uVar11 >> 0x20)
  ;
  return *(undefined4 *)
          (iVar4 + ((uint)((ulonglong)uVar7 * (ulonglong)uVar11) >> (local_2c & 0xff) |
                    uVar6 << (0x20 - local_2c & 0xff) | uVar6 >> (local_2c - 0x20 & 0xff)) * 4);
}

