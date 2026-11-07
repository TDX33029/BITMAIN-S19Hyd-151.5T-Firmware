// FUN_01afe0dc @ 01afe0dc size=232 calls_out=2 calls_in=3
// strings: 

void FUN_01afe0dc(undefined4 *param_1,uint *param_2)

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
  local_14 = DAT_01d53560;
  uVar3 = FUN_01afd780(&local_1c,&local_1e,&PTR_01d3b2b0,0);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  uVar1 = 0;
  if ((int)uVar3 == 0) goto LAB_01afe178;
  if (param_2 != (uint *)0x0) {
    *param_2 = (uint)(int)local_1e >> 0x1f;
  }
  uVar3 = FUN_01afd780(&local_1c,&local_1d);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 == 0) {
LAB_01afe1a0:
    uVar1 = 1;
  }
  else {
    if (local_1e == '\0') {
      uVar1 = (uint)local_1d;
    }
    else {
      if (local_1e != -1) goto LAB_01afe1a0;
      uVar1 = ~(int)local_1d;
    }
    uVar1 = uVar1 >> 0x1f;
  }
LAB_01afe178:
  if ((local_14 ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_14 ^ DAT_01d53560,0);
  }
  return;
}

