// FUN_018cb058 @ 018cb058 size=248 calls_out=2 calls_in=2
// strings: traffic upd

void FUN_018cb058(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined1 auStack_68 [68];
  
  iVar1 = 0xa8;
  if (param_3 != 0) {
    iVar1 = 0x148;
  }
  puVar12 = (undefined4 *)(param_2 + iVar1);
  FUN_018cae5c(param_1,puVar12,*(undefined4 *)(*(int *)(param_2 + 0xa0) + 0xc),"traffic upd",0xb,1,0
              );
  uVar2 = param_1[0x10];
  uVar3 = param_1[0x24];
  uVar4 = param_1[0x25];
  uVar5 = param_1[0x26];
  uVar14 = param_1[0x11];
  puVar9 = (undefined4 *)((uint)auStack_68 | 4);
  uVar13 = param_1[0x12];
  uVar6 = param_1[0x15];
  uVar7 = param_1[0x16];
  uVar10 = param_1[0x17];
  uVar11 = param_1[0x18];
  *puVar9 = param_1[0x14];
  puVar9[1] = uVar6;
  puVar9[2] = uVar7;
  puVar9[3] = uVar10;
  puVar9[4] = uVar11;
  uVar6 = param_1[0x1a];
  uVar7 = param_1[0x1b];
  uVar10 = param_1[0x1c];
  uVar11 = param_1[0x1d];
  puVar9[5] = param_1[0x19];
  puVar9[6] = uVar6;
  puVar9[7] = uVar7;
  puVar9[8] = uVar10;
  puVar9[9] = uVar11;
  uVar6 = param_1[0x1f];
  uVar7 = param_1[0x20];
  uVar10 = param_1[0x21];
  uVar11 = param_1[0x22];
  uVar8 = param_1[0x23];
  puVar9[10] = param_1[0x1e];
  puVar9[0xb] = uVar6;
  puVar9[0xc] = uVar7;
  puVar9[0xd] = uVar10;
  puVar9[0xe] = uVar11;
  puVar9[0xf] = uVar8;
  uVar6 = param_1[1];
  uVar7 = param_1[2];
  uVar10 = param_1[3];
  uVar11 = param_1[4];
  *puVar12 = *param_1;
  puVar12[1] = uVar6;
  puVar12[2] = uVar7;
  puVar12[3] = uVar10;
  puVar12[4] = uVar11;
  uVar6 = param_1[6];
  uVar7 = param_1[7];
  uVar10 = param_1[8];
  uVar11 = param_1[9];
  puVar12[5] = param_1[5];
  puVar12[6] = uVar6;
  puVar12[7] = uVar7;
  puVar12[8] = uVar10;
  puVar12[9] = uVar11;
  uVar6 = param_1[0xb];
  uVar7 = param_1[0xc];
  uVar10 = param_1[0xd];
  uVar11 = param_1[0xe];
  uVar8 = param_1[0xf];
  puVar12[10] = param_1[10];
  puVar12[0xb] = uVar6;
  puVar12[0xc] = uVar7;
  puVar12[0xd] = uVar10;
  puVar12[0xe] = uVar11;
  puVar12[0xf] = uVar8;
  puVar12[0x10] = uVar2;
  puVar12[0x11] = uVar14;
  puVar12[0x12] = uVar13;
  FUN_01bed4e2(puVar12 + 0x13,auStack_68,0x44);
  puVar12[0x24] = uVar3;
  puVar12[0x25] = uVar4;
  puVar12[0x26] = uVar5;
  return;
}

