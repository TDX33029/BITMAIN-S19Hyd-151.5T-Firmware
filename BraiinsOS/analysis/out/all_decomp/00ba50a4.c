// FUN_00ba50a4 @ 00ba50a4 size=348 calls_out=6 calls_in=1
// strings: 

void FUN_00ba50a4(int param_1,int param_2)

{
  int iVar1;
  undefined4 local_500;
  undefined4 uStack_4fc;
  undefined4 local_4f8;
  undefined4 local_4f0;
  undefined4 local_4ec;
  undefined4 local_4e8;
  undefined4 local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined1 auStack_4d0 [552];
  undefined1 auStack_2a8 [96];
  undefined1 auStack_248 [552];
  
  if (*(int *)(param_2 + 0x290) == 0) {
    local_4f8 = 0;
    local_500 = 0;
    iVar1 = *(int *)(param_2 + 0x29c);
  }
  else {
    if (*(int *)(param_2 + 0x288) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac52c);
    }
    FUN_00c44b0c(&local_500,*(int *)(param_2 + 0x288),*(undefined4 *)(param_2 + 0x28c));
    iVar1 = *(int *)(param_2 + 0x29c);
  }
  if (iVar1 == 0) {
    local_4e8 = 0;
    local_4f0 = 0;
    iVar1 = *(int *)(param_2 + 0x2a8);
  }
  else {
    if (*(int *)(param_2 + 0x294) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac52c);
    }
    FUN_00c465b8(&local_4f0,*(int *)(param_2 + 0x294),*(undefined4 *)(param_2 + 0x298));
    iVar1 = *(int *)(param_2 + 0x2a8);
  }
  if (iVar1 == 0) {
    local_4d8 = 0;
    local_4e0 = 0;
  }
  else {
    if (*(int *)(param_2 + 0x2a0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_018ac52c);
    }
    FUN_00c44590(&local_4e0,*(int *)(param_2 + 0x2a0),*(undefined4 *)(param_2 + 0x2a4));
  }
  FUN_00ba1e84(auStack_248,param_2);
  FUN_016dd1aa(auStack_2a8,param_2 + 0x228,0x60);
  FUN_016dd1aa(auStack_4d0,auStack_248,0x228);
  *(undefined4 *)(param_1 + 0x29c) = local_4e8;
  *(undefined4 *)(param_1 + 0x2a4) = local_4dc;
  *(undefined4 *)(param_1 + 0x2a8) = local_4d8;
  *(undefined4 *)(param_1 + 0x288) = local_500;
  *(undefined4 *)(param_1 + 0x28c) = uStack_4fc;
  *(undefined4 *)(param_1 + 0x290) = local_4f8;
  *(undefined4 *)(param_1 + 0x294) = local_4f0;
  *(undefined4 *)(param_1 + 0x298) = local_4ec;
  *(undefined4 *)(param_1 + 0x2a0) = local_4e0;
  FUN_016dd1aa(param_1,auStack_4d0,0x288);
  return;
}

