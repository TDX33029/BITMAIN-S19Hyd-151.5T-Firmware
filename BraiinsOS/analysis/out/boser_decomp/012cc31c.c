// FUN_012cc31c @ 012cc31c size=328 calls_out=5 calls_in=2
// strings: 

void FUN_012cc31c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 int *param_5)

{
  undefined1 uVar1;
  int iVar2;
  uint extraout_r1;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  iVar5 = param_5[1];
  if (iVar5 == 0x7fffffff) {
    param_1[1] = 0;
    uVar1 = 4;
  }
  else {
    iVar2 = param_5[2];
    if (iVar2 == iVar5) {
      FUN_01283c9c(param_5,0x40);
      iVar5 = param_5[1];
      iVar2 = param_5[2];
    }
    uVar4 = iVar2 - iVar5;
    local_38 = 0;
    uVar3 = *param_5 + iVar5;
    local_3c = 0;
    local_44 = uVar3;
    local_40 = uVar4;
    local_34 = uVar3;
    FUN_019dccfc(&local_30,param_2,param_3,param_4,&local_44);
    if ((local_30 & 0xff) == 4) {
LAB_012cc3ec:
      if (local_40 < local_3c) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_3c,local_40,&DAT_01d2e4e0);
      }
      local_28 = local_44;
      if (uVar3 == local_44) {
        local_44 = local_3c;
        if (local_3c <= uVar4) {
          param_1[1] = local_3c;
          *(undefined1 *)param_1 = 4;
          param_5[1] = iVar5 + local_3c;
          return;
        }
      }
      else {
        FUN_012ccc10(&local_34,&local_28);
        local_44 = extraout_r1;
      }
      local_40 = uVar4;
                    /* WARNING: Subroutine does not return */
      FUN_01284540(&local_44);
    }
    if ((local_30 & 0xff) != 5) {
      if ((local_30 & 0xff) != 4) {
        *param_1 = local_30;
        param_1[1] = local_2c;
        return;
      }
      if ((local_30 & 0x100) == 0) goto LAB_012cc3ec;
    }
    uVar1 = 5;
  }
  *(undefined1 *)param_1 = uVar1;
  return;
}

