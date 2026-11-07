// FUN_00ea8bf8 @ 00ea8bf8 size=124 calls_out=3 calls_in=2
// strings: 

bool FUN_00ea8bf8(int param_1)

{
  int iVar1;
  int iVar2;
  int local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  
  FUN_01933ff0(&local_24,param_1 + 8);
  if (local_24 == 1) {
    local_14 = local_1c;
    local_18 = local_20;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01c1810c,&DAT_01d2c8a8);
  }
  iVar1 = *(int *)(local_20 + 0x14);
  iVar2 = *(int *)(local_20 + 0x1c);
  FUN_011967dc(local_20,local_1c);
  return iVar1 != 0 || iVar2 != 0;
}

