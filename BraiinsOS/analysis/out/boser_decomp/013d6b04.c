// FUN_013d6b04 @ 013d6b04 size=216 calls_out=6 calls_in=1
// strings: 

void FUN_013d6b04(int *param_1)

{
  int iVar1;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_2c [2];
  undefined4 local_24;
  undefined4 local_1c;
  
  FUN_012fbd94(&local_78);
  if (local_78 == 1) {
    iVar1 = FUN_013e9378(local_74,local_70);
    *param_1 = 2;
    param_1[1] = iVar1;
  }
  else {
    local_24 = 0;
    local_2c[0] = 0;
    local_1c = 0;
    FUN_01ac814c(&local_78,local_2c,local_74);
    if (local_78 == 2) {
      local_78 = CONCAT22((ushort)(byte)local_74,0x24);
      iVar1 = thunk_FUN_01be5118(0x44);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0x44);
      }
      FUN_01bed4e2(iVar1,&local_78,0x44);
      *param_1 = 2;
      param_1[1] = iVar1;
    }
    else {
      FUN_01bed4e2((int)param_1 + 5,(int)&local_74 + 1,0x43);
      *(byte *)(param_1 + 1) = (byte)local_74;
      *param_1 = local_78;
    }
  }
  return;
}

