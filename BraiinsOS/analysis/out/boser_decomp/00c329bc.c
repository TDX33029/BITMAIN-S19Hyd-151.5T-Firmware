// FUN_00c329bc @ 00c329bc size=228 calls_out=3 calls_in=0
// strings: 

void FUN_00c329bc(int *param_1,int *param_2)

{
  uint uVar1;
  uint local_28;
  uint local_24;
  uint *local_20;
  undefined1 *local_1c;
  uint *local_18;
  undefined1 *local_14;
  
  uVar1 = param_2[2];
  if ((uint)(*param_1 - param_1[2]) < uVar1) {
    FUN_0132b898(param_1,param_1[2],uVar1,1,1);
    uVar1 = param_2[2];
  }
  while( true ) {
    if (uVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00c32a40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],0);
      return;
    }
    FUN_01ac6cbc(param_1,param_2[1],uVar1);
    local_24 = param_2[2];
    local_28 = uVar1;
    if (local_24 < uVar1) break;
    param_2[1] = param_2[1] + uVar1;
    param_2[2] = local_24 - uVar1;
    uVar1 = local_24 - uVar1;
  }
  local_18 = &local_24;
  local_20 = &local_28;
  local_14 = &LAB_01a6a304;
  local_1c = &LAB_01a6a304;
                    /* WARNING: Subroutine does not return */
  FUN_012fb100(&DAT_005ac267,&local_20,&DAT_01d2e534);
}

