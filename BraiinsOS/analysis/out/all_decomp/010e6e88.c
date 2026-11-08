// FUN_010e6e88 @ 010e6e88 size=164 calls_out=3 calls_in=0
// strings: 

void FUN_010e6e88(int *param_1,undefined4 *param_2)

{
  undefined2 uVar1;
  undefined2 *puVar2;
  int local_30;
  undefined2 *puStack_2c;
  int local_28;
  undefined4 local_24 [3];
  
  puVar2 = (undefined2 *)*param_2;
  if ((uint)(param_2[1] - (int)puVar2) < 2) {
    local_30 = -0x7ffffffb;
    local_28 = 2;
    puStack_2c = puVar2;
  }
  else {
    local_24[0] = 0x80000005;
    FUN_00f2cc28(local_24);
    uVar1 = *puVar2;
    *param_2 = puVar2 + 1;
    FUN_010e576c(&local_30,param_2,uVar1);
    if (local_30 == -0x7ffffff6) {
      if (puStack_2c == (undefined2 *)0x0) {
        FUN_01613578(param_1,0,&DAT_01885c70,&DAT_018ab990);
        return;
      }
      local_30 = -0x7ffffff6;
    }
  }
  *param_1 = local_30;
  param_1[1] = (int)puStack_2c;
  param_1[2] = local_28;
  return;
}

