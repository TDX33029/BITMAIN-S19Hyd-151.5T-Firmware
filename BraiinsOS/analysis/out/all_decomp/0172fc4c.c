// FUN_0172fc4c @ 0172fc4c size=1064 calls_out=8 calls_in=5
// strings: 

undefined8 FUN_0172fc4c(undefined4 param_1,int param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_4b0 [68];
  undefined1 auStack_46c [68];
  undefined1 auStack_428 [68];
  undefined1 auStack_3e4 [68];
  undefined1 auStack_3a0 [68];
  undefined1 auStack_35c [68];
  undefined1 auStack_318 [68];
  undefined1 auStack_2d4 [68];
  undefined1 auStack_290 [68];
  undefined1 auStack_24c [68];
  undefined1 auStack_208 [68];
  undefined1 auStack_1c4 [68];
  undefined1 auStack_180 [68];
  undefined1 auStack_13c [68];
  undefined1 auStack_f8 [68];
  undefined1 auStack_b4 [68];
  undefined1 auStack_70 [68];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  if (param_3 != param_4) {
    iVar6 = param_3 + 0x88;
    iVar5 = param_4 + 0x88;
    uVar1 = FUN_0172f2c0(param_1,iVar6,&PTR_018bc3f4,0);
    uVar2 = FUN_0172f2c0(param_1,iVar5);
    FUN_0171e360(param_1,auStack_3e4,iVar6);
    FUN_0171e360(param_1,auStack_3a0,iVar5);
    FUN_0171e30c(param_1,auStack_35c,param_3,auStack_3a0);
    FUN_0172ec3c(param_1,auStack_318,iVar6,iVar5);
    FUN_0171e360(param_1,auStack_318,auStack_318);
    FUN_0172ece8(param_1,auStack_318,auStack_318,auStack_3e4);
    FUN_0172ece8(param_1,auStack_318,auStack_318,auStack_3a0);
    FUN_0171e30c(param_1,auStack_2d4,iVar5,auStack_3a0);
    FUN_0171e30c(param_1,auStack_2d4,auStack_2d4,param_3 + 0x44);
    FUN_0171e30c(param_1,auStack_290,param_4,auStack_3e4);
    FUN_0172ece8(param_1,auStack_24c,auStack_290,auStack_35c);
    uVar3 = FUN_0172f2c0(param_1,auStack_24c);
    FUN_0171e30c(param_1,auStack_428,auStack_24c,auStack_318);
    FUN_0171e30c(param_1,auStack_208,iVar6,auStack_3e4);
    FUN_0171e30c(param_1,auStack_1c4,param_4 + 0x44,auStack_208);
    FUN_0172ece8(param_1,auStack_180,auStack_1c4,auStack_2d4);
    FUN_0172ec3c(param_1,auStack_180,auStack_180,auStack_180);
    uVar4 = FUN_0172f2c0(param_1,auStack_180);
    if ((uVar1 & uVar2 & ~(uVar3 | uVar4)) == 0) {
      FUN_0172ec3c(param_1,auStack_13c,auStack_24c,auStack_24c);
      FUN_0171e360(param_1,auStack_13c,auStack_13c);
      FUN_0171e30c(param_1,auStack_f8,auStack_24c,auStack_13c);
      FUN_0171e30c(param_1,auStack_b4,auStack_35c,auStack_13c);
      FUN_0171e360(param_1,auStack_4b0,auStack_180);
      FUN_0172ece8(param_1,auStack_4b0,auStack_4b0,auStack_f8);
      FUN_0172ece8(param_1,auStack_4b0,auStack_4b0,auStack_b4);
      FUN_0172ece8(param_1,auStack_4b0,auStack_4b0,auStack_b4);
      FUN_0172ece8(param_1,auStack_46c,auStack_b4,auStack_4b0);
      FUN_0171e30c(param_1,auStack_46c,auStack_46c,auStack_180);
      FUN_0171e30c(param_1,auStack_70,auStack_2d4,auStack_f8);
      FUN_0172ece8(param_1,auStack_46c,auStack_46c,auStack_70);
      FUN_0172ece8(param_1,auStack_46c,auStack_46c,auStack_70);
      FUN_0172fba8(param_1,auStack_4b0,uVar1,auStack_4b0,param_4);
      FUN_0172fba8(param_1,param_2,uVar2,auStack_4b0,param_3);
      FUN_0172fba8(param_1,auStack_46c,uVar1,auStack_46c,param_4 + 0x44);
      FUN_0172fba8(param_1,param_2 + 0x44,uVar2,auStack_46c,param_3 + 0x44);
      FUN_0172fba8(param_1,auStack_428,uVar1,auStack_428,iVar5);
      FUN_0172fba8(param_1,param_2 + 0x88,uVar2,auStack_428,iVar6);
      goto LAB_0173001c;
    }
  }
  FUN_0172ed94(param_1,param_2,param_3);
LAB_0173001c:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

