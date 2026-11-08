// FUN_00a96240 @ 00a96240 size=1516 calls_out=13 calls_in=1
// strings: BUG: Couldn't build generic_gauge with opts

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_00a96240(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined8 uVar13;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  undefined1 auStack_218 [80];
  int local_1c8;
  int local_1c4;
  int local_1c0;
  undefined4 local_1bc;
  int local_1b8 [20];
  undefined4 *local_168;
  int *local_164;
  undefined4 *local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  int *local_154;
  uint local_150;
  uint uStack_14c;
  undefined4 *local_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  int local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  uint local_118;
  undefined4 *local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  undefined4 *local_100;
  int *local_fc;
  uint local_f8;
  uint local_f4;
  undefined4 *local_f0;
  uint uStack_ec;
  uint local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  int local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 *local_70;
  int *piStack_6c;
  uint uStack_68;
  uint uStack_64;
  undefined4 *puStack_60;
  uint local_5c;
  uint uStack_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  
  uVar3 = FUN_00aa4b64(local_1b8);
  uVar13 = thunk_FUN_016de0ee(uVar3,0x2c0);
  puVar10 = (uint *)((int)uVar13 + (int)((ulonglong)uVar13 >> 0x20));
  if ((char)puVar10[4] == '\0') {
    FUN_015f62e4(&local_100);
    *puVar10 = (uint)local_100;
    puVar10[1] = (uint)local_fc;
    puVar10[2] = local_f8;
    puVar10[3] = local_f4;
    *(undefined1 *)(puVar10 + 4) = 1;
  }
  puVar11 = (undefined4 *)*puVar10;
  uVar12 = puVar10[1];
  uVar8 = puVar10[2];
  uVar7 = puVar10[3];
  *puVar10 = (int)puVar11 + 1;
  puVar10[1] = uVar12 + ((undefined4 *)0xfffffffe < puVar11);
  FUN_016dd1aa(&local_100,local_1b8,0x60);
  FUN_012b56f4(local_1b8);
  local_100 = &DAT_005674cc;
  local_fc = (int *)0;
  local_f8 = 0;
  local_f4 = 0;
  local_f0 = puVar11;
  uStack_ec = uVar12;
  local_e8 = uVar8;
  local_e4 = uVar7;
  FUN_016dd1aa(auStack_218,&local_100,0x60);
  piVar4 = (int *)thunk_FUN_016d4a50((int)in_stack_00000008 * 0xc);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,(int)in_stack_00000008 * 0xc);
  }
  local_100 = in_stack_00000008;
  iVar9 = in_stack_00000004[1];
  uVar3 = *in_stack_00000004;
  local_fc = piVar4;
  if (iVar9 < 0) {
    uVar3 = 0;
    goto LAB_00a96358;
  }
  if (iVar9 == 0) {
    iVar5 = 1;
    iVar6 = 0;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(iVar9);
    if (iVar5 == 0) {
      uVar3 = 1;
      goto LAB_00a96358;
    }
    iVar6 = iVar9;
  }
  FUN_016dd1aa(iVar5,uVar3,iVar9);
  *piVar4 = iVar6;
  piVar4[1] = iVar5;
  piVar4[2] = iVar9;
  if (in_stack_00000008 == (undefined4 *)0x1) goto LAB_00a963b0;
  iVar9 = in_stack_00000004[3];
  if (iVar9 < 0) {
    uVar3 = 0;
    iVar9 = iVar5;
    goto LAB_00a96358;
  }
  uVar3 = in_stack_00000004[2];
  if (iVar9 == 0) {
    iVar6 = 1;
    iVar5 = 0;
LAB_00a966bc:
    FUN_016dd1aa(iVar6,uVar3,iVar9);
    piVar4[3] = iVar5;
    piVar4[4] = iVar6;
    piVar4[5] = iVar9;
    if (in_stack_00000008 == (undefined4 *)0x2) goto LAB_00a963b0;
    iVar9 = in_stack_00000004[5];
    if (-1 < iVar9) {
      uVar3 = in_stack_00000004[4];
      if (iVar9 == 0) {
        iVar6 = 1;
        iVar5 = 0;
      }
      else {
        iVar6 = thunk_FUN_016d4a50(iVar9);
        if (iVar6 == 0) goto LAB_00a96838;
        iVar5 = iVar9;
      }
      FUN_016dd1aa(iVar6,uVar3,iVar9);
      piVar4[6] = iVar5;
      piVar4[7] = iVar6;
      piVar4[8] = iVar9;
      if (in_stack_00000008 == (undefined4 *)0x3) goto LAB_00a963b0;
      iVar9 = in_stack_00000004[7];
      if (-1 < iVar9) {
        uVar3 = in_stack_00000004[6];
        if (iVar9 == 0) {
          iVar5 = 1;
          iVar6 = 0;
        }
        else {
          iVar5 = thunk_FUN_016d4a50(iVar9);
          iVar6 = iVar9;
          if (iVar5 == 0) goto LAB_00a96838;
        }
        FUN_016dd1aa(iVar5,uVar3,iVar9);
        piVar4[9] = iVar6;
        piVar4[10] = iVar5;
        piVar4[0xb] = iVar9;
LAB_00a963b0:
        puVar11 = (undefined4 *)(local_1c4 + 4);
        for (iVar9 = local_1c0; iVar9 != 0; iVar9 = iVar9 + -1) {
          if (puVar11[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar11);
          }
          puVar11 = puVar11 + 3;
        }
        if (local_1c8 != 0) {
          thunk_FUN_016d3fb4(local_1c4);
        }
        FUN_016dd1aa(local_1b8,auStack_218,0x50);
        local_15c = local_1bc;
        local_160 = in_stack_00000008;
        local_168 = in_stack_00000008;
        local_164 = piVar4;
        FUN_012cd8c4(&local_100,local_1b8);
        uVar8 = local_f4;
        uVar7 = local_f8;
        piVar4 = local_fc;
        puVar11 = local_100;
        if (local_cc == -0x80000000) {
          FUN_0074c178(local_1b8);
          if (puVar11 != (undefined4 *)0x5) {
            local_100 = puVar11;
            local_fc = piVar4;
            local_f8 = uVar7;
            local_f4 = uVar8;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8("BUG: Couldn\'t build generic_gauge with opts",0x2b,&local_100,
                         &DAT_0186dee4);
          }
        }
        else {
          local_148 = local_f0;
          local_144 = uStack_ec;
          uStack_140 = local_e8;
          uStack_13c = local_e4;
          local_138 = local_e0;
          uStack_134 = local_dc;
          local_130 = local_d8;
          uStack_12c = local_d4;
          uStack_128 = uStack_d0;
          local_120 = local_c8;
          uStack_11c = uStack_c4;
          local_150 = local_f8;
          uStack_14c = local_f4;
          local_154 = local_fc;
          local_158 = local_100;
          local_124 = local_cc;
          if ((char)puVar10[4] == '\0') {
            FUN_015f62e4(&local_100);
            *puVar10 = (uint)local_100;
            puVar10[1] = (uint)local_fc;
            puVar10[2] = local_f8;
            puVar10[3] = local_f4;
            *(undefined1 *)(puVar10 + 4) = 1;
          }
          uVar7 = *puVar10;
          *puVar10 = uVar7 + 1;
          puVar10[1] = puVar10[1] + (uint)(0xfffffffe < uVar7);
          local_114 = &DAT_005674cc;
          local_70 = local_158;
          piStack_6c = local_154;
          uStack_68 = local_150;
          uStack_64 = uStack_14c;
          puStack_60 = local_148;
          local_5c = local_144;
          uStack_58 = uStack_140;
          uStack_54 = uStack_13c;
          uStack_50 = local_138;
          uStack_4c = uStack_134;
          local_48 = local_130;
          uStack_44 = uStack_12c;
          uStack_40 = uStack_128;
          iStack_3c = local_124;
          uStack_38 = local_120;
          uStack_34 = uStack_11c;
          local_110 = 0;
          local_10c = 0;
          local_108 = 0;
          FUN_016dd1aa(&uStack_d0,local_1b8,0x60);
          local_f8 = 0;
          local_fc = (int *)&DAT_00000001;
          local_100 = (undefined4 *)0x1;
          local_f4 = local_118;
          local_f0 = local_114;
          uStack_ec = local_110;
          local_e8 = local_10c;
          local_e4 = local_108;
          local_30 = 1;
          piVar4 = (int *)thunk_FUN_016d4a50(0xd8);
          if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(8,0xd8);
          }
          FUN_016dd1aa(piVar4,&local_100,0xd8);
        }
        do {
          iVar9 = *piVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar2);
        *piVar4 = iVar9 + 1;
        if (iVar9 < 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0xa96824);
          (*pcVar1)();
        }
        puVar11 = (undefined4 *)thunk_FUN_016d4a50(4);
        if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,4);
        }
        *puVar11 = piVar4;
        FUN_012c72ac(local_1b8,param_1,puVar11,&DAT_0186ddd4);
        if (local_1b8[0] != 5) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_0034e044,0x24,&local_100,&DAT_0186dee4);
        }
        return piVar4;
      }
    }
    iVar9 = iVar6;
    uVar3 = 0;
  }
  else {
    iVar6 = thunk_FUN_016d4a50(iVar9);
    if (iVar6 != 0) {
      iVar5 = iVar9;
      goto LAB_00a966bc;
    }
LAB_00a96838:
    uVar3 = 1;
  }
LAB_00a96358:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar3,iVar9);
}

