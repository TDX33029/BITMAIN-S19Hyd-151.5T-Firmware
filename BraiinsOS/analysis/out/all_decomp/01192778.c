// FUN_01192778 @ 01192778 size=120 calls_out=3 calls_in=1
// strings: uniqueItems

void FUN_01192778(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  uVar1 = 0;
  if ((*param_4 == '\x01') && ((param_4[1] & 1U) != 0)) {
    uVar3 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                         "uniqueItems",0xb);
    puVar2 = (undefined8 *)thunk_FUN_016d4a50(8);
    if (puVar2 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,8);
    }
    *puVar2 = uVar3;
    param_1[1] = puVar2;
    param_1[2] = &DAT_018892a8;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}

