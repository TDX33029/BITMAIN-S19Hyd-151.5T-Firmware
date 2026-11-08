// FUN_01afdf70 @ 01afdf70 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_01afdf70(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  local_1c = DAT_01d53560;
  uVar3 = FUN_01afddc0(param_1,auStack_24,1,0);
  uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
  if ((int)uVar3 != 0) {
    uVar3 = FUN_01afd684(auStack_24);
    uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
    if ((int)uVar3 == 1) {
      uVar3 = FUN_01afd674(auStack_24);
      uVar2 = (undefined4)((ulonglong)uVar3 >> 0x20);
      if (0xfd < (byte)(*(char *)uVar3 - 1U)) {
        *param_2 = (uint)(*(char *)uVar3 != '\0');
        uVar1 = 1;
        goto LAB_01afdfc0;
      }
    }
  }
  uVar1 = 0;
LAB_01afdfc0:
  if ((local_1c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_1c ^ DAT_01d53560,0);
  }
  return;
}

