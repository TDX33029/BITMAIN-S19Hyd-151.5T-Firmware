// FUN_0175e108 @ 0175e108 size=324 calls_out=4 calls_in=1
// strings: 

undefined4
FUN_0175e108(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,uint param_6,undefined4 param_7)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  bool bVar4;
  undefined1 local_180;
  undefined1 local_17f;
  undefined1 auStack_17e [346];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  if (param_6 < 0x100) {
    bVar4 = param_6 != 0;
    local_17f = (undefined1)param_6;
    if (!bVar4) {
      param_6 = 2;
    }
    local_180 = 0;
    uVar3 = param_6;
    if (bVar4) {
      if (((auStack_17e < param_5) && (param_5 < auStack_17e + param_6)) ||
         ((param_5 < auStack_17e && (auStack_17e < param_5 + param_6)))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x175e248);
        (*pcVar1)();
      }
      uVar3 = param_6 + 2;
      FUN_016dd1aa(auStack_17e,param_5,param_6);
    }
    uVar2 = FUN_0175cc30(param_1,param_2,param_3,param_4,&local_180,uVar3,param_7,0);
  }
  else {
    uVar2 = 0xffffffff;
  }
  FUN_0177aaa0(&local_180,0x14c);
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar2;
}

