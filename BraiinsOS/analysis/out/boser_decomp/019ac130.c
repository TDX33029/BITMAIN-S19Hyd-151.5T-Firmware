// FUN_019ac130 @ 019ac130 size=200 calls_out=3 calls_in=142
// strings: 

void FUN_019ac130(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_01bf0582(param_2,&local_20);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    local_14 = *puVar2;
    local_18 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01d27e94);
  }
  if (&DAT_3b9ac9ff < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01d27e94);
  }
  param_1[2] = (int)local_1c;
  *param_1 = local_20;
  param_1[1] = local_20 >> 0x1f;
  return;
}

