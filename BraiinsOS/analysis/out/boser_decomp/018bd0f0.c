// FUN_018bd0f0 @ 018bd0f0 size=268 calls_out=6 calls_in=0
// strings: 

void FUN_018bd0f0(undefined1 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  int iVar2;
  int local_10c;
  undefined1 local_108;
  undefined2 local_107;
  undefined1 local_105;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined1 auStack_f8 [96];
  uint local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined1 auStack_88 [103];
  undefined1 uStack_21;
  
  FUN_01891580(&local_10c,*(int *)(param_2 + 4) + 8,&uStack_21,&DAT_01d22700,param_3,param_4);
  if (local_10c == 1) {
    iVar2 = thunk_FUN_01be5118(0xe);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xe);
    }
    FUN_01bed4e2(iVar2,&DAT_005225f8,0xe);
    *(undefined4 *)(param_1 + 4) = 0xe;
    uVar1 = 0xd;
    *(int *)(param_1 + 8) = iVar2;
    *(undefined4 *)(param_1 + 0xc) = 0xe;
  }
  else {
    local_98._1_3_ = CONCAT12(local_105,local_107);
    FUN_01bed4e2(auStack_88,auStack_f8,0x60);
    local_98 = CONCAT31(local_98._1_3_,local_108);
    local_8c = local_fc;
    local_90 = local_100;
    local_94 = local_104;
    if (0x69 < local_98) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_98,0x69,&DAT_01d217fc);
    }
    FUN_0193a93c(param_1 + 4,(uint)&local_98 | 4);
    uVar1 = 0x14;
  }
  *param_1 = uVar1;
  return;
}

