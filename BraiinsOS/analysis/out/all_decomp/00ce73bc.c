// FUN_00ce73bc @ 00ce73bc size=880 calls_out=6 calls_in=1
// strings: no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor

void FUN_00ce73bc(undefined4 *param_1,int *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  uint uVar18;
  uint *puVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  uint local_64;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar13 = param_2[10];
  do {
    if (iVar13 != 0) {
      puVar1 = (undefined4 *)param_2[0xb];
      if (puVar1 != (undefined4 *)param_2[0xd]) {
        param_2[0xb] = (int)(puVar1 + 6);
        uVar2 = puVar1[1];
        uVar9 = puVar1[2];
        uVar12 = puVar1[3];
        uVar16 = puVar1[4];
        uVar17 = puVar1[5];
        param_1[2] = *puVar1;
        param_1[3] = uVar2;
        param_1[4] = uVar9;
        param_1[5] = uVar12;
        param_1[6] = uVar16;
        param_1[7] = uVar17;
        *param_1 = 1;
        param_1[1] = 0;
        return;
      }
      if (param_2[0xc] != 0) {
        thunk_FUN_016d3fb4(iVar13);
      }
      param_2[10] = 0;
    }
    if (*param_2 == 2) {
LAB_00ce7620:
      if (param_2[0xe] == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
      puVar1 = (undefined4 *)param_2[0xf];
      if (puVar1 == (undefined4 *)param_2[0x11]) {
        if (param_2[0x10] != 0) {
          thunk_FUN_016d3fb4();
        }
        uVar2 = 0;
        param_2[0xe] = 0;
      }
      else {
        param_2[0xf] = (int)(puVar1 + 6);
        local_40 = *puVar1;
        uStack_3c = puVar1[1];
        uStack_38 = puVar1[2];
        uStack_34 = puVar1[3];
        uStack_30 = puVar1[4];
        uStack_2c = puVar1[5];
        uVar2 = 1;
      }
      *param_1 = uVar2;
      param_1[1] = 0;
      param_1[2] = local_40;
      param_1[3] = uStack_3c;
      param_1[4] = uStack_38;
      param_1[5] = uStack_34;
      param_1[6] = uStack_30;
      param_1[7] = uStack_2c;
      return;
    }
    uVar24 = FUN_00c3901c(param_2);
    iVar5 = (int)((ulonglong)uVar24 >> 0x20);
    if ((uint *)uVar24 == (uint *)0x0) goto LAB_00ce7620;
    iVar10 = param_2[9];
    uVar7 = *(uint *)(*(int *)(iVar10 + 0x204) + 0xb8);
    uVar2 = 0;
    if (0x5555555 < uVar7) goto LAB_00ce7730;
    uVar18 = 0;
    iVar13 = uVar7 * 0x18;
    if (iVar13 == 0) {
      iVar14 = 8;
      uVar25 = CONCAT44(iVar5,8);
      local_64 = 0;
    }
    else {
      uVar25 = thunk_FUN_016d4a50(iVar13);
      iVar14 = (int)uVar25;
      local_64 = uVar7;
      if (iVar14 == 0) {
        uVar2 = 8;
LAB_00ce7730:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,iVar13);
      }
    }
    if (uVar7 != 0) {
      uVar18 = 0;
      do {
        if (*(uint *)(iVar5 + 0x28) <= uVar18) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar18,*(uint *)(iVar5 + 0x28),&DAT_0186abf8);
        }
        iVar13 = *(int *)(iVar5 + 0x24) + uVar18 * 0x18;
        if (*(int *)(iVar13 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_0034ae12,0x13,&DAT_0186ab88);
        }
        puVar19 = *(uint **)(iVar10 + 0x510);
        if (puVar19 == (uint *)0x0) {
LAB_00ce76f8:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor"
                       ,0x16,&DAT_01870cfc);
        }
        uVar3 = uVar18 + 1;
        iVar22 = *(int *)(iVar10 + 0x514);
        uVar8 = *(uint *)uVar24;
        uVar4 = **(uint **)(iVar13 + 4);
        while( true ) {
          uVar11 = 0xffffffff;
          iVar13 = (uint)*(ushort *)((int)puVar19 + 0x166) << 3;
          puVar15 = puVar19;
          do {
            if (iVar13 == 0) {
              uVar11 = (uint)*(ushort *)((int)puVar19 + 0x166);
              goto LAB_00ce75b8;
            }
            uVar20 = *puVar15;
            uVar21 = puVar15[1];
            cVar6 = (uVar8 >= uVar20 && uVar8 != uVar20) - (uVar8 < uVar20);
            if (uVar8 == uVar20) {
              cVar6 = (uVar18 >= uVar21 && uVar18 != uVar21) - (uVar18 < uVar21);
            }
            iVar13 = iVar13 + -8;
            uVar11 = uVar11 + 1;
            puVar15 = puVar15 + 2;
          } while (cVar6 == '\x01');
          if (cVar6 == '\0') break;
LAB_00ce75b8:
          if (iVar22 == 0) goto LAB_00ce76f8;
          iVar22 = iVar22 + -1;
          puVar19 = (uint *)puVar19[uVar11 + 0x5a];
        }
        uVar23 = *(undefined8 *)(puVar19 + uVar11 * 6 + 0x18);
        puVar19 = (uint *)(iVar14 + uVar18 * 0x18);
        uVar25 = CONCAT44(puVar19,iVar14);
        *puVar19 = uVar8;
        puVar19[1] = uVar18;
        *(undefined8 *)(puVar19 + 4) = uVar23;
        puVar19[2] = uVar4;
        uVar18 = uVar3;
      } while (uVar3 != uVar7);
      uVar18 = uVar7;
    }
    iVar5 = (int)((ulonglong)uVar25 >> 0x20);
    iVar13 = (int)uVar25;
    if (param_2[10] != 0) {
      iVar5 = param_2[0xc];
    }
    if (param_2[10] != 0 && iVar5 != 0) {
      thunk_FUN_016d3fb4();
    }
    param_2[10] = iVar13;
    param_2[0xb] = iVar13;
    param_2[0xc] = local_64;
    param_2[0xd] = iVar13 + uVar18 * 0x18;
  } while( true );
}

