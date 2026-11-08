// FUN_01b6c374 @ 01b6c374 size=880 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_01b6c374(uint *param_1,uint param_2,uint param_3)

{
  ulonglong uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined **ppuVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_48;
  uint local_44;
  undefined1 auStack_3c [8];
  undefined1 auStack_34 [4];
  undefined1 auStack_30 [4];
  int local_2c;
  
  ppuVar7 = &PTR_01d3b2b0;
  local_2c = DAT_01d53560;
  uVar8 = 0;
  uVar10 = param_2;
  if (param_3 < 0x10) goto LAB_01b6c5d4;
  do {
    param_3 = param_3 - 0x10;
    uVar8 = FUN_01b6c2dc(uVar10,param_2,ppuVar7,uVar8);
    uVar3 = FUN_01b6c2dc(uVar10 + 4);
    uVar4 = FUN_01b6c2dc(uVar10 + 8);
    iVar5 = uVar10 + 0xc;
    uVar10 = uVar10 + 0x10;
    uVar6 = FUN_01b6c2dc(iVar5);
    uVar9 = (uVar8 & 0x3ffffff) + param_1[9];
    uVar11 = (uVar8 >> 0x1a | (uVar3 & 0xfffff) << 6) + param_1[10];
    local_44 = (uVar3 >> 0x14 | (uVar4 & 0x3fff) << 0xc) + param_1[0xb];
    local_48 = (uVar4 >> 0xe | (uVar6 & 0xff) << 0x12) + param_1[0xc];
    uVar8 = (uVar6 >> 8 | 0x1000000) + param_1[0xd];
    while( true ) {
      uVar3 = param_1[7];
      uVar1 = (ulonglong)param_1[5] * (ulonglong)uVar8 +
              (ulonglong)param_1[6] * (ulonglong)local_48 +
              (ulonglong)uVar3 * (ulonglong)local_44 +
              (ulonglong)param_1[8] * (ulonglong)uVar11 + (ulonglong)*param_1 * (ulonglong)uVar9;
      ppuVar7 = (undefined **)((uint)uVar1 & 0x3ffffff);
      lVar2 = (ulonglong)param_1[6] * (ulonglong)uVar8 +
              (ulonglong)uVar3 * (ulonglong)local_48 +
              (ulonglong)param_1[8] * (ulonglong)local_44 +
              (ulonglong)*param_1 * (ulonglong)uVar11 + (ulonglong)uVar9 * (ulonglong)param_1[1] +
              (uVar1 >> 0x1a);
      uVar4 = (uint)lVar2;
      param_1[10] = uVar4 & 0x3ffffff;
      lVar2 = (ulonglong)uVar3 * (ulonglong)uVar8 +
              (ulonglong)param_1[8] * (ulonglong)local_48 +
              (ulonglong)*param_1 * (ulonglong)local_44 +
              (ulonglong)uVar11 * (ulonglong)param_1[1] + (ulonglong)uVar9 * (ulonglong)param_1[2] +
              (ulonglong)(uVar4 >> 0x1a | (int)((ulonglong)lVar2 >> 0x20) * 0x40);
      uVar3 = (uint)lVar2;
      param_1[0xb] = uVar3 & 0x3ffffff;
      lVar2 = (ulonglong)param_1[8] * (ulonglong)uVar8 +
              (ulonglong)*param_1 * (ulonglong)local_48 +
              (ulonglong)local_44 * (ulonglong)param_1[1] +
              (ulonglong)uVar11 * (ulonglong)param_1[2] + (ulonglong)uVar9 * (ulonglong)param_1[3] +
              (ulonglong)(uVar3 >> 0x1a | (int)((ulonglong)lVar2 >> 0x20) * 0x40);
      uVar3 = (uint)lVar2;
      param_1[0xc] = uVar3 & 0x3ffffff;
      lVar2 = (ulonglong)*param_1 * (ulonglong)uVar8 +
              (ulonglong)local_48 * (ulonglong)param_1[1] +
              (ulonglong)local_44 * (ulonglong)param_1[2] +
              (ulonglong)uVar9 * (ulonglong)param_1[4] + (ulonglong)uVar11 * (ulonglong)param_1[3] +
              (ulonglong)(uVar3 >> 0x1a | (int)((ulonglong)lVar2 >> 0x20) * 0x40);
      uVar8 = (uint)lVar2;
      param_2 = uVar8 & 0x3ffffff;
      param_1[0xd] = param_2;
      uVar8 = (uVar8 >> 0x1a | (int)((ulonglong)lVar2 >> 0x20) * 0x40) * 5 + (int)ppuVar7;
      param_1[9] = uVar8;
      if (0xf < param_3) break;
      if (param_3 == 0) {
        if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4();
        }
        return 0;
      }
LAB_01b6c5d4:
      FUN_01bed4e2(auStack_3c,uVar10,param_3);
      auStack_3c[param_3] = 1;
      while (param_3 = param_3 + 1, param_3 != 0x10) {
        auStack_3c[param_3] = 0;
      }
      uVar8 = FUN_01b6c2dc(auStack_3c);
      uVar3 = FUN_01b6c2dc(auStack_3c + 4);
      uVar4 = FUN_01b6c2dc(auStack_34);
      uVar6 = FUN_01b6c2dc(auStack_30);
      uVar9 = (uVar8 & 0x3ffffff) + param_1[9];
      uVar11 = (uVar8 >> 0x1a | (uVar3 & 0xfffff) << 6) + param_1[10];
      local_44 = (uVar3 >> 0x14 | (uVar4 & 0x3fff) << 0xc) + param_1[0xb];
      param_3 = 0;
      local_48 = (uVar4 >> 0xe | (uVar6 & 0xff) << 0x12) + param_1[0xc];
      uVar8 = param_1[0xd] + (uVar6 >> 8);
    }
  } while( true );
}

