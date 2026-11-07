// FUN_007303a0 @ 007303a0 size=476 calls_out=2 calls_in=2
// strings: Inva | Invalid ELF note name | lid  | ELF note section offset or size | Invalid ELF note descsz

undefined8 FUN_007303a0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint unaff_r4;
  int iVar7;
  undefined1 *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  int local_30;
  uint *puStack_2c;
  uint uStack_28;
  
  if (param_1[3] != 0) {
    uVar3 = *param_1;
    iVar7 = param_1[2];
    uVar4 = param_1[1];
    iVar1 = iVar7 + param_1[3] * 0x28;
    do {
      if ((*(int *)(iVar7 + 4) == 7) && (FUN_0072dff0(&local_30,iVar7,uVar3,uVar4), local_30 == 0))
      {
        iVar2 = 4;
        if ((*(uint *)(iVar7 + 0x20) < 5) || (iVar2 = 8, *(uint *)(iVar7 + 0x20) == 8)) {
          puVar10 = puStack_2c;
          uVar11 = uStack_28;
LAB_00730454:
          do {
            puVar9 = puVar10;
            if (((uVar11 == 0) || (uVar11 < 0xc)) || (uVar5 = *puVar9, uVar11 - 0xc < uVar5)) break;
            unaff_r4 = puVar9[1];
            uVar6 = uVar5 + iVar2 + 0xb & -iVar2;
            if (uVar11 < uVar6 || uVar11 - uVar6 < unaff_r4) {
              unaff_r4 = 0x17;
              break;
            }
            puVar8 = (undefined1 *)((int)puVar9 + uVar6);
            uVar6 = iVar2 + -1 + uVar6 + unaff_r4 & -iVar2;
            bVar12 = uVar11 < uVar6;
            uVar11 = uVar11 - uVar6;
            puVar10 = (uint *)((int)puVar9 + uVar6);
            if (bVar12) {
              puVar10 = (uint *)&DAT_00000001;
              uVar11 = 0;
            }
            if (puVar9 == (uint *)0x0) break;
            do {
              uVar6 = uVar5;
              uVar5 = uVar6 - 1;
              if (uVar5 == 0xffffffff) goto LAB_00730454;
            } while (*(char *)((int)(puVar9 + 3) + uVar5) == '\0');
            if (uVar6 == 3) {
              uVar5 = thunk_FUN_01bed842(puVar9 + 3,"GNU",3);
              bVar12 = uVar5 == 0;
              if (bVar12) {
                uVar5 = puVar9[2];
              }
              if (bVar12 && uVar5 == 3) goto LAB_0073056c;
            }
          } while( true );
        }
      }
      iVar7 = iVar7 + 0x28;
    } while (iVar7 != iVar1);
  }
  puVar8 = (undefined1 *)0x0;
LAB_0073056c:
  return CONCAT44(unaff_r4,puVar8);
}

