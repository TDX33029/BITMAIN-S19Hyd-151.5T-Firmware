// FUN_018a8174 @ 018a8174 size=232 calls_out=3 calls_in=3
// strings: 

void FUN_018a8174(uint *param_1,int param_2,uint param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint local_40;
  undefined4 *local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = 0;
  iVar3 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
LAB_018a819c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar4,iVar3);
  }
  if (iVar3 == 0) {
    local_3c = (undefined4 *)&SUB_00000004;
    local_40 = 0;
  }
  else {
    uVar4 = 4;
    local_3c = (undefined4 *)FUN_01298504(iVar3,4);
    if (local_3c == (undefined4 *)0x0) goto LAB_018a819c;
    local_40 = param_3;
    if (param_3 != 0) {
      uVar2 = 0;
      puVar1 = local_3c;
      do {
        if (iVar3 == 0) break;
        FUN_015e8ad4(&local_30,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
        uVar2 = uVar2 + 1;
        iVar3 = iVar3 + -0xc;
        param_2 = param_2 + 0xc;
        *puVar1 = local_30;
        puVar1[1] = uStack_2c;
        puVar1[2] = uStack_28;
        puVar1 = puVar1 + 3;
      } while (param_3 != uVar2);
    }
  }
  *param_1 = local_40;
  param_1[1] = (uint)local_3c;
  param_1[2] = param_3;
  return;
}

