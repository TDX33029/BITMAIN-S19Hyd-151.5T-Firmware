// FUN_0142fa40 @ 0142fa40 size=580 calls_out=5 calls_in=2
// strings: size overflows MAX_SIZE

void FUN_0142fa40(int *param_1,int *param_2,uint *param_3)

{
  ushort uVar1;
  ushort uVar2;
  uint uVar3;
  ushort uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  ushort *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined1 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  undefined1 uStack_25;
  
  iVar5 = FUN_013b3654(param_2);
  if (iVar5 != 0) {
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
    }
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&uStack_25,&DAT_01d1c90c,&DAT_01d1c95c);
  }
  uVar4 = FUN_013b3258(param_2,param_3);
  uVar1 = *(ushort *)(param_2 + 0xe);
  uVar11 = param_3[2];
  uVar10 = param_3[1];
  uVar15 = 0;
  uVar3 = param_3[1];
  uVar6 = param_2[10];
  uVar17 = *param_3;
  iVar16 = param_2[6];
  uVar13 = param_2[7];
  iVar5 = param_2[9];
  uVar14 = (uint)(uVar1 & uVar4);
  do {
    do {
      uVar7 = uVar14;
      uVar14 = 0;
    } while (uVar13 <= uVar7);
    puVar8 = (ushort *)(iVar16 + uVar7 * 4);
    uVar14 = (uint)*puVar8;
    if ((uVar14 == 0xffff) || (uVar2 = puVar8[1], (uVar7 - (uVar1 & uVar2) & (uint)uVar1) < uVar15))
    {
      uVar9 = param_3[2];
      uVar13 = param_3[3];
      uVar12 = uVar15 >> 9 != 0 && (*param_2 != 2 || param_2[1] != 0);
      goto LAB_0142fbc8;
    }
    if (uVar2 == uVar4) {
      if (uVar6 <= uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar14,uVar6,&DAT_01d1c94c);
      }
      iVar18 = uVar14 * 0x34 + iVar5;
      if ((*(int *)(iVar18 + 0x20) != 0) != (uVar17 == 0)) {
        if (*(int *)(iVar18 + 0x20) == 0) {
          uVar9 = (uint)*(byte *)(iVar18 + 0x24);
          if (uVar9 == (byte)uVar3) goto LAB_0142fc0c;
        }
        else if ((*(uint *)(iVar18 + 0x28) == uVar11) &&
                (iVar18 = thunk_FUN_01bed842(*(undefined4 *)(iVar18 + 0x24)), iVar18 == 0)) {
          uVar9 = 0;
          if (uVar17 != 0) {
            uVar9 = (**(code **)(uVar17 + 0x10))(param_3 + 3);
          }
LAB_0142fc0c:
          uVar12 = 2;
          uVar10 = uVar14;
          uVar17 = uVar7;
LAB_0142fbc8:
          param_1[2] = uVar10;
          *(undefined1 *)((int)param_1 + 0x1a) = uVar12;
          *(ushort *)(param_1 + 6) = uVar4;
          *param_1 = (int)param_2;
          param_1[1] = uVar17;
          param_1[3] = uVar9;
          param_1[4] = uVar13;
          param_1[5] = uVar7;
          return;
        }
      }
    }
    uVar15 = uVar15 + 1;
    uVar14 = uVar7 + 1;
  } while( true );
}

