// FUN_012a6a9c @ 012a6a9c size=772 calls_out=7 calls_in=0
// strings: sample_count | sample_sum | bucket | Histogram

void FUN_012a6a9c(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 ***local_d0;
  undefined4 *local_cc;
  undefined *local_c8;
  undefined4 uStack_c4;
  int local_48;
  undefined4 *local_44;
  undefined4 local_40;
  int local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 *local_28;
  undefined4 **local_24;
  
  piVar4 = *(int **)*param_1;
  *(undefined4 *)*param_1 = 0;
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  local_40 = 0;
  local_48 = 0;
  local_44 = (undefined4 *)&DAT_00000004;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_012a4340;
    puVar1[1] = &DAT_012a3bd4;
    local_d0 = (undefined4 ***)0x6;
    local_c8 = &DAT_0188c914;
    local_cc = puVar1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x10);
    }
    *puVar1 = local_d0;
    puVar1[1] = local_cc;
    puVar1[2] = local_c8;
    puVar1[3] = uStack_c4;
    FUN_0132f244(&local_48);
    puVar3 = local_44;
    local_44[3] = &DAT_0188c75c;
    *local_44 = "sample_count";
    local_44[1] = 0xc;
    local_44[2] = puVar1;
    local_40 = 1;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
    if (puVar1 != (undefined4 *)0x0) {
      *puVar1 = &LAB_012a5870;
      puVar1[1] = &LAB_012a3bd8;
      local_d0 = (undefined4 ***)0x6;
      local_c8 = &DAT_0188c748;
      local_cc = puVar1;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
      if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      *puVar1 = local_d0;
      puVar1[1] = local_cc;
      puVar1[2] = local_c8;
      puVar1[3] = uStack_c4;
      if (local_48 == 1) {
        FUN_0132f244(&local_48);
        puVar3 = local_44;
      }
      puVar3[7] = &DAT_0188c75c;
      puVar3[4] = "sample_sum";
      puVar3[5] = 10;
      puVar3[6] = puVar1;
      local_40 = 2;
      puVar1 = (undefined4 *)thunk_FUN_016d4a50(8);
      if (puVar1 != (undefined4 *)0x0) {
        *puVar1 = &LAB_012a3be0;
        puVar1[1] = &LAB_012a6edc;
        local_d0 = (undefined4 ***)&DAT_00000007;
        local_c8 = &DAT_0188c93c;
        local_cc = puVar1;
        puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x10);
        if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x10);
        }
        *puVar1 = local_d0;
        puVar1[1] = local_cc;
        puVar1[2] = local_c8;
        puVar1[3] = uStack_c4;
        if (local_48 == 2) {
          FUN_0132f244(&local_48);
          puVar3 = local_44;
        }
        puVar3[8] = "bucket";
        puVar3[9] = 6;
        puVar3[10] = puVar1;
        puVar3[0xb] = &DAT_0188c75c;
        local_40 = 3;
        local_30 = 3;
        local_34 = local_44;
        local_38 = local_48;
        local_28 = &DAT_018d87ec;
        DataMemoryBarrier(0xb);
        if (DAT_018d87ec != 0) {
          local_24 = &local_28;
          local_d0 = &local_24;
          FUN_015eedc4(&DAT_018d87ec,0,&local_d0,&DAT_0188bd74,&DAT_0188bca0);
        }
        FUN_0133c708(&local_d0,"Histogram",9,&local_38,local_28[1],&DAT_0188c470);
        iVar2 = thunk_FUN_016d4a50(0x88);
        if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x88);
        }
        FUN_016dd1aa(iVar2,&local_d0,0x88);
        *(int *)(*piVar4 + 4) = iVar2;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600874(4,8);
}

