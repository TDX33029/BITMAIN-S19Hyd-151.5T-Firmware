// FUN_01a3dbdc @ 01a3dbdc size=204 calls_out=3 calls_in=0
// strings: 

void FUN_01a3dbdc(undefined4 *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_4 == 0x18) {
    iVar2 = thunk_FUN_01bed842(param_3,&DAT_0052cf49,0x18);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_01a3dc70;
    }
    iVar2 = param_2[2];
    if ((uint)(*param_2 - iVar2) < 0x18) {
      uVar3 = 0x18;
      goto LAB_01a3dc94;
    }
  }
  else {
    iVar2 = param_2[2];
    if ((uint)(*param_2 - iVar2) < param_4) {
      uVar3 = param_4;
LAB_01a3dc94:
      FUN_006520b4(param_2,iVar2,uVar3,1,1);
    }
  }
  iVar2 = param_2[2];
  FUN_01bed4e2(param_2[1] + iVar2,param_3,param_4);
  param_2[2] = iVar2 + param_4;
  uVar1 = 0;
LAB_01a3dc70:
  *(undefined1 *)(param_1 + 1) = uVar1;
  *param_1 = 2;
  return;
}

