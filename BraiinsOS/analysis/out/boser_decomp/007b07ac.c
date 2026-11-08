// FUN_007b07ac @ 007b07ac size=160 calls_out=4 calls_in=0
// strings: 

void FUN_007b07ac(int param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 local_1068;
  undefined4 uStack_1064;
  undefined4 uStack_1060;
  undefined4 uStack_105c;
  undefined4 uStack_1058;
  undefined4 uStack_1054;
  undefined4 local_1050;
  undefined4 local_104c;
  undefined1 auStack_1048 [4132];
  
  FUN_01343338(&local_1068,*param_2);
  FUN_01bed4e2(auStack_1048,param_3,0x1020);
  local_1050 = 1;
  local_104c = 0;
  iVar1 = thunk_FUN_01be5118(0x8000);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x8000);
  }
  FUN_01bed4e2(param_1,&local_1050,&DAT_00001028);
  *(undefined4 *)(&DAT_00001028 + param_1) = local_1068;
  *(undefined4 *)(param_1 + 0x102c) = uStack_1064;
  *(undefined4 *)(param_1 + 0x1030) = uStack_1060;
  *(undefined4 *)(param_1 + 0x1034) = uStack_105c;
  *(undefined4 *)(param_1 + 0x1038) = uStack_1058;
  *(undefined4 *)(param_1 + 0x103c) = uStack_1054;
  *(undefined4 *)(param_1 + 0x1040) = 0x8000;
  *(int *)(param_1 + 0x1044) = iVar1;
  *(undefined4 *)(param_1 + 0x1048) = 0;
  return;
}

