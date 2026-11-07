// FUN_0067a608 @ 0067a608 size=188 calls_out=4 calls_in=2
// strings: 

void FUN_0067a608(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  bool bVar2;
  char local_28;
  char local_27;
  char local_26;
  int local_24;
  int local_20;
  int local_1c;
  undefined4 uStack_18;
  
  FUN_00677900(&local_28);
  if (local_28 != '\x01') {
    bVar2 = local_27 == '\x01';
    if (bVar2) {
      local_27 = local_26;
    }
    if (bVar2 && local_27 == 'n') {
      FUN_0157653c(param_2 + 0xc);
      local_24 = FUN_00677b98(param_2,"ull",3);
      if (local_24 == 0) {
        *param_1 = 0;
        param_1[1] = 0;
        return;
      }
    }
    else {
      FUN_0069c298(&local_20,param_2);
      if (local_20 != 0) {
        param_1[1] = local_20;
        param_1[2] = local_1c;
        param_1[3] = uStack_18;
        uVar1 = 0;
        goto LAB_0067a6b8;
      }
      local_24 = local_1c;
    }
  }
  param_1[1] = local_24;
  uVar1 = 1;
LAB_0067a6b8:
  *param_1 = uVar1;
  return;
}

