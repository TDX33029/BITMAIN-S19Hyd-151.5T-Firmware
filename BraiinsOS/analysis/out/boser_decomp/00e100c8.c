// FUN_00e100c8 @ 00e100c8 size=220 calls_out=6 calls_in=17
// strings: 

void FUN_00e100c8(undefined4 *param_1,int param_2,undefined4 param_3)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined1 auStack_d8 [96];
  undefined1 auStack_78 [96];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x54)) {
  case 0:
    *(undefined1 *)(param_2 + 0xc) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1812c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1812c);
  }
  bVar1 = FUN_00e105d4(param_2,param_3);
  if (bVar1 == 2) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
  }
  else {
    FUN_00e1003c(param_2);
    if ((bVar1 & 1) == 0) {
      FUN_01a71aac(&local_e0,9,&DAT_003f2fc4,0x17);
      FUN_01bed4e2(auStack_78,auStack_d8,0x60);
    }
    else {
      uStack_dc = 0;
      local_e0 = 3;
    }
    *param_1 = local_e0;
    param_1[1] = uStack_dc;
    FUN_01bed4e2(param_1 + 2,auStack_78,0x60);
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 0x54) = uVar2;
  return;
}

