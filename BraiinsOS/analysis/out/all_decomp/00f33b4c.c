// FUN_00f33b4c @ 00f33b4c size=256 calls_out=2 calls_in=1
// strings: private | share_ratio_bp | pools

void FUN_00f33b4c(undefined1 *param_1,int *param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  
  switch(param_3) {
  case 4:
    if (*param_2 == 0x656d616e) {
      param_1[1] = 0;
      *param_1 = 0;
      return;
    }
    break;
  case 5:
    iVar2 = thunk_FUN_016dd50a(param_2,"pools",5);
    if (iVar2 == 0) {
      param_1[1] = 3;
      *param_1 = 0;
      return;
    }
    break;
  case 7:
    iVar2 = thunk_FUN_016dd50a(param_2,"private",7);
    if (iVar2 == 0) {
      param_1[1] = 1;
      *param_1 = 0;
      return;
    }
    break;
  case 0xe:
    iVar2 = thunk_FUN_016dd50a(param_2,"share_ratio_bp",0xe);
    if (iVar2 == 0) {
      param_1[1] = 2;
      *param_1 = 0;
      return;
    }
  }
  uVar1 = FUN_00f2c294(param_2,param_3,&DAT_0187e880,4);
  *(undefined4 *)(param_1 + 4) = uVar1;
  *param_1 = 1;
  return;
}

