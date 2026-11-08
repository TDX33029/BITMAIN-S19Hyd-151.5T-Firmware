// FUN_00b700cc @ 00b700cc size=256 calls_out=6 calls_in=1
// strings: 

void FUN_00b700cc(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  int local_64 [11];
  byte local_38;
  undefined4 local_37;
  undefined2 local_33;
  undefined4 local_2e;
  undefined2 local_2a;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 uStack_19;
  
  if (*(char *)(param_2 + 4) != '\0') {
    if (*(char *)(param_2 + 4) == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13460);
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13460);
  }
  FUN_00797a34(local_64);
  if (local_64[0] == -0x80000000) {
    uVar2 = 0x80000000;
  }
  else {
    if ((local_38 & 1) == 0) {
      uVar2 = 0x80000000;
    }
    else {
      local_2a = local_33;
      local_2e = local_37;
      local_20 = 0;
      local_24 = 1;
      local_28 = 0;
      iVar1 = FUN_007a82f4(&local_2e,&local_28,&DAT_01c13230);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&uStack_19,&DAT_01c13258,&DAT_01d30334);
      }
      uVar2 = local_28;
      unaff_r8 = local_24;
      unaff_r9 = local_20;
    }
    FUN_007390c4(local_64);
  }
  *param_1 = uVar2;
  param_1[1] = unaff_r8;
  param_1[2] = unaff_r9;
  *(undefined1 *)(param_2 + 4) = 1;
  return;
}

