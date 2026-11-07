// FUN_01b813f8 @ 01b813f8 size=212 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b813f8(uint *param_1,uint *param_2,ushort *param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar1 = *param_3;
  uVar4 = (uint)uVar1 + param_2[1];
  param_2[1] = uVar4;
  *param_1 = *(uint *)(&DAT_00561bb4 + (uint)uVar1 * 4) & *param_2 >> (-uVar4 & 0x1f);
  if (uVar4 < 0x21) {
    uVar2 = param_2[2];
    if (uVar2 < param_2[4]) {
      uVar5 = param_2[3];
      if (uVar2 != uVar5) {
        uVar3 = uVar4 >> 3;
        if (uVar2 - (uVar4 >> 3) < uVar5) {
          uVar3 = uVar2 - uVar5;
        }
        param_2[2] = uVar2 - uVar3;
        param_2[1] = uVar4 + uVar3 * -8;
        *param_2 = *(uint *)(uVar2 - uVar3);
      }
    }
    else {
      FUN_01b813c4(param_2);
    }
  }
  else {
    param_2[2] = (uint)&DAT_00561bb0;
  }
  param_1[1] = (uint)(param_3 + 2);
  return 0;
}

