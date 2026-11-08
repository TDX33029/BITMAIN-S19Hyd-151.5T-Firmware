// FUN_018f1478 @ 018f1478 size=248 calls_out=6 calls_in=0
// strings: 

void FUN_018f1478(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  iVar3 = *(int *)(param_2 + 4);
  uVar1 = *(uint *)(iVar3 + 0x28);
  uVar2 = uVar1 >> 3;
  if ((uVar1 & 7) != 0) {
    uVar2 = (uVar1 >> 3) + 1;
  }
  FUN_018a7af8(&local_34,uVar2);
  iVar3 = FUN_01893428(iVar3 + 8,*(undefined4 *)(param_2 + 8),
                       *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x10),
                       *(undefined4 *)(*(int *)(param_2 + 0xc) + 0x14),&uStack_25,&DAT_01d23c58,
                       param_3,param_4,local_30,local_2c);
  if (iVar3 == 0) {
    if (local_34 != -0x80000000) {
      param_1[1] = local_34;
      param_1[2] = local_30;
      param_1[3] = local_2c;
      *param_1 = 0x80000029;
      return;
    }
  }
  else {
    FUN_0134bd64(local_34,local_30);
  }
  iVar3 = thunk_FUN_01be5118(0xe);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xe);
  }
  FUN_01bed4e2(iVar3,&DAT_005225f8,0xe);
  param_1[2] = iVar3;
  *param_1 = &DAT_80000020;
  param_1[1] = 0xe;
  param_1[3] = 0xe;
  return;
}

