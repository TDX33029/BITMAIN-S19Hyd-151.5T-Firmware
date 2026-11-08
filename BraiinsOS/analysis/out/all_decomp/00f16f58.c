// FUN_00f16f58 @ 00f16f58 size=540 calls_out=9 calls_in=10
// strings: 

void FUN_00f16f58(uint *param_1,int *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  uint *puVar3;
  uint **ppuVar5;
  uint *puVar4;
  int iVar6;
  uint uVar7;
  int local_50;
  undefined4 *local_4c;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  uint *apuStack_38 [4];
  uint *local_28;
  code *local_24;
  undefined4 *local_20;
  undefined1 *local_1c;
  
  FUN_00efbe38(&local_50);
  if (local_50 == 1) {
    puVar1 = local_4c;
LAB_00f16f80:
    *param_1 = 0x80000000;
    param_1[1] = (uint)puVar1;
    return;
  }
  local_3c = local_44;
  local_40 = local_48;
  if (local_44 == 0) {
    if (local_48 <= (uint)param_2[1]) {
      iVar6 = *param_2;
      *param_2 = iVar6 + local_48;
      param_2[1] = param_2[1] - local_48;
      if ((int)local_48 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,local_48);
      }
      if (local_48 == 0) {
        uVar2 = 1;
        uVar7 = 0;
      }
      else {
        uVar2 = thunk_FUN_016d4a50(local_48);
        uVar7 = local_48;
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,local_48);
        }
      }
      FUN_016dd1aa(uVar2,iVar6,local_48);
      FUN_00fab1e0(&local_28,uVar2,local_48);
      if (local_28 != (uint *)0x1) {
        *param_1 = uVar7;
        param_1[1] = uVar2;
        param_1[2] = local_48;
        return;
      }
      local_28 = (uint *)0x80000001;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar1 = local_28;
      puVar1[1] = local_24;
      puVar1[2] = local_20;
      if (uVar7 != 0) {
        thunk_FUN_016d3fb4(uVar2);
        *param_1 = 0x80000000;
        param_1[1] = (uint)puVar1;
        return;
      }
      goto LAB_00f16f80;
    }
    FUN_015e79d4((uint)&local_28 | 4,0x25,1,0);
    local_28 = (uint *)0x80000000;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    ppuVar5 = &local_28;
  }
  else {
    local_20 = &DAT_005674cc;
    local_28 = &local_40;
    local_24 = FUN_00fac4cc;
    local_1c = &LAB_00fac484;
    FUN_00600d2c(apuStack_38,&DAT_0056c1eb,&local_28);
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    ppuVar5 = apuStack_38;
  }
  puVar3 = ppuVar5[1];
  puVar4 = ppuVar5[2];
  *puVar1 = *ppuVar5;
  puVar1[1] = puVar3;
  puVar1[2] = puVar4;
  *param_1 = 0x80000000;
  param_1[1] = (uint)puVar1;
  return;
}

