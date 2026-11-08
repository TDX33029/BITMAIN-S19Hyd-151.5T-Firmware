// FUN_0138b0e0 @ 0138b0e0 size=176 calls_out=3 calls_in=2
// strings: invalid key

void FUN_0138b0e0(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined1 auStack_a0 [136];
  undefined4 local_18;
  
  FUN_01bed4e2(auStack_a0,param_3,0x88);
  local_18 = 0;
  uVar1 = FUN_013ba718(param_2,auStack_a0);
  if (*param_1 == 1) {
    if ((*(uint *)(param_2 + 8) <= uVar1) ||
       (piVar2 = (int *)(*(int *)(param_2 + 4) + uVar1 * 0x90), *piVar2 == 6 && piVar2[1] == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74("invalid key",0xb,&DAT_01d2d7d4);
    }
    iVar3 = param_1[1];
    param_1[1] = uVar1;
    piVar2[0x22] = 1;
    piVar2[0x23] = iVar3;
  }
  else {
    param_1[1] = uVar1;
    *param_1 = 1;
    param_1[2] = uVar1;
  }
  return;
}

