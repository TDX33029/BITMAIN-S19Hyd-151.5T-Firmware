// FUN_00cfa88c @ 00cfa88c size=296 calls_out=0 calls_in=0
// strings: 

void FUN_00cfa88c(int param_1,undefined8 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  char cVar3;
  undefined8 *puVar4;
  int iVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  
  if (param_3 == 0) {
    return;
  }
  puVar4 = param_2 + param_3 * 3;
  iVar5 = *(int *)(param_1 + 0x204);
  puVar6 = *(uint **)(param_1 + 0x288);
  iVar1 = *(int *)(param_1 + 0x28c);
  do {
    if (puVar6 != (uint *)0x0) {
      uVar13 = *(uint *)(param_2 + 2);
      uVar10 = *(uint *)((int)param_2 + 0x14);
      puVar12 = puVar6;
      iVar14 = iVar1;
      while( true ) {
        uVar15 = (uint)*(ushort *)((int)puVar12 + 0x166);
        uVar2 = 0xffffffff;
        iVar11 = uVar15 << 3;
        puVar9 = puVar12;
        do {
          if (iVar11 == 0) {
            if (iVar14 != 0) goto LAB_00cfa998;
            goto LAB_00cfa8e4;
          }
          uVar7 = *puVar9;
          uVar8 = puVar9[1];
          cVar3 = (uVar13 >= uVar7 && uVar13 != uVar7) - (uVar13 < uVar7);
          if (uVar13 == uVar7) {
            cVar3 = (uVar10 >= uVar8 && uVar10 != uVar8) - (uVar10 < uVar8);
          }
          iVar11 = iVar11 + -8;
          uVar2 = uVar2 + 1;
          puVar9 = puVar9 + 2;
        } while (cVar3 == '\x01');
        if (cVar3 == '\0') break;
        uVar15 = uVar2;
        if (iVar14 == 0) goto LAB_00cfa8e4;
LAB_00cfa998:
        iVar14 = iVar14 + -1;
        puVar12 = (uint *)puVar12[uVar15 + 0x5a];
      }
      uVar16 = *param_2;
      uVar17 = param_2[1];
      puVar12[uVar2 * 6 + 0x1a] = *(uint *)(iVar5 + 0xbc);
      *(undefined8 *)(puVar12 + uVar2 * 6 + 0x16) = uVar16;
      *(undefined8 *)(puVar12 + uVar2 * 6 + 0x18) = uVar17;
    }
LAB_00cfa8e4:
    param_2 = param_2 + 3;
    if (param_2 == puVar4) {
      return;
    }
  } while( true );
}

