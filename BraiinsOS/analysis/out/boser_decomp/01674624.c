// FUN_01674624 @ 01674624 size=180 calls_out=3 calls_in=1
// strings: 

void FUN_01674624(int *param_1,int *param_2)

{
  int iVar1;
  int local_28;
  int local_24;
  int iStack_20;
  undefined4 local_1c;
  int local_18;
  undefined4 local_14;
  
  FUN_01278730(&local_1c);
  if ((char)local_1c != '\x01') {
    if (local_1c._1_1_ == '\0') {
      *param_1 = -0x80000000;
      return;
    }
    iVar1 = *param_2;
    *(undefined4 *)(iVar1 + 8) = 0;
    *(int *)(iVar1 + 0x14) = *(int *)(iVar1 + 0x14) + 1;
    FUN_01968828(&local_1c,iVar1 + 0xc);
    if (local_1c != 2) {
      FUN_012c1060(&local_28,local_18,local_14);
      if (local_28 != -0x80000000) {
        *param_1 = local_28;
        param_1[1] = local_24;
        param_1[2] = iStack_20;
        return;
      }
      local_18 = local_24;
    }
  }
  *param_1 = -0x7fffffff;
  param_1[1] = local_18;
  return;
}

