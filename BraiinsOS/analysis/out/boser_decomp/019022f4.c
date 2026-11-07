// FUN_019022f4 @ 019022f4 size=240 calls_out=1 calls_in=2
// strings: tls13  | expand type parameter T is too large

void FUN_019022f4(undefined4 *param_1,undefined4 param_2,code *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined2 local_54;
  char local_52;
  undefined1 local_51;
  undefined2 *local_50;
  undefined4 local_4c;
  char *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 uStack_11;
  
  local_28 = param_6;
  local_2c = 1;
  local_44 = 1;
  local_48 = &local_52;
  local_4c = 2;
  local_50 = &local_54;
  local_51 = (undefined1)param_7;
  local_24 = param_7;
  local_30 = &local_51;
  local_3c = 6;
  local_1c = 0;
  local_20 = 0;
  local_54 = 0x800;
  local_52 = (char)param_5 + '\x06';
  local_34 = param_5;
  local_40 = "tls13 ";
  local_38 = param_4;
  iVar1 = (*param_3)(param_2,&local_50,6,&local_20);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("expand type parameter T is too large",0x24,&uStack_11,&DAT_01d24d94);
  }
  param_1[1] = local_1c;
  *param_1 = local_20;
  return;
}

