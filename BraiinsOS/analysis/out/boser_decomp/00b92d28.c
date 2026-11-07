// FUN_00b92d28 @ 00b92d28 size=220 calls_out=4 calls_in=1
// strings: 

void FUN_00b92d28(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 local_30;
  int local_2c;
  undefined4 uStack_28;
  int local_24;
  
  iVar5 = 0;
  if (param_2[3] == param_2[1]) {
    iVar2 = 4;
    iVar3 = 0;
  }
  else {
    uVar7 = param_2[3] - param_2[1];
    uVar1 = uVar7 >> 1;
    iVar2 = FUN_01298504(uVar1,4);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,uVar1);
    }
    iVar3 = (uVar7 >> 3) * -0x55555555;
  }
  local_30 = *param_2;
  iVar4 = param_2[1];
  uStack_28 = param_2[2];
  iVar8 = param_2[3];
  local_2c = iVar4;
  local_24 = iVar8;
  if (iVar4 != iVar8) {
    iVar5 = 0;
    iVar6 = iVar2;
    do {
      FUN_01bed864(iVar6,iVar4 + 8,0xc);
      iVar4 = iVar4 + 0x18;
      iVar6 = iVar6 + 0xc;
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar8);
    local_2c = iVar4;
  }
  FUN_00b8cc8c(&local_30);
  *param_1 = iVar3;
  param_1[1] = iVar2;
  param_1[2] = iVar5;
  return;
}

