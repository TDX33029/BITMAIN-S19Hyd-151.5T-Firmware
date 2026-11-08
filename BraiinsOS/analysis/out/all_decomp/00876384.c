// FUN_00876384 @ 00876384 size=376 calls_out=6 calls_in=2
// strings: 

uint FUN_00876384(int *param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int local_40;
  undefined4 local_3c;
  int local_34;
  int *local_30;
  undefined4 *local_2c;
  int *local_28;
  undefined1 *local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x18]) {
  case '\0':
    iVar2 = *param_1;
    local_34 = param_1[1];
    local_24 = &LAB_00fac484;
    local_28 = &local_34;
    local_30 = (int *)(iVar2 + 0x44);
    local_2c = &DAT_006043a8;
    FUN_00600d2c(&local_40,&DAT_00570dec,&local_30);
    local_2c = &DAT_006043a8;
    local_30 = &local_40;
    FUN_00600d2c(&local_50,&DAT_0058422c,&local_30);
    if (local_40 != 0) {
      thunk_FUN_016d3fb4(local_3c);
    }
    *(undefined1 *)(param_1 + 0x17) = 0;
    param_1[2] = local_50;
    param_1[3] = iStack_4c;
    param_1[4] = iStack_48;
    param_1[5] = iVar2;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861a90);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861a90);
  }
  uVar1 = FUN_008765cc(param_1 + 2,param_2);
  if ((uVar1 & 1) != 0) {
    *(undefined1 *)(param_1 + 0x18) = 3;
    return 1;
  }
  if ((char)param_1[0x17] == '\x03') {
    FUN_00875460(param_1 + 6);
    *(undefined1 *)((int)param_1 + 0x5d) = 0;
    *(undefined1 *)(param_1 + 0x18) = 1;
    return uVar1;
  }
  if (((char)param_1[0x17] == '\0') && (param_1[2] != 0)) {
    thunk_FUN_016d3fb4(param_1[3]);
  }
  *(undefined1 *)(param_1 + 0x18) = 1;
  return uVar1;
}

