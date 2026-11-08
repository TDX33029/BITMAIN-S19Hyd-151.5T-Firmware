// FUN_016c48d0 @ 016c48d0 size=124 calls_out=2 calls_in=4
// strings: 

undefined4 FUN_016c48d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint local_18 [2];
  
  iVar3 = *(int *)(param_1 + 4);
  uVar2 = 0;
  if (0x7ffffff < *(uint *)(iVar3 + 0x7c)) {
    iVar1 = FUN_016c4838();
    if (iVar1 == 0) {
      local_18[0] = *(uint *)(iVar3 + 0x7c);
      if (0x7ffffff < local_18[0]) {
        local_18[1] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,local_18,&DAT_01d09470,&DAT_01d09390);
      }
    }
    else {
      uVar2 = 1;
    }
  }
  return uVar2;
}

