// FUN_01aa40b4 @ 01aa40b4 size=380 calls_out=6 calls_in=2
// strings: 

void FUN_01aa40b4(int *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uStack_54;
  uint uStack_50;
  uint local_4c;
  uint local_48;
  int iStack_44;
  uint uStack_40;
  int iStack_3c;
  int local_38;
  int local_34;
  uint local_30;
  int iStack_2c;
  uint local_28;
  uint local_24;
  
  if (param_3 != 0) {
    uStack_54 = param_2;
    uStack_50 = param_3;
    if (param_1[2] == 0) {
      FUN_01aa3d34(&local_38,&uStack_54,param_3);
      FUN_0128341c(&local_4c,&local_38);
      if (local_4c == 0) {
        FUN_012840cc(param_1);
        *param_1 = local_48;
        param_1[1] = iStack_44;
        param_1[2] = uStack_40;
        param_1[3] = iStack_3c;
      }
      else {
        local_38 = local_48;
        local_34 = iStack_44;
        local_30 = uStack_40;
        iStack_2c = iStack_3c;
        iVar2 = param_1[1];
        local_24 = -iVar2;
        if (local_24 < uStack_40) {
          FUN_01283c9c(param_1,uStack_40);
          iVar2 = param_1[1];
          local_24 = param_1[2] - iVar2;
        }
        FUN_01bed4e2(*param_1 + iVar2,iStack_44,uStack_40);
        if (local_24 < uStack_40) {
          local_28 = uStack_40;
                    /* WARNING: Subroutine does not return */
          FUN_01284540(&local_28);
        }
        param_1[1] = iVar2 + uStack_40;
        (**(code **)(local_38 + 0x10))(&iStack_2c,local_34,local_30);
      }
    }
    else {
      iVar2 = param_1[1];
      uVar1 = param_1[2] - iVar2;
      if (uVar1 < param_3) {
        FUN_01283c9c(param_1,param_3);
        iVar2 = param_1[1];
        uVar1 = param_1[2] - iVar2;
      }
      if (uVar1 < param_3) {
        FUN_01283c9c(param_1,param_3);
        iVar2 = param_1[1];
        uVar1 = param_1[2] - iVar2;
      }
      FUN_01bed4e2(*param_1 + iVar2,param_2,param_3);
      if (uVar1 < param_3) {
        local_4c = param_3;
        local_48 = uVar1;
                    /* WARNING: Subroutine does not return */
        FUN_01284540(&local_4c);
      }
      param_1[1] = iVar2 + param_3;
    }
  }
  return;
}

