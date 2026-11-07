// FUN_00c53d70 @ 00c53d70 size=212 calls_out=3 calls_in=1
// strings: a Display implementation returned an error unexpectedly

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00c53d70(int *param_1,int *param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  int local_20;
  int *local_1c;
  undefined1 *local_18;
  undefined1 *local_14;
  undefined4 local_10;
  undefined1 uStack_9;
  
  if (*param_2 == 6 && param_2[1] == 0) {
    local_1c = param_2 + 2;
    local_18 = &LAB_00fb1f30;
    FUN_00600d2c(param_1,&DAT_00354ac8,&local_1c);
    return;
  }
  local_18 = &DAT_01873b68;
  local_1c = &local_28;
  local_20 = 0;
  local_28 = 0;
  local_10 = 0;
  local_24 = 1;
  local_14 = &DAT_60000020;
  iVar1 = FUN_008d5b00(param_2,&local_1c);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_9,
                 &DAT_01873b80);
  }
  *param_1 = local_28;
  param_1[1] = local_24;
  param_1[2] = local_20;
  return;
}

