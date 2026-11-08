// FUN_00ea9acc @ 00ea9acc size=1044 calls_out=9 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00ea9acc(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 **ppuVar1;
  undefined1 **ppuVar2;
  code *pcVar3;
  code *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined1 *puVar7;
  uint uVar8;
  undefined4 *puVar9;
  int *piVar10;
  uint *puVar11;
  code *pcVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  int local_68;
  int local_64;
  undefined1 *local_60;
  code *local_5c;
  undefined1 *local_58;
  int *local_54;
  undefined1 *local_50;
  undefined1 **local_48;
  code *local_44;
  int *local_40;
  undefined1 *local_3c;
  undefined1 local_38 [8];
  undefined1 *local_30;
  code *local_2c;
  
  if (param_2[1] == 0) {
    local_40 = (int *)&DAT_00000001;
    local_44 = (code *)0x2501;
    local_48 = (undefined1 **)0x80000000;
    puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    uVar8 = (uint)*(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    param_2[1] = param_2[1] + -1;
    if (uVar8 == 0) {
      *param_1 = 0x80000000;
      return;
    }
    if (uVar8 == 1) {
      FUN_00efbe38(&local_68,param_2);
      puVar14 = local_60;
      if (local_68 == 1) {
        *param_1 = 0x80000001;
        param_1[1] = local_64;
        return;
      }
      local_2c = local_5c;
      local_30 = local_60;
      if (local_5c != (code *)0x0) {
        local_40 = &DAT_005674cc;
        local_48 = &local_30;
        local_44 = FUN_00fac4cc;
        local_3c = &LAB_00fac484;
        FUN_00600d2c(&local_58,&DAT_0056c1eb,&local_48);
        puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
        if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        *puVar9 = local_58;
        puVar9[1] = local_54;
        puVar9[2] = local_50;
        *param_1 = 0x80000001;
        param_1[1] = puVar9;
        return;
      }
      iVar15 = 0;
      puVar13 = local_60;
      if ((undefined1 *)0x7fff < local_60) {
        puVar13 = (undefined1 *)0x8000;
      }
      if (local_60 == (undefined1 *)0x0) {
        piVar10 = (int *)&DAT_00000008;
        puVar13 = (undefined1 *)0x0;
      }
      else {
        piVar10 = (int *)thunk_FUN_016d4a50((int)puVar13 << 5);
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,(int)puVar13 << 5);
        }
      }
      local_50 = (undefined1 *)0x0;
      local_58 = puVar13;
      local_54 = piVar10;
      while (puVar13 = local_50, puVar14 != local_50) {
        FUN_00f16f58(&local_48,param_2);
        piVar5 = local_40;
        pcVar3 = local_44;
        ppuVar1 = local_48;
        pcVar12 = local_44;
        if (local_48 == (undefined1 **)0x80000000) {
LAB_00ea9e68:
          for (puVar14 = (undefined1 *)0x0; puVar13 != puVar14; puVar14 = puVar14 + 1) {
            if (piVar10[(int)puVar14 * 8 + 4] != 0) {
              thunk_FUN_016d3fb4(piVar10[(int)puVar14 * 8 + 5]);
            }
          }
          if (local_58 != (undefined1 *)0x0) {
            thunk_FUN_016d3fb4(piVar10);
          }
          goto LAB_00ea9eac;
        }
        FUN_00ea9914(&local_48,param_2);
        puVar7 = local_3c;
        pcVar12 = (code *)local_40;
        pcVar4 = local_44;
        ppuVar2 = local_48;
        if (local_48 == (undefined1 **)0x2 && local_44 == (code *)0x0) {
LAB_00ea9e58:
          if (ppuVar1 != (undefined1 **)0x0) {
            thunk_FUN_016d3fb4(pcVar3);
          }
          goto LAB_00ea9e68;
        }
        FUN_00efbe38(&local_48,param_2);
        piVar6 = local_40;
        if (local_48 == (undefined1 **)0x1) {
          pcVar12 = local_44;
          goto LAB_00ea9e58;
        }
        if (local_3c != (undefined1 *)0x0) {
          local_2c = FUN_00fac4cc;
          local_30 = local_38;
          FUN_00600d2c(&local_68,&DAT_00584bb4,&local_30);
          pcVar12 = (code *)thunk_FUN_016d4a50(0xc);
          if (pcVar12 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,0xc);
          }
          *(int *)pcVar12 = local_68;
          *(int *)((int)pcVar12 + 4) = local_64;
          *(undefined1 **)((int)pcVar12 + 8) = local_60;
          goto LAB_00ea9e58;
        }
        if (((uint)ppuVar2 & 3) == 2) break;
        if (ppuVar2 == (undefined1 **)0x3) goto LAB_00ea9e68;
        if (puVar13 == local_58) {
          FUN_00edf99c(&local_58);
          piVar10 = local_54;
        }
        puVar11 = (uint *)((int)piVar10 + iVar15);
        *puVar11 = (uint)ppuVar2;
        iVar15 = iVar15 + 0x20;
        puVar11[1] = (uint)pcVar4;
        local_50 = puVar13 + 1;
        piVar10[(int)puVar13 * 8 + 4] = (int)ppuVar1;
        piVar10[(int)puVar13 * 8 + 5] = (int)pcVar3;
        piVar10[(int)puVar13 * 8 + 3] = (int)puVar7;
        piVar10[(int)puVar13 * 8 + 2] = (int)pcVar12;
        piVar10[(int)puVar13 * 8 + 6] = (int)piVar5;
        piVar10[(int)puVar13 * 8 + 7] = (int)piVar6;
      }
      if (local_58 != &DAT_80000000) {
        *param_1 = local_58;
        param_1[1] = piVar10;
        param_1[2] = puVar13;
        return;
      }
      pcVar12 = (code *)piVar10;
LAB_00ea9eac:
      *param_1 = 0x80000001;
      param_1[1] = pcVar12;
      return;
    }
    local_48 = (undefined1 **)&DAT_80000004;
    local_44 = (code *)uVar8;
    puVar9 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  *puVar9 = local_48;
  puVar9[1] = local_44;
  puVar9[2] = local_40;
  *param_1 = 0x80000001;
  param_1[1] = puVar9;
  return;
}

