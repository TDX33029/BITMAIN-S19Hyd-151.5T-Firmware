// FUN_01b6388c @ 01b6388c size=1124 calls_out=16 calls_in=0
// strings: 

undefined4 FUN_01b6388c(undefined4 param_1,int param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  undefined2 *puVar4;
  undefined2 *puVar5;
  undefined2 *puVar6;
  short *psVar7;
  undefined4 uVar8;
  ushort *puVar9;
  int iVar10;
  ushort *puVar11;
  byte *pbVar12;
  short *psVar13;
  int iVar14;
  undefined2 *puVar15;
  undefined4 local_1f24;
  undefined1 auStack_1f20 [2048];
  undefined2 auStack_1720 [894];
  undefined4 local_1024;
  undefined1 auStack_f20 [32];
  undefined1 auStack_f00 [1568];
  undefined1 auStack_8e0 [1024];
  short asStack_4e0 [256];
  short local_2e0 [256];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 auStack_a0 [32];
  undefined1 auStack_80 [60];
  ushort local_44 [4];
  ushort local_3c;
  ushort local_3a;
  ushort local_38;
  ushort local_36;
  byte local_34 [4];
  byte local_30;
  undefined1 local_2f;
  byte local_2e;
  byte local_2d;
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_1024 = param_1;
  iVar3 = FUN_01b5b13c(param_3,param_2,&PTR_01d3b2b0,0);
  if (iVar3 == 0) {
    puVar15 = auStack_1720;
    iVar3 = 0;
    do {
      puVar9 = (ushort *)(param_2 + iVar3);
      iVar10 = 0;
      puVar4 = puVar15;
      while( true ) {
        local_44[0] = *puVar9 & 0x7ff;
        local_44[1] = ((byte)puVar9[1] & 0x3f) << 5 | (ushort)(*(byte *)((int)puVar9 + 1) >> 3);
        local_44[2] = (ushort)(byte)((byte)puVar9[1] >> 6) | (ushort)*(byte *)((int)puVar9 + 3) << 2
                      | ((byte)puVar9[2] & 1) << 10;
        local_44[3] = (*(byte *)((int)puVar9 + 5) & 0xf) << 7 | (ushort)(byte)((byte)puVar9[2] >> 1)
        ;
        local_3c = ((byte)puVar9[3] & 0x7f) << 4 | (ushort)(*(byte *)((int)puVar9 + 5) >> 4);
        local_3a = (ushort)(byte)((byte)puVar9[3] >> 7) | (ushort)*(byte *)((int)puVar9 + 7) << 1 |
                   ((byte)puVar9[4] & 3) << 9;
        local_38 = (*(byte *)((int)puVar9 + 9) & 0x1f) << 6 | (ushort)(byte)((byte)puVar9[4] >> 2);
        local_36 = (ushort)(*(byte *)((int)puVar9 + 9) >> 5) | (ushort)(byte)puVar9[5] << 3;
        puVar5 = puVar4;
        puVar11 = local_44;
        do {
          puVar6 = puVar5 + 1;
          *puVar5 = (short)((uint)*puVar11 * 0xd01 + 0x400 >> 0xb);
          puVar5 = puVar6;
          puVar11 = puVar11 + 1;
        } while (puVar4 + 8 != puVar6);
        iVar10 = iVar10 + 8;
        puVar9 = (ushort *)((int)puVar9 + 0xb);
        if (iVar10 == 0x100) break;
        puVar4 = puVar4 + 8;
      }
      iVar3 = iVar3 + 0x160;
      puVar15 = puVar15 + 0x100;
    } while (iVar3 != 0x580);
    iVar10 = 0;
    psVar7 = local_2e0;
    iVar3 = param_2;
    do {
      bVar1 = *(byte *)(iVar3 + 0x581);
      local_34[0] = *(byte *)(iVar3 + 0x580) & 0x1f;
      local_34[1] = (bVar1 & 3) << 3 | *(byte *)(iVar3 + 0x580) >> 5;
      local_34[2] = (char)((bVar1 & 0x7f) >> 2);
      bVar2 = *(byte *)(iVar3 + 0x583);
      local_34[3] = (*(byte *)(iVar3 + 0x582) & 0xf) << 1 | bVar1 >> 7;
      local_30 = (bVar2 & 1) << 4 | *(byte *)(iVar3 + 0x582) >> 4;
      local_2f = (char)((bVar2 & 0x3f) >> 1);
      local_2d = *(byte *)(iVar3 + 0x584) >> 3;
      iVar14 = 0;
      local_2e = (*(byte *)(iVar3 + 0x584) & 7) << 2 | bVar2 >> 6;
      pbVar12 = local_34;
      psVar13 = psVar7;
      do {
        iVar14 = iVar14 + 1;
        *psVar13 = (short)((uint)*pbVar12 * 0xd01 + 0x10 >> 5);
        pbVar12 = pbVar12 + 1;
        psVar13 = psVar13 + 1;
      } while (iVar14 != 8);
      iVar10 = iVar10 + 8;
      iVar3 = iVar3 + 5;
      psVar7 = psVar7 + 8;
    } while (iVar10 != 0x100);
    FUN_01b1e5fc(auStack_1f20,param_3);
    FUN_01b29398(auStack_1720);
    FUN_01b29628(auStack_8e0,auStack_1720);
    FUN_01b1e64c(asStack_4e0,auStack_1f20,auStack_1720,auStack_8e0);
    FUN_01b293d8(asStack_4e0);
    iVar3 = 0;
    psVar7 = local_2e0;
    psVar13 = asStack_4e0;
    do {
      iVar3 = iVar3 + 1;
      *psVar7 = *psVar7 - *psVar13;
      psVar7 = psVar7 + 1;
      psVar13 = psVar13 + 1;
    } while (iVar3 != 0x100);
    FUN_01b2898c(local_2e0);
    FUN_01b1e044(auStack_a0,local_2e0);
    FUN_01b6b174(auStack_1f20,0x800);
    FUN_01b6b174(auStack_1720,0x800);
    FUN_01b6b174(auStack_8e0,0x400);
    FUN_01b6b174(local_2e0,0x200);
    FUN_01b6b174(asStack_4e0,0x200);
    FUN_01b269d8(auStack_80,param_3 + 0xc20);
    FUN_01b5b204(auStack_a0,0x40,auStack_e0);
    FUN_01b63164(auStack_f20,auStack_a0,param_3 + 0x600,auStack_c0);
    uVar8 = FUN_01b1db34(param_2,auStack_f20,0x620);
    FUN_01b269d8(auStack_f20,param_3 + 0xc40,0x20);
    FUN_01b269d8(auStack_f00,param_2,0x620);
    FUN_01b5b7f8(auStack_f20,0x640,param_1,0x20);
    FUN_01b23084(param_1,auStack_e0,uVar8);
    FUN_01b6b174(auStack_a0,0x40);
    FUN_01b6b174(auStack_e0,0x40);
    FUN_01b6b174(auStack_f20,0x640);
    local_1f24 = 0;
  }
  else {
    local_1f24 = 0xffffffff;
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return local_1f24;
}

