// FUN_0100837c @ 0100837c size=228 calls_out=5 calls_in=2
// strings: 

void FUN_0100837c(undefined4 *param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int local_1c;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x38);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x38);
  }
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[8] = &LAB_01007dc4;
  puVar1[9] = &DAT_01007dbc;
  puVar1[10] = 0;
  puVar1[0xb] = 0;
  puVar1[0xc] = 0;
  puVar1[0xd] = 0;
  uVar2 = FUN_0181e3b4();
  local_1c = FUN_01817db0(puVar1,param_2,8,0xfffffff1,8,0,uVar2,0x38);
  if (local_1c != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_015f3600(&local_1c,&DAT_00568f30,0,&DAT_01882004);
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = puVar1;
  return;
}

