// FUN_012a4490 @ 012a4490 size=196 calls_out=3 calls_in=1
// strings: 

void FUN_012a4490(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 local_1b;
  undefined2 local_1a;
  
  uVar3 = param_2 & 0xff;
  if (uVar3 < 10) {
    uVar2 = 2;
  }
  else {
    uVar4 = 1;
    uVar1 = (uint)((short)uVar3 * 0x29) >> 0xc;
    uVar2 = 0;
    local_1a = *(undefined2 *)(&DAT_00534998 + (param_2 + uVar1 * -100 & 0xff) * 2);
    param_2 = uVar1;
    if (uVar3 < 100) goto LAB_012a4508;
  }
  (&local_1b)[uVar2] = (&DAT_00534999)[(param_2 & 0x7f) * 2];
  uVar4 = uVar2;
LAB_012a4508:
  uVar2 = uVar4 ^ 3;
  uVar3 = FUN_01298504(uVar2,1);
  if (uVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar2);
  }
  FUN_01bed4e2(uVar3,&local_1b + uVar4,uVar2);
  *param_1 = uVar2;
  param_1[1] = uVar3;
  param_1[2] = uVar2;
  return;
}

