// FUN_0141d2a4 @ 0141d2a4 size=96 calls_out=2 calls_in=10
// strings: size overflows MAX_SIZE

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0141d2a4(undefined4 *param_1)

{
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined1 uStack_11;
  
  uStack_18 = CONCAT13(uStack_18._3_1_,CONCAT12(uStack_18._2_1_,(undefined2)uStack_18));
  FUN_0141cbc4(&local_30);
  if (uStack_18._2_1_ == '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("size overflows MAX_SIZE",0x17,&uStack_11,&DAT_01d2f38c);
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = uStack_28;
  param_1[3] = local_24;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  param_1[6] = uStack_18;
  return;
}

