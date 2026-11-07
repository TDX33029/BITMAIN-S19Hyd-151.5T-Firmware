// FUN_01b7db54 @ 01b7db54 size=312 calls_out=7 calls_in=2
// strings: 

undefined4
FUN_01b7db54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined8 *param_5)

{
  undefined4 uVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined8 local_18;
  uint local_c;
  
  local_c = DAT_01d53560;
  local_20 = 0;
  uStack_1c = 0;
  local_18._0_4_ = 0;
  local_18._4_4_ = 0;
  FUN_01b7d928(param_1,param_2,param_3,param_4);
  FUN_01b7d458(param_1,&local_20);
  uVar2 = FUN_01b7d410(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),local_20,
                       uStack_1c);
  local_18 = FUN_01bf0ff0((int)uVar2,(int)((ulonglong)uVar2 >> 0x20),*(undefined4 *)(param_1 + 0x48)
                          ,*(undefined4 *)(param_1 + 0x4c));
  *(undefined4 *)(param_1 + 8) = local_20;
  *(undefined4 *)(param_1 + 0xc) = uStack_1c;
  uVar2 = FUN_01b7d138(param_1,param_1,(int)local_18,(int)((ulonglong)local_18 >> 0x20));
  uVar1 = FUN_01b7d4fc(param_1,(int)((ulonglong)uVar2 >> 0x20),(undefined4)local_18,local_18._4_4_,
                       param_3,param_4,(int)uVar2);
  if (param_5 != (undefined8 *)0x0) {
    *param_5 = local_18;
  }
  if ((local_c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,local_c ^ DAT_01d53560,0);
  }
  return (int)uVar2;
}

