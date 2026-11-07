// FUN_01048f78 @ 01048f78 size=180 calls_out=6 calls_in=1
// strings: 

int FUN_01048f78(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_b8 [80];
  undefined1 auStack_68 [80];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 0:
    FUN_01656eb8(auStack_68,&DAT_018834e8,*param_1,param_1[1],param_1[2],&DAT_018834e8);
    FUN_016dd1aa(auStack_b8,auStack_68,0x50);
    FUN_016dd1aa(param_1 + 4,auStack_b8,0x50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018834f8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018834f8);
  }
  iVar1 = FUN_01657fc4(param_1 + 4,*param_2);
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 1;
    FUN_00a07b4c(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  return iVar1;
}

