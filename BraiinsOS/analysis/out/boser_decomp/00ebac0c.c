// FUN_00ebac0c @ 00ebac0c size=156 calls_out=2 calls_in=7
// strings: 

void FUN_00ebac0c(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 uVar3;
  uint local_e0;
  uint uStack_dc;
  undefined1 local_d8;
  undefined1 auStack_d7 [95];
  undefined1 auStack_78 [96];
  
  FUN_00fd8db8(&local_e0);
  if (local_e0 == 5 && uStack_dc == 0) {
    *param_1 = 4;
    param_1[1] = 0;
  }
  else {
    uVar2 = 0;
    uVar1 = 3;
    if ((local_e0 & 7) == 3) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
      if (local_e0 != 4) {
        FUN_01bed4e2(auStack_78,auStack_d7,0x5f);
        uVar1 = local_e0;
        uVar2 = uStack_dc;
        uVar3 = local_d8;
      }
    }
    *param_1 = uVar1;
    param_1[1] = uVar2;
    *(undefined1 *)(param_1 + 2) = uVar3;
    FUN_01bed4e2((int)param_1 + 9,auStack_78,0x5f);
  }
  return;
}

