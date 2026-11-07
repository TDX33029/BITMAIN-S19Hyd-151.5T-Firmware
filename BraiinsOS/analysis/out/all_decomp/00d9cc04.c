// FUN_00d9cc04 @ 00d9cc04 size=340 calls_out=6 calls_in=0
// strings: 

void FUN_00d9cc04(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined1 **ppuVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined1 *puStack_8b0;
  undefined1 *local_8ac;
  undefined4 uStack_8a8;
  undefined4 uStack_8a4;
  undefined1 auStack_8a0 [712];
  int local_5d8;
  int local_5d4;
  undefined1 *local_5d0;
  undefined1 *local_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined1 auStack_5c0 [712];
  undefined1 auStack_2f8 [712];
  undefined1 *local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar4 = param_2 + 0x2c8;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x590)) {
  case 0:
    FUN_016dd1aa(iVar4,param_2,0x2c8);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01879b80);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01879b80);
  }
  FUN_00d9ad30(&local_5d8,iVar4,param_3);
  if (local_5d8 == 0x1e && local_5d4 == 0) {
    *param_1 = 0x80000005;
    *(undefined1 *)(param_2 + 0x590) = 3;
    return;
  }
  local_30 = local_5cc;
  uStack_2c = uStack_5c8;
  local_28 = uStack_5c4;
  FUN_016dd1aa(auStack_2f8,auStack_5c0,0x2c8);
  FUN_00d9aba4(iVar4);
  if (local_5d8 == 0x1d && local_5d4 == 0) {
    ppuVar1 = &local_30;
  }
  else {
    FUN_016dd1aa(auStack_8a0,auStack_2f8,0x2c8);
    puStack_8b0 = local_5d0;
    local_8ac = local_30;
    uStack_8a8 = uStack_2c;
    uStack_8a4 = local_28;
    if (local_5d8 != 0xd || local_5d4 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01879b80);
    }
    ppuVar1 = &puStack_8b0;
    local_5d0 = &DAT_80000004;
  }
  puVar2 = *ppuVar1;
  puVar3 = ppuVar1[1];
  param_1[3] = ppuVar1[2];
  *param_1 = local_5d0;
  param_1[1] = puVar2;
  param_1[2] = puVar3;
  *(undefined1 *)(param_2 + 0x590) = 1;
  return;
}

