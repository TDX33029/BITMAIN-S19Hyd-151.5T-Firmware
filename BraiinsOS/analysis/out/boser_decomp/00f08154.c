// FUN_00f08154 @ 00f08154 size=160 calls_out=4 calls_in=1
// strings: Missing or invalid authentication token

void FUN_00f08154(int *param_1,int param_2)

{
  int iVar1;
  int local_88;
  int local_84;
  int local_80;
  undefined1 auStack_7c [92];
  
  iVar1 = FUN_011de1f0(*(undefined4 *)(param_2 + 0x40));
  if (iVar1 == 0) {
    FUN_01a71aac(&local_88,0x10,"Missing or invalid authentication token",0x27);
    if (local_88 != 3 || local_84 != 0) {
      FUN_01bed4e2(param_1 + 3,auStack_7c,0x5c);
      *param_1 = local_88;
      param_1[1] = local_84;
      param_1[2] = local_80;
      FUN_00f9604c(param_2);
      return;
    }
  }
  FUN_01bed4e2(param_1 + 2,param_2,0x48);
  *param_1 = 3;
  param_1[1] = 0;
  return;
}

