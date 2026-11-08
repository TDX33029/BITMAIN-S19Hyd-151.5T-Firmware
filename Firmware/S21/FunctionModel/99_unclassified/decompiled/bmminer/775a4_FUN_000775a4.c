// FUN_000775a4 @ 000775a4  size=144  callers=0
// program: bmminer


undefined4 FUN_000775a4(undefined4 *param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  uVar2 = DAT_00945378;
  uVar1 = DAT_00945374;
  uVar3 = DAT_00945370;
  if ((*param_2 < 0x20) || (param_1 == (undefined4 *)0x0)) {
    uVar3 = 0;
  }
  else {
    *param_1 = DAT_0094536c;
    param_1[1] = uVar3;
    param_1[2] = uVar1;
    param_1[3] = uVar2;
    uVar2 = DAT_00945388;
    uVar1 = DAT_00945384;
    uVar3 = DAT_00945380;
    param_1[4] = DAT_0094537c;
    param_1[5] = uVar3;
    param_1[6] = uVar1;
    param_1[7] = uVar2;
    *param_2 = 0x20;
    uVar3 = 1;
  }
  return uVar3;
}

