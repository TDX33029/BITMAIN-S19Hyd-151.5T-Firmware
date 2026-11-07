// FUN_01b33450 @ 01b33450 size=292 calls_out=7 calls_in=5
// strings: 

undefined8 FUN_01b33450(undefined4 param_1,int param_2,int param_3,uint param_4,int param_5)

{
  int iVar1;
  bool bVar2;
  undefined1 auStack_ac [136];
  int local_24;
  
  local_24 = DAT_01d53560;
  bVar2 = param_4 == 0x11;
  if (param_4 < 0x12) {
    bVar2 = *(uint *)(param_5 + 0x18) == param_4;
  }
  if (bVar2) {
    if (param_4 < 4) {
      iVar1 = param_4 << 1;
      if (param_2 == param_3) {
        FUN_01b33318(auStack_ac,iVar1);
      }
      else {
        FUN_01b32d1c(auStack_ac,iVar1,param_2,param_4,param_3,param_4);
      }
      iVar1 = FUN_01b30ae8(param_1,param_4,auStack_ac,iVar1,param_5);
      if (iVar1 != 0) {
        FUN_01b6b174(auStack_ac,param_4 << 3);
        goto LAB_01b334c4;
      }
    }
    else {
      iVar1 = FUN_01b32828();
      if (iVar1 != 0) {
LAB_01b334c4:
        if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
          FUN_01be31f4();
        }
        return 0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

