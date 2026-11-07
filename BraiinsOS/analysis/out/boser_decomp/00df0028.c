// FUN_00df0028 @ 00df0028 size=208 calls_out=3 calls_in=4
// strings: 

void FUN_00df0028(uint *param_1,int param_2,int param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint local_40;
  undefined4 *local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_3 - param_2 == 0) {
    uVar3 = 0;
    local_3c = (undefined4 *)&SUB_00000004;
    local_40 = 0;
  }
  else {
    local_40 = (uint)(param_3 - param_2) / 0x30;
    local_3c = (undefined4 *)FUN_01298504(local_40 * 0xc,4);
    if (local_3c == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,local_40 * 0xc);
    }
    puVar1 = (undefined4 *)(param_2 + 0x28);
    uVar3 = 0;
    puVar2 = local_3c;
    do {
      FUN_006666fc(&local_30,puVar1[-1],*puVar1);
      uVar3 = uVar3 + 1;
      puVar1 = puVar1 + 0xc;
      *puVar2 = local_30;
      puVar2[1] = uStack_2c;
      puVar2[2] = uStack_28;
      puVar2 = puVar2 + 3;
    } while (local_40 != uVar3);
  }
  *param_1 = local_40;
  param_1[1] = (uint)local_3c;
  param_1[2] = uVar3;
  return;
}

