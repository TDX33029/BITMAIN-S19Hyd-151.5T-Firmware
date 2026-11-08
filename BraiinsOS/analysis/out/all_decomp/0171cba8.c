// FUN_0171cba8 @ 0171cba8 size=312 calls_out=6 calls_in=5
// strings: 

undefined8
FUN_0171cba8(undefined4 param_1,uint param_2,undefined1 *param_3,uint param_4,int param_5)

{
  code *pcVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_ac [136];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  bVar3 = param_2 == 0x11;
  if (param_2 < 0x12) {
    bVar3 = *(uint *)(param_5 + 0x18) == param_2;
  }
  if ((bVar3) && (param_4 <= param_2 << 1)) {
    FUN_016dd606(auStack_ac,0,0x88);
    iVar2 = param_4 * 4;
    if (iVar2 != 0) {
      if (((auStack_ac < param_3) && (param_3 < auStack_ac + iVar2)) ||
         ((param_3 < auStack_ac && (auStack_ac < param_3 + iVar2)))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x171ccd4);
        (*pcVar1)();
      }
      FUN_016dd1aa(auStack_ac,param_3);
    }
    iVar2 = FUN_0171ac28(param_1,param_2,auStack_ac,param_2 << 1,param_5);
    if (iVar2 != 0) {
      FUN_0177aaa0(auStack_ac,param_2 << 3);
      if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78();
      }
      return 0;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_016d2c24();
}

