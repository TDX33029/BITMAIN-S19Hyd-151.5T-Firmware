// FUN_00f1eff8 @ 00f1eff8 size=252 calls_out=2 calls_in=0
// strings: 

void FUN_00f1eff8(uint *param_1,undefined4 *param_2,uint param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  uint local_48;
  undefined4 *local_44;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  iVar4 = param_3 * 0x14;
  if (0x6666666 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar4);
  }
  if (iVar4 == 0) {
    local_44 = (undefined4 *)&DAT_00000004;
    local_48 = 0;
  }
  else {
    local_44 = (undefined4 *)thunk_FUN_016d4a50(iVar4);
    if (local_44 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar4);
    }
    local_48 = param_3;
    if (param_3 != 0) {
      uVar3 = 0;
      puVar2 = local_44;
      do {
        if (iVar4 == 0) break;
        uVar1 = param_2[4];
        (**(code **)*param_2)(&local_38,param_2 + 3,param_2[1],param_2[2]);
        uVar3 = uVar3 + 1;
        iVar4 = iVar4 + -0x14;
        param_2 = param_2 + 5;
        *puVar2 = local_38;
        puVar2[1] = uStack_34;
        puVar2[2] = uStack_30;
        puVar2[3] = uStack_2c;
        puVar2[4] = uVar1;
        puVar2 = puVar2 + 5;
        local_28 = uVar1;
      } while (param_3 != uVar3);
    }
  }
  *param_1 = local_48;
  param_1[1] = (uint)local_44;
  param_1[2] = param_3;
  return;
}

