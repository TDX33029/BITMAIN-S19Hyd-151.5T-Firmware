// FUN_00c362b8 @ 00c362b8 size=196 calls_out=3 calls_in=1
// strings: 

void FUN_00c362b8(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint local_30;
  uint local_2c;
  
  uVar6 = param_3 & 0x7ffffffc;
  uVar1 = param_3 >> 2;
  if (uVar6 == 0) {
    local_2c = 4;
    local_30 = 0;
    if (param_3 == 0) goto LAB_00c3634c;
  }
  else {
    local_2c = FUN_016d38c8(uVar6,1);
    if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar6);
    }
    local_30 = uVar1;
  }
  uVar6 = 0;
  uVar4 = 0;
  do {
    uVar2 = uVar4 >> 2;
    if (uVar1 <= uVar4 >> 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar2,uVar1,&DAT_0187318c);
    }
    pbVar3 = (byte *)(param_2 + uVar4);
    uVar5 = uVar6 & 0x18;
    uVar4 = uVar4 + 1;
    uVar6 = uVar6 + 8;
    *(uint *)(local_2c + uVar2 * 4) = *(uint *)(local_2c + uVar2 * 4) | (uint)*pbVar3 << uVar5;
  } while (param_3 != uVar4);
LAB_00c3634c:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = uVar1;
  return;
}

