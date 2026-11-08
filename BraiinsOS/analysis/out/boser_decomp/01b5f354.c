// FUN_01b5f354 @ 01b5f354 size=316 calls_out=6 calls_in=1
// strings: 

undefined4
FUN_01b5f354(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,uint param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined1 auStack_1be [350];
  undefined1 auStack_60 [52];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_6 < 0x100) {
    local_1bf = (undefined1)param_6;
    local_1c0 = 0;
    if (param_6 != 0) {
      FUN_01b269d8(auStack_1be,param_5,param_6);
    }
    FUN_01b54f18(auStack_60);
    iVar1 = FUN_01b5ebb0(param_1,param_2,param_3,param_4,&local_1c0,param_6 + 2,auStack_60,param_7,0
                        );
    uVar2 = 0;
    if (iVar1 == 0) goto LAB_01b5f3cc;
  }
  uVar2 = 0xffffffff;
  *param_2 = 0;
  FUN_01b25814(param_1,0xced);
LAB_01b5f3cc:
  FUN_01b6b174(auStack_60,0x20);
  FUN_01b6b174(&local_1c0,0x14c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar2;
}

