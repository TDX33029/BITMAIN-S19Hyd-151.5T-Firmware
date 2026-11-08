// FUN_01584c70 @ 01584c70 size=280 calls_out=10 calls_in=4
// strings: strerror_r failure

void FUN_01584c70(uint *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined1 auStack_b0 [132];
  int local_2c;
  undefined4 local_28;
  uint local_24;
  undefined4 local_20;
  uint local_1c;
  
  FUN_016dd606(auStack_b0,0,0x80);
  iVar1 = FUN_016dd866(param_2,auStack_b0,0x80);
  if (iVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_015be724("strerror_r failure",0x12,&DAT_018a9f3c);
  }
  uVar2 = FUN_016dd8a2(auStack_b0);
  FUN_00fab1e0(&local_2c,auStack_b0,uVar2);
  if (local_2c == 1) {
    local_20 = local_28;
    local_1c = local_24;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_20,&DAT_018a9f4c,&DAT_018a9f2c);
  }
  if (0x7fffffff < local_24) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  if (local_24 == 0) {
    uVar3 = 1;
  }
  else {
    uVar3 = thunk_FUN_016d4a50(local_24);
    if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_24);
    }
  }
  FUN_016dd1aa(uVar3,local_28,local_24);
  *param_1 = local_24;
  param_1[1] = uVar3;
  param_1[2] = local_24;
  return;
}

