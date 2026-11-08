// FUN_0183bd18 @ 0183bd18 size=128 calls_out=0 calls_in=1
// strings: 

uint FUN_0183bd18(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 unaff_r6;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined1 in_q0 [16];
  undefined1 auVar7 [16];
  uint in_s8;
  uint unaff_s18;
  uint unaff_s19;
  uint unaff_s28;
  uint in_d18;
  uint in_d24;
  
  auVar7 = VectorShiftRight(in_q0,4);
  uVar1 = VectorTableLookup(param_3,unaff_r6,2);
  VectorTableLookup(param_4,unaff_r6,2);
  uVar2 = VectorTableLookup(param_1,uVar1,2);
  uVar4 = VectorTableLookup(param_2,uVar1,2);
  uVar5 = VectorTableLookup(param_3,uVar1,2);
  uVar6 = VectorTableLookup(param_4,uVar1,2);
  uVar3 = VectorTableLookup(uVar2,uVar1,2);
  uVar4 = VectorTableLookup(uVar4,uVar1,2);
  uVar1 = VectorTableLookup(uVar5,uVar1,2);
  uVar2 = VectorTableLookup(uVar6,uVar1,2);
  VectorTableLookup(uVar3,unaff_lr,2);
  VectorTableLookup(uVar4,unaff_lr,2);
  VectorTableLookup(uVar1,in_r12,2);
  VectorTableLookup(uVar2,in_r12,2);
  return in_q0._0_4_ & in_d18 ^ auVar7._0_4_ ^ unaff_s18 ^ in_s8 ^
         unaff_s28 ^ unaff_s19 ^ unaff_s18 ^ in_d24;
}

