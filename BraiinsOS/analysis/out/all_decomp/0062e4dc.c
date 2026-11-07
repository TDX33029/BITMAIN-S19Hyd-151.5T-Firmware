// FUN_0062e4dc @ 0062e4dc size=412 calls_out=1 calls_in=2
// strings: 

longlong FUN_0062e4dc(int *param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r5;
  int iVar7;
  uint uVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  bool bVar12;
  
  if (param_1[3] != 0) {
    iVar3 = *param_1;
    uVar6 = param_1[1];
    iVar7 = param_1[2];
    iVar11 = iVar7 + param_1[3] * 0x28;
    do {
      if (((*(int *)(iVar7 + 4) == 7) && (uVar1 = *(uint *)(iVar7 + 0x10), uVar1 <= uVar6)) &&
         (uVar8 = *(uint *)(iVar7 + 0x14), uVar8 <= uVar6 - uVar1)) {
        iVar2 = 4;
        if ((*(uint *)(iVar7 + 0x20) < 5) || (iVar2 = 8, *(uint *)(iVar7 + 0x20) == 8)) {
          puVar10 = (uint *)(iVar3 + uVar1);
LAB_0062e578:
          do {
            puVar9 = puVar10;
            if ((uVar8 == 0) || (uVar8 < 0xc)) break;
            uVar1 = *puVar9;
            if (uVar8 - 0xc < uVar1) break;
            uVar4 = uVar1 + iVar2 + 0xb & -iVar2;
            if ((uVar8 < uVar4) || (unaff_r5 = puVar9[1], uVar8 - uVar4 < unaff_r5)) break;
            uVar5 = iVar2 + -1 + unaff_r5 + uVar4 & -iVar2;
            bVar12 = uVar8 < uVar5;
            uVar8 = uVar8 - uVar5;
            puVar10 = (uint *)((int)puVar9 + uVar5);
            if (bVar12) {
              uVar8 = 0;
              puVar10 = (uint *)&DAT_00000001;
            }
            if (puVar9 == (uint *)0x0) break;
            do {
              uVar5 = uVar1;
              uVar1 = uVar5 - 1;
              if (uVar1 == 0xffffffff) goto LAB_0062e578;
            } while (*(char *)((int)(puVar9 + 3) + uVar1) == '\0');
            if (uVar5 == 3) {
              uVar1 = thunk_FUN_016dd50a(puVar9 + 3,"GNU",3);
              bVar12 = uVar1 == 0;
              if (bVar12) {
                uVar1 = puVar9[2];
              }
              if (bVar12 && uVar1 == 3) {
                return CONCAT44(unaff_r5,(undefined1 *)((int)puVar9 + uVar4));
              }
            }
          } while( true );
        }
      }
      iVar7 = iVar7 + 0x28;
    } while (iVar7 != iVar11);
  }
  return (ulonglong)unaff_r5 << 0x20;
}

