// FUN_01761760 @ 01761760 size=412 calls_out=7 calls_in=1
// strings: 

undefined4
FUN_01761760(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
            undefined1 *param_5,uint param_6,undefined4 param_7)

{
  code *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int unaff_r10;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined1 auStack_1be [350];
  undefined1 auStack_60 [52];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_6 < 0x100) {
    if (param_6 == 0) {
      unaff_r10 = 2;
    }
    local_1bf = (undefined1)param_6;
    local_1c0 = 0;
    if (param_6 != 0) {
      if (((auStack_1be < param_5) && (param_5 < auStack_1be + param_6)) ||
         ((param_5 < auStack_1be && (auStack_1be < param_5 + param_6)))) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0,0x17618f4);
        (*pcVar1)();
      }
      unaff_r10 = param_6 + 2;
      FUN_016dd1aa(auStack_1be,param_5,param_6);
    }
    iVar2 = FUN_0174bccc(auStack_60,0x20);
    if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
      FUN_016d2c24();
    }
    iVar2 = FUN_0175f830(param_1,param_2,param_3,param_4,&local_1c0,unaff_r10,auStack_60,param_7,0);
    uVar3 = 0;
    if (iVar2 == 0) goto LAB_0176182c;
  }
  *param_2 = 0;
  uVar3 = 0xffffffff;
  FUN_016dd606(param_1,0,0xced);
LAB_0176182c:
  FUN_0177aaa0(auStack_60,0x20);
  FUN_0177aaa0(&local_1c0,0x14c);
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar3;
}

