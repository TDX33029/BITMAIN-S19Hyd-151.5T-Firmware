// FUN_014f5308 @ 014f5308 size=208 calls_out=5 calls_in=2
// strings: 

void FUN_014f5308(int *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int local_44;
  undefined4 local_40;
  int local_3c;
  undefined1 local_38 [4];
  undefined4 local_34;
  undefined4 local_30;
  undefined1 uStack_21;
  
  FUN_012fbd94(&local_44);
  if (local_44 == 1) {
    local_38[0] = 6;
    local_34 = param_2;
    local_30 = param_3;
    iVar2 = FUN_01967740(local_38,&uStack_21,&DAT_01cfa4bc);
    *param_1 = -0x80000000;
    param_1[1] = iVar2;
  }
  else {
    uVar3 = 0;
    if (local_3c < 0) {
LAB_014f5340:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar3,local_3c);
    }
    if (local_3c == 0) {
      iVar1 = 1;
      iVar2 = 0;
    }
    else {
      uVar3 = 1;
      iVar1 = FUN_01298504(local_3c,1);
      iVar2 = local_3c;
      if (iVar1 == 0) goto LAB_014f5340;
    }
    FUN_01bed4e2(iVar1,local_40,local_3c);
    *param_1 = iVar2;
    param_1[1] = iVar1;
    param_1[2] = local_3c;
  }
  return;
}

