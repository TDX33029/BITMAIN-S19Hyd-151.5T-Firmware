// FUN_00a61cd0 @ 00a61cd0 size=168 calls_out=2 calls_in=1
// strings: 

void FUN_00a61cd0(uint *param_1,int *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  bool bVar8;
  
  iVar5 = *param_2;
  iVar6 = param_2[1];
  uVar4 = iVar6 - iVar5;
  bVar8 = 0x1ffffffe < uVar4;
  bVar7 = uVar4 == 0x1fffffff;
  uVar1 = uVar4 * 8;
  if (uVar4 < 0x20000000) {
    bVar8 = 0x7ffffffb < uVar1;
    bVar7 = uVar1 == 0x7ffffffc;
  }
  if (bVar8 && !bVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    piVar2 = (int *)&DAT_00000004;
    uVar4 = 0;
  }
  else {
    piVar2 = (int *)thunk_FUN_016d4a50(uVar1);
    if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1);
    }
  }
  if (iVar6 != iVar5) {
    iVar3 = param_2[3];
    *piVar2 = param_2[2];
    piVar2[1] = iVar3;
  }
  *param_1 = uVar4;
  param_1[1] = (uint)piVar2;
  param_1[2] = (uint)(iVar6 != iVar5);
  return;
}

