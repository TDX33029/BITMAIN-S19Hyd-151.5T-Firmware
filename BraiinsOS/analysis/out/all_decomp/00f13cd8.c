// FUN_00f13cd8 @ 00f13cd8 size=648 calls_out=10 calls_in=1
// strings: 

void FUN_00f13cd8(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 **ppuVar1;
  code *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 *puVar8;
  int iVar9;
  undefined4 *local_8d0;
  undefined4 *local_8cc;
  undefined4 *local_8c8;
  undefined4 local_8c0;
  undefined4 uStack_8bc;
  undefined4 uStack_8b8;
  undefined4 **local_5e8;
  undefined4 *local_5e4;
  undefined4 *local_5e0;
  int local_5dc [181];
  undefined4 **local_308;
  code *local_304;
  undefined4 *local_300;
  undefined1 *local_2fc [182];
  
  if (param_2[1] == 0) {
    *param_1 = 0x80000000;
    return;
  }
  uVar7 = *param_2;
  param_2[1] = param_2[1] + -1;
  FUN_00efbe38(&local_5e8,uVar7);
  puVar4 = local_5e0;
  if (local_5e8 == (undefined4 **)0x1) {
    local_300 = local_5e4;
  }
  else {
    local_8cc = (undefined4 *)local_5dc[0];
    local_8d0 = local_5e0;
    if (local_5dc[0] == 0) {
      puVar6 = local_5e0;
      if ((undefined4 *)0x58f < local_5e0) {
        puVar6 = (undefined4 *)0x590;
      }
      iVar9 = 0;
      if (local_5e0 == (undefined4 *)0x0) {
        puVar5 = (undefined4 *)&DAT_00000008;
        puVar6 = (undefined4 *)0x0;
      }
      else {
        puVar5 = (undefined4 *)thunk_FUN_016d4a50((int)puVar6 * 0x2e0);
        if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(8,(int)puVar6 * 0x2e0);
        }
      }
      local_8c8 = (undefined4 *)0x0;
      local_8d0 = puVar6;
      local_8cc = puVar5;
      while (puVar6 = local_8c8, puVar4 != local_8c8) {
        FUN_00e6f3c8(&local_308,uVar7);
        puVar3 = local_300;
        pcVar2 = local_304;
        ppuVar1 = local_308;
        if (local_308 == (undefined4 **)0x3 && local_304 == (code *)0x0) {
          puVar8 = (undefined1 *)((int)puVar6 + 1);
          puVar4 = puVar5;
          while (puVar8 = puVar8 + -1, puVar8 != (undefined1 *)0x0) {
            FUN_00f24560(puVar4);
            puVar4 = puVar4 + 0xb8;
          }
          if (local_8d0 != (undefined4 *)0x0) {
            thunk_FUN_016d3fb4(puVar5);
          }
          goto LAB_00f13f40;
        }
        FUN_016dd1aa(&local_8c0,local_2fc,0x2d4);
        if (((uint)ppuVar1 & 7) == 3) break;
        local_5e8 = ppuVar1;
        local_5e0 = puVar3;
        local_5e4 = (undefined4 *)pcVar2;
        FUN_016dd1aa(local_5dc,&local_8c0,0x2d4);
        if (puVar6 == local_8d0) {
          FUN_00edfa00(&local_8d0);
          puVar5 = local_8cc;
        }
        FUN_016dd1aa((undefined1 *)((int)puVar5 + iVar9),&local_5e8,0x2e0);
        iVar9 = iVar9 + 0x2e0;
        local_8c8 = (undefined4 *)((int)puVar6 + 1);
      }
      if (local_8d0 != (undefined4 *)&DAT_80000000) {
        *param_1 = local_8d0;
        param_1[1] = puVar5;
        param_1[2] = puVar6;
        return;
      }
      local_300 = puVar5;
    }
    else {
      local_300 = &DAT_005674cc;
      local_308 = &local_8d0;
      local_304 = FUN_00fac4cc;
      local_2fc[0] = &LAB_00fac484;
      FUN_00600d2c(&local_8c0,&DAT_0056c1eb,&local_308);
      puVar4 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar4 = local_8c0;
      puVar4[1] = uStack_8bc;
      puVar4[2] = uStack_8b8;
      local_300 = puVar4;
    }
  }
LAB_00f13f40:
  *param_1 = 0x80000001;
  param_1[1] = local_300;
  return;
}

