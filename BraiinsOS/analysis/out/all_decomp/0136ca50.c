// FUN_0136ca50 @ 0136ca50 size=332 calls_out=4 calls_in=2
// strings: 

void FUN_0136ca50(int param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  bool bVar3;
  uint local_14;
  uint *local_10;
  code *local_c;
  
  if ((*(uint *)(param_1 + 0x58) <= param_5) ||
     ((param_5 & ~(-1 << (*(uint *)(param_1 + 0x15c) & 0x1f))) != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_003cd836,0x27,&DAT_01892680);
  }
  param_4 = param_4 & 0xff;
  if (param_2 != 0) {
    if (param_2 == 1) {
      param_4 = *(int *)(param_1 + 0x2ac) + param_4;
    }
    else {
      local_14 = param_3;
      if (*(int *)(param_1 + 0x188) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_003cd63b,0x25,&DAT_018924e0);
      }
      if (*(uint *)(param_1 + 0x18c) <= param_3) {
        local_10 = &local_14;
        local_c = FUN_007883b8;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005845ad,&local_10,&DAT_018924f0);
      }
      uVar1 = *(uint *)(param_1 + 0x2ac);
      uVar2 = (uint)((ulonglong)param_3 * (ulonglong)uVar1);
      if ((int)((ulonglong)param_3 * (ulonglong)uVar1 >> 0x20) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01892540);
      }
      if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01892530);
      }
      uVar1 = uVar2 + uVar1 * 2;
      if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01892520);
      }
      bVar3 = CARRY4(uVar1,param_4);
      param_4 = uVar1 + param_4;
      if (bVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_01892510);
      }
    }
  }
  if (*(uint *)(param_1 + 0x1a8) <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(param_4,*(uint *)(param_1 + 0x1a8),&DAT_01892500);
  }
  *(uint *)(*(int *)(param_1 + 0x1a4) + param_4 * 4) = param_5;
  return;
}

