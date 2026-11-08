// FUN_01143a18 @ 01143a18 size=160 calls_out=1 calls_in=1
// strings: 

void FUN_01143a18(char *param_1)

{
  char local_18;
  undefined4 uStack_17;
  undefined4 uStack_13;
  undefined4 uStack_f;
  undefined3 uStack_b;
  
  FUN_01151664(&local_18);
  if (local_18 == '\t') {
    *(uint *)(param_1 + 0xc) = CONCAT31(uStack_b,uStack_f._3_1_);
    *(uint *)(param_1 + 8) = CONCAT31((undefined3)uStack_f,uStack_13._3_1_);
    *(uint *)(param_1 + 4) = CONCAT31((undefined3)uStack_13,uStack_17._3_1_);
    *param_1 = '\t';
    return;
  }
  *(uint *)(param_1 + 0xc) = CONCAT31(uStack_b,uStack_f._3_1_);
  *(undefined4 *)(param_1 + 9) = uStack_f;
  *(undefined4 *)(param_1 + 5) = uStack_13;
  *(undefined4 *)(param_1 + 1) = uStack_17;
  *param_1 = local_18;
  return;
}

