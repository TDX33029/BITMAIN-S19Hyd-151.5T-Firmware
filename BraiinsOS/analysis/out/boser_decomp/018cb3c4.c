// FUN_018cb3c4 @ 018cb3c4 size=292 calls_out=3 calls_in=2
// strings: tls13 

void FUN_018cb3c4(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
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
  
  local_28 = 1;
  local_38 = "iv";
  local_30 = &local_51;
  local_2c = 1;
  local_44 = 1;
  local_48 = &local_52;
  local_54 = 0xc00;
  local_52 = 8;
  local_50 = &local_54;
  local_51 = 0;
  local_24 = 0;
  local_34 = 2;
  local_3c = 6;
  local_40 = "tls13 ";
  local_4c = 2;
  if ((uint)(*(int *)(*(int *)(param_2 + 0x48) + 0x48) * 0xff) < 0xc) {
    puVar3 = &DAT_01d22bec;
    puVar2 = &DAT_01d22c4c;
  }
  else {
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    iVar1 = FUN_01891c24(param_2,&local_50,6,&local_20,0xc,0xc);
    if (iVar1 == 0) {
      FUN_01bed4e2(param_1,&local_20,0xc);
      return;
    }
    puVar3 = &DAT_01d228a0;
    puVar2 = &DAT_01d22870;
  }
                    /* WARNING: Subroutine does not return */
  FUN_013073dc(&DAT_00533467,0x2b,&uStack_11,puVar3,puVar2);
}

