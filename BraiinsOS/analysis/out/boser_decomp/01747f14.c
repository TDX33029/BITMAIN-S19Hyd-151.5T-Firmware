// FUN_01747f14 @ 01747f14 size=172 calls_out=3 calls_in=2
// strings: invalid key

void FUN_01747f14(int *param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  undefined4 local_d0 [2];
  undefined1 auStack_c8 [184];
  
  FUN_01bed4e2(auStack_c8,param_3,0xb8);
  local_d0[0] = 0;
  uVar1 = FUN_0175f1d8(param_2,local_d0);
  if (*param_1 == 1) {
    if ((*(uint *)(param_2 + 8) <= uVar1) ||
       (piVar2 = (int *)(*(int *)(param_2 + 4) + uVar1 * 0xc0), *piVar2 == 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74("invalid key",0xb,&DAT_01d2d7d4);
    }
    iVar3 = param_1[1];
    param_1[1] = uVar1;
    *piVar2 = 1;
    piVar2[1] = iVar3;
  }
  else {
    param_1[1] = uVar1;
    *param_1 = 1;
    param_1[2] = uVar1;
  }
  return;
}

