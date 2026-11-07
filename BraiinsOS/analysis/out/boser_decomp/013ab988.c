// FUN_013ab988 @ 013ab988 size=176 calls_out=3 calls_in=3
// strings: invalid key

void FUN_013ab988(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  int *piVar2;
  undefined1 auStack_a0 [136];
  undefined4 local_18;
  
  FUN_01bed4e2(auStack_a0,param_3,0x88);
  local_18 = 0;
  iVar1 = FUN_013ba718(param_2,auStack_a0);
  if (*param_1 == 1) {
    if ((*(uint *)(param_2 + 8) <= (uint)param_1[2]) ||
       (piVar2 = (int *)(*(int *)(param_2 + 4) + param_1[2] * 0x90), *piVar2 == 6 && piVar2[1] == 0)
       ) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74("invalid key",0xb,&DAT_01d1d044);
    }
    piVar2[0x22] = 1;
    piVar2[0x23] = iVar1;
  }
  else {
    *param_1 = 1;
    param_1[1] = iVar1;
  }
  param_1[2] = iVar1;
  return;
}

