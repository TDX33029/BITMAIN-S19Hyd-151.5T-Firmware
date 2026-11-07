// FUN_013d5000 @ 013d5000 size=180 calls_out=6 calls_in=1
// strings: 

int FUN_013d5000(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined1 auStack_b8 [80];
  undefined1 auStack_68 [80];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x18)) {
  case 0:
    FUN_019e6e74(auStack_68,&DAT_01cf2bac,*param_1,param_1[1],param_1[2],&DAT_01cf2bac);
    FUN_01bed4e2(auStack_b8,auStack_68,0x50);
    FUN_01bed4e2(param_1 + 4,auStack_b8,0x50);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01cf2bbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01cf2bbc);
  }
  iVar1 = FUN_019e84a0(param_1 + 4,*param_2);
  uVar2 = 3;
  if (iVar1 == 0) {
    uVar2 = 1;
    FUN_01431b40(param_1 + 4);
  }
  *(undefined1 *)(param_1 + 0x18) = uVar2;
  return iVar1;
}

