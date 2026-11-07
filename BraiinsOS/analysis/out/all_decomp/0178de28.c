// FUN_0178de28 @ 0178de28 size=332 calls_out=3 calls_in=1
// strings: 

int FUN_0178de28(undefined4 param_1,uint param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int local_3c;
  uint local_38;
  uint uStack_34;
  uint local_30;
  int iStack_2c;
  uint local_24;
  
  local_24 = DAT_018ddaf8;
  local_3c = FUN_0178dc84(param_1,param_2,&local_38,&local_30);
  if (local_3c == -0xb) {
    local_3c = 0;
    iVar1 = -0xb;
  }
  else {
    iVar1 = 0;
    uVar2 = param_3 * iStack_2c + (int)((ulonglong)local_30 * (ulonglong)param_3 >> 0x20);
    if (uVar2 == 0 && (param_2 <= (uint)((ulonglong)local_30 * (ulonglong)param_3)) <= uVar2) {
      local_3c = 6;
    }
    else if (uStack_34 == 0 && (0x7ffffffe < local_38) <= uStack_34) {
      iVar1 = FUN_0178dba8();
      if (iVar1 == 0) {
        DAT_018dffc8 = local_38;
        DAT_018dffcc = uStack_34;
      }
    }
    else {
      local_3c = 2;
    }
  }
  if ((local_24 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(iVar1,local_24 ^ DAT_018ddaf8,0);
  }
  return local_3c;
}

