// FUN_0178f4d4 @ 0178f4d4 size=312 calls_out=7 calls_in=2
// strings: 

undefined4
FUN_0178f4d4(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  uint local_c;
  
  local_c = DAT_018ddaf8;
  local_20 = 0;
  uStack_1c = 0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  FUN_0178f2a8(param_1,param_2,param_3,param_4);
  FUN_0178edd8(param_1,&local_20);
  uVar2 = FUN_0178ed90(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),local_20,
                       uStack_1c);
  local_18 = FUN_01846088((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),*(undefined4 *)(param_1 + 0x48)
                          ,*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 8) = local_20;
  *(undefined4 *)(param_1 + 0xc) = uStack_1c;
  uVar2 = FUN_0178eab8(param_1,param_1,(int)local_18,(int)((ulonglong)local_18 >> 0x20));
  uVar1 = FUN_0178ee7c(param_1,(int)((ulonglong)uVar2 >> 0x20),(undefined4)local_18,local_18._4_4_,
                       param_3,param_4,(int)uVar2);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = local_18;
  }
  if ((local_c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,local_c ^ DAT_018ddaf8,0);
  }
  return (int)uVar2;
}

