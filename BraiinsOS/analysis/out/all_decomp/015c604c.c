// FUN_015c604c @ 015c604c size=444 calls_out=1 calls_in=2
// strings: 

longlong FUN_015c604c(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint unaff_r10;
  int iVar12;
  int iVar13;
  bool bVar14;
  
  if (param_1[3] != 0) {
    iVar4 = *param_1;
    uVar5 = param_1[1];
    iVar12 = param_1[2];
    iVar13 = iVar12 + param_1[3] * 0x28;
    do {
      if (*(int *)(iVar12 + 4) == 7) {
        uVar8 = *(uint *)(iVar12 + 0x14);
        if (uVar8 == 0) {
          puVar10 = (uint *)&DAT_00000001;
          uVar2 = *(uint *)(iVar12 + 0x20);
        }
        else {
          uVar2 = *(uint *)(iVar12 + 0x10);
          if (uVar5 < uVar2 || uVar5 - uVar2 < uVar8) goto LAB_015c6098;
          puVar10 = (uint *)(iVar4 + uVar2);
          uVar2 = *(uint *)(iVar12 + 0x20);
        }
        iVar1 = 4;
        if (((uVar2 < 5) || (iVar1 = 8, uVar2 == 8)) && (0xb < uVar8)) {
          while( true ) {
            uVar2 = *puVar10;
            if (uVar8 - 0xc < uVar2) break;
            uVar11 = iVar1 + 0xb + uVar2 & -iVar1;
            if ((uVar8 < uVar11) || (unaff_r10 = puVar10[1], uVar8 - uVar11 < unaff_r10)) break;
            uVar7 = iVar1 + -1 + uVar11 + unaff_r10 & -iVar1;
            uVar9 = uVar8 - uVar7;
            puVar6 = (uint *)((int)puVar10 + uVar7);
            if (uVar8 < uVar7) {
              puVar6 = (uint *)&DAT_00000001;
              uVar9 = 0;
            }
            do {
              uVar3 = uVar2;
              if (uVar3 == 0) goto LAB_015c61c8;
              uVar2 = uVar3 - 1;
            } while (*(char *)((int)puVar10 + uVar3 + 0xb) == '\0');
            if (uVar3 == 3) {
              uVar2 = thunk_FUN_016dd50a(puVar10 + 3,"GNU",3);
              bVar14 = uVar2 == 0;
              if (bVar14) {
                uVar2 = puVar10[2];
              }
              if (bVar14 && uVar2 == 3) {
                return CONCAT44(unaff_r10,(undefined1 *)((int)puVar10 + uVar11));
              }
            }
LAB_015c61c8:
            if ((uVar8 <= uVar7) || (uVar8 = uVar9, puVar10 = puVar6, uVar9 < 0xc)) break;
          }
        }
      }
LAB_015c6098:
      iVar12 = iVar12 + 0x28;
    } while (iVar12 != iVar13);
  }
  return (ulonglong)unaff_r10 << 0x20;
}

