// FUN_00e94644 @ 00e94644 size=168 calls_out=5 calls_in=17
// strings: 

void FUN_00e94644(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint local_28;
  uint local_24;
  uint local_20;
  
  if ((param_2 & 1) == 0) {
    FUN_00600d2c(&local_28,param_1);
  }
  else {
    uVar1 = param_2 >> 1;
    if (param_2 < 2) {
      uVar3 = 1;
      uVar4 = 0;
    }
    else {
      uVar3 = thunk_FUN_016d4a50(uVar1);
      uVar4 = uVar1;
      if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,uVar1);
      }
    }
    FUN_016dd1aa(uVar3,param_1,uVar1);
    local_28 = uVar4;
    local_24 = uVar3;
    local_20 = uVar1;
  }
  puVar2 = (uint *)thunk_FUN_016d4a50(0xc);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar2 = local_28;
  puVar2[1] = local_24;
  puVar2[2] = local_20;
  return;
}

