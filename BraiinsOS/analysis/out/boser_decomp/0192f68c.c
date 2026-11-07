// FUN_0192f68c @ 0192f68c size=168 calls_out=3 calls_in=0
// strings: 

void FUN_0192f68c(undefined4 *param_1)

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
  
  FUN_019ac130(&local_28,0);
  local_34 = 0;
  local_38 = 0;
  local_48 = local_28;
  uStack_44 = uStack_24;
  uStack_40 = local_20;
  local_30 = 0;
  FUN_019ac248(&local_28,&local_48,&local_38);
  if ((local_28 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_28,&DAT_01d25b10);
  }
  param_1[2] = local_20;
  *param_1 = 1;
  param_1[1] = 0;
  param_1[3] = local_1c;
  return;
}

