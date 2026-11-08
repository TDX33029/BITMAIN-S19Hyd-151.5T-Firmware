// FUN_00b8d954 @ 00b8d954 size=344 calls_out=6 calls_in=2
// strings: 

void FUN_00b8d954(undefined4 param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int unaff_r10;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_b0 [124];
  undefined1 local_34;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar4 = param_2[2];
  uVar1 = param_2[1];
  iVar2 = 0;
  if (iVar4 < 0) {
LAB_00b8d97c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar2,iVar4);
  }
  if (iVar4 == 0) {
    local_2c = 1;
  }
  else {
    iVar2 = 1;
    local_2c = FUN_01298504(iVar4,1);
    if (local_2c == 0) goto LAB_00b8d97c;
    iVar2 = iVar4;
  }
  FUN_01bed4e2(local_2c,uVar1,iVar4);
  local_30 = iVar2;
  local_28 = iVar4;
  FUN_01323e2c(auStack_b0,&local_30);
  local_34 = 0;
  if (param_4 != 0) {
    puVar3 = (undefined4 *)(param_3 + 4);
    param_4 = param_4 * 0xc;
    do {
      iVar4 = puVar3[1];
      iVar2 = 0;
      if (iVar4 < 0) {
LAB_00b8daa4:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(iVar2,unaff_r10);
      }
      uVar5 = *puVar3;
      if (iVar4 == 0) {
        unaff_r10 = 1;
      }
      else {
        iVar2 = 1;
        unaff_r10 = FUN_01298504(iVar4,1);
        if (unaff_r10 == 0) {
          unaff_r10 = iVar4;
          goto LAB_00b8daa4;
        }
        iVar2 = iVar4;
      }
      FUN_01bed4e2(unaff_r10,uVar5,iVar4);
      local_30 = iVar2;
      local_2c = unaff_r10;
      local_28 = iVar4;
      FUN_00b06878(auStack_b0,&local_30);
      puVar3 = puVar3 + 3;
      param_4 = param_4 + -0xc;
    } while (param_4 != 0);
  }
  FUN_01bed4e2(param_1,auStack_b0,0x80);
  FUN_019bb7e0(*param_2,uVar1);
  return;
}

