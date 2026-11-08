// FUN_007451fc @ 007451fc size=72 calls_out=1 calls_in=3
// strings: 

void FUN_007451fc(int *param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r2;
  int iVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  int local_c;
  
  iVar4 = *param_1;
  if (param_2 != iVar4) {
    *(undefined4 *)(param_2 + 8) = 0;
    *(int *)(param_2 + 0xc) = iVar4;
    if (iVar4 != 0) {
      *(int *)(iVar4 + 8) = param_2;
    }
    *param_1 = param_2;
    if (param_1[1] == 0) {
      param_1[1] = param_2;
    }
    return;
  }
  local_c = param_2;
  uVar6 = FUN_007451b8(param_1,&local_c);
  puVar1 = (uint *)uVar6;
  iVar4 = extraout_r2 * 4;
  uVar5 = 0;
  if ((0x3fffffff < extraout_r2) || (iVar4 < 0)) {
LAB_00745290:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar5,iVar4);
  }
  if (iVar4 == 0) {
    uVar3 = 0;
    uVar2 = 1;
  }
  else {
    uVar5 = 1;
    uVar2 = FUN_01298504(iVar4,1);
    uVar3 = extraout_r2;
    if (uVar2 == 0) goto LAB_00745290;
  }
  *puVar1 = uVar3;
  puVar1[1] = uVar2;
  FUN_01bed4e2(uVar2,(int)((ulonglong)uVar6 >> 0x20),iVar4);
  puVar1[2] = extraout_r2;
  return;
}

