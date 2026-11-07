// FUN_01bda3d0 @ 01bda3d0 size=84 calls_out=0 calls_in=1
// strings: 

void FUN_01bda3d0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  undefined4 unaff_r4;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 unaff_r10;
  uint in_d24;
  uint in_register_000003c4;
  uint in_d25;
  uint in_register_000003cc;
  
  uVar3 = VectorTableLookup(unaff_r10,unaff_r4,2);
  VectorTableLookup(0x1bd9e80,unaff_r4,2);
  puVar1 = (uint *)VectorTableLookup(unaff_r10,uVar3,2);
  uVar3 = VectorTableLookup(0x1bd9e80,uVar3,2);
  uVar2 = VectorTableLookup(unaff_r10,puVar1,2);
  VectorTableLookup(0x1bd9e80,puVar1,2);
  VectorTableLookup(puVar1,uVar2,2);
  VectorTableLookup(uVar3,uVar2,2);
  *puVar1 = param_1 ^ in_d24;
  puVar1[1] = param_2 ^ in_register_000003c4;
  puVar1[2] = param_3 ^ in_d25;
  puVar1[3] = param_4 ^ in_register_000003cc;
  return;
}

