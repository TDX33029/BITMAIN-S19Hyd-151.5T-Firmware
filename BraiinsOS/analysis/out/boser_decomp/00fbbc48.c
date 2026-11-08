// FUN_00fbbc48 @ 00fbbc48 size=224 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_00fbbc48(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_1e0 [148];
  int local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined1 auStack_140 [136];
  undefined4 local_b8;
  undefined4 local_b4;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  
  if (*(char *)(param_1 + 0x94) == '\0') {
    FUN_01bed4e2(auStack_1e0,param_1,0x90);
    FUN_00710744(&local_b0,auStack_1e0);
    if (local_b0 == -0x80000000) {
      uVar1 = 0;
      FUN_00ebabdc(auStack_1e0);
    }
    else {
      local_144 = local_a8;
      local_148 = local_ac;
      local_14c = local_b0;
      FUN_01bed4e2(&local_b0,auStack_1e0,0x90);
      FUN_007163c4(auStack_140,&local_b0);
      FUN_01839f10(auStack_140);
      uVar1 = FUN_00f7ee50(local_b8,local_b4,&local_14c);
    }
    *(undefined1 *)(param_1 + 0x94) = 1;
    return uVar1;
  }
  if (*(char *)(param_1 + 0x94) == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1cac8);
  }
                    /* WARNING: Subroutine does not return */
  FUN_01307a10(&DAT_01c1cac8);
}

