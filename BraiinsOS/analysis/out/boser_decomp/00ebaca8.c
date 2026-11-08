// FUN_00ebaca8 @ 00ebaca8 size=236 calls_out=2 calls_in=1
// strings: 

void FUN_00ebaca8(uint *param_1)

{
  uint uVar1;
  undefined4 ***pppuVar2;
  uint uVar3;
  undefined4 ***pppuVar4;
  uint uVar5;
  uint local_d8;
  uint local_d4;
  undefined4 ***local_d0;
  uint uStack_cc;
  undefined4 ***pppuStack_c8;
  uint local_c4;
  undefined4 ***local_c0;
  uint uStack_bc;
  undefined1 auStack_b8 [72];
  undefined1 auStack_70 [76];
  
  FUN_00fdc24c(&local_d8);
  if (local_d8 == 5 && local_d4 == 0) {
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    uVar1 = 3;
    if ((local_d8 & 7) == 3) {
      local_d4 = 0;
      pppuVar4 = (undefined4 ***)&DAT_00000001;
      uVar5 = 0;
      pppuVar2 = local_d0;
      uVar3 = uStack_cc;
    }
    else if (local_d8 == 4) {
      local_d4 = 0;
      pppuVar2 = &local_d0;
      uVar3 = 4;
      pppuVar4 = (undefined4 ***)0x0;
      uVar5 = 0;
    }
    else {
      FUN_01bed4e2(auStack_70,auStack_b8,0x48);
      uVar1 = local_d8;
      pppuVar2 = pppuStack_c8;
      uVar3 = local_c4;
      local_c4 = uStack_bc;
      pppuVar4 = local_d0;
      uVar5 = uStack_cc;
      pppuStack_c8 = local_c0;
    }
    *param_1 = uVar1;
    param_1[1] = local_d4;
    param_1[4] = (uint)pppuVar2;
    param_1[5] = uVar3;
    param_1[6] = (uint)pppuStack_c8;
    param_1[2] = (uint)pppuVar4;
    param_1[3] = uVar5;
    param_1[7] = local_c4;
    FUN_01bed4e2(param_1 + 8,auStack_70,0x48);
  }
  return;
}

