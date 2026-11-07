// FUN_01b7a9b0 @ 01b7a9b0 size=36 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_01b7a9b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined1 in_q0 [16];
  
  VectorShiftRight(in_q0,4);
  VectorTableLookup(param_3,in_r12,2);
  VectorTableLookup(param_4,in_r12,2);
  uVar1 = VectorTableLookup(param_1,unaff_lr,2);
  VectorTableLookup(param_2,unaff_lr,2);
  return uVar1;
}

