// FUN_007b4118 @ 007b4118 size=204 calls_out=4 calls_in=0
// strings: 

void FUN_007b4118(int *param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int local_30;
  int local_2c;
  int local_28;
  
  iVar2 = FUN_01298504(0x70,4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x70);
  }
  local_30 = 0xe;
  local_28 = 0;
  local_2c = iVar2;
  for (iVar5 = 0; iVar5 != 0x10; iVar5 = iVar5 + 8) {
    uVar4 = *(undefined4 *)((int)&DAT_01c09ff8 + iVar5);
    uVar3 = *(uint *)((int)&DAT_01c09ffc + iVar5);
    if ((uint)(local_30 - local_28) < uVar3) {
      FUN_0132b898(&local_30,local_28,uVar3,4,8);
      iVar2 = local_2c;
    }
    iVar1 = local_28;
    FUN_01bed4e2(iVar2 + local_28 * 8,uVar4,uVar3 << 3);
    local_28 = iVar1 + uVar3;
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

