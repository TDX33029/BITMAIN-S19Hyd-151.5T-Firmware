// FUN_01658f94 @ 01658f94 size=116 calls_out=2 calls_in=0
// strings: 

void FUN_01658f94(int *param_1)

{
  undefined4 *puVar1;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  
  FUN_0167a38c(&local_30,&DAT_004c1929,0x4f);
  if (local_30 == 0) {
    puVar1 = (undefined4 *)((uint)&local_30 | 4);
    uStack_20 = *puVar1;
    uStack_1c = puVar1[1];
    uStack_18 = puVar1[2];
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&uStack_20,&DAT_01d06ce0);
  }
  *param_1 = local_30;
  param_1[1] = iStack_2c;
  param_1[2] = iStack_28;
  param_1[3] = iStack_24;
  return;
}

