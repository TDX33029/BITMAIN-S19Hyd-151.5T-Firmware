// FUN_013f51d0 @ 013f51d0 size=216 calls_out=6 calls_in=5
// strings: 

void FUN_013f51d0(int *param_1,int param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  bool bVar5;
  bool bVar6;
  
  if ((param_3 ^ param_3 - 1) <= param_3 - 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00475d24,0x2a,&DAT_01cf3560);
  }
  uVar1 = param_3 * 4;
  bVar6 = 0x3ffffffe < param_3;
  bVar5 = param_3 == 0x3fffffff;
  uVar4 = 0;
  if (param_3 < 0x40000000) {
    bVar6 = 0x7ffffffb < uVar1;
    bVar5 = uVar1 == 0x7ffffffc;
  }
  if (bVar6 && !bVar5) {
LAB_013f5204:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,uVar1);
  }
  if (uVar1 == 0) {
    iVar2 = 4;
  }
  else {
    uVar4 = 4;
    iVar2 = FUN_01298504(uVar1,4);
    if (iVar2 == 0) goto LAB_013f5204;
  }
  FUN_01bed93e(iVar2,0,uVar1);
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x10);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x10);
  }
  puVar3[3] = 0;
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = 0;
  *param_1 = iVar2;
  param_1[1] = param_3;
  param_1[2] = (int)puVar3;
  param_1[3] = 0;
  param_1[4] = param_2;
  param_1[5] = 0;
  return;
}

