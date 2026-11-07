// FUN_00bd2884 @ 00bd2884 size=392 calls_out=3 calls_in=3
// strings: 

void FUN_00bd2884(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  
  if (*param_2 == 2) {
    *param_1 = 2;
    return;
  }
  uVar4 = param_2[0x35];
  bVar6 = 0x3ffffffe < uVar4;
  bVar5 = uVar4 == 0x3fffffff;
  uVar1 = uVar4 * 4;
  if (uVar4 < 0x40000000) {
    bVar6 = 0x7ffffffb < uVar1;
    bVar5 = uVar1 == 0x7ffffffc;
  }
  if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  iVar3 = param_2[0x34];
  if (uVar1 == 0) {
    iVar2 = 4;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar1);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  FUN_016dd1aa(iVar2,iVar3,uVar1);
                    /* WARNING: Could not recover jumptable at 0x00bd2a08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00bd2a0c + *(int *)(&LAB_00bd2a0c + param_2[0x18] * 4)))();
  return;
}

