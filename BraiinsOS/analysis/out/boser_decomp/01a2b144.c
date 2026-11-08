// FUN_01a2b144 @ 01a2b144 size=152 calls_out=4 calls_in=0
// strings: 

void FUN_01a2b144(int param_1,int param_2,undefined4 param_3)

{
  int local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined1 auStack_24 [8];
  int local_1c;
  int local_18;
  
  if ((param_1 == 0 && param_2 == 0) ||
     (FUN_01a2b1e0(&local_30,param_2,param_1,param_2), local_30 == 0)) {
    FUN_0128e808(&local_40);
  }
  else {
    local_40 = local_30;
    uStack_3c = uStack_2c;
    uStack_38 = uStack_28;
  }
  FUN_01298334(auStack_24,param_3,&local_40);
  if (0x2a2fe < local_18 + local_1c + 0x1517fU) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01ce21ec);
  }
  return;
}

