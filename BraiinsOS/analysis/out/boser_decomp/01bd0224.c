// FUN_01bd0224 @ 01bd0224 size=868 calls_out=11 calls_in=3
// strings: 

undefined8 FUN_01bd0224(int param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_r1;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_2cc [48];
  undefined1 auStack_29c [48];
  undefined1 auStack_26c [48];
  undefined1 auStack_23c [48];
  undefined1 auStack_20c [48];
  undefined1 auStack_1dc [48];
  undefined1 auStack_1ac [48];
  undefined1 auStack_17c [48];
  undefined1 auStack_14c [48];
  undefined1 auStack_11c [48];
  undefined1 auStack_ec [48];
  undefined1 auStack_bc [48];
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [48];
  int local_2c;
  
  local_2c = DAT_01d53560;
  iVar4 = param_2 + 0x60;
  iVar5 = param_3 + 0x60;
  uVar1 = FUN_01bd4ea8(iVar4,0xc);
  uVar2 = FUN_01bd4ea8(iVar5,0xc);
  FUN_01bcfd10(auStack_1dc,iVar5);
  FUN_01bcfd10(auStack_20c,iVar4);
  FUN_01bcfcb0(auStack_23c,auStack_1dc,iVar5);
  FUN_01bcfcb0(auStack_29c,auStack_20c,iVar4);
  FUN_01bcfcb0(auStack_23c,auStack_23c,param_2 + 0x30);
  FUN_01bcfcb0(auStack_29c,auStack_29c,param_3 + 0x30);
  FUN_01bcfc60(auStack_17c,auStack_29c,auStack_23c);
  FUN_01bcfcb0(auStack_26c,param_2,auStack_1dc);
  FUN_01bcfcb0(auStack_2cc,param_3,auStack_20c);
  FUN_01bcfc60(auStack_1ac,auStack_2cc,auStack_26c);
  uVar3 = FUN_01bd4f04(auStack_26c,auStack_2cc,0xc);
  if ((uVar3 & ~(uVar2 | uVar1)) == 0) {
    FUN_01bcfd10(auStack_11c,auStack_17c);
    FUN_01bcfcb0(auStack_5c,auStack_1ac,iVar4);
    FUN_01bcfd10(auStack_14c,auStack_1ac);
    FUN_01bcfcb0(auStack_5c,auStack_5c,iVar5);
    FUN_01bcfcb0(auStack_ec,auStack_14c,auStack_1ac);
    FUN_01bcfcb0(auStack_2cc,auStack_26c,auStack_14c);
    FUN_01bd5320(auStack_14c,auStack_2cc,&DAT_005642d4,0xc);
    FUN_01bcfc60(auStack_bc,auStack_11c,auStack_14c);
    FUN_01bcfc60(auStack_bc,auStack_bc,auStack_ec);
    FUN_01bcfc60(auStack_8c,auStack_2cc,auStack_bc);
    FUN_01bcfcb0(auStack_29c,auStack_23c,auStack_ec);
    FUN_01bcfcb0(auStack_8c,auStack_17c,auStack_8c);
    FUN_01bcfc60(auStack_8c,auStack_8c,auStack_29c);
    FUN_01bcfc14(auStack_bc,param_3,uVar1);
    FUN_01bcfc14(auStack_8c,param_3 + 0x30,uVar1);
    FUN_01bcfc14(auStack_5c,iVar5,uVar1);
    FUN_01bcfc14(auStack_bc,param_2,uVar2);
    FUN_01bcfc14(auStack_8c,param_2 + 0x30,uVar2);
    FUN_01bcfc14(auStack_5c,iVar4,uVar2);
    FUN_01bcfd44(param_1,auStack_bc);
    FUN_01bcfd44(param_1 + 0x30,auStack_8c);
    FUN_01bcfd44(param_1 + 0x60,auStack_5c);
  }
  else {
    iVar4 = FUN_01bd4f04(auStack_23c,auStack_29c,0xc);
    if (iVar4 == 0) {
      FUN_01bcfd28(param_1);
      FUN_01bcfd28(param_1 + 0x30);
      if (local_2c == DAT_01d53560) {
        uVar6 = FUN_01bcfd28(param_1 + 0x60,extraout_r1,0,0);
        return uVar6;
      }
      goto LAB_01bd0414;
    }
    FUN_01bd003c(param_1,param_2);
  }
  if (local_2c == DAT_01d53560) {
    return 0;
  }
LAB_01bd0414:
                    /* WARNING: Subroutine does not return */
  FUN_01be31f4();
}

