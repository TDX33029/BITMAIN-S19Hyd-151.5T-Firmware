// FUN_00666f3c @ 00666f3c size=220 calls_out=1 calls_in=1
// strings: 

void FUN_00666f3c(uint *param_1,uint *param_2,byte param_3)

{
  char cVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar5 = *param_2;
  if (param_3 < 100) {
    uVar3 = uVar5;
  }
  else {
    if (0x12 < uVar5) {
      puVar2 = &DAT_01c03fb0;
      goto LAB_00666fec;
    }
    uVar3 = uVar5 + 1;
    *param_2 = uVar3;
    *(byte *)((int)param_2 + uVar5 + 4) =
         (byte)((uint)((short)(ushort)param_3 * 0x29) >> 0xc) | 0x30;
  }
  if (0x12 < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,0x13,&DAT_01c03fc0);
  }
  *param_2 = uVar3 + 1;
  uVar5 = (uint)((short)(ushort)param_3 * 0xcd) >> 0xb;
  uVar4 = (short)uVar5 * 0x1a;
  cVar1 = (char)uVar5;
  *(byte *)((int)param_2 + uVar3 + 4) =
       cVar1 + ((byte)(uVar4 >> 8) | (byte)((uVar4 >> 8) << 2)) * -2 | 0x30;
  if (uVar3 != 0x12) {
    *(byte *)((int)param_2 + uVar3 + 5) = param_3 + cVar1 * -10 | 0x30;
    *param_2 = uVar3 + 2;
    uVar5 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    uVar6 = param_2[4];
    uVar7 = param_2[5];
    *param_1 = *param_2;
    param_1[1] = uVar5;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar6;
    param_1[5] = uVar7;
    return;
  }
  puVar2 = &DAT_01c03fd0;
  uVar5 = 0x13;
LAB_00666fec:
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar5,0x13,puVar2);
}

