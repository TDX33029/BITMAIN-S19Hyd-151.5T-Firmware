// FUN_01bcf2c8 @ 01bcf2c8 size=672 calls_out=5 calls_in=3
// strings: 

void FUN_01bcf2c8(int param_1,int param_2,int param_3)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int extraout_r1;
  uint *puVar5;
  int extraout_r1_00;
  uint uVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  uint *puVar10;
  undefined8 uVar11;
  uint local_5c [4];
  uint local_4c [4];
  uint auStack_3c [4];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_2 == 0x80) {
    *(undefined4 *)(param_3 + 0xf0) = 10;
    FUN_01bcf0e8(local_4c,param_1);
    FUN_01bced98(param_3,local_4c,0x10);
    iVar7 = param_3 + 0x10;
    pbVar8 = &DAT_00564200;
    do {
      FUN_01bcecac(auStack_3c,local_4c);
      bVar1 = *pbVar8;
      iVar4 = 0;
      puVar5 = local_4c;
      puVar10 = auStack_3c;
      do {
        uVar3 = *puVar5;
        uVar11 = FUN_01bce988(*puVar10,iVar4);
        uVar9 = (uint)((ulonglong)uVar11 >> 0x20);
        iVar4 = uVar9 + 2;
        uVar9 = (int)(uint)bVar1 >> (uVar9 & 0xff) & 3U ^ uVar3 ^ (uint)uVar11 >> 0x18;
        *puVar5 = uVar9 << 0x10 ^ uVar9 << 8 ^ uVar9 ^ uVar9 << 0x18;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar4 != 8);
      iVar4 = iVar7 + 0x10;
      FUN_01bced98(iVar7,local_4c,0x10);
      param_2 = extraout_r1_00;
      iVar7 = iVar4;
      pbVar8 = pbVar8 + 1;
    } while (param_3 + 0xb0 != iVar4);
  }
  else {
    if (param_2 != 0x100) {
      uVar2 = 1;
      goto LAB_01bcf528;
    }
    *(undefined4 *)(param_3 + 0xf0) = 0xe;
    FUN_01bcf0e8(local_5c,param_1);
    FUN_01bced98(param_3,local_5c,0x10);
    uVar9 = 2;
    FUN_01bcf0e8(local_4c,param_1 + 0x10);
    FUN_01bced98(param_3 + 0x10,local_4c);
    iVar7 = param_3 + 0x30;
    while( true ) {
      FUN_01bcecac(auStack_3c,local_4c);
      iVar4 = 0;
      bVar1 = (&UNK_005641ff)[uVar9 >> 1];
      puVar5 = auStack_3c;
      puVar10 = local_5c;
      do {
        uVar6 = *puVar10;
        uVar11 = FUN_01bce988(*puVar5,iVar4);
        uVar3 = (uint)((ulonglong)uVar11 >> 0x20);
        iVar4 = uVar3 + 2;
        uVar3 = (int)(uint)bVar1 >> (uVar3 & 0xff) & 3U ^ uVar6 ^ (uint)uVar11 >> 0x18;
        *puVar10 = uVar3 << 0x10 ^ uVar3 << 8 ^ uVar3 ^ uVar3 << 0x18;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar4 != 8);
      FUN_01bced98(iVar7 + -0x10,local_5c,0x10);
      param_2 = extraout_r1;
      if (uVar9 == 0xe) break;
      FUN_01bcecac(auStack_3c,local_5c);
      iVar4 = 0;
      puVar5 = local_4c;
      puVar10 = auStack_3c;
      do {
        iVar4 = iVar4 + 1;
        uVar3 = *puVar5 ^ *puVar10 >> 0x18;
        *puVar5 = uVar3 << 0x10 ^ uVar3 << 8 ^ uVar3 ^ uVar3 << 0x18;
        puVar5 = puVar5 + 1;
        puVar10 = puVar10 + 1;
      } while (iVar4 != 4);
      uVar9 = uVar9 + 2;
      FUN_01bced98(iVar7,local_4c,0x10);
      iVar7 = iVar7 + 0x20;
    }
  }
  uVar2 = 0;
LAB_01bcf528:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar2,param_2,local_2c ^ DAT_01d53560,0);
  }
  return;
}

