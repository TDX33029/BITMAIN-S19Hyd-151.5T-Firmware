// FUN_0137e90c @ 0137e90c size=368 calls_out=1 calls_in=2
// strings: 

void FUN_0137e90c(undefined4 *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  undefined4 *puVar14;
  
  puVar14 = param_1 + 4;
  iVar10 = 0;
  do {
    uVar11 = puVar14[-2];
    uVar13 = puVar14[2];
    uVar5 = puVar14[1];
    uVar9 = uVar11;
    if (uVar13 < uVar11) {
      uVar9 = uVar13;
    }
    iVar6 = FUN_016dd50a(uVar5,puVar14[-3],uVar9);
    bVar1 = *(byte *)(puVar14 + 3);
    if (iVar6 == 0) {
      iVar6 = uVar13 - uVar11;
    }
    bVar4 = -1 < iVar6;
    if (iVar6 == 0) {
      bVar4 = *(byte *)(puVar14 + -1) <= bVar1;
    }
    if (!bVar4) {
      uVar3 = *(undefined2 *)((int)puVar14 + 0xd);
      uVar2 = *(undefined1 *)((int)puVar14 + 0xf);
      uVar8 = *puVar14;
      iVar6 = iVar10;
      do {
        iVar12 = iVar6;
        puVar7 = (undefined4 *)((int)param_1 + iVar12);
        puVar7[4] = *puVar7;
        puVar7[5] = puVar7[1];
        puVar7[6] = puVar7[2];
        puVar7[7] = puVar7[3];
        if (iVar12 == 0) {
          puVar7 = param_1;
          goto LAB_0137e938;
        }
        uVar11 = *(uint *)((int)param_1 + iVar12 + -8);
        uVar9 = uVar11;
        if (uVar13 < uVar11) {
          uVar9 = uVar13;
        }
        iVar6 = FUN_016dd50a(uVar5,*(undefined4 *)((int)param_1 + iVar12 + -0xc),uVar9);
        if (iVar6 == 0) {
          iVar6 = uVar13 - uVar11;
        }
        bVar4 = -1 < iVar6;
        if (iVar6 == 0) {
          bVar4 = *(byte *)((int)param_1 + iVar12 + -4) <= bVar1;
        }
        iVar6 = iVar12 + -0x10;
      } while (!bVar4);
      puVar7 = (undefined4 *)((int)param_1 + iVar12);
LAB_0137e938:
      *puVar7 = uVar8;
      *(undefined4 *)((int)param_1 + iVar12 + 4) = uVar5;
      *(byte *)((int)param_1 + iVar12 + 0xc) = bVar1;
      *(uint *)((int)param_1 + iVar12 + 8) = uVar13;
      *(undefined2 *)((int)param_1 + iVar12 + 0xd) = uVar3;
      *(undefined1 *)((int)param_1 + iVar12 + 0xf) = uVar2;
    }
    puVar14 = puVar14 + 4;
    iVar10 = iVar10 + 0x10;
    if (puVar14 == param_1 + param_2 * 4) {
      return;
    }
  } while( true );
}

