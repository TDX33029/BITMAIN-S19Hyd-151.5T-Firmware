// FUN_010f319c @ 010f319c size=276 calls_out=5 calls_in=2
// strings: 

void FUN_010f319c(undefined4 *param_1,byte *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  undefined1 auStack_38 [12];
  int local_2c;
  ushort *local_28;
  undefined4 local_24;
  int *local_20;
  code *local_1c;
  
  bVar1 = *param_2;
  uVar3 = (uint)param_2[1];
  if (uVar3 == 0) {
    if (0xb4 < (byte)(bVar1 + 0x37)) goto LAB_010f3204;
  }
  else if (0xb2 < (byte)(bVar1 + 0x36)) {
LAB_010f3204:
    local_28 = (ushort *)FUN_016d38c8(2,1);
    if (local_28 == (ushort *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,2);
    }
    *local_28 = (ushort)bVar1 | (ushort)((param_2[2] & 0x7f | uVar3 << 7) << 8);
    local_20 = &local_2c;
    local_24 = 2;
    local_2c = 2;
    local_1c = FUN_010f63a4;
    FUN_00600d2c(auStack_38,&DAT_00388ed5,&local_20);
    if (local_2c != 0) {
      thunk_FUN_016d3fb4(local_28);
    }
    uVar2 = FUN_010f66dc(auStack_38);
    param_1[1] = uVar2;
    *param_1 = 1;
    return;
  }
  fVar4 = (float)VectorUnsignedToFloat(uVar3,(byte)(in_fpscr >> 0x16) & 3);
  fVar5 = (float)VectorSignedToFloat((int)(char)bVar1,(byte)(in_fpscr >> 0x16) & 3);
  param_1[1] = fVar5 + fVar4 * 0.5;
  *param_1 = 0;
  return;
}

