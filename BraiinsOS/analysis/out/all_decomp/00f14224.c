// FUN_00f14224 @ 00f14224 size=708 calls_out=7 calls_in=1
// strings: 

void FUN_00f14224(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  uint *puVar3;
  uint **ppuVar5;
  uint *puVar4;
  undefined4 *puVar6;
  uint unaff_r6;
  uint unaff_r7;
  uint uVar7;
  uint local_58;
  uint local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int local_44;
  uint *apuStack_40 [4];
  uint *local_30;
  code *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  
  if (param_2[1] == 0) {
    *param_1 = 0x80000001;
    return;
  }
  puVar6 = (undefined4 *)*param_2;
  param_2[1] = param_2[1] + -1;
  if (puVar6[1] == 0) {
    local_28 = (undefined4 *)0x1;
    local_2c = (code *)0x2501;
    local_30 = (uint *)0x80000000;
    puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  else {
    puVar6[1] = puVar6[1] + -1;
    local_2c = (code *)(uint)*(byte *)*puVar6;
    *puVar6 = (byte *)*puVar6 + 1;
    if (local_2c == (code *)0x0) {
      local_58 = 0x80000000;
LAB_00f142f0:
      *param_1 = local_58;
      param_1[1] = unaff_r7;
      param_1[2] = unaff_r6;
      return;
    }
    if (local_2c == (code *)0x1) {
      FUN_00efbe38(&local_58,puVar6);
      uVar2 = local_50;
      if (local_58 == 1) {
        unaff_r7 = local_54;
LAB_00f14294:
        *param_1 = 0x80000002;
        param_1[1] = unaff_r7;
        return;
      }
      local_44 = local_4c;
      local_48 = local_50;
      if (local_4c == 0) {
        uVar7 = local_50;
        if (0xfffff < local_50) {
          uVar7 = 0x100000;
        }
        unaff_r6 = 0;
        if (local_50 == 0) {
          unaff_r7 = 1;
          uVar7 = 0;
        }
        else {
          unaff_r7 = thunk_FUN_016d4a50(uVar7);
          if (unaff_r7 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar7);
          }
        }
        local_58 = uVar7;
        local_54 = unaff_r7;
        for (; uVar2 != unaff_r6; unaff_r6 = unaff_r6 + 1) {
          local_50 = unaff_r6;
          if (puVar6[1] == 0) {
            local_28 = (undefined4 *)0x1;
            local_2c = (code *)0x2501;
            local_30 = (uint *)0x80000000;
            puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
            if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            *puVar6 = local_30;
            puVar6[1] = local_2c;
            puVar6[2] = local_28;
            if (local_58 != 0) {
              thunk_FUN_016d3fb4(unaff_r7);
            }
            *param_1 = 0x80000002;
            param_1[1] = (uint)puVar6;
            return;
          }
          uVar1 = *(undefined1 *)*puVar6;
          *puVar6 = (undefined1 *)*puVar6 + 1;
          puVar6[1] = puVar6[1] + -1;
          if (unaff_r6 == local_58) {
            FUN_006029c0(&local_58);
            unaff_r7 = local_54;
          }
          *(undefined1 *)(unaff_r7 + unaff_r6) = uVar1;
        }
        if (-0x7fffffff < (int)local_58) goto LAB_00f142f0;
        goto LAB_00f14294;
      }
      local_28 = &DAT_005674cc;
      local_30 = &local_48;
      local_2c = FUN_00fac4cc;
      local_24 = &LAB_00fac484;
      FUN_00600d2c(apuStack_40,&DAT_0056c1eb,&local_30);
      puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      ppuVar5 = apuStack_40;
      goto LAB_00f14324;
    }
    local_30 = (uint *)&DAT_80000004;
    puVar6 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
  }
  ppuVar5 = &local_30;
LAB_00f14324:
  puVar3 = ppuVar5[1];
  puVar4 = ppuVar5[2];
  *puVar6 = *ppuVar5;
  puVar6[1] = puVar3;
  puVar6[2] = puVar4;
  *param_1 = 0x80000002;
  param_1[1] = (uint)puVar6;
  return;
}

