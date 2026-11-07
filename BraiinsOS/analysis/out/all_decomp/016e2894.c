// FUN_016e2894 @ 016e2894 size=240 calls_out=2 calls_in=3
// strings: 

void FUN_016e2894(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char local_1e;
  char local_1d;
  undefined4 local_1c;
  undefined4 uStack_18;
  uint local_14;
  
  local_1c = *param_1;
  uStack_18 = param_1[1];
  local_14 = DAT_018ddaf8;
  uVar3 = FUN_016e1f3c(&local_1c,&local_1e,&PTR_018bc3f4,0);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar1 = 0;
  if ((int)uVar3 == 0) goto LAB_016e2920;
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)(int)local_1e >> 0x1f;
  }
  uVar3 = FUN_016e1f3c(&local_1c,&local_1d);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    if (local_1e == '\0') {
      uVar1 = (uint)(int)local_1d >> 0x1f;
      goto LAB_016e2920;
    }
    if (local_1e == -1) {
      uVar1 = (uint)~(int)local_1d >> 0x1f;
      goto LAB_016e2920;
    }
  }
  uVar1 = 1;
LAB_016e2920:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,uVar2,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

