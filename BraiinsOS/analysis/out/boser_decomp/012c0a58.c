// FUN_012c0a58 @ 012c0a58 size=256 calls_out=8 calls_in=2
// strings: 

void FUN_012c0a58(int *param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 auStack_38 [12];
  int local_2c;
  undefined *local_28;
  undefined4 local_24;
  
  uVar4 = 0;
  if (param_4 < 0) {
LAB_012c0a70:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,param_4);
  }
  if (param_4 == 0) {
    iVar1 = 1;
    iVar5 = 0;
  }
  else {
    uVar4 = 1;
    iVar1 = FUN_01298504(param_4,1);
    if (iVar1 == 0) goto LAB_012c0a70;
    iVar5 = param_4;
  }
  FUN_01bed4e2(iVar1,param_3,param_4);
  FUN_012fbd94(&local_2c,iVar1,param_4);
  if (local_2c == 1) {
    puVar2 = (undefined *)FUN_012b9138(param_2 + 0x74);
    local_24 = 0;
    local_28 = &DAT_00420598;
    if (puVar2 != (undefined *)0x0) {
      local_28 = puVar2;
    }
    local_2c = param_2;
    FUN_012b5c88(auStack_38,&local_2c,4,0);
    iVar3 = FUN_012bca94(param_2,auStack_38);
    FUN_0134bd64(iVar5,iVar1);
    *param_1 = -0x80000000;
    param_1[1] = iVar3;
  }
  else {
    *param_1 = iVar5;
    param_1[1] = iVar1;
    param_1[2] = param_4;
  }
  return;
}

