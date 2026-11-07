// FUN_0155b408 @ 0155b408 size=444 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_0155b408(undefined4 *param_1,short *param_2,int param_3)

{
  code *pcVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  ushort *puVar7;
  int *piVar8;
  short *psVar9;
  undefined4 uVar10;
  ushort *puVar11;
  
  puVar7 = (ushort *)0x0;
  if (param_3 != 0) {
    param_3 = param_3 << 2;
    puVar11 = &DAT_0040c64c;
    iVar6 = param_3;
    psVar9 = param_2;
    do {
      if (*psVar9 == 10) goto LAB_0155b50c;
      psVar9 = psVar9 + 2;
      iVar6 = iVar6 + -4;
    } while (iVar6 != 0);
    iVar6 = param_3;
    psVar9 = param_2;
    do {
      if (*psVar9 == 9) {
        puVar11 = &DAT_0040c650;
        goto LAB_0155b50c;
      }
      psVar9 = psVar9 + 2;
      iVar6 = iVar6 + -4;
    } while (iVar6 != 0);
    iVar6 = param_3;
    psVar9 = param_2;
    do {
      if (*psVar9 == 8) {
        puVar11 = &DAT_0040c654;
        goto LAB_0155b50c;
      }
      psVar9 = psVar9 + 2;
      iVar6 = iVar6 + -4;
    } while (iVar6 != 0);
    iVar6 = param_3;
    psVar9 = param_2;
    do {
      if (*psVar9 == 6) {
        puVar11 = &DAT_0040c658;
        goto LAB_0155b50c;
      }
      psVar9 = psVar9 + 2;
      iVar6 = iVar6 + -4;
    } while (iVar6 != 0);
    iVar6 = param_3;
    psVar9 = param_2;
    do {
      if (*psVar9 == 4) {
        puVar11 = &DAT_0040c65c;
        goto LAB_0155b50c;
      }
      psVar9 = psVar9 + 2;
      iVar6 = iVar6 + -4;
    } while (iVar6 != 0);
    do {
      if (*param_2 == 2) {
        puVar11 = &DAT_0040c660;
LAB_0155b50c:
        piVar8 = (int *)*param_1;
        do {
          iVar6 = *piVar8;
          bVar4 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar4);
        *piVar8 = iVar6 + 1;
        if (iVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x155b5c4);
          (*pcVar1)();
        }
        uVar2 = *puVar11;
        uVar5 = uVar2 - 2;
        if ((8 < (uVar5 & 0xffff)) || ((0x1d5U >> (uVar5 & 0xff) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00419463,0x28,&DAT_018a8dec);
        }
        uVar3 = puVar11[1];
        uVar10 = (&DAT_018b3a1c)[uVar5];
        puVar7 = (ushort *)thunk_FUN_016d4a50(0x10);
        if (puVar7 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        puVar7[1] = uVar3;
        *puVar7 = uVar2;
        *(int **)(puVar7 + 2) = piVar8;
        *(undefined4 *)(puVar7 + 4) = uVar10;
        *(undefined **)(puVar7 + 6) = &DAT_018a8d84;
        break;
      }
      param_2 = param_2 + 2;
      param_3 = param_3 + -4;
    } while (param_3 != 0);
  }
  return CONCAT44(&UNK_018a8dd4,puVar7);
}

