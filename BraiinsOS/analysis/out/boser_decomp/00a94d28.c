// FUN_00a94d28 @ 00a94d28 size=216 calls_out=6 calls_in=1
// strings: 

int FUN_00a94d28(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined1 auStack_118 [112];
  int local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  int *local_98;
  undefined1 *local_94;
  int local_90;
  undefined4 local_8c;
  undefined4 auStack_88 [28];
  
  FUN_00711858(auStack_118,param_1);
  FUN_00ab22e4(&local_a8,auStack_118,param_2,param_3,param_4);
  if (local_a8 != -0x7fffffff) {
    local_98 = &local_90;
    local_90 = local_a8;
    local_8c = uStack_a4;
    auStack_88[0] = uStack_a0;
    local_94 = &LAB_012b97d8;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00590e5f,&local_98,param_5);
  }
  FUN_01bed4e2(auStack_88,auStack_118,0x70);
  local_8c = 1;
  local_90 = 1;
  iVar1 = thunk_FUN_01be5118(0x78);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar1,&local_90,0x78);
  return iVar1;
}

