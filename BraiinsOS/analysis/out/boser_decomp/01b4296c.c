// FUN_01b4296c @ 01b4296c size=480 calls_out=7 calls_in=0
// strings: 

undefined4
FUN_01b4296c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5
            ,undefined4 param_6,int param_7,undefined4 param_8)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined1 auStack_f8 [204];
  uint local_2c;
  
  bVar1 = true;
  local_2c = DAT_01d53560;
  uVar5 = FUN_01b3d290();
  uVar2 = (int)uVar5 + 4;
  uVar5 = CONCAT44((int)((ulonglong)uVar5 >> 0x20),uVar2 * -0x33333333);
  uVar2 = uVar2 / 5;
  uVar4 = uVar2;
  while (uVar4 = uVar4 - 1, uVar4 < uVar2) {
    if (!bVar1) {
      FUN_01b3ee18(param_1,param_2,param_2);
    }
    FUN_01b3fea8(param_1,auStack_f8,param_3,param_4,uVar4);
    if (bVar1) {
      uVar5 = FUN_01b424bc(param_2,auStack_f8);
    }
    else {
      uVar5 = FUN_01b3f8c0(param_1,param_2,param_2,auStack_f8);
    }
    if (param_5 != 0) {
      FUN_01b3fea8(param_1,auStack_f8,param_5,param_6,uVar4);
      uVar5 = FUN_01b3f8c0(param_1,param_2,param_2,auStack_f8);
    }
    if (param_7 != 0) {
      FUN_01b3fea8(param_1,auStack_f8,param_7,param_8,uVar4);
      uVar5 = FUN_01b3f8c0(param_1,param_2,param_2,auStack_f8);
    }
    bVar1 = false;
  }
  if (bVar1) {
    if (local_2c == DAT_01d53560) {
      uVar3 = FUN_01b425e0(param_1,param_2,0,0);
      return uVar3;
    }
  }
  else if (local_2c == DAT_01d53560) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),local_2c ^ DAT_01d53560,0);
}

