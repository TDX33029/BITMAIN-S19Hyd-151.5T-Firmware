// FUN_0171e0b0 @ 0171e0b0 size=308 calls_out=7 calls_in=5
// strings: 

undefined8 FUN_0171e0b0(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_a4 [136];
  int local_1c;
  
  local_1c = DAT_018ddaf8;
  bVar2 = param_4 == 0x11;
  if (param_4 < 0x12) {
    bVar2 = *(uint *)(param_5 + 0x18) == param_4;
  }
  if (bVar2) {
    if (param_4 < 4) {
      if (param_2 == param_3) {
        FUN_0171df60(auStack_a4);
      }
      else {
        FUN_0171d9b8(auStack_a4,param_4 << 1,param_2,param_4,param_3,param_4);
      }
      iVar1 = FUN_0171ac28(param_1,param_4,auStack_a4,param_4 << 1,param_5);
      if (iVar1 == 0) goto LAB_0171e1dc;
      FUN_0177aaa0(auStack_a4,param_4 << 3);
    }
    else {
      iVar1 = FUN_0171cdb8();
      if (iVar1 == 0) goto LAB_0171e1dc;
    }
    if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2b78();
    }
    return 0;
  }
LAB_0171e1dc:
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

