// FUN_01555808 @ 01555808 size=168 calls_out=3 calls_in=0
// strings: 

void FUN_01555808(undefined4 *param_1)

{
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  uint local_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  FUN_015f3b0c(&local_28,0);
  local_34 = 0;
  local_38 = 0;
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = local_20;
  local_30 = 0;
  FUN_015f3c24(&local_28,&local_48,&local_38);
  if ((local_28 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_018a9158);
  }
  param_1[2] = local_20;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[3] = local_1c;
  return;
}

