// FUN_00b203a0 @ 00b203a0 size=124 calls_out=2 calls_in=1
// strings: 

void FUN_00b203a0(int *param_1,undefined1 *param_2,int param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  
  uVar4 = 0;
  if (param_3 < 0) {
LAB_00b203b4:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,param_3);
  }
  if (param_3 == 0) {
    puVar1 = &DAT_00000001;
    iVar3 = 0;
  }
  else {
    uVar4 = 1;
    puVar1 = (undefined1 *)FUN_01298504(param_3,1);
    if (puVar1 == (undefined1 *)0x0) goto LAB_00b203b4;
    puVar2 = puVar1;
    iVar3 = param_3;
    do {
      bVar5 = iVar3 == 0;
      if (!bVar5) {
        *puVar2 = *param_2;
        iVar3 = iVar3 + -1;
        bVar5 = iVar3 == 0;
        puVar2 = puVar2 + 1;
        param_2 = param_2 + 1;
      }
    } while (!bVar5);
    iVar3 = param_3;
  }
  *param_1 = iVar3;
  param_1[1] = (int)puVar1;
  param_1[2] = param_3;
  return;
}

