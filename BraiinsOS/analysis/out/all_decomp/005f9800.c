// FUN_005f9800 @ 005f9800 size=344 calls_out=3 calls_in=0
// strings: 

void FUN_005f9800(undefined4 *param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6
                 )

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  
  if (*(int *)(param_2 + 0x1c) == 0) {
    if (param_4 < param_6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_6,param_4,&DAT_018945f8);
    }
LAB_005f98b8:
    FUN_005fdcd4(&local_28);
    uVar3 = 0;
    if (local_28 != 1) goto LAB_005f98e4;
  }
  else {
    if ((param_6 < param_5) || (param_4 < param_6)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(param_5,param_6,param_4,&DAT_018945e8);
    }
    if (param_6 - param_5 < *(uint *)(param_2 + 0x28)) goto LAB_005f98b8;
    (**(code **)(*(int *)(param_2 + 0x20) + 0x10))
              (&local_28,
               *(int *)(param_2 + 0x1c) + (*(int *)(*(int *)(param_2 + 0x20) + 8) - 1U & 0xfffffff8)
               + 8,param_3 + param_5,param_3 + param_6);
    if (local_28 == 1) {
      uVar2 = local_20 - param_3;
      local_20 = local_1c - param_3;
      if (local_20 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_003ceb44,0x25,&DAT_018945d8);
      }
      local_1c = local_24;
      bVar1 = true;
      local_24 = uVar2;
    }
    else {
      bVar1 = false;
    }
    uVar3 = 0;
    if (!bVar1) goto LAB_005f98e4;
  }
  param_1[1] = local_24;
  param_1[2] = local_20;
  param_1[3] = local_1c;
  uVar3 = 1;
LAB_005f98e4:
  *param_1 = uVar3;
  return;
}

