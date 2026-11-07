// FUN_015cf0cc @ 015cf0cc size=448 calls_out=2 calls_in=1
// strings: 

void FUN_015cf0cc(int param_1,undefined4 param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;
  uint local_68;
  uint local_64;
  uint *local_60;
  undefined1 *local_5c;
  uint *local_58;
  code *local_54;
  uint *local_50;
  code *local_4c;
  uint *local_48;
  code *local_44;
  uint *local_40;
  code *local_3c;
  char *local_38;
  undefined4 local_34;
  char *local_30;
  undefined4 local_2c;
  undefined *local_28;
  
  puVar11 = *(uint **)(param_1 + 0xc0);
  uVar5 = *(undefined4 *)(param_1 + 0x234);
  iVar10 = *(int *)(param_1 + 0xcc);
  uVar2 = *(undefined4 *)(param_1 + 0x238);
  puVar8 = puVar11 + 1;
  uVar9 = ~*puVar11 & 0x80808080;
  while (iVar10 != 0) {
    puVar7 = puVar8;
    if (uVar9 == 0) {
      do {
        puVar8 = puVar7 + 1;
        uVar9 = *puVar7;
        puVar11 = puVar11 + -0x40;
        puVar7 = puVar8;
      } while ((uVar9 & 0x80808080) == 0x80808080);
      uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
    }
    uVar1 = LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                    uVar9 >> 0x18) & 0x1ffffff8;
    uVar3 = FUN_015d003c(uVar5,uVar2,param_2,param_3,puVar11[uVar1 * -2 + -0x10],1);
    local_68 = uVar3;
    uVar4 = FUN_015d003c(uVar5,uVar2,param_2,param_3,puVar11[uVar1 * -2 + -0x10],0);
    uVar9 = uVar9 - 1 & uVar9;
    uVar6 = puVar11[uVar1 * -2 + -5];
    iVar10 = iVar10 + -1;
    bVar12 = uVar6 == uVar3;
    if (bVar12) {
      uVar6 = puVar11[uVar1 * -2 + -4];
    }
    local_64 = uVar4;
    if (!bVar12 || uVar6 != uVar4) {
      if (3 < DAT_01d51b00) {
        local_40 = &local_64;
        local_48 = puVar11 + uVar1 * -2 + -4;
        local_50 = &local_68;
        local_60 = puVar11 + uVar1 * -2 + -3;
        local_3c = FUN_012fd02c;
        local_44 = FUN_012fd02c;
        local_4c = FUN_012fd02c;
        local_54 = FUN_012fd02c;
        local_5c = &LAB_00632348;
        local_2c = 0x17;
        local_28 = &DAT_01cfcd88;
        local_34 = 0x17;
        local_30 = "m";
        local_38 = "m";
        local_58 = puVar11 + uVar1 * -2 + -5;
        FUN_015fb650(&DAT_00597845,&local_60,4,&local_38);
      }
      puVar11[uVar1 * -2 + -5] = uVar3;
      puVar11[uVar1 * -2 + -4] = uVar4;
    }
  }
  return;
}

