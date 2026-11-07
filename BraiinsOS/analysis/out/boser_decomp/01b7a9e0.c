// FUN_01b7a9e0 @ 01b7a9e0 size=244 calls_out=0 calls_in=1
// strings: 

void FUN_01b7a9e0(undefined4 param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined8 *puVar1;
  undefined4 unaff_r4;
  undefined4 unaff_r8;
  undefined4 uVar2;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 in_r12;
  undefined4 unaff_lr;
  undefined1 in_q0 [16];
  undefined1 in_q2 [16];
  undefined1 auVar3 [16];
  undefined1 in_q3 [16];
  undefined1 in_q12 [16];
  
  if (param_4 == 0) {
    auVar3 = in_q0 ^ in_q12;
    uVar2 = VectorTableLookup(unaff_r10,unaff_r4,2);
    VectorTableLookup(0x1b7a100,unaff_r4,2);
    puVar1 = (undefined8 *)VectorTableLookup(unaff_r10,uVar2,2);
    param_4 = VectorTableLookup(0x1b7a100,uVar2,2);
    uVar2 = VectorTableLookup(unaff_r10,puVar1,2);
    VectorTableLookup(0x1b7a100,puVar1,2);
  }
  else {
    VectorShiftRight(in_q0,4);
    VectorTableLookup(unaff_r8,in_r12,2);
    VectorTableLookup(unaff_r9,in_r12,2);
    VectorTableLookup(param_3,unaff_lr,2);
    VectorTableLookup(param_4,unaff_lr,2);
    VectorTableLookup(unaff_r10,unaff_r10,2);
    VectorTableLookup(0x1b7a6d0,unaff_r10,2);
    VectorTableLookup(unaff_r8,in_r12,2);
    VectorTableLookup(unaff_r9,in_r12,2);
    VectorTableLookup(param_3,unaff_lr,2);
    VectorTableLookup(param_4,unaff_lr,2);
    VectorTableLookup(unaff_r10,unaff_r10,2);
    VectorTableLookup(0x1b7a6f0,unaff_r10,2);
    VectorTableLookup(unaff_r8,in_r12,2);
    VectorTableLookup(unaff_r9,in_r12,2);
    VectorTableLookup(param_3,unaff_lr,2);
    VectorTableLookup(param_4,unaff_lr,2);
    VectorTableLookup(unaff_r8,in_r12,2);
    VectorTableLookup(unaff_r9,in_r12,2);
    uVar2 = VectorTableLookup(unaff_r10,unaff_r10,2);
    VectorTableLookup(0x1b7a710,unaff_r10,2);
    VectorTableLookup(param_3,unaff_lr,2);
    VectorTableLookup(param_4,unaff_lr,2);
    auVar3 = in_q2 ^ in_q3;
    puVar1 = (undefined8 *)(param_3 + -0x10);
  }
  VectorTableLookup(puVar1,uVar2,2);
  VectorTableLookup(param_4,uVar2,2);
  *puVar1 = auVar3._0_8_;
  puVar1[1] = auVar3._8_8_;
  return;
}

