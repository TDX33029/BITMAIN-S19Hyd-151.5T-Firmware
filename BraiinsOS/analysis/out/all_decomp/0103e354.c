// FUN_0103e354 @ 0103e354 size=224 calls_out=5 calls_in=1
// strings: 

void FUN_0103e354(int *param_1)

{
  int iVar1;
  undefined4 local_78;
  byte local_74;
  undefined1 auStack_73 [71];
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  
  FUN_00fab1e0(&local_78);
  if (local_78 == 1) {
    local_78 = 0x25;
    iVar1 = thunk_FUN_016d4a50(0x44);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
  }
  else {
    local_24 = 0;
    local_2c[0] = 0;
    local_1c = 0;
    FUN_016b18bc(&local_78,local_2c);
    if (local_78 != 2) {
      FUN_016dd1aa((int)param_1 + 5,auStack_73,0x43);
      *(byte *)(param_1 + 1) = local_74;
      *param_1 = local_78;
      return;
    }
    local_78 = CONCAT22((ushort)local_74,0x24);
    iVar1 = thunk_FUN_016d4a50(0x44);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x44);
    }
  }
  FUN_016dd1aa(iVar1,&local_78,0x44);
  *param_1 = 2;
  param_1[1] = iVar1;
  return;
}

