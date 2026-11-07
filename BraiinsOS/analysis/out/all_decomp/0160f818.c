// FUN_0160f818 @ 0160f818 size=212 calls_out=3 calls_in=1
// strings: 

void FUN_0160f818(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int local_24;
  int local_20;
  undefined4 local_1c;
  
  puVar2 = (undefined4 *)*param_2;
  if ((uint)(param_2[1] - (int)puVar2) < 4) {
    local_1c = 4;
    param_1[1] = 0x80000005;
    param_1[2] = puVar2;
  }
  else {
    local_24 = -0x7ffffffb;
    FUN_00f2cc28(&local_24);
    uVar1 = *puVar2;
    *param_2 = puVar2 + 1;
    FUN_01622628(&local_24,param_2);
    if (local_24 == -0x7ffffff6) {
      if (local_20 == 0) {
        FUN_01613578(param_1 + 1,1,&DAT_018ab9d8,&DAT_018ab990);
        *param_1 = 1;
        return;
      }
      param_1[1] = local_20;
      param_1[2] = local_1c;
      param_1[3] = uVar1;
      *param_1 = 0;
      return;
    }
    param_1[1] = local_24;
    param_1[2] = local_20;
  }
  param_1[3] = local_1c;
  *param_1 = 1;
  return;
}

