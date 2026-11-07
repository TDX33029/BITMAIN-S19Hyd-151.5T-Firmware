// FUN_01b27628 @ 01b27628 size=400 calls_out=7 calls_in=0
// strings: 

undefined4 FUN_01b27628(int param_1,int param_2,uint param_3,undefined4 param_4,undefined4 *param_5)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_130 [244];
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_3 < 8) {
    uVar2 = FUN_01b7acd0();
    return uVar2;
  }
  if ((param_3 & 7) < 6) {
    uVar4 = param_3 & 0xfffffff8;
  }
  else {
    uVar4 = param_3;
  }
  FUN_01b7ab80(auStack_130,param_4);
  FUN_01b74ec0(param_1,param_2,uVar4,auStack_130,param_5);
  FUN_01b6b174(auStack_130,0xf4);
  if ((param_5 < &uStack_30 && &local_3c < param_5) ||
     ((param_5 < &local_3c && (&local_3c < param_5 + 3)))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0,0x1b27728);
    (*pcVar1)();
  }
  local_3c = *param_5;
  uStack_38 = param_5[1];
  local_34 = param_5[2];
  iVar3 = FUN_01b27554(param_5 + 3);
  FUN_01b27488(&uStack_30,iVar3 + uVar4);
  FUN_01b7acd0(param_1 + uVar4 * 0x10,param_2 + uVar4 * 0x10,param_3 - uVar4,param_4,&local_3c);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

