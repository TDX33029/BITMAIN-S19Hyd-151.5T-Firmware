// FUN_01a4d704 @ 01a4d704 size=240 calls_out=5 calls_in=1
// strings: 

void FUN_01a4d704(undefined4 *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5,
                 undefined4 param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined1 auStack_70 [76];
  
  if (param_3 <= param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0056b1c8,0x20,&DAT_01d2c164);
  }
  iVar5 = param_4 + 1;
  iVar2 = 0;
  iVar3 = iVar5 * 0x48;
  if (iVar3 == 0) {
    iVar1 = 4;
    iVar6 = 0;
  }
  else {
    iVar1 = FUN_01298504(iVar3,4);
    iVar6 = iVar5;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,iVar3);
    }
  }
  iVar4 = iVar1;
  do {
    if (iVar3 == 0) break;
    FUN_01a60910(auStack_70,param_2);
    FUN_01bed4e2(iVar4,auStack_70,0x48);
    iVar2 = iVar2 + 1;
    iVar4 = iVar4 + 0x48;
    iVar3 = iVar3 + -0x48;
    param_2 = param_2 + 0x48;
  } while (iVar6 != iVar2);
  param_1[1] = iVar6;
  param_1[2] = iVar1;
  param_1[3] = iVar5;
  param_1[4] = param_5;
  param_1[5] = param_6;
  *param_1 = 0x80000000;
  return;
}

