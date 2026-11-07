// FUN_007b3c64 @ 007b3c64 size=856 calls_out=7 calls_in=0
// strings: 

undefined8 FUN_007b3c64(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint *puVar13;
  undefined1 *puVar14;
  int iVar15;
  undefined1 auStack_308 [336];
  uint auStack_1b8 [8];
  uint local_198 [5];
  uint auStack_184 [11];
  undefined1 local_158 [32];
  undefined1 local_138 [256];
  undefined1 auStack_38 [20];
  
  puVar13 = local_198;
  FUN_01bed93e(auStack_184 + 3,0,0x140);
  FUN_00652328(puVar13,&DAT_00569928,&DAT_00569928);
  uVar10 = 0;
  iVar5 = 0;
  do {
    uVar3 = uVar10 + 1;
    iVar15 = iVar5 + 8;
    iVar6 = 0;
    do {
      iVar4 = iVar6 + 1;
      puVar13[0xf - iVar6] = puVar13[7 - iVar6];
      iVar6 = iVar4;
    } while (iVar4 != 8);
    FUN_00652d58(local_198 + iVar15);
    uVar9 = auStack_184[iVar15];
    uVar11 = auStack_184[iVar5 + 9];
    local_198[iVar15] = ~local_198[iVar15];
    local_198[iVar5 + 9] = ~local_198[iVar5 + 9];
    auStack_184[iVar15] = ~uVar9;
    auStack_184[iVar5 + 9] = ~uVar11;
    puVar8 = local_198 + iVar15 + uVar10;
    if (uVar10 < 8) {
      *puVar8 = *puVar8 ^ 0xc000;
    }
    else {
      puVar8[-8] = puVar8[-8] ^ 0xc000;
      puVar8[-7] = puVar8[-7] ^ 0xc000;
      puVar8[-5] = puVar8[-5] ^ 0xc000;
      puVar8[-4] = puVar8[-4] ^ 0xc000;
    }
    iVar5 = 0;
    do {
      puVar8 = puVar13 + iVar5;
      iVar5 = iVar5 + 1;
      uVar10 = (puVar8[8] >> 0xe | puVar8[8] << 0x12) & 0x3030303 ^ *puVar8;
      puVar8[8] = (uVar10 & 0xf0f0f0f) << 4 ^ (uVar10 & 0x3f3f3f3f) << 2 ^ (uVar10 & 0x3030303) << 6
                  ^ uVar10;
    } while (iVar5 != 8);
    puVar13 = puVar13 + 8;
    uVar10 = uVar3;
    iVar5 = iVar15;
  } while (uVar3 != 10);
  puVar12 = local_138;
  puVar14 = local_158;
  puVar13 = auStack_184 + 3;
  bVar2 = false;
  do {
    iVar5 = 0;
    do {
      uVar10 = *(uint *)((int)puVar13 + iVar5);
      uVar3 = (uVar10 ^ uVar10 >> 4) & 0x30f0c00;
      uVar3 = uVar10 ^ uVar3 << 4 ^ uVar3;
      uVar10 = (uVar3 ^ uVar3 >> 2) & 0x33003300;
      *(uint *)((int)puVar13 + iVar5) = uVar3 ^ uVar10 << 2 ^ uVar10;
      iVar5 = iVar5 + 4;
    } while (iVar5 != 0x20);
    iVar5 = 0;
    do {
      uVar10 = *(uint *)(puVar14 + iVar5);
      uVar3 = (uVar10 ^ uVar10 >> 4) & 0xf000f00;
      *(uint *)(puVar14 + iVar5) = uVar10 ^ uVar3 << 4 ^ uVar3;
      iVar5 = iVar5 + 4;
    } while (iVar5 != 0x20);
    iVar5 = 0;
    do {
      uVar10 = *(uint *)(puVar12 + iVar5);
      uVar3 = (uVar10 ^ uVar10 >> 4) & 0xc0f0300;
      uVar3 = uVar10 ^ uVar3 << 4 ^ uVar3;
      uVar10 = (uVar3 ^ uVar3 >> 2) & 0x33003300;
      *(uint *)(puVar12 + iVar5) = uVar3 ^ uVar10 << 2 ^ uVar10;
      iVar5 = iVar5 + 4;
    } while (iVar5 != 0x20);
    puVar12 = puVar12 + 0x80;
    puVar14 = puVar14 + 0x80;
    puVar13 = puVar13 + 0x20;
    bVar1 = !bVar2;
    bVar2 = true;
  } while (bVar1);
  iVar5 = -0x120;
  do {
    uVar10 = *(uint *)((int)local_198 - iVar5);
    uVar3 = (uVar10 ^ uVar10 >> 4) & 0x30f0c00;
    uVar3 = uVar10 ^ uVar3 << 4 ^ uVar3;
    uVar10 = (uVar3 ^ uVar3 >> 2) & 0x33003300;
    *(uint *)((int)local_198 - iVar5) = uVar3 ^ uVar10 << 2 ^ uVar10;
    iVar5 = iVar5 + -4;
  } while (iVar5 != -0x140);
  iVar5 = 0;
  do {
    iVar6 = iVar5 + 1;
    auStack_184[iVar5 * 8 + 3] = ~auStack_184[iVar5 * 8 + 3];
    auStack_184[iVar5 * 8 + 4] = ~auStack_184[iVar5 * 8 + 4];
    auStack_184[iVar5 * 8 + 8] = ~auStack_184[iVar5 * 8 + 8];
    auStack_184[iVar5 * 8 + 9] = ~auStack_184[iVar5 * 8 + 9];
    iVar5 = iVar6;
  } while (iVar6 != 10);
  FUN_01bed4e2(auStack_308,local_198,0x160);
  FUN_007b4e6c(auStack_38,&DAT_005697e8);
  FUN_01bed4e2(local_198,auStack_308,0x160);
  FUN_01bed4e2(auStack_308,local_198,0x170);
  puVar7 = (undefined4 *)thunk_FUN_01be5118(0x117c);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x117c);
  }
  *puVar7 = param_2;
  puVar7[1] = param_3;
  FUN_01bed4e2(puVar7 + 2,auStack_308,0x170);
  FUN_01bed93e(puVar7 + 0x5e,0,0x1004);
  return CONCAT44(&UNK_01c09e08,puVar7);
}

