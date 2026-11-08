// FUN_00821800 @ 00821800 size=244 calls_out=5 calls_in=1
// strings: 

void FUN_00821800(undefined4 *param_1,uint param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 local_3c;
  undefined4 *local_38;
  int local_34;
  int local_30;
  undefined1 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_00821908(&local_3c);
  if ((char)local_3c == '\x01') {
    *param_1 = 0x80000000;
    param_1[1] = local_38;
    return;
  }
  if (((param_2 & 0xff) == 0) || ((param_2 & 0xff) != 1)) {
    iVar2 = 2;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(2);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,2);
    }
    *(undefined2 *)puVar1 = 0x1420;
  }
  else {
    iVar2 = 4;
    puVar1 = (undefined4 *)thunk_FUN_016d4a50(4);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(1,4);
    }
    *puVar1 = 0x140020;
  }
  local_30 = iVar2 + 4;
  local_2c = local_3c._1_1_;
  local_3c = iVar2;
  local_38 = puVar1;
  local_34 = iVar2;
  FUN_00873188(&local_28,&local_3c,param_2);
  *param_1 = local_28;
  param_1[1] = uStack_24;
  param_1[2] = uStack_20;
  thunk_FUN_016d3fb4(puVar1);
  return;
}

