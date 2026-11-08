// FUN_01981420 @ 01981420 size=420 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01981420(int *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  uint unaff_r10;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  if (param_1[3] != 0) {
    iVar5 = *param_1;
    uVar6 = param_1[1];
    iVar13 = param_1[2];
    iVar14 = iVar13 + param_1[3] * 0x28;
    do {
      if (*(int *)(iVar13 + 4) == 7) {
        uVar9 = *(uint *)(iVar13 + 0x14);
        if (uVar9 == 0) {
          puVar11 = (uint *)&DAT_00000001;
        }
        else {
          uVar3 = *(uint *)(iVar13 + 0x10);
          if (uVar6 < uVar3 || uVar6 - uVar3 < uVar9) goto LAB_0198146c;
          puVar11 = (uint *)(iVar5 + uVar3);
        }
        iVar1 = 4;
        if (((*(uint *)(iVar13 + 0x20) < 5) || (iVar1 = 8, *(uint *)(iVar13 + 0x20) == 8)) &&
           (0xb < uVar9)) {
          while( true ) {
            uVar3 = *puVar11;
            if (uVar9 - 0xc < uVar3) break;
            uVar12 = iVar1 + 0xb + uVar3 & -iVar1;
            if ((uVar9 < uVar12) || (unaff_r10 = puVar11[1], uVar9 - uVar12 < unaff_r10)) break;
            uVar8 = iVar1 + -1 + uVar12 + unaff_r10 & -iVar1;
            uVar10 = uVar9 - uVar8;
            puVar7 = (uint *)((int)puVar11 + uVar8);
            if (uVar9 < uVar8) {
              puVar7 = (uint *)&DAT_00000001;
              uVar10 = 0;
            }
            do {
              uVar4 = uVar3;
              if (uVar4 == 0) goto LAB_0198158c;
              uVar3 = uVar4 - 1;
            } while (*(char *)((int)puVar11 + uVar4 + 0xb) == '\0');
            if (uVar4 == 3) {
              uVar3 = thunk_FUN_01bed842(puVar11 + 3,"GNU",3);
              bVar15 = uVar3 == 0;
              if (bVar15) {
                uVar3 = puVar11[2];
              }
              if (bVar15 && uVar3 == 3) {
                puVar2 = (undefined1 *)((int)puVar11 + uVar12);
                goto LAB_019815b0;
              }
            }
LAB_0198158c:
            if ((uVar9 <= uVar8) || (uVar9 = uVar10, puVar11 = puVar7, uVar10 < 0xc)) break;
          }
        }
      }
LAB_0198146c:
      iVar13 = iVar13 + 0x28;
    } while (iVar13 != iVar14);
  }
  puVar2 = (undefined1 *)0x0;
LAB_019815b0:
  return CONCAT44(unaff_r10,puVar2);
}

