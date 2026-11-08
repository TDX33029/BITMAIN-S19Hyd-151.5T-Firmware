// FUN_012c0b74 @ 012c0b74 size=392 calls_out=8 calls_in=2
// strings: 

void FUN_012c0b74(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined2 *puVar2;
  undefined4 uVar3;
  undefined4 **local_40;
  undefined2 *local_3c;
  undefined4 local_38;
  int **local_34;
  undefined2 *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined1 uStack_21;
  
  uVar3 = 0;
  if (param_5 < 0) {
LAB_012c0b8c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar3,param_5);
  }
  if (param_5 != 0) {
    uVar3 = 1;
    iVar1 = FUN_01298504(param_5,1);
    if (iVar1 != 0) {
      FUN_01bed4e2(iVar1,param_4,param_5);
      *param_1 = param_5;
      param_1[1] = iVar1;
      param_1[2] = param_5;
      return;
    }
    goto LAB_012c0b8c;
  }
  FUN_01bed4e2(1,param_4,0);
  if (param_3 != 0) {
    local_3c = (undefined2 *)&DAT_00000001;
    local_34 = (int **)&local_40;
    local_38 = 0;
    local_40 = (undefined4 **)0x0;
    local_28 = 0;
    local_30 = (undefined2 *)&DAT_01ce2890;
    local_2c = 0x60000020;
    iVar1 = FUN_012bb12c(param_3,&local_34);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&uStack_21,&DAT_01ce28a8,&DAT_01d30334);
    }
    if (local_40 != (undefined4 **)0x80000000) {
      local_34 = local_40;
      local_30 = local_3c;
      local_2c = local_38;
      goto LAB_012c0c94;
    }
  }
  puVar2 = (undefined2 *)thunk_FUN_01be5118(3);
  if (puVar2 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,3);
  }
  local_2c = 3;
  *(undefined1 *)(puVar2 + 1) = 0x2e;
  *puVar2 = 0x2e2e;
  local_34 = (undefined4 **)0x3;
  local_30 = puVar2;
LAB_012c0c94:
  iVar1 = FUN_012bc0b4(param_2,4,0,&local_34);
  *param_1 = -0x80000000;
  param_1[1] = iVar1;
  FUN_0134bd64(0,1);
  return;
}

