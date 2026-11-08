// FUN_018bda10 @ 018bda10 size=308 calls_out=3 calls_in=0
// strings: internal error: entered unreachable code

undefined8 FUN_018bda10(undefined4 *param_1,int param_2,int param_3)

{
  code *pcVar1;
  ushort uVar2;
  ushort uVar3;
  bool bVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  ushort *puVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  
  puVar5 = (ushort *)0x0;
  iVar6 = 0;
  do {
    do {
      if (iVar6 == 0x18) {
LAB_018bdb0c:
        return CONCAT44(&UNK_01d227c8,puVar5);
      }
      uVar2 = *(ushort *)((int)&DAT_0052253c + iVar6);
      uVar10 = (uint)uVar2;
      iVar9 = iVar6 + 4;
      uVar3 = *(ushort *)((int)&DAT_0052253e + iVar6);
      iVar6 = iVar9;
    } while (param_3 == 0);
    puVar8 = (ushort *)(param_2 + 2);
    iVar12 = param_3 << 2;
    do {
      if ((puVar8[-1] == uVar10) && ((uVar10 != 0xd || (*puVar8 == uVar3)))) {
        piVar11 = (int *)*param_1;
        do {
          iVar6 = *piVar11;
          bVar4 = (bool)hasExclusiveAccess(piVar11);
        } while (!bVar4);
        *piVar11 = iVar6 + 1;
        if (iVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x18bdb44);
          (*pcVar1)();
        }
        uVar7 = uVar10 - 2 & 0xffff;
        if ((8 < uVar7) || ((0x1d5U >> (uVar10 - 2 & 0xff) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d227dc,iVar9,piVar11);
        }
        uVar13 = *(undefined4 *)(&DAT_01d33a54 + uVar7 * 4);
        uVar14 = *(undefined4 *)(&DAT_01d33a78 + uVar7 * 4);
        puVar5 = (ushort *)thunk_FUN_01be5118(0x10);
        if (puVar5 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x10);
        }
        *(int **)(puVar5 + 2) = piVar11;
        *(undefined4 *)(puVar5 + 4) = uVar14;
        *(undefined4 *)(puVar5 + 6) = uVar13;
        puVar5[1] = uVar3;
        *puVar5 = uVar2;
        goto LAB_018bdb0c;
      }
      puVar8 = puVar8 + 2;
      iVar12 = iVar12 + -4;
    } while (iVar12 != 0);
  } while( true );
}

