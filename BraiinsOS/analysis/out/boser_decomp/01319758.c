// FUN_01319758 @ 01319758 size=128 calls_out=3 calls_in=1
// strings: `NaiveDate + TimeDelta` overflowed

void FUN_01319758(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar1 = (uint)(param_4 < 0 && 0 < param_5);
  uVar3 = FUN_01bf0fb0(param_3 + uVar1,param_4 + (uint)CARRY4(param_3,uVar1),0x15180,0);
  if (((int)((ulonglong)uVar3 >> 0x20) - (uint)((uint)uVar3 < 0x80000000) != -1) ||
     (iVar2 = FUN_01291bd0(param_1,(uint)uVar3), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("`NaiveDate + TimeDelta` overflowed",0x22,&DAT_01ce4c74);
  }
  return;
}

