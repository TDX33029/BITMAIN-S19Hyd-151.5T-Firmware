// FUN_01b45e64 @ 01b45e64 size=592 calls_out=8 calls_in=0
// strings: 

undefined8
FUN_01b45e64(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  undefined1 auStack_299c [204];
  undefined1 auStack_28d0 [2220];
  undefined4 local_2024;
  undefined1 auStack_1b44 [2848];
  undefined4 local_1024;
  undefined1 auStack_db8 [3468];
  int local_2c;
  
  local_2c = DAT_01d53560;
  local_2024 = param_1;
  local_1024 = param_1;
  FUN_01b42b60(param_1,auStack_28d0,param_3,0);
  FUN_01b42b60(param_1,auStack_1b44,param_5);
  if (param_7 != 0) {
    FUN_01b42b60(param_1,auStack_db8,param_7);
  }
  bVar1 = true;
  uVar2 = FUN_01b3d268(param_1);
  uVar3 = uVar2;
  while( true ) {
    if (uVar3 * -0x33333333 < 0x33333334) {
      FUN_01b45cac(param_1,auStack_299c,auStack_28d0,param_4,uVar3);
      if (bVar1) {
        FUN_01b424bc(param_2,auStack_299c);
      }
      else {
        FUN_01b3f8c0(param_1,param_2,param_2,auStack_299c);
      }
      FUN_01b45cac(param_1,auStack_299c,auStack_1b44,param_6,uVar3);
      FUN_01b3f8c0(param_1,param_2,param_2,auStack_299c);
      if (param_7 != 0) {
        FUN_01b45cac(param_1,auStack_299c,auStack_db8,param_8,uVar3);
        FUN_01b3f8c0(param_1,param_2,param_2,auStack_299c);
      }
      bVar1 = false;
    }
    uVar3 = uVar3 - 1;
    if (uVar2 < uVar3) break;
    if (!bVar1) {
      FUN_01b3ee18(param_1,param_2,param_2);
    }
  }
  if (bVar1) {
    FUN_01b425e0(param_1,param_2);
  }
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

