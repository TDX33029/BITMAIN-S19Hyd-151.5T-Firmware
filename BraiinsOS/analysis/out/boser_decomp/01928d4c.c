// FUN_01928d4c @ 01928d4c size=96 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01928d4c(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint unaff_r6;
  ushort *puVar3;
  ushort *puVar4;
  
  puVar4 = (ushort *)*param_1;
  puVar3 = (ushort *)param_1[1];
  do {
    if (puVar4 == puVar3) {
      uVar2 = 0xe;
      break;
    }
    uVar2 = (uint)*puVar4;
    unaff_r6 = (uint)puVar4[1];
    puVar4 = puVar4 + 2;
    *param_1 = puVar4;
    uVar1 = FUN_01908aec(uVar2,unaff_r6);
  } while (((uVar1 & 0xfc) == 0) || ((uVar1 & 0xffff) >> 8 < 3));
  return CONCAT44(unaff_r6,uVar2);
}

