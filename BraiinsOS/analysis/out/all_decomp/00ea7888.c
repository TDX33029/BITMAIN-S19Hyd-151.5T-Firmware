// FUN_00ea7888 @ 00ea7888 size=296 calls_out=7 calls_in=1
// strings: 

undefined4 * FUN_00ea7888(int *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar2;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_28 [2];
  undefined4 local_20;
  int iStack_1c;
  undefined4 uStack_18;
  
  iVar2 = param_1[2];
  if (*param_1 == iVar2) {
    FUN_00edff4c(param_1,iVar2,1,1,1);
    iVar2 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar2) = 1;
  param_1[2] = iVar2 + 1;
  local_34 = 0;
  local_38 = 0;
  local_30 = 0;
  FUN_015f3c24(local_28,param_2,&local_38);
  if ((local_28[0] & 1) == 0) {
    FUN_00f09308(param_1,extraout_r1,local_20,iStack_1c);
    FUN_00f09308(param_1,extraout_r1_00,uStack_18,0);
    return (undefined4 *)0x0;
  }
  iVar2 = thunk_FUN_016d4a50(0x28);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0x28);
  }
  FUN_016dd1aa(iVar2,&DAT_003594c0,0x28);
  uStack_18 = 0x28;
  local_20 = 0x28;
  iStack_1c = iVar2;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar1 = local_20;
  puVar1[1] = iStack_1c;
  puVar1[2] = uStack_18;
  return puVar1;
}

