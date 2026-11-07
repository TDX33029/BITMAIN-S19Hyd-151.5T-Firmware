// FUN_007a922c @ 007a922c size=320 calls_out=4 calls_in=2
// strings: 

void FUN_007a922c(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int local_1078;
  int iStack_1074;
  int local_1070;
  undefined4 local_1068;
  int local_1064;
  undefined4 local_1060;
  undefined4 local_105c;
  uint local_28;
  undefined4 uStack_24;
  
  FUN_01bed4e2(&local_1078,param_2,0x1050);
  *param_2 = 2;
  param_2[1] = 0;
  if (local_1078 != 3 || iStack_1074 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_003e1229,0xf7,&DAT_01c09710);
  }
  if (local_1070 == 0) {
    uVar1 = local_1060;
    iVar2 = local_1064;
    uVar3 = local_1068;
    uVar4 = local_105c;
  }
  else {
    iVar2 = param_2[3];
    uVar3 = param_2[2];
    uVar1 = param_2[4];
    uVar4 = param_2[5];
    (**(code **)(iVar2 + 0x18))(&local_28,uVar3);
    if ((local_28 & 0xff) != 4) {
      FUN_017ce5f0(uVar3,iVar2);
      *param_1 = 0x80000001;
      param_1[1] = local_28;
      param_1[2] = uStack_24;
      if (local_1078 == 3 && iStack_1074 == 0) {
        return;
      }
      FUN_007a93e4(&local_1078);
      return;
    }
  }
  FUN_007a93e4(param_2);
  *param_2 = 3;
  param_2[1] = 0;
  param_2[2] = 0;
  param_2[4] = uVar3;
  param_2[5] = iVar2;
  param_2[6] = uVar1;
  param_2[7] = uVar4;
  if (local_1078 != 3 || iStack_1074 != 0) {
    FUN_007a93e4(&local_1078);
  }
  *param_1 = 0x80000007;
  return;
}

