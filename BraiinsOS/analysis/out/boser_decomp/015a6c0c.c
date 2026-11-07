// FUN_015a6c0c @ 015a6c0c size=228 calls_out=4 calls_in=1
// strings: 

void FUN_015a6c0c(int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int local_38;
  int iStack_34;
  int local_30;
  int local_2c;
  int local_28;
  int iStack_24;
  int iStack_20;
  
  local_2c = param_5;
  local_38 = param_2;
  iStack_34 = param_3;
  local_30 = param_4;
  if (*param_1 == 0) {
    iVar3 = param_1[3];
    if (iVar3 == param_1[1]) {
      FUN_018fa978();
    }
    piVar2 = (int *)(param_1[2] + iVar3 * 0x10);
    *piVar2 = local_38;
    piVar2[1] = iStack_34;
    piVar2[2] = local_30;
    piVar2[3] = local_2c;
    param_1[3] = iVar3 + 1;
  }
  else {
    uVar1 = param_1[0xc];
    if (uVar1 == 3) {
      FUN_015a6cf4(&local_28,&local_38,param_1);
      if (*param_1 == 0) {
        FUN_0134aee0(param_1[1],param_1[2],4,0x10);
      }
      *param_1 = 0;
      param_1[1] = local_28;
      param_1[2] = iStack_24;
      param_1[3] = iStack_20;
    }
    else {
      if (2 < uVar1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar1,3,&DAT_01cfc6b8);
      }
      piVar2 = param_1 + uVar1 * 4;
      *piVar2 = param_2;
      piVar2[1] = param_3;
      piVar2[2] = param_4;
      piVar2[3] = param_5;
      param_1[0xc] = param_1[0xc] + 1;
    }
  }
  return;
}

