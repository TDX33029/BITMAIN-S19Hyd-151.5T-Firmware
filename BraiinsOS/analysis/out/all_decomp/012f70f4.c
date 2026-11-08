// FUN_012f70f4 @ 012f70f4 size=1000 calls_out=14 calls_in=0
// strings: FieldOptions.JSType | not an enum

/* WARNING: Type propagation algorithm not settling */

void FUN_012f70f4(undefined4 *param_1)

{
  undefined4 *****pppppuVar1;
  undefined4 *****pppppuVar2;
  undefined4 uVar3;
  undefined4 ****ppppuVar4;
  undefined4 uVar5;
  undefined4 *****pppppuVar6;
  undefined4 ****ppppuVar7;
  int iVar8;
  undefined4 ***pppuVar9;
  int *piVar10;
  undefined4 ****ppppuVar11;
  uint *puVar12;
  undefined4 ****ppppuVar13;
  int *piVar14;
  undefined4 *****pppppuVar15;
  undefined4 ****ppppuVar16;
  undefined8 uVar17;
  undefined4 *****local_b8;
  undefined4 *****local_b4;
  undefined4 *****local_b0;
  uint local_ac;
  undefined4 *****local_a8;
  uint uStack_a4;
  uint uStack_a0;
  uint uStack_9c;
  undefined4 ****ppppuStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  undefined4 ****local_74;
  int *local_70;
  undefined4 ****local_6c;
  undefined4 ****local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  uint uStack_54;
  uint uStack_50;
  uint local_4c;
  undefined4 *****local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  piVar14 = *(int **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (piVar14 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  local_68 = (undefined4 ****)&DAT_018d88d4;
  DataMemoryBarrier(0xb);
  if (DAT_018d88d4 != 0) {
    local_b8 = &local_48;
    local_48 = &local_68;
    FUN_015eedc4(&DAT_018d88d4,0,&local_b8,&DAT_0188f000,&DAT_0188e9dc);
  }
  FUN_0133446c(&local_b8,DAT_018d88d8,"FieldOptions.JSType",0x13);
  pppppuVar2 = local_b4;
  pppppuVar1 = local_b8;
  if (local_ac != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("not an enum",0xb,&DAT_01891e98);
  }
  uVar17 = thunk_FUN_016de0ee(local_b4,0x2c0);
  puVar12 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
  if ((char)puVar12[4] == '\0') {
    FUN_015f62e4(&local_b8);
    *puVar12 = (uint)local_b8;
    puVar12[1] = (uint)local_b4;
    puVar12[2] = (uint)local_b0;
    puVar12[3] = local_ac;
    *(undefined1 *)(puVar12 + 4) = 1;
  }
  local_58 = *puVar12;
  uStack_54 = puVar12[1];
  uStack_50 = puVar12[2];
  local_4c = puVar12[3];
  local_38 = local_58 + 1;
  local_34 = uStack_54 + (0xfffffffe < local_58);
  *puVar12 = local_38;
  puVar12[1] = local_34;
  local_64 = 0;
  local_60 = 0;
  local_5c = 0;
  local_68 = (undefined4 ****)&DAT_005674cc;
  *puVar12 = local_58 + 2;
  puVar12[1] = uStack_54 + (0xfffffffd < local_58);
  ppppuVar13 = local_a8[6];
  ppppuVar11 = local_a8[7];
  local_48 = (undefined4 *****)local_68;
  local_44 = local_64;
  local_40 = local_60;
  local_3c = local_5c;
  local_30 = uStack_50;
  local_2c = local_4c;
  if (ppppuVar13 < ppppuVar11) {
LAB_012f7430:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,ppppuVar11,ppppuVar13,&DAT_0188f948);
  }
  ppppuVar16 = (undefined4 ****)0x0;
  if (ppppuVar11 != (undefined4 ****)0x0) {
    ppppuVar4 = local_a8[5];
    pppppuVar6 = local_a8;
    ppppuVar13 = ppppuVar4 + 4;
    do {
      pppuVar9 = (undefined4 ***)0x0;
      if (ppppuVar13[-4] != (undefined4 ***)0x0) {
        pppuVar9 = ppppuVar13[-3];
      }
      FUN_0133631c(&local_48,pppuVar9,ppppuVar16);
      if (*(char *)(ppppuVar13 + 1) == '\x01') {
        pppppuVar15 = (undefined4 *****)*ppppuVar13;
        uVar5 = 0;
        if ((int)pppppuVar15 < 0) goto LAB_012f7364;
        pppuVar9 = ppppuVar13[-1];
        if (pppppuVar15 == (undefined4 *****)0x0) {
          pppppuVar15 = (undefined4 *****)0x0;
          pppppuVar6 = (undefined4 *****)&DAT_00000001;
        }
        else {
          pppppuVar6 = (undefined4 *****)thunk_FUN_016d4a50(pppppuVar15);
          if (pppppuVar6 == (undefined4 *****)0x0) {
            uVar5 = 1;
            pppppuVar6 = pppppuVar15;
            goto LAB_012f7364;
          }
        }
      }
      else {
        pppppuVar6 = (undefined4 *****)&DAT_00000001;
        pppppuVar15 = (undefined4 *****)0x0;
        pppuVar9 = (undefined4 ***)0x1;
      }
      FUN_016dd1aa(pppppuVar6,pppuVar9,pppppuVar15);
      local_b8 = pppppuVar15;
      local_b4 = pppppuVar6;
      local_b0 = pppppuVar15;
      FUN_0133740c(&local_68,&local_b8,ppppuVar16);
      ppppuVar16 = (undefined4 ****)((int)ppppuVar16 + 1);
      ppppuVar7 = ppppuVar13 + 6;
      ppppuVar13 = ppppuVar13 + 10;
    } while (ppppuVar7 != ppppuVar4 + (int)ppppuVar11 * 10);
    ppppuVar13 = local_a8[6];
    ppppuVar11 = local_a8[7];
    ppppuVar16 = ppppuVar11;
    if (ppppuVar13 < ppppuVar11) goto LAB_012f7430;
  }
  pppppuVar6 = (undefined4 *****)((int)ppppuVar16 * 4);
  if (((undefined4 ****)0x3fffffff < ppppuVar16) || ((undefined4 *****)0x7ffffffc < pppppuVar6)) {
    uVar5 = 0;
LAB_012f7364:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,pppppuVar6);
  }
  ppppuVar13 = local_a8[5];
  ppppuVar11 = (undefined4 ****)0x0;
  if (pppppuVar6 == (undefined4 *****)0x0) {
    local_70 = (int *)&DAT_00000004;
    local_74 = (undefined4 ****)0x0;
    ppppuVar4 = local_68;
    uVar5 = local_64;
    uVar3 = local_60;
    local_ac = local_5c;
    local_a8 = (undefined4 *****)local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = local_4c;
    ppppuStack_98 = local_48;
    uStack_94 = local_44;
    uStack_90 = local_40;
    uStack_8c = local_3c;
    local_88 = local_38;
    uStack_84 = local_34;
    uStack_80 = local_30;
    uStack_7c = local_2c;
  }
  else {
    local_70 = (int *)thunk_FUN_016d4a50(pppppuVar6);
    local_74 = ppppuVar16;
    ppppuVar4 = local_68;
    uVar5 = local_64;
    uVar3 = local_60;
    local_ac = local_5c;
    local_a8 = (undefined4 *****)local_58;
    uStack_a4 = uStack_54;
    uStack_a0 = uStack_50;
    uStack_9c = local_4c;
    ppppuStack_98 = local_48;
    uStack_94 = local_44;
    uStack_90 = local_40;
    uStack_8c = local_3c;
    local_88 = local_38;
    uStack_84 = local_34;
    uStack_80 = local_30;
    uStack_7c = local_2c;
    if (local_70 == (int *)0x0) {
      uVar5 = 4;
      goto LAB_012f7364;
    }
  }
  local_b0 = (undefined4 *****)uVar3;
  local_b4 = (undefined4 *****)uVar5;
  local_b8 = (undefined4 *****)ppppuVar4;
  if (ppppuVar16 != (undefined4 ****)0x0) {
    piVar10 = local_70;
    ppppuVar11 = ppppuVar16;
    do {
      *piVar10 = (int)ppppuVar13;
      ppppuVar13 = ppppuVar13 + 10;
      ppppuVar11 = (undefined4 ****)((int)ppppuVar11 - 1);
      piVar10 = piVar10 + 1;
    } while (ppppuVar11 != (undefined4 ****)0x0);
    ppppuVar11 = ppppuVar16;
  }
  local_6c = ppppuVar11;
  local_68 = local_b8;
  local_64 = local_b4;
  local_60 = local_b0;
  local_5c = local_ac;
  local_58 = (uint)local_a8;
  uStack_54 = uStack_a4;
  uStack_50 = uStack_a0;
  local_4c = uStack_9c;
  local_48 = (undefined4 *****)ppppuStack_98;
  local_44 = uStack_94;
  local_40 = uStack_90;
  local_3c = uStack_8c;
  local_38 = local_88;
  local_34 = uStack_84;
  local_30 = uStack_80;
  local_2c = uStack_7c;
  if (pppppuVar1 != (undefined4 *****)0x0) {
    thunk_FUN_016d3fb4(pppppuVar2);
  }
  iVar8 = thunk_FUN_016d4a50(0x50);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  FUN_016dd1aa(iVar8,&local_b8,0x50);
  *(int *)(*piVar14 + 4) = iVar8;
  return;
}

