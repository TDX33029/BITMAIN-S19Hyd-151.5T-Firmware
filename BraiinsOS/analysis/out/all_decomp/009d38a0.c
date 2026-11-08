// FUN_009d38a0 @ 009d38a0 size=248 calls_out=3 calls_in=2
// strings: 

void FUN_009d38a0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,uint param_6)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  bVar6 = 0x1ffffffe < param_6;
  bVar5 = param_6 == 0x1fffffff;
  uVar1 = param_6 * 8;
  if (param_6 < 0x20000000) {
    bVar6 = 0x7ffffffb < uVar1;
    bVar5 = uVar1 == 0x7ffffffc;
  }
  if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    iVar3 = 4;
    uVar2 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(uVar1);
    uVar2 = param_6;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  uVar4 = 0;
  if (param_6 != 0) {
    FUN_016dd606(iVar3,0,uVar1);
    uVar4 = param_6;
  }
  param_1[2] = param_3;
  param_1[0xe] = iVar3;
  param_1[0xf] = uVar4;
  param_1[4] = param_5;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[6] = param_2;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = uVar2;
  param_1[3] = param_4;
  return;
}

