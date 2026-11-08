// FUN_00e71d48 @ 00e71d48 size=964 calls_out=10 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00e71d48(int *param_1,undefined4 *param_2)

{
  undefined4 ***pppuVar1;
  code *pcVar2;
  code *pcVar3;
  undefined4 **ppuVar4;
  undefined4 **ppuVar5;
  undefined4 **ppuVar6;
  undefined4 **ppuVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 **ppuVar11;
  undefined4 *puVar12;
  undefined4 **ppuVar13;
  undefined4 ***pppuVar15;
  undefined4 **ppuVar14;
  undefined4 **ppuVar16;
  int local_80;
  int local_70;
  undefined4 **local_6c;
  undefined4 **local_68;
  int local_64;
  undefined4 **local_60;
  undefined4 **local_5c;
  undefined4 **local_58;
  undefined4 **local_50;
  int iStack_4c;
  int iStack_48;
  undefined4 ***local_40;
  code *local_3c;
  undefined4 **local_38;
  undefined4 **local_34;
  int local_30;
  int local_2c;
  
  FUN_00efbe38(&local_40);
  ppuVar14 = local_34;
  ppuVar13 = local_38;
  if ((local_40 == (undefined4 ***)&DAT_00000001) ||
     (FUN_00efcd38(&local_40,param_2), iVar9 = local_2c, iVar8 = local_30, ppuVar7 = local_34,
     ppuVar4 = local_38, local_40 == (undefined4 ***)&DAT_00000001)) {
    *param_1 = (int)local_3c;
    goto LAB_00e71ed0;
  }
  if (param_2[1] == 0) {
    local_38 = (undefined4 **)0x1;
    local_3c = (code *)0x2501;
    local_40 = (undefined4 ***)0x80000000;
    ppuVar11 = (undefined4 **)thunk_FUN_016d4a50(0xc);
    if (ppuVar11 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
LAB_00e71eb4:
    pppuVar15 = &local_40;
LAB_00e71ebc:
    ppuVar13 = pppuVar15[1];
    ppuVar14 = pppuVar15[2];
    *ppuVar11 = *pppuVar15;
    ppuVar11[1] = ppuVar13;
    ppuVar11[2] = ppuVar14;
  }
  else {
    param_2[1] = param_2[1] + -1;
    uVar10 = (uint)*(byte *)*param_2;
    *param_2 = (byte *)*param_2 + 1;
    if (uVar10 == 0) {
      local_60 = (undefined4 **)&DAT_80000000;
      ppuVar11 = ppuVar13;
      ppuVar16 = local_38;
LAB_00e71e50:
      *param_1 = (int)ppuVar13;
      param_1[1] = (int)ppuVar14;
      param_1[2] = (int)ppuVar4;
      param_1[3] = (int)ppuVar7;
      param_1[4] = iVar8;
      param_1[6] = (int)local_60;
      param_1[5] = iVar9;
      param_1[7] = (int)ppuVar11;
      param_1[8] = (int)ppuVar16;
      return;
    }
    if (uVar10 != 1) {
      local_40 = (undefined4 ***)&DAT_80000004;
      local_3c = (code *)uVar10;
      ppuVar11 = (undefined4 **)thunk_FUN_016d4a50(0xc);
      if (ppuVar11 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      goto LAB_00e71eb4;
    }
    FUN_00efbe38(&local_70,param_2);
    if (local_70 == 1) {
      ppuVar11 = local_6c;
    }
    else {
      local_5c = (undefined4 **)local_64;
      local_60 = local_68;
      if (local_64 != 0) {
        local_38 = (undefined4 **)&DAT_005674cc;
        local_40 = &local_60;
        local_3c = FUN_00fac4cc;
        local_34 = (undefined4 **)&LAB_00fac484;
        FUN_00600d2c(&local_50,&DAT_0056c1eb,&local_40);
        ppuVar11 = (undefined4 **)thunk_FUN_016d4a50(0xc);
        if (ppuVar11 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
        pppuVar15 = &local_50;
        goto LAB_00e71ebc;
      }
      ppuVar16 = (undefined4 **)0x6666;
      if (local_68 < (undefined4 **)0x6666) {
        ppuVar16 = local_68;
      }
      local_80 = 0;
      if (local_68 == (undefined4 **)0x0) {
        ppuVar11 = (undefined4 **)&DAT_00000008;
        ppuVar16 = (undefined4 **)0x0;
      }
      else {
        ppuVar11 = (undefined4 **)thunk_FUN_016d4a50((int)ppuVar16 * 0x28);
        if (ppuVar11 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,(int)ppuVar16 * 0x28);
        }
      }
      local_58 = (undefined4 **)0x0;
      local_60 = ppuVar16;
      local_5c = ppuVar11;
      while (ppuVar16 = local_58, local_68 != local_58) {
        FUN_00f1457c(&local_40,param_2);
        ppuVar5 = local_38;
        pcVar2 = local_3c;
        pppuVar15 = local_40;
        if (local_38 == (undefined4 **)&DAT_3b9aca00) {
          local_38 = local_40;
LAB_00e720dc:
          if (local_60 != (undefined4 **)0x0) {
            thunk_FUN_016d3fb4(ppuVar11);
          }
          ppuVar11 = local_38;
          goto LAB_00e71ecc;
        }
        FUN_00efc920(&local_40,param_2);
        ppuVar6 = local_38;
        pcVar3 = local_3c;
        pppuVar1 = local_40;
        if (local_40 == (undefined4 ***)&DAT_00000005 && local_3c == (code *)0x0) goto LAB_00e720dc;
        local_50 = local_34;
        iStack_4c = local_30;
        iStack_48 = local_2c;
        if (((uint)local_40 & 7) == 5) break;
        if (local_40 == (undefined4 ***)&DAT_00000006) goto LAB_00e720dc;
        if (ppuVar16 == local_60) {
          FUN_00edfbec(&local_60);
          ppuVar11 = local_5c;
        }
        local_58 = (undefined4 **)((int)ppuVar16 + 1);
        puVar12 = (undefined4 *)((int)ppuVar11 + local_80);
        *puVar12 = pppuVar1;
        local_80 = local_80 + 0x28;
        puVar12[2] = ppuVar6;
        puVar12[1] = pcVar3;
        puVar12[7] = pcVar2;
        puVar12[6] = pppuVar15;
        puVar12[3] = local_50;
        puVar12[4] = iStack_4c;
        puVar12[5] = iStack_48;
        puVar12[8] = ppuVar5;
      }
      if (-0x7fffffff < (int)local_60) goto LAB_00e71e50;
    }
  }
LAB_00e71ecc:
  *param_1 = (int)ppuVar11;
LAB_00e71ed0:
  param_1[6] = -0x7fffffff;
  return;
}

