// FUN_00faaf34 @ 00faaf34 size=212 calls_out=1 calls_in=5
// strings: 

void FUN_00faaf34(uint *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint local_14;
  
  local_14 = *param_1;
  if ((*(byte *)((int)param_2 + 0xb) & 0x18) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00faaf78. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0x10))(*param_2,local_14);
    return;
  }
  uVar1 = (undefined1)local_14;
  if (local_14 < 0x80) {
    local_14 = local_14 & 0xff;
    uVar5 = 1;
  }
  else {
    uVar2 = (undefined1)(local_14 >> 6);
    if (local_14 < 0x800) {
      local_14 = (CONCAT11(uVar1,uVar2) & 0x3fff | 0x8000) | 0xc0;
      uVar5 = 2;
    }
    else {
      uVar3 = (undefined1)(local_14 >> 0xc);
      if (local_14 >> 0x10 == 0) {
        uVar5 = 3;
        local_14 = (CONCAT21(CONCAT11(uVar1,uVar2),uVar3) & 0xff3fff | 0x8000) & 0x3fffff | 0x8000e0
        ;
      }
      else {
        uVar5 = 4;
        local_14._0_3_ = (uint3)(byte)((byte)(local_14 >> 0x12) | 0xf0);
        uVar4 = CONCAT13(uVar1,(uint3)local_14) & 0x3fffffff;
        local_14._0_2_ = (undefined2)uVar4;
        uVar4 = CONCAT13((char)(uVar4 >> 0x18),CONCAT12(uVar2,(undefined2)local_14)) & 0xff3fffff;
        local_14._0_1_ = (undefined1)uVar4;
        local_14 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(uVar3,(undefined1)local_14)) &
                   0xffff3fff | 0x80808000;
      }
    }
  }
  FUN_00faace8(param_2,&local_14,uVar5);
  return;
}

