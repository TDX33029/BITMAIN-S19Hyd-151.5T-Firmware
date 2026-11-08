// FUN_018fe73c @ 018fe73c size=244 calls_out=2 calls_in=3
// strings: tls13  | expand type parameter T is too large

void FUN_018fe73c(undefined4 param_1,undefined4 param_2,code *param_3)

{
  int iVar1;
  undefined2 local_54;
  undefined1 local_52;
  undefined1 local_51;
  undefined2 *local_50;
  undefined4 local_4c;
  undefined1 *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  char *local_38;
  undefined4 local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined1 uStack_11;
  
  local_54 = 0xc00;
  local_30 = &local_51;
  local_28 = 1;
  local_2c = 1;
  local_44 = 1;
  local_48 = &local_52;
  local_52 = 8;
  local_50 = &local_54;
  local_51 = 0;
  local_24 = 0;
  local_34 = 2;
  local_4c = 2;
  local_18 = 0;
  local_1c = 0;
  local_20 = 0;
  local_38 = "iv";
  local_3c = 6;
  local_40 = "tls13 ";
  iVar1 = (*param_3)(param_2,&local_50,6,&local_20,0xc);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("expand type parameter T is too large",0x24,&uStack_11,&DAT_01d24d94,&DAT_01d24dc4)
    ;
  }
  FUN_01bed4e2(param_1,&local_20,0xc);
  return;
}

