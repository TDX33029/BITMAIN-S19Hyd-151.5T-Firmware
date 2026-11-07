// FUN_00f5ef18 @ 00f5ef18 size=180 calls_out=2 calls_in=44
// strings: 

void FUN_00f5ef18(undefined4 *param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  if (uVar4 != uVar3) {
    puVar1 = (uint *)thunk_FUN_016d4a50(0xc);
    if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    *puVar1 = uVar2;
    puVar1[1] = uVar3;
    puVar1[2] = 1;
    *param_1 = &PTR_FUN_0187f9c8;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = puVar1;
    return;
  }
  if (uVar4 == 0) {
    *param_1 = &DAT_0187f9a4;
    param_1[1] = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    return;
  }
  if ((uVar2 & 1) == 0) {
    *param_1 = &PTR_FUN_0188d4dc;
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    param_1[3] = uVar2 | 1;
    return;
  }
  *param_1 = &PTR_FUN_0188d4f0;
  param_1[1] = uVar2;
  param_1[2] = uVar4;
  param_1[3] = uVar2;
  return;
}

