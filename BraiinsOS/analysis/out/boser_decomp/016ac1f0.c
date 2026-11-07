// FUN_016ac1f0 @ 016ac1f0 size=252 calls_out=5 calls_in=2
// strings: 

void FUN_016ac1f0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  uint local_20 [2];
  
  uVar3 = *(uint *)(param_2 + 0x128);
  if (uVar3 < *(uint *)(param_2 + 0x11c)) {
    uVar4 = *(uint *)(param_2 + 0x120);
    iVar5 = *(int *)(param_2 + 0x118);
    *(uint *)(param_2 + 0x128) = uVar3 + 1;
    if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013079d0(&DAT_01d0853c);
    }
    uVar6 = FUN_01bf0fd4(uVar3,uVar4);
    local_20[0] = (uint)uVar6;
    if (0x5ffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d0854c);
    }
    if (uVar3 < uVar4) {
      uVar1 = 0;
    }
    else if (uVar3 < uVar4 << 1) {
      uVar1 = 1;
    }
    else {
      local_20[0] = FUN_01bf1250(uVar3 + uVar4 * -2,uVar4);
      uVar1 = 2;
      if (0x7ffffffe < local_20[0]) {
        local_20[1] = 0;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,local_20,&DAT_01d088ac,&DAT_01d0855c);
      }
    }
    uVar2 = *(undefined4 *)(iVar5 + uVar3 * 4);
    *(char *)(param_1 + 3) = (char)(uVar6 >> 0x20);
    *param_1 = uVar1;
    param_1[1] = local_20[0];
    param_1[2] = uVar2;
  }
  else {
    *param_1 = 3;
  }
  return;
}

