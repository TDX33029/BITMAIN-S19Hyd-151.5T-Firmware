// FUN_0155a8e8 @ 0155a8e8 size=1124 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0155a8e8(undefined4 *param_1,undefined4 *param_2,int param_3,uint param_4)

{
  byte bVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  int iVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  undefined1 *local_80;
  undefined1 *puStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 *local_70;
  uint uStack_6c;
  uint uStack_68;
  int iStack_64;
  undefined1 *local_58;
  undefined1 *local_54;
  undefined1 *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar17 = param_2[1];
  uVar18 = param_2[2];
  if (param_4 == uVar17 + uVar18) {
    bVar1 = *(byte *)(param_2 + 4);
    if ((bVar1 & 1) == 0) {
      if (param_4 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018a8b28);
      }
      uVar18 = param_4 - uVar17;
      iVar8 = param_3 + uVar17;
    }
    else {
      if (param_4 < uVar18) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018a8b38);
      }
      uVar17 = param_4 - uVar18;
      iVar8 = param_3;
      param_3 = param_3 + uVar18;
    }
    FUN_01465b84(&DAT_005666d0);
    (**(code **)(param_2[6] + 0x14))(&local_58,param_2[5],param_3,uVar17);
    if (local_58 == (undefined1 *)0x0) {
      piVar3 = (int *)((uint)&local_58 | 4);
      puVar4 = (undefined1 *)*piVar3;
      puVar9 = (undefined1 *)piVar3[1];
      iVar13 = piVar3[2];
      iVar14 = piVar3[3];
      puVar5 = (undefined1 *)piVar3[4];
      uVar17 = piVar3[5];
      uVar12 = piVar3[6];
      iStack_64 = piVar3[7];
      local_80 = puVar4;
      puStack_7c = puVar9;
      iStack_78 = iVar13;
      iStack_74 = iVar14;
      local_70 = puVar5;
      uStack_6c = uVar17;
      uStack_68 = uVar12;
      (**(code **)(param_2[8] + 0x14))(&local_58,param_2[7],iVar8,uVar18);
      if (local_58 == (undefined1 *)0x1) {
        piVar3 = (int *)((uint)&local_80 | 4);
        *piVar3 = (int)local_50;
        piVar3[1] = local_4c;
        piVar3[2] = local_48;
        piVar3[3] = local_44;
        piVar3[4] = local_40;
        piVar3[5] = iStack_3c;
        piVar3[6] = iStack_38;
        piVar3[7] = iStack_34;
        iVar8 = piVar3[1];
        iVar13 = piVar3[2];
        iVar15 = piVar3[3];
        param_1[2] = *piVar3;
        param_1[3] = iVar8;
        param_1[4] = iVar13;
        param_1[5] = iVar15;
        iVar8 = piVar3[5];
        iVar13 = piVar3[6];
        iVar15 = piVar3[7];
        param_1[6] = piVar3[4];
        param_1[7] = iVar8;
        param_1[8] = iVar13;
        param_1[9] = iVar15;
        *param_1 = 1;
        if (puVar4 != (undefined1 *)0x0) {
          thunk_FUN_016d3fb4(puVar9);
        }
        iVar8 = iVar14;
        puVar4 = puVar5;
        if (uVar17 != 0) {
          puVar9 = puVar5;
          do {
            *puVar9 = 0;
            uVar17 = uVar17 - 1;
            puVar9 = puVar9 + 1;
          } while (uVar17 != 0);
        }
        for (; iVar8 != 0; iVar8 = iVar8 + -1) {
          *puVar4 = 0;
          puVar4 = puVar4 + 1;
        }
LAB_0155ace4:
        if (iVar14 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(puVar5);
        return;
      }
      piVar3 = (int *)((uint)&local_58 | 4);
      puVar6 = (undefined1 *)*piVar3;
      puVar10 = (undefined1 *)piVar3[1];
      iStack_78 = piVar3[2];
      iVar8 = piVar3[3];
      puVar7 = (undefined1 *)piVar3[4];
      uVar11 = piVar3[5];
      uVar18 = piVar3[6];
      iStack_64 = piVar3[7];
      local_80 = puVar6;
      puStack_7c = puVar10;
      iStack_74 = iVar8;
      local_70 = puVar7;
      uStack_6c = uVar11;
      uStack_68 = uVar18;
      if ((bVar1 & 1) == 0) {
        local_58 = puVar9;
        local_54 = (undefined1 *)iVar13;
        local_50 = puVar10;
        local_4c = iStack_78;
        FUN_0155c778(&local_80,&local_58);
      }
      else {
        local_58 = puVar10;
        local_54 = (undefined1 *)iStack_78;
        local_50 = puVar9;
        local_4c = iVar13;
        FUN_0155c778(&local_80,&local_58);
      }
      if (uVar18 <= uVar11) {
        if (uVar12 <= uVar17) {
          local_4c = uVar11 - uVar18;
          local_50 = puVar7 + uVar18;
          local_54 = (undefined1 *)(uVar17 - uVar12);
          local_58 = puVar5 + uVar12;
          if ((bVar1 & 1) == 0) {
            FUN_0155c778(&local_30,&local_58);
          }
          else {
            puVar2 = local_58;
            local_58 = local_50;
            iVar13 = (int)local_54;
            local_54 = (undefined1 *)local_4c;
            local_50 = puVar2;
            local_4c = iVar13;
            FUN_0155c778(&local_30,&local_58);
          }
          local_58 = local_80;
          local_54 = puStack_7c;
          local_50 = (undefined1 *)iStack_78;
          local_4c = local_30;
          local_48 = local_2c;
          local_44 = local_28;
          uVar16 = *param_2;
          param_1[1] = local_80;
          param_1[2] = puStack_7c;
          param_1[3] = iStack_78;
          param_1[4] = local_30;
          param_1[5] = local_2c;
          param_1[6] = local_28;
          param_1[7] = 0;
          param_1[8] = uVar16;
          *param_1 = 0;
          if (puVar6 != (undefined1 *)0x0) {
            thunk_FUN_016d3fb4(puVar10);
          }
          iVar13 = iVar8;
          puVar6 = puVar7;
          if (uVar11 != 0) {
            puVar10 = puVar7;
            do {
              *puVar10 = 0;
              uVar11 = uVar11 - 1;
              puVar10 = puVar10 + 1;
            } while (uVar11 != 0);
          }
          for (; iVar13 != 0; iVar13 = iVar13 + -1) {
            *puVar6 = 0;
            puVar6 = puVar6 + 1;
          }
          if (iVar8 != 0) {
            thunk_FUN_016d3fb4(puVar7);
          }
          if (puVar4 != (undefined1 *)0x0) {
            thunk_FUN_016d3fb4(puVar9);
          }
          iVar8 = iVar14;
          puVar4 = puVar5;
          if (uVar17 != 0) {
            puVar9 = puVar5;
            do {
              *puVar9 = 0;
              uVar17 = uVar17 - 1;
              puVar9 = puVar9 + 1;
            } while (uVar17 != 0);
          }
          for (; iVar8 != 0; iVar8 = iVar8 + -1) {
            *puVar4 = 0;
            puVar4 = puVar4 + 1;
          }
          goto LAB_0155ace4;
        }
        uVar18 = uVar12;
        uVar11 = uVar17;
      }
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar18,uVar11,uVar11,&DAT_018a7c34);
    }
    piVar3 = (int *)((uint)&local_80 | 4);
    *piVar3 = (int)local_50;
    piVar3[1] = local_4c;
    piVar3[2] = local_48;
    piVar3[3] = local_44;
    piVar3[4] = local_40;
    piVar3[5] = iStack_3c;
    piVar3[6] = iStack_38;
    piVar3[7] = iStack_34;
    iVar8 = piVar3[1];
    iVar13 = piVar3[2];
    iVar14 = piVar3[3];
    param_1[2] = *piVar3;
    param_1[3] = iVar8;
    param_1[4] = iVar13;
    param_1[5] = iVar14;
    iVar8 = piVar3[5];
    iVar13 = piVar3[6];
    iVar14 = piVar3[7];
    param_1[6] = piVar3[4];
    param_1[7] = iVar8;
    param_1[8] = iVar13;
    param_1[9] = iVar14;
  }
  else {
    param_1[3] = 0x1a;
    param_1[2] = &DAT_8000001c;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
  }
  *param_1 = 1;
  return;
}

