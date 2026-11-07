// FUN_018e9d90 @ 018e9d90 size=80 calls_out=3 calls_in=1
// strings: 

void FUN_018e9d90(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_58 [28];
  undefined1 local_3c [24];
  
  uVar2 = FUN_018e9a80();
  FUN_0190d8e0((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),param_2);
  local_3c[0] = 0x19;
  FUN_01931148(auStack_58,local_3c,param_2);
  iVar1 = 0x13;
  if (0x80000000 < *param_1) {
    iVar1 = *param_1 + 0x7fffffff;
  }
                    /* WARNING: Could not recover jumptable at 0x018e9ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018e9de0 + *(int *)(&DAT_018e9de0 + iVar1 * 4)))();
  return;
}

