// FUN_00f6f950 @ 00f6f950 size=816 calls_out=9 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_00f6f950(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined1 *puVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  bool bVar15;
  uint **local_58;
  undefined *local_54;
  undefined1 *local_50;
  undefined4 local_4c;
  uint *local_48;
  int *local_44;
  uint *local_40;
  undefined4 **local_38;
  int *local_34;
  int local_30;
  int local_28;
  
  puVar14 = (undefined4 *)*param_2;
  puVar13 = (undefined4 *)param_2[1];
  iVar2 = param_2[2];
  do {
    if (puVar14 == puVar13) {
      *param_1 = -0x80000000;
      return;
    }
    uVar9 = *puVar14;
    iVar12 = puVar14[1];
    puVar14 = puVar14 + 2;
    iVar6 = *(int *)(iVar2 + 0x4c);
    iVar7 = *(int *)(iVar2 + 0x48);
    *param_2 = puVar14;
    for (iVar6 = iVar6 * 0x134; iVar6 != 0; iVar6 = iVar6 + -0x134) {
      if (*(int *)(iVar7 + 0x118) == iVar12) {
        uVar10 = *(undefined4 *)(iVar7 + 0x114);
        iVar3 = thunk_FUN_016dd50a(uVar10,uVar9,iVar12);
        if (iVar3 == 0) {
          puVar4 = *(undefined1 **)(iVar7 + 0x120);
          bVar15 = puVar4 == (undefined1 *)0x0;
          if (bVar15) {
            puVar4 = *(undefined1 **)(iVar7 + 0x34);
          }
          if (!(!bVar15 || puVar4 != &DAT_00110000)) {
            puVar8 = *(uint **)(iVar7 + 0xbc);
            if (puVar8 == (uint *)0x1) {
              iVar12 = (*(undefined4 **)(iVar7 + 0xb8))[1];
              if (iVar12 < 0) {
LAB_00f6faa0:
                    /* WARNING: Subroutine does not return */
                FUN_00600af4(0,iVar12);
              }
              uVar10 = **(undefined4 **)(iVar7 + 0xb8);
              if (iVar12 == 0) {
                iVar2 = 0;
                iVar6 = 1;
              }
              else {
                iVar6 = thunk_FUN_016d4a50(iVar12);
                iVar2 = iVar12;
                if (iVar6 == 0) {
LAB_00f6faf8:
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(1,iVar12);
                }
              }
            }
            else {
              if (puVar8 != (uint *)0x0) {
                if ((uint *)0xaaaaaaa < puVar8) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(0,uVar10);
                }
                iVar2 = *(int *)(iVar7 + 0xb8);
                piVar5 = (int *)thunk_FUN_016d4a50((int)puVar8 * 0xc);
                if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_00600af4(4,(int)puVar8 * 0xc);
                }
                puVar11 = (uint *)0x0;
                local_38 = (undefined4 **)puVar8;
                local_34 = piVar5;
                do {
                  local_44 = (int *)&LAB_00640850;
                  local_48 = (uint *)&local_28;
                  local_28 = iVar2;
                  FUN_00600d2c(&local_58,&DAT_0057984f,&local_48);
                  piVar1 = local_34;
                  puVar11 = (uint *)((int)puVar11 + 1);
                  iVar2 = iVar2 + 8;
                  *piVar5 = (int)local_58;
                  piVar5[1] = (int)local_54;
                  piVar5[2] = (int)local_50;
                  piVar5 = piVar5 + 3;
                } while (puVar8 != puVar11);
                local_48 = (uint *)local_38;
                local_44 = local_34;
                local_40 = puVar8;
                FUN_00f944a8(&local_58,local_34,puVar8,&DAT_0041545b,1);
                piVar5 = piVar1 + 1;
                for (; puVar8 != (uint *)0x0; puVar8 = (uint *)((int)puVar8 - 1)) {
                  if (piVar5[-1] != 0) {
                    thunk_FUN_016d3fb4(*piVar5);
                  }
                  piVar5 = piVar5 + 3;
                }
                local_30 = (int)local_50;
                if (local_48 != (uint *)0x0) {
                  thunk_FUN_016d3fb4(piVar1);
                  *param_1 = (int)local_58;
                  param_1[1] = (int)local_54;
                  param_1[2] = (int)local_50;
                  return;
                }
LAB_00f6fa3c:
                *param_1 = (int)local_58;
                param_1[1] = (int)local_54;
                param_1[2] = local_30;
                return;
              }
              if (iVar12 < 0) goto LAB_00f6faa0;
              if (iVar12 == 0) {
                iVar2 = 0;
                iVar6 = 1;
              }
              else {
                iVar6 = thunk_FUN_016d4a50(iVar12);
                iVar2 = iVar12;
                if (iVar6 == 0) goto LAB_00f6faf8;
              }
            }
            FUN_016dd1aa(iVar6,uVar10,iVar12);
            *param_1 = iVar2;
            param_1[1] = iVar6;
            param_1[2] = iVar12;
            return;
          }
          local_30 = 0;
          local_54 = &DAT_018802ec;
          local_58 = (uint **)&local_38;
          local_38 = (undefined4 **)0x0;
          local_4c = 0;
          local_34 = (int *)0x1;
          local_50 = &DAT_60000020;
          iVar2 = FUN_00f9d654(iVar7,&local_58);
          if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_48,
                         &DAT_01880304,&DAT_018af130);
          }
          local_58 = local_38;
          local_54 = (undefined *)local_34;
          goto LAB_00f6fa3c;
        }
      }
      iVar7 = iVar7 + 0x134;
    }
  } while( true );
}

