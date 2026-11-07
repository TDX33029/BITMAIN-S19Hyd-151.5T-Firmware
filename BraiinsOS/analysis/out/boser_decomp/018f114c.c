// FUN_018f114c @ 018f114c size=292 calls_out=3 calls_in=0
// strings: internal error: entered unreachable code

undefined8 FUN_018f114c(undefined4 *param_1,int param_2,int param_3)

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
  int *piVar10;
  uint uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  puVar5 = (ushort *)0x0;
  iVar6 = 0;
  do {
    do {
      if (iVar6 == 0x18) {
LAB_018f123c:
        return CONCAT44(&UNK_01d23cec,puVar5);
      }
      uVar2 = *(ushort *)((int)&DAT_0052253c + iVar6);
      uVar11 = (uint)uVar2;
      iVar9 = iVar6 + 4;
      uVar3 = *(ushort *)((int)&DAT_0052253e + iVar6);
      iVar6 = iVar9;
    } while (param_3 == 0);
    puVar8 = (ushort *)(param_2 + 2);
    iVar9 = param_3 << 2;
    do {
      if ((puVar8[-1] == uVar11) && ((uVar11 != 0xd || (*puVar8 == uVar3)))) {
        piVar10 = (int *)*param_1;
        do {
          iVar6 = *piVar10;
          bVar4 = (bool)hasExclusiveAccess(piVar10);
        } while (!bVar4);
        *piVar10 = iVar6 + 1;
        if (iVar6 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x18f1270);
          (*pcVar1)();
        }
        uVar7 = uVar11 - 2 & 0xffff;
        if ((8 < uVar7) || ((0x1d5U >> (uVar11 - 2 & 0xff) & 1) == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d23d04);
        }
        uVar13 = *(undefined4 *)(&DAT_01d33d78 + uVar7 * 4);
        uVar12 = *(undefined4 *)(&DAT_01d33d54 + uVar7 * 4);
        puVar5 = (ushort *)thunk_FUN_01be5118(0x10);
        if (puVar5 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x10);
        }
        *(int **)(puVar5 + 2) = piVar10;
        *(undefined4 *)(puVar5 + 4) = uVar13;
        *(undefined4 *)(puVar5 + 6) = uVar12;
        puVar5[1] = uVar3;
        *puVar5 = uVar2;
        goto LAB_018f123c;
      }
      puVar8 = puVar8 + 2;
      iVar9 = iVar9 + -4;
    } while (iVar9 != 0);
  } while( true );
}

