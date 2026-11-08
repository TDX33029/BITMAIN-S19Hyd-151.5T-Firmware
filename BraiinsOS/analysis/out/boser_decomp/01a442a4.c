// FUN_01a442a4 @ 01a442a4 size=224 calls_out=1 calls_in=0
// strings: 

void FUN_01a442a4(undefined4 *param_1,undefined4 *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  undefined4 local_30;
  short local_2c;
  short local_2a;
  undefined1 *local_28;
  code *local_24;
  short *local_20;
  code *local_1c;
  short *local_18;
  code *local_14;
  
  local_28 = (undefined1 *)&local_30;
  if (*(short *)*param_1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x01a44380. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,"Z",1);
    return;
  }
  uVar1 = ((short *)*param_1)[1];
  local_30 = 0x2b;
  uVar2 = (int)(short)uVar1 >> 0xf;
  if ((short)uVar1 < 0) {
    local_30 = 0x2d;
  }
  iVar3 = (uVar1 ^ uVar2) - uVar2;
  local_2a = (short)iVar3;
  local_14 = FUN_012fcd24;
  local_1c = FUN_012fcd24;
  local_24 = FUN_012fbb84;
  uVar2 = iVar3 + ((uint)(local_2a * -0x7777) >> 0x10);
  local_2c = ((short)uVar2 >> 5) + (short)((uVar2 & 0xffff) >> 0xf);
  local_2a = local_2a + local_2c * -0x3c;
  local_18 = &local_2a;
  local_20 = &local_2c;
  FUN_012fa178(*param_2,param_2[1],&DAT_0052cfeb,&local_28);
  return;
}

