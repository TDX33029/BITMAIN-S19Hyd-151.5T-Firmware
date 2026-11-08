// FUN_00f54238 @ 00f54238 size=208 calls_out=3 calls_in=1
// strings: BUG: system time is before UNIX epoch

void FUN_00f54238(longlong *param_1)

{
  uint uVar1;
  uint local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30;
  int local_2c;
  uint local_28;
  int iStack_24;
  uint uStack_20;
  
  FUN_015f3b0c(&local_30,0);
  local_3c = 0;
  local_40 = 0;
  local_50 = local_30;
  uStack_4c = local_2c;
  uStack_48 = local_28;
  local_38 = 0;
  FUN_015f3c24(&local_30,&local_50,&local_40);
  uVar1 = local_28;
  if ((local_30 & 1) != 0) {
    local_30 = local_28;
    local_2c = iStack_24;
    local_28 = uStack_20;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("BUG: system time is before UNIX epoch",0x25,&local_30,&DAT_0187f430,&DAT_0187f440)
    ;
  }
  FUN_015f3b0c(&local_30,1);
  *(uint *)(param_1 + 2) = local_28;
  *param_1 = (ulonglong)uVar1 * 1000 + CONCAT44(iStack_24 * 1000,uStack_20 / 1000000);
  *(uint *)(param_1 + 1) = local_30;
  *(int *)((int)param_1 + 0xc) = local_2c;
  return;
}

