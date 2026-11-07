// FUN_01b3d164 @ 01b3d164 size=248 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_01b3d164(undefined4 param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_68 [68];
  int local_24;
  
  local_24 = DAT_01d53560;
  puVar1 = (undefined4 *)FUN_01b3d100();
  uVar2 = FUN_01b2b8d0();
  uVar3 = uVar2 + 7 >> 3;
  if (param_4 <= uVar3) {
    uVar3 = param_4;
  }
  FUN_01b2b99c(param_2,puVar1[1],param_3,uVar3);
  if (uVar2 < uVar3 << 3) {
    FUN_01b33bdc(param_2,param_2,8 - (uVar2 & 7),puVar1[1]);
  }
  FUN_01b30cc4(param_2,0,*puVar1,auStack_68,puVar1[1]);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

