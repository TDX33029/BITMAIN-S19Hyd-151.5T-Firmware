// FUN_01a718a8 @ 01a718a8 size=236 calls_out=2 calls_in=0
// strings: compression

void FUN_01a718a8(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *local_20;
  uint *local_1c;
  
  iVar1 = 2;
  if ((uint)(*param_1 < 4) <= -param_1[1]) {
    iVar1 = *param_1 - 4;
  }
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x01a7195c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,"ReadHeader",10);
    return;
  }
  if (iVar1 == 1) {
    local_20 = param_1 + 2;
    FUN_01303d90(param_2,&DAT_00570920,8,"compression",0xb,param_1 + 3,&LAB_01a71c98,"len",3,
                 &local_20,&LAB_006616e8);
  }
  else {
    local_1c = param_1;
    FUN_013032f4(param_2,&DAT_005333ba,5,&local_1c,FUN_01a7ea30);
  }
  return;
}

