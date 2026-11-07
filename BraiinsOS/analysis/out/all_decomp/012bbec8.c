// FUN_012bbec8 @ 012bbec8 size=416 calls_out=2 calls_in=2
// strings: 

void FUN_012bbec8(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined1 auStack_40 [28];
  
  puVar15 = param_1 + 10;
  iVar11 = 0;
  do {
    cVar1 = *(char *)(puVar15 + 3);
    uVar10 = 0;
    uVar9 = 1;
    if (cVar1 == '\x01') {
      uVar9 = puVar15[1];
      uVar10 = puVar15[2];
    }
    if (*(char *)(puVar15 + -7) == '\x01') {
      uVar14 = puVar15[-9];
      uVar13 = puVar15[-8];
    }
    else {
      uVar14 = 1;
      uVar13 = 0;
    }
    uVar3 = uVar13;
    if (uVar10 < uVar13) {
      uVar3 = uVar10;
    }
    uVar3 = FUN_016dd50a(uVar9,uVar14,uVar3);
    if (uVar3 == 0) {
      uVar3 = uVar10 - uVar13;
    }
    if (0x7fffffff < uVar3) {
      uVar14 = *puVar15;
      uVar8 = puVar15[1];
      uVar13 = puVar15[2];
      FUN_016dd1aa(auStack_40,(int)puVar15 + 0xd,0x1b);
      iVar2 = iVar11;
      uVar9 = 1;
      uVar10 = 0;
      if (cVar1 != '\0') {
        uVar9 = uVar8;
        uVar10 = uVar13;
      }
      do {
        iVar12 = iVar2;
        puVar5 = (undefined4 *)((int)param_1 + iVar12);
        puVar5[10] = *puVar5;
        puVar5[0xb] = puVar5[1];
        puVar5[0xc] = puVar5[2];
        puVar5[0xd] = puVar5[3];
        puVar5[0xe] = puVar5[4];
        puVar5[0xf] = puVar5[5];
        puVar5[0x10] = puVar5[6];
        puVar5[0x11] = puVar5[7];
        puVar5[0x12] = puVar5[8];
        puVar5[0x13] = puVar5[9];
        if (iVar12 == 0) {
          puVar5 = param_1;
          goto LAB_012bbef4;
        }
        if (*(char *)(puVar5 + -7) == '\x01') {
          uVar6 = puVar5[-9];
          uVar3 = puVar5[-8];
        }
        else {
          uVar6 = 1;
          uVar3 = 0;
        }
        uVar7 = uVar3;
        if (uVar10 < uVar3) {
          uVar7 = uVar10;
        }
        iVar4 = FUN_016dd50a(uVar9,uVar6,uVar7);
        if (iVar4 == 0) {
          iVar4 = uVar10 - uVar3;
        }
        iVar2 = iVar12 + -0x28;
      } while (iVar4 < 0);
      puVar5 = (undefined4 *)((int)param_1 + iVar12);
LAB_012bbef4:
      *(char *)(puVar5 + 3) = cVar1;
      *puVar5 = uVar14;
      puVar5[1] = uVar8;
      puVar5[2] = uVar13;
      FUN_016dd1aa((int)puVar5 + 0xd,auStack_40,0x1b);
    }
    puVar15 = puVar15 + 10;
    iVar11 = iVar11 + 0x28;
    if (puVar15 == param_1 + param_2 * 10) {
      return;
    }
  } while( true );
}

