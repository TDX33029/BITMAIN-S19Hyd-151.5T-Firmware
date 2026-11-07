// FUN_01896d58 @ 01896d58 size=240 calls_out=4 calls_in=3
// strings: 

undefined8
FUN_01896d58(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6,uint param_7,uint param_8)

{
  int iVar1;
  int unaff_r6;
  code *pcVar2;
  undefined4 uVar3;
  undefined1 auStack_48 [19];
  char local_35;
  undefined1 auStack_34 [16];
  
  uVar3 = 0;
  if (param_8 <= param_7) {
    pcVar2 = *(code **)(*(int *)(param_1 + 0x210) + 8);
    DataMemoryBarrier(0xb);
    if (DAT_01d51afc != '\x02') {
      FUN_0188ff90();
    }
    (*pcVar2)(&local_35,param_1,param_2,param_3,param_4,param_6,param_7,param_8);
    unaff_r6 = param_3;
    if (local_35 != '\x01') {
      unaff_r6 = param_7 - param_8;
      FUN_01bed4e2(auStack_48,auStack_34,0x10);
      iVar1 = FUN_01bd5550(auStack_48,param_5,0x10);
      if (iVar1 == 0) {
        uVar3 = param_6;
      }
      else if (unaff_r6 != 0) {
        FUN_01bed93e(param_6,0,unaff_r6);
      }
    }
  }
  return CONCAT44(unaff_r6,uVar3);
}

