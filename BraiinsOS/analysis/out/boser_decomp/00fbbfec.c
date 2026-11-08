// FUN_00fbbfec @ 00fbbfec size=332 calls_out=4 calls_in=0
// strings: 

void FUN_00fbbfec(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined4 uVar2;
  uint *puVar3;
  uint local_1c8;
  uint local_1c4;
  undefined1 auStack_1c0 [136];
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  uint *puStack_128;
  undefined4 uStack_124;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  uint *puStack_a0;
  undefined4 uStack_9c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 6)) {
  case 0:
    uVar2 = *param_2;
    param_2[1] = uVar2;
    *(undefined1 *)(param_2 + 5) = 0;
    param_2[2] = uVar2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1b028);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1b028);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 5)) {
    case 0:
      uVar2 = param_2[2];
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1c938);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1c938);
    case 3:
      uVar2 = *(undefined4 *)param_2[4];
      goto LAB_00fbc078;
    }
  }
  param_2[3] = uVar2;
  param_2[4] = param_2 + 3;
LAB_00fbc078:
  FUN_0160bdb0(&local_1c8,uVar2);
  uVar1 = 1;
  if (local_1c8 == 5 && local_1c4 == 0) {
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 5) = uVar1;
  if (local_1c8 == 5 && local_1c4 == 0) {
    *param_1 = 5;
    param_1[1] = 0;
    uVar1 = 3;
  }
  else {
    FUN_01bed4e2(&local_138,auStack_1c0,0x88);
    puVar3 = &local_1c8;
    if ((local_1c8 & 7) != 3) {
      if (local_1c8 == 4) {
        local_b0 = local_138;
        uStack_ac = uStack_134;
        uStack_a8 = uStack_130;
        uStack_a4 = uStack_12c;
        puStack_a0 = puStack_128;
        uStack_9c = uStack_124;
        puVar3 = puStack_128;
      }
      else {
        FUN_01bed4e2(&local_b0,&local_138,0x88);
        puVar3 = (uint *)param_2[1];
      }
    }
    *param_1 = local_1c8;
    param_1[1] = local_1c4;
    FUN_01bed4e2(param_1 + 2,&local_b0,0x88);
    uVar1 = 1;
    param_1[0x24] = (uint)puVar3;
  }
  *(undefined1 *)(param_2 + 6) = uVar1;
  return;
}

